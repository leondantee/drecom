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

// Function: atari_check_4R
// Address: 0x168630 - 0x168b50
void atari_check_4R_0x168630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atari_check_4R_0x168630");
#endif

    switch (ctx->pc) {
        case 0x168664u: goto label_168664;
        case 0x168834u: goto label_168834;
        case 0x168844u: goto label_168844;
        case 0x168854u: goto label_168854;
        case 0x168864u: goto label_168864;
        case 0x168878u: goto label_168878;
        case 0x16888cu: goto label_16888c;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688b4u: goto label_1688b4;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688f4u: goto label_1688f4;
        case 0x168908u: goto label_168908;
        case 0x168940u: goto label_168940;
        case 0x168958u: goto label_168958;
        case 0x168970u: goto label_168970;
        case 0x168988u: goto label_168988;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689f8u: goto label_1689f8;
        case 0x168a20u: goto label_168a20;
        case 0x168a48u: goto label_168a48;
        case 0x168a70u: goto label_168a70;
        case 0x168a9cu: goto label_168a9c;
        default: break;
    }

    ctx->pc = 0x168630u;

    // 0x168630: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x168634: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x168634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x168638: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x168638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x16863c: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x16863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x168640: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x168640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168644: 0x8c63ffe0  lw          $v1, -0x20($v1)
    ctx->pc = 0x168644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x168648: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x168648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x16864c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168650: 0x8c63ffe4  lw          $v1, -0x1C($v1)
    ctx->pc = 0x168650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967268)));
    // 0x168654: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x168654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    // 0x168658: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x168658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16865c: 0x8c63ffe8  lw          $v1, -0x18($v1)
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
    // 0x168660: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x168660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_168664:
    // 0x168664: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x168664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168668: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x168668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16866c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x168670: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x168670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168674: 0x1460012a  bnez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x168674u;
    {
        const bool branch_taken_0x168674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168674) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x16867Cu;
    // 0x16867c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x16867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168680: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x168684: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x168684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x168688: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x168688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x16868c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16868cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168690: 0x8c23ab28  lw          $v1, -0x54D8($at)
    ctx->pc = 0x168690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47AB28u));
    // 0x168694: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x168694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168698: 0x10600121  beqz        $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x168698u;
    {
        const bool branch_taken_0x168698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168698) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x1686A0u;
    // 0x1686a0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1686a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1686a4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1686a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1686a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1686a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1686ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1686acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1686b0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1686b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1686b8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1686b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1686bc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1686bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1686c0: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1686c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1686c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1686c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1686c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1686c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1686cc: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1686ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1686d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1686d4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1686d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1686d8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1686d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1686dc: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1686e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1686e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1686e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1686e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1686e8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1686e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1686ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1686ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1686f0: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1686f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1686f4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1686f8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1686f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1686fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1686fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x168700: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x168700u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x168704: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x168708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16870c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x16870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x168710: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168714: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x168714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x168718: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x168718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16871c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16871cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x168720: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x168720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x168724: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168728: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x168728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x16872c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168730: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x168734: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x168734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x168738: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x168738u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16873c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x16873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x168740: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168744: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x168744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x168748: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16874c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16874cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x168750: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x168750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x168754: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x168754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x168758: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16875c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168760: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x168760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x168764: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168768: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16876c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16876cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x168770: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x168770u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x168774: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x168774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x168778: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16877c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x16877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x168780: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168784: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x168784u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x168788: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x168788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16878c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16878cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x168790: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x168794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168798: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x168798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x16879c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x16879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1687a0: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x1687a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1687a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1687a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1687a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1687a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1687ac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1687b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1687b4: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1687b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1687b8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1687bc: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x1687bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1687c0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1687c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1687c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1687c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1687c8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x1687c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x1687cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1687d0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1687d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1687d4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1687d8: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x1687d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1687dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1687dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1687e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1687e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1687e4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1687e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1687e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1687ec: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1687ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1687f0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1687f4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1687f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1687f8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1687f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1687fc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168800: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x168800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168804: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x168804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x168808: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x16880c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x16880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168810: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x168810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x168814: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16881c: 0x0  nop
    ctx->pc = 0x16881cu;
    // NOP
    // 0x168820: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x168820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x168824: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x168824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168828: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16882c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16882Cu;
    SET_GPR_U32(ctx, 31, 0x168834u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x168834u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168834u) { return; }
    ctx->pc = 0x168834u;
label_168834:
    // 0x168834: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168838: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x168838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x16883c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16883Cu;
    SET_GPR_U32(ctx, 31, 0x168844u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x168844u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168844u) { return; }
    ctx->pc = 0x168844u;
label_168844:
    // 0x168844: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x168844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168848: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x168848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x16884c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16884Cu;
    SET_GPR_U32(ctx, 31, 0x168854u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x168854u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168854u) { return; }
    ctx->pc = 0x168854u;
label_168854:
    // 0x168854: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168858: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x168858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16885c: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16885Cu;
    SET_GPR_U32(ctx, 31, 0x168864u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x168864u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168864u) { return; }
    ctx->pc = 0x168864u;
