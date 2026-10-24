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

// Function: Em0a_R1_catch_ck
// Address: 0x365c00 - 0x365e84
void Em0a_R1_catch_ck_0x365c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_catch_ck_0x365c00");
#endif

    switch (ctx->pc) {
        case 0x365c78u: goto label_365c78;
        case 0x365ca0u: goto label_365ca0;
        case 0x365cccu: goto label_365ccc;
        case 0x365ce4u: goto label_365ce4;
        case 0x365cf0u: goto label_365cf0;
        case 0x365d00u: goto label_365d00;
        case 0x365d0cu: goto label_365d0c;
        case 0x365d54u: goto label_365d54;
        case 0x365d74u: goto label_365d74;
        case 0x365d80u: goto label_365d80;
        case 0x365d90u: goto label_365d90;
        case 0x365d9cu: goto label_365d9c;
        case 0x365dc0u: goto label_365dc0;
        case 0x365de4u: goto label_365de4;
        case 0x365df8u: goto label_365df8;
        case 0x365e1cu: goto label_365e1c;
        case 0x365e30u: goto label_365e30;
        default: break;
    }

    ctx->pc = 0x365c00u;

    // 0x365c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x365c04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x365c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x365c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x365c0c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x365c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x365c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c14: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x365c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x365c18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c1c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x365c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365c20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x365c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365c24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x365c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x365c28: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x365C28u;
    {
        const bool branch_taken_0x365c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365c28) {
            ctx->pc = 0x365D64u;
            goto label_365d64;
        }
    }
    ctx->pc = 0x365C30u;
    // 0x365c30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365c34: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x365C34u;
    {
        const bool branch_taken_0x365c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365c34) {
            ctx->pc = 0x365D34u;
            goto label_365d34;
        }
    }
    ctx->pc = 0x365C3Cu;
    // 0x365c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x365c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365c40: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x365C40u;
    {
        const bool branch_taken_0x365c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365c40) {
            ctx->pc = 0x365C88u;
            goto label_365c88;
        }
    }
    ctx->pc = 0x365C48u;
    // 0x365c48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365C48u;
    {
        const bool branch_taken_0x365c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c48) {
            ctx->pc = 0x365C58u;
            goto label_365c58;
        }
    }
    ctx->pc = 0x365C50u;
    // 0x365c50: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x365C50u;
    {
        const bool branch_taken_0x365c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365c50) {
            ctx->pc = 0x365E70u;
            goto label_365e70;
        }
    }
    ctx->pc = 0x365C58u;
