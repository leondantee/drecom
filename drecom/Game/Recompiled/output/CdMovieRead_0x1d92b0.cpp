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

// Function: CdMovieRead
// Address: 0x1d92b0 - 0x1d9314
void CdMovieRead_0x1d92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdMovieRead_0x1d92b0");
#endif

    switch (ctx->pc) {
        case 0x1d92f8u: goto label_1d92f8;
        default: break;
    }

    ctx->pc = 0x1d92b0u;

    // 0x1d92b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d92b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d92b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d92b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d92b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d92bc: 0xa7a40020  sh          $a0, 0x20($sp)
    ctx->pc = 0x1d92bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d92c0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d92c4: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x1d92c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d92c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d92c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d92cc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d92d0: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d92d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d92d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d92d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d92d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d92dc: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d92dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d92e0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d92e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d92e8: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d92e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d92ec: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d92ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d92f0: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D92F0u;
    SET_GPR_U32(ctx, 31, 0x1D92F8u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D92F0u, 0x1D92F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92F8u;
label_1d92f8:
    // 0x1d92f8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d92f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d92fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9300: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d9300u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9308: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d930c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9314u;
}