label_168864:
    // 0x168864: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x168864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x168868: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x168868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16886c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168870: 0xc040c80  jal         func_103200
    ctx->pc = 0x168870u;
    SET_GPR_U32(ctx, 31, 0x168878u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168878u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168878u) { return; }
    ctx->pc = 0x168878u;
label_168878:
    // 0x168878: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16887c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16887cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168880: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168884: 0xc040c80  jal         func_103200
    ctx->pc = 0x168884u;
    SET_GPR_U32(ctx, 31, 0x16888Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16888Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16888Cu) { return; }
    ctx->pc = 0x16888Cu;
label_16888c:
    // 0x16888c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x16888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x168890: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x168894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168898: 0xc040c80  jal         func_103200
    ctx->pc = 0x168898u;
    SET_GPR_U32(ctx, 31, 0x1688A0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1688A0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1688A0u) { return; }
    ctx->pc = 0x1688A0u;
label_1688a0:
    // 0x1688a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1688a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1688a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1688a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1688ac: 0xc040c80  jal         func_103200
    ctx->pc = 0x1688ACu;
    SET_GPR_U32(ctx, 31, 0x1688B4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1688B4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1688B4u) { return; }
    ctx->pc = 0x1688B4u;
label_1688b4:
    // 0x1688b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1688b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1688b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1688b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1688bc: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x1688bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1688c0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1688c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1688c4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1688C4u;
    SET_GPR_U32(ctx, 31, 0x1688CCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1688CCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1688CCu) { return; }
    ctx->pc = 0x1688CCu;
label_1688cc:
    // 0x1688cc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1688ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1688d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1688d4: 0x2445aae0  addiu       $a1, $v0, -0x5520
    ctx->pc = 0x1688d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x1688d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1688d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1688dc: 0xc040c80  jal         func_103200
    ctx->pc = 0x1688DCu;
    SET_GPR_U32(ctx, 31, 0x1688E4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1688E4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1688E4u) { return; }
    ctx->pc = 0x1688E4u;
label_1688e4:
    // 0x1688e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1688e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1688e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1688ec: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1688ECu;
    SET_GPR_U32(ctx, 31, 0x1688F4u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1688F4u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1688F4u) { return; }
    ctx->pc = 0x1688F4u;
label_1688f4:
    // 0x1688f4: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1688f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x1688f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1688fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168900: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168900u;
    SET_GPR_U32(ctx, 31, 0x168908u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168908u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168908u) { return; }
    ctx->pc = 0x168908u;
label_168908:
    // 0x168908: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x168908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16890c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16890cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168914: 0x0  nop
    ctx->pc = 0x168914u;
    // NOP
    // 0x168918: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16891c: 0x0  nop
    ctx->pc = 0x16891cu;
    // NOP
    // 0x168920: 0x4500007f  bc1f        . + 4 + (0x7F << 2)
    ctx->pc = 0x168920u;
    {
        const bool branch_taken_0x168920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168920) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168928u;
    // 0x168928: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x168928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16892c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x168930: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168934: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x168934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168938: 0xc040c12  jal         func_103048
    ctx->pc = 0x168938u;
    SET_GPR_U32(ctx, 31, 0x168940u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168940u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168940u) { return; }
    ctx->pc = 0x168940u;
label_168940:
    // 0x168940: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x168944: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x168948: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16894c: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16894cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168950: 0xc040c12  jal         func_103048
    ctx->pc = 0x168950u;
    SET_GPR_U32(ctx, 31, 0x168958u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168958u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168958u) { return; }
    ctx->pc = 0x168958u;
label_168958:
    // 0x168958: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16895c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x168960: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168964: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x168964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168968: 0xc040c12  jal         func_103048
    ctx->pc = 0x168968u;
    SET_GPR_U32(ctx, 31, 0x168970u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168970u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168970u) { return; }
    ctx->pc = 0x168970u;
label_168970:
    // 0x168970: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x168970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168974: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x168978: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16897c: 0x2446aaf0  addiu       $a2, $v0, -0x5510
    ctx->pc = 0x16897cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168980: 0xc040c12  jal         func_103048
    ctx->pc = 0x168980u;
    SET_GPR_U32(ctx, 31, 0x168988u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x168988u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168988u) { return; }
    ctx->pc = 0x168988u;
label_168988:
    // 0x168988: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16898c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168990: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x168990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168994: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x168994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x168998: 0xc040c80  jal         func_103200
    ctx->pc = 0x168998u;
    SET_GPR_U32(ctx, 31, 0x1689A0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1689A0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1689A0u) { return; }
    ctx->pc = 0x1689A0u;
label_1689a0:
    // 0x1689a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1689a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1689a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1689a8: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x1689a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1689ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1689acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1689b0: 0xc040c80  jal         func_103200
    ctx->pc = 0x1689B0u;
    SET_GPR_U32(ctx, 31, 0x1689B8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1689B8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1689B8u) { return; }
    ctx->pc = 0x1689B8u;
label_1689b8:
    // 0x1689b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1689b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1689bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1689c0: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x1689c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1689c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1689c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1689c8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1689C8u;
    SET_GPR_U32(ctx, 31, 0x1689D0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1689D0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1689D0u) { return; }
    ctx->pc = 0x1689D0u;
