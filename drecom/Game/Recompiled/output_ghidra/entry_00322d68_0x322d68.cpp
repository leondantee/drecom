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

// Function: entry_00322d68
// Address: 0x322d68 - 0x322da4
void entry_00322d68_0x322d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322d68_0x322d68");
#endif

    ctx->pc = 0x322d68u;

    // 0x322d68: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x322d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x322d6c: 0x1460ff66  bnez        $v1, . + 4 + (-0x9A << 2)
    ctx->pc = 0x322D6Cu;
    {
        const bool branch_taken_0x322d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322d6c) {
            ctx->pc = 0x322B08u;
            return;
        }
    }
    ctx->pc = 0x322D74u;
    // 0x322d74: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x322d74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322d78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x322d78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322d7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x322d7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322d80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x322d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322d84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322d88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322d88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322d98: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x322d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x322D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322DA4u;
}
