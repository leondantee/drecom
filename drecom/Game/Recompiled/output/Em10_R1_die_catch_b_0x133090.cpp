#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Em10_R1_die_catch_b
// Address: 0x133090 - 0x1334cc
void Em10_R1_die_catch_b_0x133090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_die_catch_b_0x133090");
#endif

    switch (ctx->pc) {
        case 0x133090u: goto label_133090;
        case 0x133094u: goto label_133094;
        case 0x133098u: goto label_133098;
        case 0x13309cu: goto label_13309c;
        case 0x1330a0u: goto label_1330a0;
        case 0x1330a4u: goto label_1330a4;
        case 0x1330a8u: goto label_1330a8;
        case 0x1330acu: goto label_1330ac;
        case 0x1330b0u: goto label_1330b0;
        case 0x1330b4u: goto label_1330b4;
        case 0x1330b8u: goto label_1330b8;
        case 0x1330bcu: goto label_1330bc;
        case 0x1330c0u: goto label_1330c0;
        case 0x1330c4u: goto label_1330c4;
        case 0x1330c8u: goto label_1330c8;
        case 0x1330ccu: goto label_1330cc;
        case 0x1330d0u: goto label_1330d0;
        case 0x1330d4u: goto label_1330d4;
        case 0x1330d8u: goto label_1330d8;
        case 0x1330dcu: goto label_1330dc;
        case 0x1330e0u: goto label_1330e0;
        case 0x1330e4u: goto label_1330e4;
        case 0x1330e8u: goto label_1330e8;
        case 0x1330ecu: goto label_1330ec;
        case 0x1330f0u: goto label_1330f0;
        case 0x1330f4u: goto label_1330f4;
        case 0x1330f8u: goto label_1330f8;
        case 0x1330fcu: goto label_1330fc;
        case 0x133100u: goto label_133100;
        case 0x133104u: goto label_133104;
        case 0x133108u: goto label_133108;
        case 0x13310cu: goto label_13310c;
        case 0x133110u: goto label_133110;
        case 0x133114u: goto label_133114;
        case 0x133118u: goto label_133118;
        case 0x13311cu: goto label_13311c;
        case 0x133120u: goto label_133120;
        case 0x133124u: goto label_133124;
        case 0x133128u: goto label_133128;
        case 0x13312cu: goto label_13312c;
        case 0x133130u: goto label_133130;
        case 0x133134u: goto label_133134;
        case 0x133138u: goto label_133138;
        case 0x13313cu: goto label_13313c;
        case 0x133140u: goto label_133140;
        case 0x133144u: goto label_133144;
        case 0x133148u: goto label_133148;
        case 0x13314cu: goto label_13314c;
        case 0x133150u: goto label_133150;
        case 0x133154u: goto label_133154;
        case 0x133158u: goto label_133158;
        case 0x13315cu: goto label_13315c;
        case 0x133160u: goto label_133160;
        case 0x133164u: goto label_133164;
        case 0x133168u: goto label_133168;
        case 0x13316cu: goto label_13316c;
        case 0x133170u: goto label_133170;
        case 0x133174u: goto label_133174;
        case 0x133178u: goto label_133178;
        case 0x13317cu: goto label_13317c;
        case 0x133180u: goto label_133180;
        case 0x133184u: goto label_133184;
        case 0x133188u: goto label_133188;
        case 0x13318cu: goto label_13318c;
        case 0x133190u: goto label_133190;
        case 0x133194u: goto label_133194;
        case 0x133198u: goto label_133198;
        case 0x13319cu: goto label_13319c;
        case 0x1331a0u: goto label_1331a0;
        case 0x1331a4u: goto label_1331a4;
        case 0x1331a8u: goto label_1331a8;
        case 0x1331acu: goto label_1331ac;
        case 0x1331b0u: goto label_1331b0;
        case 0x1331b4u: goto label_1331b4;
        case 0x1331b8u: goto label_1331b8;
        case 0x1331bcu: goto label_1331bc;
        case 0x1331c0u: goto label_1331c0;
        case 0x1331c4u: goto label_1331c4;
        case 0x1331c8u: goto label_1331c8;
        case 0x1331ccu: goto label_1331cc;
        case 0x1331d0u: goto label_1331d0;
        case 0x1331d4u: goto label_1331d4;
        case 0x1331d8u: goto label_1331d8;
        case 0x1331dcu: goto label_1331dc;
        case 0x1331e0u: goto label_1331e0;
        case 0x1331e4u: goto label_1331e4;
        case 0x1331e8u: goto label_1331e8;
        case 0x1331ecu: goto label_1331ec;
        case 0x1331f0u: goto label_1331f0;
        case 0x1331f4u: goto label_1331f4;
        case 0x1331f8u: goto label_1331f8;
        case 0x1331fcu: goto label_1331fc;
        case 0x133200u: goto label_133200;
        case 0x133204u: goto label_133204;
        case 0x133208u: goto label_133208;
        case 0x13320cu: goto label_13320c;
        case 0x133210u: goto label_133210;
        case 0x133214u: goto label_133214;
        case 0x133218u: goto label_133218;
        case 0x13321cu: goto label_13321c;
        case 0x133220u: goto label_133220;
        case 0x133224u: goto label_133224;
        case 0x133228u: goto label_133228;
        case 0x13322cu: goto label_13322c;
        case 0x133230u: goto label_133230;
        case 0x133234u: goto label_133234;
        case 0x133238u: goto label_133238;
        case 0x13323cu: goto label_13323c;
        case 0x133240u: goto label_133240;
        case 0x133244u: goto label_133244;
        case 0x133248u: goto label_133248;
        case 0x13324cu: goto label_13324c;
        case 0x133250u: goto label_133250;
        case 0x133254u: goto label_133254;
        case 0x133258u: goto label_133258;
        case 0x13325cu: goto label_13325c;
        case 0x133260u: goto label_133260;
        case 0x133264u: goto label_133264;
        case 0x133268u: goto label_133268;
        case 0x13326cu: goto label_13326c;
        case 0x133270u: goto label_133270;
        case 0x133274u: goto label_133274;
        case 0x133278u: goto label_133278;
        case 0x13327cu: goto label_13327c;
        case 0x133280u: goto label_133280;
        case 0x133284u: goto label_133284;
        case 0x133288u: goto label_133288;
        case 0x13328cu: goto label_13328c;
        case 0x133290u: goto label_133290;
        case 0x133294u: goto label_133294;
        case 0x133298u: goto label_133298;
        case 0x13329cu: goto label_13329c;
        case 0x1332a0u: goto label_1332a0;
        case 0x1332a4u: goto label_1332a4;
        case 0x1332a8u: goto label_1332a8;
        case 0x1332acu: goto label_1332ac;
        case 0x1332b0u: goto label_1332b0;
        case 0x1332b4u: goto label_1332b4;
        case 0x1332b8u: goto label_1332b8;
        case 0x1332bcu: goto label_1332bc;
        case 0x1332c0u: goto label_1332c0;
        case 0x1332c4u: goto label_1332c4;
        case 0x1332c8u: goto label_1332c8;
        case 0x1332ccu: goto label_1332cc;
        case 0x1332d0u: goto label_1332d0;
        case 0x1332d4u: goto label_1332d4;
        case 0x1332d8u: goto label_1332d8;
        case 0x1332dcu: goto label_1332dc;
        case 0x1332e0u: goto label_1332e0;
        case 0x1332e4u: goto label_1332e4;
        case 0x1332e8u: goto label_1332e8;
        case 0x1332ecu: goto label_1332ec;
        case 0x1332f0u: goto label_1332f0;
        case 0x1332f4u: goto label_1332f4;
        case 0x1332f8u: goto label_1332f8;
        case 0x1332fcu: goto label_1332fc;
        case 0x133300u: goto label_133300;
        case 0x133304u: goto label_133304;
        case 0x133308u: goto label_133308;
        case 0x13330cu: goto label_13330c;
        case 0x133310u: goto label_133310;
        case 0x133314u: goto label_133314;
        case 0x133318u: goto label_133318;
        case 0x13331cu: goto label_13331c;
        case 0x133320u: goto label_133320;
        case 0x133324u: goto label_133324;
        case 0x133328u: goto label_133328;
        case 0x13332cu: goto label_13332c;
        case 0x133330u: goto label_133330;
        case 0x133334u: goto label_133334;
        case 0x133338u: goto label_133338;
        case 0x13333cu: goto label_13333c;
        case 0x133340u: goto label_133340;
        case 0x133344u: goto label_133344;
        case 0x133348u: goto label_133348;
        case 0x13334cu: goto label_13334c;
        case 0x133350u: goto label_133350;
        case 0x133354u: goto label_133354;
        case 0x133358u: goto label_133358;
        case 0x13335cu: goto label_13335c;
        case 0x133360u: goto label_133360;
        case 0x133364u: goto label_133364;
        case 0x133368u: goto label_133368;
        case 0x13336cu: goto label_13336c;
        case 0x133370u: goto label_133370;
        case 0x133374u: goto label_133374;
        case 0x133378u: goto label_133378;
        case 0x13337cu: goto label_13337c;
        case 0x133380u: goto label_133380;
        case 0x133384u: goto label_133384;
        case 0x133388u: goto label_133388;
        case 0x13338cu: goto label_13338c;
        case 0x133390u: goto label_133390;
        case 0x133394u: goto label_133394;
        case 0x133398u: goto label_133398;
        case 0x13339cu: goto label_13339c;
        case 0x1333a0u: goto label_1333a0;
        case 0x1333a4u: goto label_1333a4;
        case 0x1333a8u: goto label_1333a8;
        case 0x1333acu: goto label_1333ac;
        case 0x1333b0u: goto label_1333b0;
        case 0x1333b4u: goto label_1333b4;
        case 0x1333b8u: goto label_1333b8;
        case 0x1333bcu: goto label_1333bc;
        case 0x1333c0u: goto label_1333c0;
        case 0x1333c4u: goto label_1333c4;
        case 0x1333c8u: goto label_1333c8;
        case 0x1333ccu: goto label_1333cc;
        case 0x1333d0u: goto label_1333d0;
        case 0x1333d4u: goto label_1333d4;
        case 0x1333d8u: goto label_1333d8;
        case 0x1333dcu: goto label_1333dc;
        case 0x1333e0u: goto label_1333e0;
        case 0x1333e4u: goto label_1333e4;
        case 0x1333e8u: goto label_1333e8;
        case 0x1333ecu: goto label_1333ec;
        case 0x1333f0u: goto label_1333f0;
        case 0x1333f4u: goto label_1333f4;
        case 0x1333f8u: goto label_1333f8;
        case 0x1333fcu: goto label_1333fc;
        case 0x133400u: goto label_133400;
        case 0x133404u: goto label_133404;
        case 0x133408u: goto label_133408;
        case 0x13340cu: goto label_13340c;
        case 0x133410u: goto label_133410;
        case 0x133414u: goto label_133414;
        case 0x133418u: goto label_133418;
        case 0x13341cu: goto label_13341c;
        case 0x133420u: goto label_133420;
        case 0x133424u: goto label_133424;
        case 0x133428u: goto label_133428;
        case 0x13342cu: goto label_13342c;
        case 0x133430u: goto label_133430;
        case 0x133434u: goto label_133434;
        case 0x133438u: goto label_133438;
        case 0x13343cu: goto label_13343c;
        case 0x133440u: goto label_133440;
        case 0x133444u: goto label_133444;
        case 0x133448u: goto label_133448;
        case 0x13344cu: goto label_13344c;
        case 0x133450u: goto label_133450;
        case 0x133454u: goto label_133454;
        case 0x133458u: goto label_133458;
        case 0x13345cu: goto label_13345c;
        case 0x133460u: goto label_133460;
        case 0x133464u: goto label_133464;
        case 0x133468u: goto label_133468;
        case 0x13346cu: goto label_13346c;
        case 0x133470u: goto label_133470;
        case 0x133474u: goto label_133474;
        case 0x133478u: goto label_133478;
        case 0x13347cu: goto label_13347c;
        case 0x133480u: goto label_133480;
        case 0x133484u: goto label_133484;
        case 0x133488u: goto label_133488;
        case 0x13348cu: goto label_13348c;
        case 0x133490u: goto label_133490;
        case 0x133494u: goto label_133494;
        case 0x133498u: goto label_133498;
        case 0x13349cu: goto label_13349c;
        case 0x1334a0u: goto label_1334a0;
        case 0x1334a4u: goto label_1334a4;
        case 0x1334a8u: goto label_1334a8;
        case 0x1334acu: goto label_1334ac;
        case 0x1334b0u: goto label_1334b0;
        case 0x1334b4u: goto label_1334b4;
        case 0x1334b8u: goto label_1334b8;
        case 0x1334bcu: goto label_1334bc;
        case 0x1334c0u: goto label_1334c0;
        case 0x1334c4u: goto label_1334c4;
        case 0x1334c8u: goto label_1334c8;
        default: break;
    }

    ctx->pc = 0x133090u;