label_1689d0:
    // 0x1689d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1689d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1689d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1689d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1689d8: 0x2445aad0  addiu       $a1, $v0, -0x5530
    ctx->pc = 0x1689d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1689dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1689dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1689e0: 0xc040c80  jal         func_103200
    ctx->pc = 0x1689E0u;
    SET_GPR_U32(ctx, 31, 0x1689E8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1689E8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1689E8u) { return; }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1689ec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1689ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1689f0: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1689F0u;
    SET_GPR_U32(ctx, 31, 0x1689F8u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1689F8u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1689F8u) { return; }
    ctx->pc = 0x1689F8u;
label_1689f8:
    // 0x1689f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1689f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1689fc: 0x0  nop
    ctx->pc = 0x1689fcu;
    // NOP
    // 0x168a00: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a04: 0x0  nop
    ctx->pc = 0x168a04u;
    // NOP
    // 0x168a08: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x168A08u;
    {
        const bool branch_taken_0x168a08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168a08) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168A10u;
    // 0x168a10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x168a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x168a14: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x168a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x168a18: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168A18u;
    SET_GPR_U32(ctx, 31, 0x168A20u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168A20u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168A20u) { return; }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168a24: 0x0  nop
    ctx->pc = 0x168a24u;
    // NOP
    // 0x168a28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a2c: 0x0  nop
    ctx->pc = 0x168a2cu;
    // NOP
    // 0x168a30: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x168A30u;
    {
        const bool branch_taken_0x168a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168a30) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168A38u;
    // 0x168a38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168a3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x168a40: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168A40u;
    SET_GPR_U32(ctx, 31, 0x168A48u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168A48u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168A48u) { return; }
    ctx->pc = 0x168A48u;
label_168a48:
    // 0x168a48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168a4c: 0x0  nop
    ctx->pc = 0x168a4cu;
    // NOP
    // 0x168a50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a54: 0x0  nop
    ctx->pc = 0x168a54u;
    // NOP
    // 0x168a58: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x168A58u;
    {
        const bool branch_taken_0x168a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168a58) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168A60u;
    // 0x168a60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x168a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168a64: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168a68: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168A68u;
    SET_GPR_U32(ctx, 31, 0x168A70u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168A70u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168A70u) { return; }
    ctx->pc = 0x168A70u;
label_168a70:
    // 0x168a70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168a74: 0x0  nop
    ctx->pc = 0x168a74u;
    // NOP
    // 0x168a78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x168a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168a7c: 0x0  nop
    ctx->pc = 0x168a7cu;
    // NOP
    // 0x168a80: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x168A80u;
    {
        const bool branch_taken_0x168a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168a80) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168A88u;
    // 0x168a88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168a8c: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x168a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168a90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x168a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168a94: 0xc040c1a  jal         func_103068
    ctx->pc = 0x168A94u;
    SET_GPR_U32(ctx, 31, 0x168A9Cu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x168A9Cu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168A9Cu) { return; }
    ctx->pc = 0x168A9Cu;
label_168a9c:
    // 0x168a9c: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x168a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168aa0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x168aa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x168aa4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x168aa4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x168aa8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x168aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x168aac: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x168aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ab0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x168ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x168ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168ab8: 0x0  nop
    ctx->pc = 0x168ab8u;
    // NOP
    // 0x168abc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168abcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168ac0: 0x0  nop
    ctx->pc = 0x168ac0u;
    // NOP
    // 0x168ac4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x168AC4u;
    {
        const bool branch_taken_0x168ac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ac4) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168ACCu;
    // 0x168acc: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x168accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168ad4: 0x0  nop
    ctx->pc = 0x168ad4u;
    // NOP
    // 0x168ad8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168ad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168adc: 0x0  nop
    ctx->pc = 0x168adcu;
    // NOP
    // 0x168ae0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x168AE0u;
    {
        const bool branch_taken_0x168ae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ae0) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168AE8u;
    // 0x168ae8: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x168ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168aec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168af0: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x168af0u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168af8: 0x0  nop
    ctx->pc = 0x168af8u;
    // NOP
    // 0x168afc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x168AFCu;
    {
        const bool branch_taken_0x168afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168afc) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168B04u;
    // 0x168b04: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x168b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168b08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168b0c: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x168b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x168b10: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168b14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168b18: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x168b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x168b1c: 0x0  nop
    ctx->pc = 0x168b1cu;
    // NOP
label_168b20:
    // 0x168b20: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x168b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x168b24: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x168b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x168b28: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x168b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x168b2c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x168b30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x168b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168b34: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x168b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x168b38: 0x1460feca  bnez        $v1, . + 4 + (-0x136 << 2)
    ctx->pc = 0x168B38u;
    {
        const bool branch_taken_0x168b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168b38) {
            ctx->pc = 0x168664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168664;
        }
    }
    ctx->pc = 0x168B40u;
    // 0x168b40: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x168b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b44: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x168b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x168b48: 0x3e00008  jr          $ra
    ctx->pc = 0x168B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168B50u;
}