label_365c58:
    // 0x365c58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c60: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365c64: 0x24061e18  addiu       $a2, $zero, 0x1E18
    ctx->pc = 0x365c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7704));
    // 0x365c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365c6c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365c70: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365C70u;
    SET_GPR_U32(ctx, 31, 0x365C78u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365C70u, 0x365C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C78u;
label_365c78:
    // 0x365c78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c7c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365c80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365c84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_365c88:
    // 0x365c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365c8c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x365c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x365c90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x365c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x365c94: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x365c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x365c98: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x365C98u;
    SET_GPR_U32(ctx, 31, 0x365CA0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x365C98u, 0x365CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CA0u;
label_365ca0:
    // 0x365ca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ca4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x365ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x365ca8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cb0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x365cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x365cb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365cb8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x365cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x365cbc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x365cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x365cc0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x365cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x365cc4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x365CC4u;
    SET_GPR_U32(ctx, 31, 0x365CCCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x365CC4u, 0x365CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CCCu;
label_365ccc:
    // 0x365ccc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cd0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x365cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x365cd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cd8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365cdc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365CDCu;
    SET_GPR_U32(ctx, 31, 0x365CE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365CDCu, 0x365CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CE4u;
label_365ce4:
    // 0x365ce4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365ce8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365CE8u;
    SET_GPR_U32(ctx, 31, 0x365CF0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365CE8u, 0x365CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CF0u;
label_365cf0:
    // 0x365cf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365cf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365cf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365cf8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365CF8u;
    SET_GPR_U32(ctx, 31, 0x365D00u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365CF8u, 0x365D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D00u;
label_365d00:
    // 0x365d00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d04: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365D04u;
    SET_GPR_U32(ctx, 31, 0x365D0Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365D04u, 0x365D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D0Cu;
label_365d0c:
    // 0x365d0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d10: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365d14: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x365D14u;
    {
        const bool branch_taken_0x365d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d14) {
            ctx->pc = 0x365E70u;
            goto label_365e70;
        }
    }
    ctx->pc = 0x365D1Cu;
    // 0x365d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d20: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x365d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x365d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x365d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x365d28: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x365d28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x365d2c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x365D2Cu;
    {
        const bool branch_taken_0x365d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365d2c) {
            ctx->pc = 0x365E70u;
            goto label_365e70;
        }
    }
    ctx->pc = 0x365D34u;
label_365d34:
    // 0x365d34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x365d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x365d40: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x365d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x365d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x365d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365d48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x365d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x365d4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x365D4Cu;
    SET_GPR_U32(ctx, 31, 0x365D54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x365D4Cu, 0x365D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D54u;
label_365d54:
    // 0x365d54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365d5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x365d60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x365d60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_365d64:
    // 0x365d64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365d68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365d6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365D6Cu;
    SET_GPR_U32(ctx, 31, 0x365D74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365D6Cu, 0x365D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D74u;
label_365d74:
    // 0x365d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365D78u;
    SET_GPR_U32(ctx, 31, 0x365D80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365D78u, 0x365D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D80u;
label_365d80:
    // 0x365d80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365d84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365d88: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365D88u;
    SET_GPR_U32(ctx, 31, 0x365D90u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365D88u, 0x365D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D90u;
label_365d90:
    // 0x365d90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d94: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365D94u;
    SET_GPR_U32(ctx, 31, 0x365D9Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365D94u, 0x365D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D9Cu;
label_365d9c:
    // 0x365d9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365da0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x365da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x365da4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x365da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365da8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x365da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x365dac: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x365DACu;
    {
        const bool branch_taken_0x365dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365dac) {
            ctx->pc = 0x365E30u;
            goto label_365e30;
        }
    }
    ctx->pc = 0x365DB4u;
    // 0x365db4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365db8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x365DB8u;
    SET_GPR_U32(ctx, 31, 0x365DC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x365DB8u, 0x365DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DC0u;
label_365dc0:
    // 0x365dc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365dcc: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x365dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x365dd0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365dd4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x365dd8: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x365dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x365ddc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365DDCu;
    SET_GPR_U32(ctx, 31, 0x365DE4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365DDCu, 0x365DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DE4u;
label_365de4:
    // 0x365de4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365DE4u;
    {
        const bool branch_taken_0x365de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365de4) {
            ctx->pc = 0x365DF8u;
            goto label_365df8;
        }
    }
    ctx->pc = 0x365DECu;
    // 0x365dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365df0: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365DF0u;
    SET_GPR_U32(ctx, 31, 0x365DF8u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365DF0u, 0x365DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DF8u;
label_365df8:
    // 0x365df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365e04: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x365e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x365e08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365e0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x365e10: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x365e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x365e14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365E14u;
    SET_GPR_U32(ctx, 31, 0x365E1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365E14u, 0x365E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E1Cu;
label_365e1c:
    // 0x365e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365E1Cu;
    {
        const bool branch_taken_0x365e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e1c) {
            ctx->pc = 0x365E30u;
            goto label_365e30;
        }
    }
    ctx->pc = 0x365E24u;
    // 0x365e24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e28: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365E28u;
    SET_GPR_U32(ctx, 31, 0x365E30u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365E28u, 0x365E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E30u;
label_365e30:
    // 0x365e30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365e38: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x365E38u;
    {
        const bool branch_taken_0x365e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e38) {
            ctx->pc = 0x365E70u;
            goto label_365e70;
        }
    }
    ctx->pc = 0x365E40u;
    // 0x365e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365e44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365e4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365e50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x365e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x365e58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365e70:
    // 0x365e70: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365e70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365e78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x365e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x365e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x365E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365E84u;
}
