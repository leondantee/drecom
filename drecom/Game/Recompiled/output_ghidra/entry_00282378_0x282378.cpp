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

// Function: entry_00282378
// Address: 0x282378 - 0x2823a8
void entry_00282378_0x282378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282378_0x282378");
#endif

    ctx->pc = 0x282378u;

    // 0x282378: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x282378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28237c: 0x1460ff22  bnez        $v1, . + 4 + (-0xDE << 2)
    ctx->pc = 0x28237Cu;
    {
        const bool branch_taken_0x28237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28237c) {
            ctx->pc = 0x282008u;
            return;
        }
    }
    ctx->pc = 0x282384u;
    // 0x282384: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x282384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282388: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x282388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28238c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28238cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28239c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x28239cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2823a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2823A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2823A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2823A8u;
}
