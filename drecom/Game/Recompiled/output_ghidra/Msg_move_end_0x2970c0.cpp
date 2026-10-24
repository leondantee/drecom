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

// Function: Msg_move_end
// Address: 0x2970c0 - 0x297104
void Msg_move_end_0x2970c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Msg_move_end_0x2970c0");
#endif

    ctx->pc = 0x2970c0u;

    // 0x2970c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2970c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2970c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2970c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2970c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2970c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2970cc: 0xa06069e0  sb          $zero, 0x69E0($v1)
    ctx->pc = 0x2970ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27104), (uint8_t)GPR_U32(ctx, 0));
    // 0x2970d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2970d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2970d4: 0x8c23ca00  lw          $v1, -0x3600($at)
    ctx->pc = 0x2970d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80CA00u));
    // 0x2970d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2970D8u;
    {
        const bool branch_taken_0x2970d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2970d8) {
            ctx->pc = 0x2970F8u;
            goto label_2970f8;
        }
    }
    ctx->pc = 0x2970E0u;
    // 0x2970e0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2970e4: 0xac20ca00  sw          $zero, -0x3600($at)
    ctx->pc = 0x2970e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x80CA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80CA00u, _value); } while (0);
    // 0x2970e8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2970e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2970ec: 0x8c23ca08  lw          $v1, -0x35F8($at)
    ctx->pc = 0x2970ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80CA08u));
    // 0x2970f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2970f4: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x2970f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
label_2970f8:
    // 0x2970f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2970f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2970fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2970FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297104u;
}
