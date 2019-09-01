#include "lastwindow.h"
#include "ui_lastwindow.h"
#include <QPainter>
#include <QLabel>


LastWindow::LastWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("足迹地图");
    this->setMaximumSize(1242,1084);
    this->setMinimumSize(1242,1084);
    b.setParent(this);
    b.setText("主菜单");
    b.move(1150,10);
    b.resize(50,30);
    connect(&b,&QPushButton::clicked,this,&LastWindow::sendSlot);//发射信号回上一窗口
    connect(&b,&QPushButton::clicked,this,&LastWindow::sendSlotclear);//点击主菜单，清空



}
LastWindow::~LastWindow()
{
    delete ui;
}

void LastWindow::paintEvent(QPaintEvent*){//背景图片
    QPixmap image(":/png/image/lastwindow.jpg");
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),image);

}

void LastWindow::sendSlot(){
    emit mySignal1();
    ui->textBrowser->setText("");
}
void LastWindow::addName(QString str){
    ui->textBrowser->insertPlainText(str);
    ui->textBrowser->insertPlainText(" ");
}

void LastWindow::addlabel_cq(){
    ui->label_cq->setText("重庆 *");
}
void LastWindow::addlabel_bj(){
    ui->label_bj->setText("北京 *");

}
void LastWindow::addlabel_xg(){
    ui->label_xg->setText("香港 *");

}
void LastWindow::addlabel_am(){
    ui->label_am->setText("澳门 *");

}
void LastWindow::addlabel_sh(){
    ui->label_sh->setText("上海 *");

}
void LastWindow::addlabel_tj(){
    ui->label_tj->setText("天津 *");

}
void LastWindow::addlabel_lz(){
    ui->label_lz->setText("兰州 *");

}
void LastWindow::addlabel_by(){
    ui->label_by->setText("白银 *");

}
void LastWindow::addlabel_dh(){
    ui->label_dh->setText("敦煌 *");

}
void LastWindow::addlabel_sjz(){
    ui->label_sjz->setText("石家庄 *");

}
void LastWindow::addlabel_ts(){
    ui->label_ts->setText("唐山 *");

}
void LastWindow::addlabel_zjk(){
    ui->label_zjk->setText("张家口 *");

}
void LastWindow::addlabel_zz(){
    ui->label_zz->setText("郑州 *");

}
void LastWindow::addlabel_kf(){
    ui->label_kf->setText("开封 *");

}
void LastWindow::addlabel_ly(){
    ui->label_ly->setText("洛阳 *");
}
void LastWindow::addlabel_jn(){
    ui->label_jn->setText("济南 *");
}
void LastWindow::addlabel_qd(){
    ui->label_qd->setText("青岛 *");
}
void LastWindow::addlabel_yt(){
    ui->label_yt->setText("烟台 *");
}
void LastWindow::addlabel_rz(){
    ui->label_rz->setText("日照 *");
}
void LastWindow::addlabel_nc(){
    ui->label_nc->setText("南昌 *");
}
void LastWindow::addlabel_jj(){
    ui->label_jj->setText("九江 *");
}
void LastWindow::addlabel_sr(){
    ui->label_sr->setText("上饶 *");
}
void LastWindow::addlabel_gz(){
    ui->label_gz->setText("赣州 *");
}
void LastWindow::addlabel_cd(){
    ui->label_cd->setText("成都 *");
}
void LastWindow::addlabel_my(){
    ui->label_my->setText("绵阳 *");
}
void LastWindow::addlabel_zg(){
    ui->label_zg->setText("自贡 *");
}
void LastWindow::addlabel_luzhou(){
    ui->label_luzhou->setText("泸州 *");
}
void LastWindow::addlabel_nj(){
    ui->label_nj->setText("南京 *");
}
void LastWindow::addlabel_xz(){
    ui->label_xz->setText("徐州 *");
}
void LastWindow::addlabel_yz(){
    ui->label_yz->setText("扬州 *");
}
void LastWindow::addlabel_hz(){
    ui->label_hz->setText("杭州 *");
}
void LastWindow::addlabel_hf(){
    ui->label_hf->setText("合肥 *");
}
void LastWindow::addlabel_heb(){
    ui->label_heb->setText("哈尔滨 *");
}
void LastWindow::addlabel_cc(){
    ui->label_cc->setText("长春 *");
}
void LastWindow::addlabel_bx(){
    ui->label_bx->setText("本溪 *");
}
void LastWindow::addlabel_hhht(){
    ui->label_hhht->setText("呼和浩特 *");
}
void LastWindow::addlabel_wlmq(){
    ui->label_wlmq->setText("乌鲁木齐 *");
}
void LastWindow::addlabel_xm(){
    ui->label_xm->setText("厦门 *");
}
void LastWindow::addlabel_qz(){
    ui->label_qz->setText("泉州 *");
}
void LastWindow::addlabel_fz(){
    ui->label_fz->setText("福州 *");
}
//省
void LastWindow::addgansu(){
    QPixmap *pixmap = new QPixmap(":/png/image/gs.png");
    ui->gs->setPixmap(*pixmap);

}
void LastWindow::addchongqing(){
    QPixmap *pixmap = new QPixmap(":/png/image/cq.png");
    ui->cq->setPixmap(*pixmap);

}
void LastWindow::addbeijing(){
    QPixmap *pixmap = new QPixmap(":/png/image/bj.png");
    ui->bj->setPixmap(*pixmap);

}
void LastWindow::addhebei(){
    QPixmap *pixmap = new QPixmap(":/png/image/hb.png");
    ui->hb->setPixmap(*pixmap);

}
void LastWindow::addhenan(){
    QPixmap *pixmap = new QPixmap(":/png/image/hn.png");
    ui->hn->setPixmap(*pixmap);

}
void LastWindow::addshandong(){
    QPixmap *pixmap = new QPixmap(":/png/image/sd.png");
    ui->sd->setPixmap(*pixmap);
}
void LastWindow::addjiangxi(){
    QPixmap *pixmap = new QPixmap(":/png/image/jx.png");
    ui->jx->setPixmap(*pixmap);
}
void LastWindow::addsichuan(){
    QPixmap *pixmap = new QPixmap(":/png/image/sc.png");
    ui->sc->setPixmap(*pixmap);
}
void LastWindow::addjiangsu(){
    QPixmap *pixmap = new QPixmap(":/png/image/js.png");
    ui->js->setPixmap(*pixmap);
}
void LastWindow::addzhejiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/zj.png");
    ui->zj->setPixmap(*pixmap);
}
void LastWindow::addanhui(){
    QPixmap *pixmap = new QPixmap(":/png/image/ah.png");
    ui->ah->setPixmap(*pixmap);
}
void LastWindow::addheilongjiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/hlj.png");
    ui->hlj->setPixmap(*pixmap);
}
void LastWindow::addjilin(){
    QPixmap *pixmap = new QPixmap(":/png/image/jl.png");
    ui->jl->setPixmap(*pixmap);
}
void LastWindow::addliaoning(){
    QPixmap *pixmap = new QPixmap(":/png/image/ln.png");
    ui->ln->setPixmap(*pixmap);
}
void LastWindow::addneimenggu(){
    QPixmap *pixmap = new QPixmap(":/png/image/nmg.png");
    ui->nmg->setPixmap(*pixmap);
}
void LastWindow::addxinjiang(){
    QPixmap *pixmap = new QPixmap(":/png/image/xj.png");
    ui->xj->setPixmap(*pixmap);
}
void LastWindow::addshanghai(){
    QPixmap *pixmap = new QPixmap(":/png/image/sh.png");
    ui->sh->setPixmap(*pixmap);
}
void LastWindow::addtianjin(){
    QPixmap *pixmap = new QPixmap(":/png/image/tj.png");
    ui->tj->setPixmap(*pixmap);
}
void LastWindow::addfujian(){
    QPixmap *pixmap = new QPixmap(":/png/image/fj.png");
    ui->fj->setPixmap(*pixmap);
}
void LastWindow::sendSlotclear()
{
    ui->label_cq->setText("");
    ui->label_bj->setText("");
    ui->label_xg->setText("");
    ui->label_am->setText("");
    ui->label_sh->setText("");
    ui->label_tj->setText("");
    ui->label_lz->setText("");
    ui->label_by->setText("");
    ui->label_dh->setText("");
    ui->label_sjz->setText("");
    ui->label_ts->setText("");
    ui->label_zjk->setText("");
    ui->label_zz->setText("");
    ui->label_kf->setText("");
    ui->label_ly->setText("");
    ui->label_jn->setText("");
    ui->label_qd->setText("");
    ui->label_yt->setText("");
    ui->label_rz->setText("");
    ui->label_nc->setText("");
    ui->label_jj->setText("");
    ui->label_sr->setText("");
    ui->label_gz->setText("");
    ui->label_cd->setText("");
    ui->label_my->setText("");
    ui->label_zg->setText("");
    ui->label_luzhou->setText("");
    ui->label_nj->setText("");
    ui->label_xz->setText("");
    ui->label_yz->setText("");
    ui->label_hz->setText("");
    ui->label_heb->setText("");
    ui->label_cc->setText("");
    ui->label_bx->setText("");
    ui->label_hhht->setText("");
    ui->label_wlmq->setText("");
    ui->label_xm->setText("");
    ui->label_qz->setText("");
    ui->label_fz->setText("");
    ui->label_hf->setText("");
    ui->gs->clear();
    ui->cq->clear();
    ui->bj->clear();
    ui->hb->clear();
    ui->hn->clear();
    ui->sd->clear();
    ui->jx->clear();
    ui->sc->clear();
    ui->js->clear();
    ui->zj->clear();
    ui->ah->clear();
    ui->hlj->clear();
    ui->jl->clear();
    ui->ln->clear();
    ui->nmg->clear();
    ui->xj->clear();
    ui->sh->clear();
    ui->tj->clear();
    ui->fj->clear();
}
