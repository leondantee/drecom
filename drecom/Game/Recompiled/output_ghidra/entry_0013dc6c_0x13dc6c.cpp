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

// Function: entry_0013dc6c
// Address: 0x13dc6c - 0x13dccc
void entry_0013dc6c_0x13dc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dc6c_0x13dc6c");
#endif

    ctx->pc = 0x13dc6cu;

label_13dc6c:
    // 0x13dc6c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x13dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13dc70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13dc74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dc74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dc78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13dc7c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13dc80: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13dc84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13dc88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x13dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13dc8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13dc90: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x13dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x13dc94: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13dc98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x13dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13dc9c: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x13dc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x13dca0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x13dca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13dca4: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x13DCA4u;
    {
        const bool branch_taken_0x13dca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dca4) {
            ctx->pc = 0x13DC6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dc6c;
        }
    }
    ctx->pc = 0x13DCACu;
    // 0x13dcac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13dcacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13dcb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13dcb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13dcb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13dcb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dcc0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DCCCu;
}
