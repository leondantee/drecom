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

// Function: Em00_R1_turn
// Address: 0x2d24b0 - 0x2d2638
void Em00_R1_turn_0x2d24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_turn_0x2d24b0");
#endif

    switch (ctx->pc) {
        case 0x2d2504u: goto label_2d2504;
        case 0x2d2548u: goto label_2d2548;
        case 0x2d2570u: goto label_2d2570;
        case 0x2d258cu: goto label_2d258c;
        case 0x2d2598u: goto label_2d2598;
        default: break;
    }

    ctx->pc = 0x2d24b0u;

    // 0x2d24b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d24b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d24b8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d24bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d24c0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d24c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d24c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d24c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d24c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d24cc: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D24CCu;
    {
        const bool branch_taken_0x2d24cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d24cc) {
            ctx->pc = 0x2D2580u;
            goto label_2d2580;
        }
    }
    ctx->pc = 0x2D24D4u;
    // 0x2d24d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D24D4u;
    {
        const bool branch_taken_0x2d24d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24d4) {
            ctx->pc = 0x2D24E4u;
            goto label_2d24e4;
        }
    }
    ctx->pc = 0x2D24DCu;
    // 0x2d24dc: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D24DCu;
    {
        const bool branch_taken_0x2d24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d24dc) {
            ctx->pc = 0x2D2628u;
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D24E4u;
label_2d24e4:
    // 0x2d24e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d24e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d24e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d24ec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d24f0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d24f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d24f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d24f8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d24fc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D24FCu;
    SET_GPR_U32(ctx, 31, 0x2D2504u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D24FCu, 0x2D2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2504u;
label_2d2504:
    // 0x2d2504: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d2508: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d250c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d250cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d2510: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2514: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d2514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d2518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d251c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d251cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d2520: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2520u;
    {
        const bool branch_taken_0x2d2520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2520) {
            ctx->pc = 0x2D2550u;
            goto label_2d2550;
        }
    }
    ctx->pc = 0x2D2528u;
    // 0x2d2528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d252c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2530: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d2534: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x2d2534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x2d2538: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d2538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d253c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d253cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2540: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2540u;
    SET_GPR_U32(ctx, 31, 0x2D2548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2540u, 0x2D2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2548u;
label_2d2548:
    // 0x2d2548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2548u;
    {
        const bool branch_taken_0x2d2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2548) {
            ctx->pc = 0x2D2570u;
            goto label_2d2570;
        }
    }
    ctx->pc = 0x2D2550u;
label_2d2550:
    // 0x2d2550: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2554: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2558: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d255c: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x2d255cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x2d2560: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2564: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2568: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2568u;
    SET_GPR_U32(ctx, 31, 0x2D2570u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2568u, 0x2D2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2570u;
label_2d2570:
    // 0x2d2570: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2574: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d257c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d257cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2580:
    // 0x2d2580: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2584: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2D2584u;
    SET_GPR_U32(ctx, 31, 0x2D258Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2D2584u, 0x2D258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D258Cu;
label_2d258c:
    // 0x2d258c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2590: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D2590u;
    SET_GPR_U32(ctx, 31, 0x2D2598u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D2590u, 0x2D2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2598u;
label_2d2598:
    // 0x2d2598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d259c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d259cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d25a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D25A0u;
    {
        const bool branch_taken_0x2d25a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25a0) {
            ctx->pc = 0x2D2628u;
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D25A8u;
    // 0x2d25a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d25ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d25b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d25b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25b8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d25b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d25c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d25c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d25d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d25d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d25d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d25dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d25e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d25e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d25e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d25e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D25E8u;
    {
        const bool branch_taken_0x2d25e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25e8) {
            ctx->pc = 0x2D2610u;
            goto label_2d2610;
        }
    }
    ctx->pc = 0x2D25F0u;
    // 0x2d25f0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2d25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2d25f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d25f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d25f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d25f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d25fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2600: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d2604: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d2604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d2608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2608u;
    {
        const bool branch_taken_0x2d2608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2608) {
            ctx->pc = 0x2D2628u;
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D2610u;
label_2d2610:
    // 0x2d2610: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2d2610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2d2614: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d2614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d2618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d261c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2620: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d2620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d2624: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d2624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d2628:
    // 0x2d2628: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d2628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d262c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d262cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2630: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2638u;
}
