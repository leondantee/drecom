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

// Function: entry_001799b4
// Address: 0x1799b4 - 0x1799d8
void entry_001799b4_0x1799b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001799b4_0x1799b4");
#endif

    ctx->pc = 0x1799b4u;

    // 0x1799b4: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1799b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1799b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1799bc: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1799bcu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1799c0: 0x0  nop
    ctx->pc = 0x1799c0u;
    // NOP
    // 0x1799c4: 0x0  nop
    ctx->pc = 0x1799c4u;
    // NOP
    // 0x1799c8: 0xa812  mflo        $s5
    ctx->pc = 0x1799c8u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1799cc: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1799ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1799d0: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1799d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1799d4: 0x0  nop
    ctx->pc = 0x1799d4u;
    // NOP
    ctx->pc = 0x1799d8u;
}
