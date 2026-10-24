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

// Function: Em05_R1_atk_pick
// Address: 0x20c790 - 0x20cc58
void Em05_R1_atk_pick_0x20c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_atk_pick_0x20c790");
#endif

    switch (ctx->pc) {
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c840u: goto label_20c840;
        case 0x20c860u: goto label_20c860;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c998u: goto label_20c998;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9e4u: goto label_20c9e4;
        case 0x20c9f8u: goto label_20c9f8;
        case 0x20ca10u: goto label_20ca10;
        case 0x20caa8u: goto label_20caa8;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd8u: goto label_20cbd8;
        default: break;
    }

    ctx->pc = 0x20c790u;

    // 0x20c790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20c794: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x20c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20c798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c79c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x20c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x20c7a0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x20c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x20c7a4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x20c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x20c7a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c7ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20c7acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c7b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20c7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20c7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c7b8: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x20C7B8u;
    {
        const bool branch_taken_0x20c7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c7b8) {
            ctx->pc = 0x20C8B4u;
            goto label_20c8b4;
        }
    }
    ctx->pc = 0x20C7C0u;
    // 0x20c7c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C7C0u;
    {
        const bool branch_taken_0x20c7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7c0) {
            ctx->pc = 0x20C7D0u;
            goto label_20c7d0;
        }
    }
    ctx->pc = 0x20C7C8u;
    // 0x20c7c8: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x20C7C8u;
    {
        const bool branch_taken_0x20c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7c8) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20C7D0u;
label_20c7d0:
    // 0x20c7d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c7d4: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20c7d8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20c7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c7dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c7e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c7e4: 0x2445a0e0  addiu       $a1, $v0, -0x5F20
    ctx->pc = 0x20c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x20c7e8: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C7E8u;
    SET_GPR_U32(ctx, 31, 0x20C7F0u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C7E8u, 0x20C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7F0u;
label_20c7f0:
    // 0x20c7f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c7f4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C7F4u;
    {
        const bool branch_taken_0x20c7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c7f4) {
            ctx->pc = 0x20C810u;
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C7FCu;
    // 0x20c7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c800: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C800u;
    {
        const bool branch_taken_0x20c800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c800) {
            ctx->pc = 0x20C810u;
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C808u;
    // 0x20c808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C808u;
    {
        const bool branch_taken_0x20c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c808) {
            ctx->pc = 0x20C824u;
            goto label_20c824;
        }
    }
    ctx->pc = 0x20C810u;
label_20c810:
    // 0x20c810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c818: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20c818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c81c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C82Cu;
            goto label_20c82c;
        }
    }
    ctx->pc = 0x20C824u;
