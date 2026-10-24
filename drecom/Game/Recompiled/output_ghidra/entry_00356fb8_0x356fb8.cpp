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

// Function: entry_00356fb8
// Address: 0x356fb8 - 0x356ff8
void entry_00356fb8_0x356fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356fb8_0x356fb8");
#endif

    ctx->pc = 0x356fb8u;

    // 0x356fb8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x356fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x356fbc: 0x1460fea5  bnez        $v1, . + 4 + (-0x15B << 2)
    ctx->pc = 0x356FBCu;
    {
        const bool branch_taken_0x356fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356fbc) {
            ctx->pc = 0x356A54u;
            return;
        }
    }
    ctx->pc = 0x356FC4u;
    // 0x356fc4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x356fc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x356fc8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x356fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x356fcc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x356fccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x356fd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x356fd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x356fd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x356fd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x356fd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356fdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356fec: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x356fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x356ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x356FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356FF8u;
}