label_133090:
    // 0x133090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_133094:
    // 0x133094: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x133094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_133098:
    // 0x133098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13309c:
    // 0x13309c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13309cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1330a0:
    // 0x1330a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1330a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1330a4:
    // 0x1330a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1330a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1330a8:
    // 0x1330a8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1330a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_1330ac:
    // 0x1330ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1330acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1330b0:
    // 0x1330b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1330b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1330b4:
    // 0x1330b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1330b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1330b8:
    // 0x1330b8: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x1330b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1330bc:
    // 0x1330bc: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
label_1330c0:
    if (ctx->pc == 0x1330C0u) {
        ctx->pc = 0x1330C4u;
        goto label_1330c4;
    }
    ctx->pc = 0x1330BCu;
    {
        const bool branch_taken_0x1330bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330bc) {
            ctx->pc = 0x1334B4u;
            goto label_1334b4;
        }
    }
    ctx->pc = 0x1330C4u;
label_1330c4:
    // 0x1330c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1330c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1330c8:
    // 0x1330c8: 0x2464e5a0  addiu       $a0, $v1, -0x1A60
    ctx->pc = 0x1330c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960544));
label_1330cc:
    // 0x1330cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1330ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1330d0:
    // 0x1330d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1330d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1330d4:
    // 0x1330d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1330d8:
    // 0x1330d8: 0x600008  jr          $v1