label_20c824:
    // 0x20c824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c828: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20c828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_20c82c:
    // 0x20c82c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c830: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c834: 0x2445a0e0  addiu       $a1, $v0, -0x5F20
    ctx->pc = 0x20c834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x20c838: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C838u;
    SET_GPR_U32(ctx, 31, 0x20C840u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C838u, 0x20C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c844: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20c848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20c84c: 0x24060514  addiu       $a2, $zero, 0x514
    ctx->pc = 0x20c84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x20c850: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20c854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20c854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20c858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20C858u;
    SET_GPR_U32(ctx, 31, 0x20C860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20C858u, 0x20C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C860u;
label_20c860:
    // 0x20c860: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c864: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c86c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c870: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x20c870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20c874: 0xc096c60  jal         func_25B180
    ctx->pc = 0x20C874u;
    SET_GPR_U32(ctx, 31, 0x20C87Cu);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x20C874u, 0x20C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C87Cu;
label_20c87c:
    // 0x20c87c: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x20c87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c880: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x20c880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x20c884: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C884u;
    SET_GPR_U32(ctx, 31, 0x20C88Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C88Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C88Cu) { return; }
    ctx->pc = 0x20C88Cu;
label_20c88c:
    // 0x20c88c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c890: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c894: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c898: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c89c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C89Cu;
    SET_GPR_U32(ctx, 31, 0x20C8A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C8A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C8A4u) { return; }
    ctx->pc = 0x20C8A4u;
label_20c8a4:
    // 0x20c8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20c8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20c8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20c8b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20c8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20c8b4:
    // 0x20c8b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8b8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c8bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20c8c4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x20C8C4u;
    {
        const bool branch_taken_0x20c8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8c4) {
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C8CCu;
    // 0x20c8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c8d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20c8dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20C8DCu;
    {
        const bool branch_taken_0x20c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8dc) {
            ctx->pc = 0x20C970u;
            goto label_20c970;
        }
    }
    ctx->pc = 0x20C8E4u;
    // 0x20c8e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c8e8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c8ec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c8f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c8f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C8F4u;
    {
        const bool branch_taken_0x20c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8f4) {
            ctx->pc = 0x20C90Cu;
            goto label_20c90c;
        }
    }
    ctx->pc = 0x20C8FCu;
    // 0x20c8fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c900: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c904: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C904u;
    SET_GPR_U32(ctx, 31, 0x20C90Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C904u, 0x20C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C90Cu;
label_20c90c:
    // 0x20c90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c910: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c914: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C914u;
    SET_GPR_U32(ctx, 31, 0x20C91Cu);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C914u, 0x20C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C91Cu;
label_20c91c:
    // 0x20c91c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c920: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20c920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20c924: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20C924u;
    {
        const bool branch_taken_0x20c924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c924) {
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C92Cu;
    // 0x20c92c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20c930: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c934: 0xac43134c  sw          $v1, 0x134C($v0)
    ctx->pc = 0x20c934u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 3));
    // 0x20c938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c93c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c940: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x20c940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c948: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c94c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x20c94cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c954: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20c954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c95c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x20c95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c964: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x20c964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20c968: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20C968u;
    {
        const bool branch_taken_0x20c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c968) {
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C970u;
label_20c970:
    // 0x20c970: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c974: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c978: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c97c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C980u;
    {
        const bool branch_taken_0x20c980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c980) {
            ctx->pc = 0x20C998u;
            goto label_20c998;
        }
    }
    ctx->pc = 0x20C988u;
    // 0x20c988: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c98c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c990: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C990u;
    SET_GPR_U32(ctx, 31, 0x20C998u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C990u, 0x20C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C998u;
label_20c998:
    // 0x20c998: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c99c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c9a0: 0xc0baff8  jal         func_2EBFE0
    ctx->pc = 0x20C9A0u;
    SET_GPR_U32(ctx, 31, 0x20C9A8u);
    ctx->pc = 0x2EBFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFE0u, 0x20C9A0u, 0x20C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9ac: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20c9acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20c9b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c9b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c9b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c9b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c9bc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C9BCu;
    {
        const bool branch_taken_0x20c9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c9bc) {
            ctx->pc = 0x20CA00u;
            goto label_20ca00;
        }
    }
    ctx->pc = 0x20C9C4u;
    // 0x20c9c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9c8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c9cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c9d0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20c9d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C9D4u;
    {
        const bool branch_taken_0x20c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c9d4) {
            ctx->pc = 0x20C9F8u;
            goto label_20c9f8;
        }
    }
    ctx->pc = 0x20C9DCu;
    // 0x20c9dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x20C9DCu;
    SET_GPR_U32(ctx, 31, 0x20C9E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x20C9DCu, 0x20C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9E4u;
label_20c9e4:
    // 0x20c9e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c9e8: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x20c9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x20c9ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9f0: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x20C9F0u;
    SET_GPR_U32(ctx, 31, 0x20C9F8u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x20C9F0u, 0x20C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9F8u;
label_20c9f8:
    // 0x20c9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20ca00:
    // 0x20ca00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ca04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ca08: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20CA08u;
    SET_GPR_U32(ctx, 31, 0x20CA10u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20CA08u, 0x20CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA10u;
label_20ca10:
    // 0x20ca10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca14: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20ca18: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x20CA18u;
    {
        const bool branch_taken_0x20ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca18) {
            ctx->pc = 0x20CBB0u;
            goto label_20cbb0;
        }
    }
    ctx->pc = 0x20CA20u;
    // 0x20ca20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20ca24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20ca28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ca2c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20ca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20ca30: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20CA30u;
    {
        const bool branch_taken_0x20ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca30) {
            ctx->pc = 0x20CAA8u;
            goto label_20caa8;
        }
    }
    ctx->pc = 0x20CA38u;
    // 0x20ca38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca3c: 0x0  nop
    ctx->pc = 0x20ca3cu;
    // NOP
    // 0x20ca40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20ca44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca48: 0x0  nop
    ctx->pc = 0x20ca48u;
    // NOP
    // 0x20ca4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20ca50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca54: 0x0  nop
    ctx->pc = 0x20ca54u;
    // NOP
    // 0x20ca58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20ca5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ca60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca64: 0x0  nop
    ctx->pc = 0x20ca64u;
    // NOP
    // 0x20ca68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20ca6c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x20ca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20ca70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20ca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20ca74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20ca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ca78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x20ca7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20ca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20ca80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20ca80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20ca84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20ca88: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x20ca88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x20ca8c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20ca90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ca94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20ca94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ca98: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x20ca98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20ca9c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ca9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20caa0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x20CAA0u;
    SET_GPR_U32(ctx, 31, 0x20CAA8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x20CAA0u, 0x20CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAA8u;
label_20caa8:
    // 0x20caa8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20caac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20caacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cab0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cab4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cab8: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cabc: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20cac0: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x20cac4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cac8: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20CAC8u;
    SET_GPR_U32(ctx, 31, 0x20CAD0u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20CAC8u, 0x20CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAD0u;
label_20cad0:
    // 0x20cad0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cad4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20cad8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20cadc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20cadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20cae0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20cae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20cae4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cae8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20caec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x20caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20caf0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x20caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20caf4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20CAF4u;
    SET_GPR_U32(ctx, 31, 0x20CAFCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20CAF4u, 0x20CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAFCu;
label_20cafc:
    // 0x20cafc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb00: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20cb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20cb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb0c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cb10: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20cb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20cb14: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CB18u;
    SET_GPR_U32(ctx, 31, 0x20CB20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CB18u, 0x20CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB20u;
label_20cb20:
    // 0x20cb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb28: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20cb2c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CB34u;
    SET_GPR_U32(ctx, 31, 0x20CB3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CB34u, 0x20CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB3Cu;
label_20cb3c:
    // 0x20cb3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb40: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb44: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cb48: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20CB48u;
    SET_GPR_U32(ctx, 31, 0x20CB50u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20CB48u, 0x20CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB50u;
label_20cb50:
    // 0x20cb50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb58: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20CB5Cu;
    SET_GPR_U32(ctx, 31, 0x20CB64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20CB64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20CB64u) { return; }
    ctx->pc = 0x20CB64u;
label_20cb64:
    // 0x20cb64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cb6c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20CB6Cu;
    SET_GPR_U32(ctx, 31, 0x20CB74u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20CB6Cu, 0x20CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB74u;
label_20cb74:
    // 0x20cb74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb7c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20cb80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cb84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20CB84u;
    SET_GPR_U32(ctx, 31, 0x20CB8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20CB84u, 0x20CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB8Cu;
label_20cb8c:
    // 0x20cb8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cb94: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20cb98: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20cb9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20cba0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20CBA0u;
    SET_GPR_U32(ctx, 31, 0x20CBA8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20CBA0u, 0x20CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBA8u;
label_20cba8:
    // 0x20cba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CBA8u;
    {
        const bool branch_taken_0x20cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cba8) {
            ctx->pc = 0x20CBCCu;
            goto label_20cbcc;
        }
    }
    ctx->pc = 0x20CBB0u;
label_20cbb0:
    // 0x20cbb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbb4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x20CBB4u;
    SET_GPR_U32(ctx, 31, 0x20CBBCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x20CBB4u, 0x20CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBBCu;
label_20cbbc:
    // 0x20cbbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cbc4: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20CBC4u;
    SET_GPR_U32(ctx, 31, 0x20CBCCu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20CBC4u, 0x20CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBCCu;
label_20cbcc:
    // 0x20cbcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbd0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20CBD0u;
    SET_GPR_U32(ctx, 31, 0x20CBD8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20CBD0u, 0x20CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CBD8u;
label_20cbd8:
    // 0x20cbd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbdc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20cbe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20cbe4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20cbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20cbe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cbec: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20cbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20cbf0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20CBF0u;
    {
        const bool branch_taken_0x20cbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cbf0) {
            ctx->pc = 0x20CC44u;
            goto label_20cc44;
        }
    }
    ctx->pc = 0x20CBF8u;
    // 0x20cbf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc00: 0x8c631310  lw          $v1, 0x1310($v1)
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4880)));
    // 0x20cc04: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x20cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x20cc08: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x20cc0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc10: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20cc14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cc18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cc20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cc24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cc2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cc34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cc3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20cc40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20cc44:
    // 0x20cc44: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x20cc44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cc48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20cc4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20cc50: 0x3e00008  jr          $ra
    ctx->pc = 0x20CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CC58u;
}
