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

// Function: entry_00296024
// Address: 0x296024 - 0x29605c
void entry_00296024_0x296024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296024_0x296024");
#endif

    ctx->pc = 0x296024u;

    // 0x296024: 0xae006998  sw          $zero, 0x6998($s0)
    ctx->pc = 0x296024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 27032), GPR_U32(ctx, 0));
    // 0x296028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29602c: 0xa20369e0  sb          $v1, 0x69E0($s0)
    ctx->pc = 0x29602cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27104), (uint8_t)GPR_U32(ctx, 3));
    // 0x296030: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296034: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x296034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80C9E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80C9E8u, _value); } while (0);
    // 0x296038: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x296038u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29603c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29603cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296040: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x296040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29604c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29604cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296050: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x296054: 0x3e00008  jr          $ra
    ctx->pc = 0x296054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29605Cu;
}
