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

// Function: entry_001e3f78
// Address: 0x1e3f78 - 0x1e3fac
void entry_001e3f78_0x1e3f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f78_0x1e3f78");
#endif

    ctx->pc = 0x1e3f78u;

    // 0x1e3f78: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1e3f78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e3f7c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e3f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3f80: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1e3f80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3f84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e3f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3f88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e3f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3f8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e3f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3f90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e3f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3f94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e3f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3f98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3f9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3fa0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x1e3fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e3fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3FACu;
}
