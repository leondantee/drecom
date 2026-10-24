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

// Function: Em00_R1_turn_h
// Address: 0x2d2650 - 0x2d27d8
void Em00_R1_turn_h_0x2d2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_turn_h_0x2d2650");
#endif

    switch (ctx->pc) {
        case 0x2d26a4u: goto label_2d26a4;
        case 0x2d26e8u: goto label_2d26e8;
        case 0x2d2710u: goto label_2d2710;
        case 0x2d272cu: goto label_2d272c;
        case 0x2d2738u: goto label_2d2738;
        default: break;
    }

    ctx->pc = 0x2d2650u;

    // 0x2d2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2654: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2658: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d265c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2660: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d2660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2664: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d2664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d2668: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d266c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D266Cu;
    {
        const bool branch_taken_0x2d266c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d266c) {
            ctx->pc = 0x2D2720u;
            goto label_2d2720;
        }
    }
    ctx->pc = 0x2D2674u;
    // 0x2d2674: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2674u;
    {
        const bool branch_taken_0x2d2674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2674) {
            ctx->pc = 0x2D2684u;
            goto label_2d2684;
        }
    }
    ctx->pc = 0x2D267Cu;
    // 0x2d267c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D267Cu;
    {
        const bool branch_taken_0x2d267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d267c) {
            ctx->pc = 0x2D27C8u;
            goto label_2d27c8;
        }
    }
    ctx->pc = 0x2D2684u;
label_2d2684:
    // 0x2d2684: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2688: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d268c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d268cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d2690: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2694: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2698: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d269c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D269Cu;
    SET_GPR_U32(ctx, 31, 0x2D26A4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D269Cu, 0x2D26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26A4u;
label_2d26a4:
    // 0x2d26a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d26a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d26a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d26ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d26acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d26b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26b4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d26b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d26b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d26bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d26c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D26C0u;
    {
        const bool branch_taken_0x2d26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26c0) {
            ctx->pc = 0x2D26F0u;
            goto label_2d26f0;
        }
    }
    ctx->pc = 0x2D26C8u;
    // 0x2d26c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d26d4: 0x24063c20  addiu       $a2, $zero, 0x3C20
    ctx->pc = 0x2d26d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15392));
    // 0x2d26d8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d26d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d26dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d26dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d26e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D26E0u;
    SET_GPR_U32(ctx, 31, 0x2D26E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D26E0u, 0x2D26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D26E8u;
label_2d26e8:
    // 0x2d26e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D26E8u;
    {
        const bool branch_taken_0x2d26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d26e8) {
            ctx->pc = 0x2D2710u;
            goto label_2d2710;
        }
    }
    ctx->pc = 0x2D26F0u;
label_2d26f0:
    // 0x2d26f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d26f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d26f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d26f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d26fc: 0x24063c20  addiu       $a2, $zero, 0x3C20
    ctx->pc = 0x2d26fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15392));
    // 0x2d2700: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2704: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d2704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2708: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D2708u;
    SET_GPR_U32(ctx, 31, 0x2D2710u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D2708u, 0x2D2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2710u;
label_2d2710:
    // 0x2d2710: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2714: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d2714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d2718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d271c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d271cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d2720:
    // 0x2d2720: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2724: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2D2724u;
    SET_GPR_U32(ctx, 31, 0x2D272Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2D2724u, 0x2D272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D272Cu;
label_2d272c:
    // 0x2d272c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d272cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2730: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D2730u;
    SET_GPR_U32(ctx, 31, 0x2D2738u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D2730u, 0x2D2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2738u;
label_2d2738:
    // 0x2d2738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d273c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d273cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2740: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D2740u;
    {
        const bool branch_taken_0x2d2740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2740) {
            ctx->pc = 0x2D27C8u;
            goto label_2d27c8;
        }
    }
    ctx->pc = 0x2D2748u;
    // 0x2d2748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d274c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2750: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2758: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d2758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d275c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2760: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2764: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2768: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d276c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2770: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d2774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2778: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d277c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d277cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2780: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2784: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d2784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d2788: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2788u;
    {
        const bool branch_taken_0x2d2788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2788) {
            ctx->pc = 0x2D27B0u;
            goto label_2d27b0;
        }
    }
    ctx->pc = 0x2D2790u;
    // 0x2d2790: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2d2790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2d2794: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d2794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d2798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d279c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d279cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d27a0: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d27a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d27a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d27a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D27A8u;
    {
        const bool branch_taken_0x2d27a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27a8) {
            ctx->pc = 0x2D27C8u;
            goto label_2d27c8;
        }
    }
    ctx->pc = 0x2D27B0u;
label_2d27b0:
    // 0x2d27b0: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2d27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2d27b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d27b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d27b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d27b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d27bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d27bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d27c0: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d27c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d27c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d27c8:
    // 0x2d27c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d27c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d27cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d27ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d27d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D27D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D27D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D27D8u;
}