label_1330dc:
    if (ctx->pc == 0x1330DCu) {
        ctx->pc = 0x1330E0u;
        goto label_1330e0;
    }
    ctx->pc = 0x1330D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1330D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1330E0u;
label_1330e0:
    // 0x1330e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1330e4:
    // 0x1330e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1330e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1330e8:
    // 0x1330e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1330e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1330ec:
    // 0x1330ec: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1330f0:
    // 0x1330f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1330f4:
    // 0x1330f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1330f8:
    // 0x1330f8: 0xc0965d0  jal         func_259740
label_1330fc:
    if (ctx->pc == 0x1330FCu) {
        ctx->pc = 0x133100u;
        goto label_133100;
    }
    ctx->pc = 0x1330F8u;
    SET_GPR_U32(ctx, 31, 0x133100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1330F8u, 0x133100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133100u;
label_133100:
    // 0x133100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133104:
    // 0x133104: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_133108:
    // 0x133108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13310c:
    // 0x13310c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13310cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133110:
    // 0x133110: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133114:
    // 0x133114: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_133118:
    // 0x133118: 0xc096b40  jal         func_25AD00
label_13311c:
    if (ctx->pc == 0x13311Cu) {
        ctx->pc = 0x133120u;
        goto label_133120;
    }
    ctx->pc = 0x133118u;
    SET_GPR_U32(ctx, 31, 0x133120u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133118u, 0x133120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133120u;
label_133120:
    // 0x133120: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133124:
    // 0x133124: 0xc05cd10  jal         func_173440
label_133128:
    if (ctx->pc == 0x133128u) {
        ctx->pc = 0x13312Cu;
        goto label_13312c;
    }
    ctx->pc = 0x133124u;
    SET_GPR_U32(ctx, 31, 0x13312Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133124u, 0x13312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13312Cu;
label_13312c:
    // 0x13312c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133130:
    // 0x133130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133134:
    // 0x133134: 0xc05cec4  jal         func_173B10
label_133138:
    if (ctx->pc == 0x133138u) {
        ctx->pc = 0x13313Cu;
        goto label_13313c;
    }
    ctx->pc = 0x133134u;
    SET_GPR_U32(ctx, 31, 0x13313Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133134u, 0x13313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13313Cu;
label_13313c:
    // 0x13313c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133140:
    // 0x133140: 0xc0974dc  jal         func_25D370
label_133144:
    if (ctx->pc == 0x133144u) {
        ctx->pc = 0x133148u;
        goto label_133148;
    }
    ctx->pc = 0x133140u;
    SET_GPR_U32(ctx, 31, 0x133148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133140u, 0x133148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133148u;
label_133148:
    // 0x133148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13314c:
    // 0x13314c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13314cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_133150:
    // 0x133150: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
label_133154:
    if (ctx->pc == 0x133154u) {
        ctx->pc = 0x133158u;
        goto label_133158;
    }
    ctx->pc = 0x133150u;
    {
        const bool branch_taken_0x133150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133150) {
            ctx->pc = 0x1334B4u;
            goto label_1334b4;
        }
    }
    ctx->pc = 0x133158u;
label_133158:
    // 0x133158: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13315c:
    // 0x13315c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13315cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_133160:
    // 0x133160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_133164:
    // 0x133164: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_133168:
    // 0x133168: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_13316c:
    if (ctx->pc == 0x13316Cu) {
        ctx->pc = 0x133170u;
        goto label_133170;
    }
    ctx->pc = 0x133168u;
    {
        const bool branch_taken_0x133168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133168) {
            ctx->pc = 0x1334B4u;
            goto label_1334b4;
        }
    }
    ctx->pc = 0x133170u;
label_133170:
    // 0x133170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133174:
    // 0x133174: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133178:
    // 0x133178: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_13317c:
    // 0x13317c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x13317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_133180:
    // 0x133180: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133184:
    // 0x133184: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_133188:
    // 0x133188: 0xc0965d0  jal         func_259740
label_13318c:
    if (ctx->pc == 0x13318Cu) {
        ctx->pc = 0x133190u;
        goto label_133190;
    }
    ctx->pc = 0x133188u;
    SET_GPR_U32(ctx, 31, 0x133190u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133188u, 0x133190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133190u;
label_133190:
    // 0x133190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133194:
    // 0x133194: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_133198:
    // 0x133198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13319c:
    // 0x13319c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13319cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1331a0:
    // 0x1331a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1331a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1331a4:
    // 0x1331a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1331a8:
    // 0x1331a8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1331a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1331ac:
    // 0x1331ac: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1331acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1331b0:
    // 0x1331b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1331b4:
    // 0x1331b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1331b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_1331b8:
    // 0x1331b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1331b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1331bc:
    // 0x1331bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1331c0:
    // 0x1331c0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1331c4:
    // 0x1331c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1331c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1331c8:
    // 0x1331c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1331c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1331cc:
    // 0x1331cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1331d0:
    // 0x1331d0: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x1331d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
label_1331d4:
    // 0x1331d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1331d8:
    // 0x1331d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1331dc:
    // 0x1331dc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x1331dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_1331e0:
    // 0x1331e0: 0xc048044  jal         func_120110
label_1331e4:
    if (ctx->pc == 0x1331E4u) {
        ctx->pc = 0x1331E8u;
        goto label_1331e8;
    }
    ctx->pc = 0x1331E0u;
    SET_GPR_U32(ctx, 31, 0x1331E8u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x1331E0u, 0x1331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331E8u;
label_1331e8:
    // 0x1331e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
label_1331ec:
    // 0x1331ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1331ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1331f0:
    // 0x1331f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1331f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1331f4:
    // 0x1331f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1331f8:
    // 0x1331f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1331f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1331fc:
    // 0x1331fc: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x1331fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
label_133200:
    // 0x133200: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x133200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_133204:
    // 0x133204: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133204u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_133208:
    // 0x133208: 0xc067b18  jal         func_19EC60
label_13320c:
    if (ctx->pc == 0x13320Cu) {
        ctx->pc = 0x133210u;
        goto label_133210;
    }
    ctx->pc = 0x133208u;
    SET_GPR_U32(ctx, 31, 0x133210u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133208u, 0x133210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133210u;
label_133210:
    // 0x133210: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133214:
    // 0x133214: 0xc04da3c  jal         func_1368F0
label_133218:
    if (ctx->pc == 0x133218u) {
        ctx->pc = 0x13321Cu;
        goto label_13321c;
    }
    ctx->pc = 0x133214u;
    SET_GPR_U32(ctx, 31, 0x13321Cu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133214u, 0x13321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13321Cu;
label_13321c:
    // 0x13321c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133220:
    // 0x133220: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_133224:
    // 0x133224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133228:
    // 0x133228: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13322c:
    // 0x13322c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133230:
    // 0x133230: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133230u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_133234:
    // 0x133234: 0xc096b40  jal         func_25AD00
label_133238:
    if (ctx->pc == 0x133238u) {
        ctx->pc = 0x13323Cu;
        goto label_13323c;
    }
    ctx->pc = 0x133234u;
    SET_GPR_U32(ctx, 31, 0x13323Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133234u, 0x13323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13323Cu;
label_13323c:
    // 0x13323c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133240:
    // 0x133240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133244:
    // 0x133244: 0xc05cec4  jal         func_173B10
label_133248:
    if (ctx->pc == 0x133248u) {
        ctx->pc = 0x13324Cu;
        goto label_13324c;
    }
    ctx->pc = 0x133244u;
    SET_GPR_U32(ctx, 31, 0x13324Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133244u, 0x13324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13324Cu;
label_13324c:
    // 0x13324c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133250:
    // 0x133250: 0xc0974dc  jal         func_25D370
label_133254:
    if (ctx->pc == 0x133254u) {
        ctx->pc = 0x133258u;
        goto label_133258;
    }
    ctx->pc = 0x133250u;
    SET_GPR_U32(ctx, 31, 0x133258u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133250u, 0x133258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133258u;
label_133258:
    // 0x133258: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13325c:
    // 0x13325c: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x13325cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
label_133260:
    // 0x133260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_133264:
    if (ctx->pc == 0x133264u) {
        ctx->pc = 0x133268u;
        goto label_133268;
    }
    ctx->pc = 0x133260u;
    {
        const bool branch_taken_0x133260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133260) {
            ctx->pc = 0x133278u;
            goto label_133278;
        }
    }
    ctx->pc = 0x133268u;
label_133268:
    // 0x133268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13326c:
    // 0x13326c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13326cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_133270:
    // 0x133270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133274:
    // 0x133274: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133278:
    // 0x133278: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x133278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_13327c:
    // 0x13327c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13327cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_133280:
    // 0x133280: 0xc0684d8  jal         func_1A1360
label_133284:
    if (ctx->pc == 0x133284u) {
        ctx->pc = 0x133288u;
        goto label_133288;
    }
    ctx->pc = 0x133280u;
    SET_GPR_U32(ctx, 31, 0x133288u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x133280u, 0x133288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133288u;
label_133288:
    // 0x133288: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x133288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_13328c:
    // 0x13328c: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x13328cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_133290:
    // 0x133290: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x133290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
label_133294:
    // 0x133294: 0xc0684d8  jal         func_1A1360
label_133298:
    if (ctx->pc == 0x133298u) {
        ctx->pc = 0x13329Cu;
        goto label_13329c;
    }
    ctx->pc = 0x133294u;
    SET_GPR_U32(ctx, 31, 0x13329Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x133294u, 0x13329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13329Cu;
label_13329c:
    // 0x13329c: 0x10000085  b           . + 4 + (0x85 << 2)
label_1332a0:
    if (ctx->pc == 0x1332A0u) {
        ctx->pc = 0x1332A4u;
        goto label_1332a4;
    }
    ctx->pc = 0x13329Cu;
    {
        const bool branch_taken_0x13329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13329c) {
            ctx->pc = 0x1334B4u;
            goto label_1334b4;
        }
    }
    ctx->pc = 0x1332A4u;
label_1332a4:
    // 0x1332a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1332a8:
    // 0x1332a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1332ac:
    // 0x1332ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1332acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1332b0:
    // 0x1332b0: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1332b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1332b4:
    // 0x1332b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1332b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1332b8:
    // 0x1332b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1332b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1332bc:
    // 0x1332bc: 0xc0965d0  jal         func_259740
label_1332c0:
    if (ctx->pc == 0x1332C0u) {
        ctx->pc = 0x1332C4u;
        goto label_1332c4;
    }
    ctx->pc = 0x1332BCu;
    SET_GPR_U32(ctx, 31, 0x1332C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1332BCu, 0x1332C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332C4u;
label_1332c4:
    // 0x1332c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1332c8:
    // 0x1332c8: 0xc04d07c  jal         func_1341F0
label_1332cc:
    if (ctx->pc == 0x1332CCu) {
        ctx->pc = 0x1332D0u;
        goto label_1332d0;
    }
    ctx->pc = 0x1332C8u;
    SET_GPR_U32(ctx, 31, 0x1332D0u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x1332C8u, 0x1332D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332D0u;
label_1332d0:
    // 0x1332d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1332d4:
    // 0x1332d4: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x1332d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_1332d8:
    // 0x1332d8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1332d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1332dc:
    // 0x1332dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1332dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1332e0:
    // 0x1332e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1332e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1332e4:
    // 0x1332e4: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x1332e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_1332e8:
    // 0x1332e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1332e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1332ec:
    // 0x1332ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1332f0:
    // 0x1332f0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x1332f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1332f4:
    // 0x1332f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1332f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1332f8:
    // 0x1332f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1332fc:
    // 0x1332fc: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_133300:
    // 0x133300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133304:
    // 0x133304: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_133308:
    // 0x133308: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13330c:
    // 0x13330c: 0xc04d994  jal         func_136650
label_133310:
    if (ctx->pc == 0x133310u) {
        ctx->pc = 0x133314u;
        goto label_133314;
    }
    ctx->pc = 0x13330Cu;
    SET_GPR_U32(ctx, 31, 0x133314u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x13330Cu, 0x133314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133314u;
label_133314:
    // 0x133314: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133318:
    // 0x133318: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_13331c:
    // 0x13331c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133320:
    // 0x133320: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133324:
    // 0x133324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133328:
    // 0x133328: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_13332c:
    // 0x13332c: 0xc096b40  jal         func_25AD00
label_133330:
    if (ctx->pc == 0x133330u) {
        ctx->pc = 0x133334u;
        goto label_133334;
    }
    ctx->pc = 0x13332Cu;
    SET_GPR_U32(ctx, 31, 0x133334u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13332Cu, 0x133334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133334u;
label_133334:
    // 0x133334: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133338:
    // 0x133338: 0xc0974dc  jal         func_25D370
label_13333c:
    if (ctx->pc == 0x13333Cu) {
        ctx->pc = 0x133340u;
        goto label_133340;
    }
    ctx->pc = 0x133338u;
    SET_GPR_U32(ctx, 31, 0x133340u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133338u, 0x133340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133340u;
label_133340:
    // 0x133340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133344:
    // 0x133344: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_133348:
    // 0x133348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13334c:
    if (ctx->pc == 0x13334Cu) {
        ctx->pc = 0x133350u;
        goto label_133350;
    }
    ctx->pc = 0x133348u;
    {
        const bool branch_taken_0x133348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133348) {
            ctx->pc = 0x133368u;
            goto label_133368;
        }
    }
    ctx->pc = 0x133350u;
label_133350:
    // 0x133350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133354:
    // 0x133354: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x133354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_133358:
    // 0x133358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13335c:
    // 0x13335c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13335cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_133360:
    // 0x133360: 0x10000037  b           . + 4 + (0x37 << 2)
label_133364:
    if (ctx->pc == 0x133364u) {
        ctx->pc = 0x133368u;
        goto label_133368;
    }
    ctx->pc = 0x133360u;
    {
        const bool branch_taken_0x133360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133360) {
            ctx->pc = 0x133440u;
            goto label_133440;
        }
    }
    ctx->pc = 0x133368u;
label_133368:
    // 0x133368: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_13336c:
    // 0x13336c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x13336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_133370:
    // 0x133370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133374:
    // 0x133374: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133378:
    // 0x133378: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_13337c:
    // 0x13337c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_133380:
    // 0x133380: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_133384:
    // 0x133384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_133388:
    // 0x133388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13338c:
    // 0x13338c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_133390:
    // 0x133390: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
label_133394:
    // 0x133394: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_133398:
    // 0x133398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13339c:
    // 0x13339c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333a0:
    // 0x1333a0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1333a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1333a4:
    // 0x1333a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333a8:
    // 0x1333a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1333ac:
    // 0x1333ac: 0xc096cc8  jal         func_25B320
label_1333b0:
    if (ctx->pc == 0x1333B0u) {
        ctx->pc = 0x1333B4u;
        goto label_1333b4;
    }
    ctx->pc = 0x1333ACu;
    SET_GPR_U32(ctx, 31, 0x1333B4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333ACu, 0x1333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B4u;
label_1333b4:
    // 0x1333b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333b8:
    // 0x1333b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1333b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1333bc:
    // 0x1333bc: 0xc096cc8  jal         func_25B320
label_1333c0:
    if (ctx->pc == 0x1333C0u) {
        ctx->pc = 0x1333C4u;
        goto label_1333c4;
    }
    ctx->pc = 0x1333BCu;
    SET_GPR_U32(ctx, 31, 0x1333C4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333BCu, 0x1333C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333C4u;
label_1333c4:
    // 0x1333c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333c8:
    // 0x1333c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1333c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1333cc:
    // 0x1333cc: 0xc096cc8  jal         func_25B320
label_1333d0:
    if (ctx->pc == 0x1333D0u) {
        ctx->pc = 0x1333D4u;
        goto label_1333d4;
    }
    ctx->pc = 0x1333CCu;
    SET_GPR_U32(ctx, 31, 0x1333D4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333CCu, 0x1333D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333D4u;
label_1333d4:
    // 0x1333d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333d8:
    // 0x1333d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1333dc:
    // 0x1333dc: 0xc096cc8  jal         func_25B320
label_1333e0:
    if (ctx->pc == 0x1333E0u) {
        ctx->pc = 0x1333E4u;
        goto label_1333e4;
    }
    ctx->pc = 0x1333DCu;
    SET_GPR_U32(ctx, 31, 0x1333E4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333DCu, 0x1333E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333E4u;
label_1333e4:
    // 0x1333e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333e8:
    // 0x1333e8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1333e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1333ec:
    // 0x1333ec: 0xc096cc8  jal         func_25B320
label_1333f0:
    if (ctx->pc == 0x1333F0u) {
        ctx->pc = 0x1333F4u;
        goto label_1333f4;
    }
    ctx->pc = 0x1333ECu;
    SET_GPR_U32(ctx, 31, 0x1333F4u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333ECu, 0x1333F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333F4u;
label_1333f4:
    // 0x1333f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1333f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1333f8:
    // 0x1333f8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1333f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1333fc:
    // 0x1333fc: 0xc096cc8  jal         func_25B320
label_133400:
    if (ctx->pc == 0x133400u) {
        ctx->pc = 0x133404u;
        goto label_133404;
    }
    ctx->pc = 0x1333FCu;
    SET_GPR_U32(ctx, 31, 0x133404u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x1333FCu, 0x133404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133404u;
label_133404:
    // 0x133404: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133408:
    // 0x133408: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x133408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_13340c:
    // 0x13340c: 0xc096cc8  jal         func_25B320
label_133410:
    if (ctx->pc == 0x133410u) {
        ctx->pc = 0x133414u;
        goto label_133414;
    }
    ctx->pc = 0x13340Cu;
    SET_GPR_U32(ctx, 31, 0x133414u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x13340Cu, 0x133414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133414u;
label_133414:
    // 0x133414: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133418:
    // 0x133418: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_13341c:
    // 0x13341c: 0xc096cc8  jal         func_25B320
label_133420:
    if (ctx->pc == 0x133420u) {
        ctx->pc = 0x133424u;
        goto label_133424;
    }
    ctx->pc = 0x13341Cu;
    SET_GPR_U32(ctx, 31, 0x133424u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x13341Cu, 0x133424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133424u;
label_133424:
    // 0x133424: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x133424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_133428:
    // 0x133428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_13342c:
    // 0x13342c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x13342cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_133430:
    // 0x133430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133434:
    // 0x133434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_133438:
    // 0x133438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13343c:
    // 0x13343c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13343cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133440:
    // 0x133440: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133444:
    // 0x133444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_133448:
    // 0x133448: 0xc096b40  jal         func_25AD00
label_13344c:
    if (ctx->pc == 0x13344Cu) {
        ctx->pc = 0x133450u;
        goto label_133450;
    }
    ctx->pc = 0x133448u;
    SET_GPR_U32(ctx, 31, 0x133450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133448u, 0x133450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133450u;
label_133450:
    // 0x133450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133454:
    // 0x133454: 0xc0974dc  jal         func_25D370
label_133458:
    if (ctx->pc == 0x133458u) {
        ctx->pc = 0x13345Cu;
        goto label_13345c;
    }
    ctx->pc = 0x133454u;
    SET_GPR_U32(ctx, 31, 0x13345Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133454u, 0x13345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13345Cu;
label_13345c:
    // 0x13345c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13345cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133460:
    // 0x133460: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_133464:
    // 0x133464: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_133468:
    if (ctx->pc == 0x133468u) {
        ctx->pc = 0x13346Cu;
        goto label_13346c;
    }
    ctx->pc = 0x133464u;
    {
        const bool branch_taken_0x133464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133464) {
            ctx->pc = 0x133484u;
            goto label_133484;
        }
    }
    ctx->pc = 0x13346Cu;
label_13346c:
    // 0x13346c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133470:
    // 0x133470: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
label_133474:
    // 0x133474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_133478:
    // 0x133478: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133478u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_13347c:
    // 0x13347c: 0x1000000d  b           . + 4 + (0xD << 2)
label_133480:
    if (ctx->pc == 0x133480u) {
        ctx->pc = 0x133484u;
        goto label_133484;
    }
    ctx->pc = 0x13347Cu;
    {
        const bool branch_taken_0x13347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13347c) {
            ctx->pc = 0x1334B4u;
            goto label_1334b4;
        }
    }
    ctx->pc = 0x133484u;
label_133484:
    // 0x133484: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133488:
    // 0x133488: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13348c:
    // 0x13348c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x13348cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_133490:
    // 0x133490: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_133494:
    // 0x133494: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_133498:
    // 0x133498: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_13349c:
    // 0x13349c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x13349cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_1334a0:
    // 0x1334a0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1334a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1334a4:
    // 0x1334a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1334a8:
    // 0x1334a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1334a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1334ac:
    // 0x1334ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1334acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1334b0:
    // 0x1334b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1334b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1334b4:
    // 0x1334b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1334b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1334b8:
    // 0x1334b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1334b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1334bc:
    // 0x1334bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1334bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1334c0:
    // 0x1334c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1334c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1334c4:
    // 0x1334c4: 0x3e00008  jr          $ra
label_1334c8:
    if (ctx->pc == 0x1334C8u) {
        ctx->pc = 0x1334CCu;
        goto label_fallthrough_0x1334c4;
    }
    ctx->pc = 0x1334C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1334C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1334c4:
    ctx->pc = 0x1334CCu;
}
