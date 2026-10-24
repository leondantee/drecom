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

// Function: Camera_change
// Address: 0x184050 - 0x184098
void Camera_change_0x184050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_change_0x184050");
#endif

    ctx->pc = 0x184050u;

    // 0x184050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184054: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184058: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x184058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18405c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x18405cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x184060: 0x24702380  addiu       $s0, $v1, 0x2380
    ctx->pc = 0x184060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9088));
    // 0x184064: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x184064u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4B2390u));
    // 0x184068: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18406c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18406Cu;
    {
        const bool branch_taken_0x18406c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18406c) {
            ctx->pc = 0x184088u;
            goto label_184088;
        }
    }
    ctx->pc = 0x184074u;
    // 0x184074: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x184074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184078: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x184078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18407c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x184080: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x184080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x184084: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x184084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_184088:
    // 0x184088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18408c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184090: 0x3e00008  jr          $ra
    ctx->pc = 0x184090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184098u;
}
