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

// Function: Game_sp_effect
// Address: 0x141ce0 - 0x141dfc
void Game_sp_effect_0x141ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_sp_effect_0x141ce0");
#endif

    switch (ctx->pc) {
        case 0x141d44u: goto label_141d44;
        case 0x141d64u: goto label_141d64;
        case 0x141d98u: goto label_141d98;
        case 0x141db4u: goto label_141db4;
        case 0x141de8u: goto label_141de8;
        default: break;
    }

    ctx->pc = 0x141ce0u;

    // 0x141ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141ce4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x141ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x141ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x141cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x141cf0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x141cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x141cf4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x141cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u)); // MMIO: 0x10000800
    // 0x141cf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141cfc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141d00: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x141d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x141d04: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x141D04u;
    {
        const bool branch_taken_0x141d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d04) {
            ctx->pc = 0x141DE8u;
            goto label_141de8;
        }
    }
    ctx->pc = 0x141D0Cu;
    // 0x141d0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d10: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141d10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141d14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141d18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141D1Cu;
    {
        const bool branch_taken_0x141d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d1c) {
            ctx->pc = 0x141D44u;
            goto label_141d44;
        }
    }
    ctx->pc = 0x141D24u;
    // 0x141d24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d28: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x141d28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141d2c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x141d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x141d30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141D34u;
    {
        const bool branch_taken_0x141d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d34) {
            ctx->pc = 0x141D44u;
            goto label_141d44;
        }
    }
    ctx->pc = 0x141D3Cu;
    // 0x141d3c: 0xc06b1b8  jal         func_1AC6E0
    ctx->pc = 0x141D3Cu;
    SET_GPR_U32(ctx, 31, 0x141D44u);
    ctx->pc = 0x1AC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC6E0u, 0x141D3Cu, 0x141D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D44u;
label_141d44:
    // 0x141d44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d48: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x141d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141d4c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x141d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x141d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141D54u;
    {
        const bool branch_taken_0x141d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d54) {
            ctx->pc = 0x141D64u;
            goto label_141d64;
        }
    }
    ctx->pc = 0x141D5Cu;
    // 0x141d5c: 0xc06b330  jal         func_1ACCC0
    ctx->pc = 0x141D5Cu;
    SET_GPR_U32(ctx, 31, 0x141D64u);
    ctx->pc = 0x1ACCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACCC0u, 0x141D5Cu, 0x141D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D64u;
label_141d64:
    // 0x141d64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d68: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141d68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141d74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141D74u;
    {
        const bool branch_taken_0x141d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d74) {
            ctx->pc = 0x141D98u;
            goto label_141d98;
        }
    }
    ctx->pc = 0x141D7Cu;
    // 0x141d7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d80: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x141d80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141d84: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x141d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x141d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141D88u;
    {
        const bool branch_taken_0x141d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d88) {
            ctx->pc = 0x141D98u;
            goto label_141d98;
        }
    }
    ctx->pc = 0x141D90u;
    // 0x141d90: 0xc06babc  jal         func_1AEAF0
    ctx->pc = 0x141D90u;
    SET_GPR_U32(ctx, 31, 0x141D98u);
    ctx->pc = 0x1AEAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEAF0u, 0x141D90u, 0x141D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D98u;
label_141d98:
    // 0x141d98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141d9c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x141d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141da0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x141da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x141da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141DA4u;
    {
        const bool branch_taken_0x141da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141da4) {
            ctx->pc = 0x141DB4u;
            goto label_141db4;
        }
    }
    ctx->pc = 0x141DACu;
    // 0x141dac: 0xc06bc24  jal         func_1AF090
    ctx->pc = 0x141DACu;
    SET_GPR_U32(ctx, 31, 0x141DB4u);
    ctx->pc = 0x1AF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF090u, 0x141DACu, 0x141DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DB4u;
label_141db4:
    // 0x141db4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141db8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x141dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u)); // MMIO: 0x10000800
    // 0x141dc0: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x141dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x141dc4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x141dc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141dcc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x141dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x141dd0: 0x34420312  ori         $v0, $v0, 0x312
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)786);
    // 0x141dd4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x141dd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x141dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x141ddc: 0x2445e688  addiu       $a1, $v0, -0x1978
    ctx->pc = 0x141ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960776));
    // 0x141de0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x141DE0u;
    SET_GPR_U32(ctx, 31, 0x141DE8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x141DE0u, 0x141DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DE8u;
label_141de8:
    // 0x141de8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x141de8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141dec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141df0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141df4: 0x3e00008  jr          $ra
    ctx->pc = 0x141DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141DFCu;
}
