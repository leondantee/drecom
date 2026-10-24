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

// Function: MpegNodataCallBack
// Address: 0x35cd00 - 0x35cda8
void MpegNodataCallBack_0x35cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MpegNodataCallBack_0x35cd00");
#endif

    switch (ctx->pc) {
        case 0x35cd24u: goto label_35cd24;
        case 0x35cd44u: goto label_35cd44;
        case 0x35cd60u: goto label_35cd60;
        case 0x35cd74u: goto label_35cd74;
        case 0x35cd80u: goto label_35cd80;
        case 0x35cd8cu: goto label_35cd8c;
        default: break;
    }

    ctx->pc = 0x35cd00u;

    // 0x35cd00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35cd04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35cd08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35cd0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35cd10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35cd14: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x35cd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35cd18: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35cd18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FC3A4u));
    // 0x35cd1c: 0xc084a98  jal         func_212A60
    ctx->pc = 0x35CD1Cu;
    SET_GPR_U32(ctx, 31, 0x35CD24u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x35CD24u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CD24u) { return; }
    ctx->pc = 0x35CD24u;
label_35cd24:
    // 0x35cd24: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x35cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x35cd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cd2c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35CD2Cu;
    {
        const bool branch_taken_0x35cd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35cd2c) {
            ctx->pc = 0x35CD50u;
            goto label_35cd50;
        }
    }
    ctx->pc = 0x35CD34u;
    // 0x35cd34: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35cd38: 0x24442a80  addiu       $a0, $v0, 0x2A80
    ctx->pc = 0x35cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x35cd3c: 0xc046760  jal         func_119D80
    ctx->pc = 0x35CD3Cu;
    SET_GPR_U32(ctx, 31, 0x35CD44u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x35CD44u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CD44u) { return; }
    ctx->pc = 0x35CD44u;
label_35cd44:
    // 0x35cd44: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35cd44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35cd48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35CD48u;
    {
        const bool branch_taken_0x35cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd48) {
            ctx->pc = 0x35CD90u;
            goto label_35cd90;
        }
    }
    ctx->pc = 0x35CD50u;
label_35cd50:
    // 0x35cd50: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x35cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x35cd54: 0x34440005  ori         $a0, $v0, 0x5
    ctx->pc = 0x35cd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x35cd58: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CD58u;
    SET_GPR_U32(ctx, 31, 0x35CD60u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CD58u, 0x35CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD60u;
label_35cd60:
    // 0x35cd60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cd64: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x35cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x35cd68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x35cd68u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x35cd6c: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x35CD6Cu;
    SET_GPR_U32(ctx, 31, 0x35CD74u);
    ctx->pc = 0x1D87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D87C0u, 0x35CD6Cu, 0x35CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD74u;
label_35cd74:
    // 0x35cd74: 0x36240100  ori         $a0, $s1, 0x100
    ctx->pc = 0x35cd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x35cd78: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CD78u;
    SET_GPR_U32(ctx, 31, 0x35CD80u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CD78u, 0x35CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD80u;
label_35cd80:
    // 0x35cd80: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35cd84: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35CD84u;
    SET_GPR_U32(ctx, 31, 0x35CD8Cu);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35CD8Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CD8Cu) { return; }
    ctx->pc = 0x35CD8Cu;
label_35cd8c:
    // 0x35cd8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35cd90:
    // 0x35cd90: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35cd90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cd94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cd98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cd9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35cd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35cda0: 0x3e00008  jr          $ra
    ctx->pc = 0x35CDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CDA8u;
}
