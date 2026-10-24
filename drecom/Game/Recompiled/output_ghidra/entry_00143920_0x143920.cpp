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

// Function: entry_00143920
// Address: 0x143920 - 0x14395c
void entry_00143920_0x143920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143920_0x143920");
#endif

    ctx->pc = 0x143920u;

    // 0x143920: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x143920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x143924: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x143924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x143928: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x143928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14392c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x14392cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x143930: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x143930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x143934: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x143934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143938: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x143938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14393c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14393cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x143940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14394c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14394cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143950: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x143950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143954: 0x3e00008  jr          $ra
    ctx->pc = 0x143954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14395Cu;
}
