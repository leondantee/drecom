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

// Function: eff2d_04_init
// Address: 0x21dd90 - 0x21de18
void eff2d_04_init_0x21dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_04_init_0x21dd90");
#endif

    switch (ctx->pc) {
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21de00u: goto label_21de00;
        default: break;
    }

    ctx->pc = 0x21dd90u;

    // 0x21dd90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21dd94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21dd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21dd9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21dda0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21dda4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21dda8: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x21dda8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x21ddac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ddb0: 0x8c5101fc  lw          $s1, 0x1FC($v0)
    ctx->pc = 0x21ddb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x21ddb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ddb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ddbc: 0xac430128  sw          $v1, 0x128($v0)
    ctx->pc = 0x21ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 3));
    // 0x21ddc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ddc4: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x21ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x21ddc8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x21ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21ddcc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DDCCu;
    {
        const bool branch_taken_0x21ddcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ddcc) {
            ctx->pc = 0x21DDE4u;
            goto label_21dde4;
        }
    }
    ctx->pc = 0x21DDD4u;
    // 0x21ddd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DDD4u;
    {
        const bool branch_taken_0x21ddd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ddd4) {
            ctx->pc = 0x21DDE4u;
            goto label_21dde4;
        }
    }
    ctx->pc = 0x21DDDCu;
    // 0x21dddc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21DDDCu;
    {
        const bool branch_taken_0x21dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dddc) {
            ctx->pc = 0x21DDE4u;
            goto label_21dde4;
        }
    }
    ctx->pc = 0x21DDE4u;
label_21dde4:
    // 0x21dde4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21dde8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x21dde8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21ddec: 0xc0c98a4  jal         func_326290
    ctx->pc = 0x21DDECu;
    SET_GPR_U32(ctx, 31, 0x21DDF4u);
    ctx->pc = 0x326290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326290u, 0x21DDECu, 0x21DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x21ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21ddf8: 0xc0c9918  jal         func_326460
    ctx->pc = 0x21DDF8u;
    SET_GPR_U32(ctx, 31, 0x21DE00u);
    ctx->pc = 0x326460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326460u, 0x21DDF8u, 0x21DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE00u;
label_21de00:
    // 0x21de00: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21de00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21de04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21de04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21de08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21de08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21de0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21de10: 0x3e00008  jr          $ra
    ctx->pc = 0x21DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DE18u;
}
