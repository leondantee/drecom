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

// Function: entry_00281c68
// Address: 0x281c68 - 0x281ca4
void entry_00281c68_0x281c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281c68_0x281c68");
#endif

    ctx->pc = 0x281c68u;

    // 0x281c68: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x281c68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281c6c: 0x1460ff31  bnez        $v1, . + 4 + (-0xCF << 2)
    ctx->pc = 0x281C6Cu;
    {
        const bool branch_taken_0x281c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281c6c) {
            ctx->pc = 0x281934u;
            return;
        }
    }
    ctx->pc = 0x281C74u;
    // 0x281c74: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x281c74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x281c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281c7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281c80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c98: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x281c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x281C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281CA4u;
}
