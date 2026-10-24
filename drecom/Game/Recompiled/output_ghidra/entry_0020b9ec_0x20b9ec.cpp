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

// Function: entry_0020b9ec
// Address: 0x20b9ec - 0x20ba14
void entry_0020b9ec_0x20b9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b9ec_0x20b9ec");
#endif

    ctx->pc = 0x20b9ecu;

    // 0x20b9ec: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x20b9ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20b9f0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20b9f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20b9f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20b9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b9f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20b9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b9fc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20b9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ba00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ba00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ba04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ba04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ba08: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x20ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA14u;
}
