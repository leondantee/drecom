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

// Function: entry_002ecf60
// Address: 0x2ecf60 - 0x2ecfa0
void entry_002ecf60_0x2ecf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecf60_0x2ecf60");
#endif

    ctx->pc = 0x2ecf60u;

    // 0x2ecf60: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x2ecf60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2ecf64: 0x1460fecb  bnez        $v1, . + 4 + (-0x135 << 2)
    ctx->pc = 0x2ECF64u;
    {
        const bool branch_taken_0x2ecf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf64) {
            ctx->pc = 0x2ECA94u;
            return;
        }
    }
    ctx->pc = 0x2ECF6Cu;
    // 0x2ecf6c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2ecf6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ecf70: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ecf70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ecf74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ecf74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ecf78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ecf78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ecf7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ecf7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ecf80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ecf80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecf84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ecf84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecf88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ecf88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ecf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ecf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf94: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ecf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECFA0u;
}
