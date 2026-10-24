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

// Function: entry_00144780
// Address: 0x144780 - 0x1447a8
void entry_00144780_0x144780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144780_0x144780");
#endif

    ctx->pc = 0x144780u;

    // 0x144780: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x144780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x144784: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144788: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144788u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14478c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14478cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14479c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14479cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1447a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1447A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1447A8u;
}
