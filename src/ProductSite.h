/* 
 * File:   ProductSite.h
 * Author: batista
 *
 * Created on 5 de Julho de 2013, 10:14
 */

#ifndef PRODUCTSITE_H
#define	PRODUCTSITE_H
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class ProductSite {
public:
    ProductSite();
    virtual ~ProductSite();
    //
    
    //

    //
private:
    ProductSite * prodsite;
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;
    
private:
     
};

/*
 CREATE TABLE itemsite
(
  itemsite_id integer NOT NULL DEFAULT nextval(('itemsite_itemsite_id_seq'::text)::regclass),
  itemsite_item_id integer NOT NULL,
  itemsite_warehous_id integer,
  itemsite_qtyonhand numeric(18,6) NOT NULL,
  itemsite_reorderlevel numeric(18,6) NOT NULL,
  itemsite_ordertoqty numeric(18,6) NOT NULL,
  itemsite_cyclecountfreq integer NOT NULL,
  itemsite_datelastcount date,
  itemsite_datelastused date,
  itemsite_loccntrl boolean NOT NULL,
  itemsite_safetystock numeric(18,6) NOT NULL,
  itemsite_minordqty numeric(18,6) NOT NULL,
  itemsite_multordqty numeric(18,6) NOT NULL,
  itemsite_leadtime integer NOT NULL,
  itemsite_abcclass character(1),
  itemsite_issuemethod character(1),
  itemsite_controlmethod character(1),
  itemsite_active boolean NOT NULL,
  itemsite_plancode_id integer NOT NULL,
  itemsite_costcat_id integer NOT NULL,
  itemsite_eventfence integer NOT NULL,
  itemsite_sold boolean NOT NULL,
  itemsite_stocked boolean NOT NULL,
  itemsite_freeze boolean NOT NULL DEFAULT false,
  itemsite_location_id integer NOT NULL,
  itemsite_useparams boolean NOT NULL,
  itemsite_useparamsmanual boolean NOT NULL,
  itemsite_soldranking integer DEFAULT 1,
  itemsite_createpr boolean,
  itemsite_location text,
  itemsite_location_comments text,
  itemsite_notes text,
  itemsite_perishable boolean NOT NULL,
  itemsite_nnqoh numeric(18,6) NOT NULL DEFAULT 0,
  itemsite_autoabcclass boolean NOT NULL,
  itemsite_ordergroup integer NOT NULL DEFAULT 1,
  itemsite_disallowblankwip boolean NOT NULL DEFAULT false,
  itemsite_maxordqty numeric(18,6) NOT NULL DEFAULT 0.0,
  itemsite_mps_timefence integer NOT NULL DEFAULT 0,
  itemsite_createwo boolean NOT NULL DEFAULT false,
  itemsite_warrpurc boolean NOT NULL DEFAULT false,
  itemsite_autoreg boolean DEFAULT false,
  itemsite_costmethod character(1) NOT NULL,
  itemsite_value numeric(12,2) NOT NULL,
  itemsite_ordergroup_first boolean NOT NULL DEFAULT false,
  itemsite_supply_itemsite_id integer,
  itemsite_planning_type character(1) NOT NULL DEFAULT 'M'::bpchar,
  itemsite_wosupply boolean NOT NULL DEFAULT false,
  itemsite_posupply boolean NOT NULL DEFAULT false,
  itemsite_lsseq_id integer, -- Foreign key reference for automatic lot/serial numbering
  itemsite_cosdefault character(1),
  itemsite_createsopr boolean DEFAULT false, -- Used to flag Sales items that create P/Rs
  itemsite_createsopo boolean DEFAULT false, -- Used to flag Sales items that create P/Os
  itemsite_dropship boolean DEFAULT false, -- Used to flag Sales items to drop ship
  itemsite_recvlocation_id integer NOT NULL DEFAULT (-1),
  itemsite_issuelocation_id integer NOT NULL DEFAULT (-1),
  itemsite_location_dist boolean NOT NULL DEFAULT false,
  itemsite_recvlocation_dist boolean NOT NULL DEFAULT false,
  itemsite_issuelocation_dist boolean NOT NULL DEFAULT false,
)
 */

#endif	/* PRODUCTSITE_H */

