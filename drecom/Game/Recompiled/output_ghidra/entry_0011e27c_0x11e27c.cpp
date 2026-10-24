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

// Function: entry_0011e27c
// Address: 0x11e27c - 0x11e290
void entry_0011e27c_0x11e27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e27c_0x11e27c");
#endif

    ctx->pc = 0x11e27cu;

    // 0x11e27c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x11e27cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11e280: 0x1012  mflo        $v0
    ctx->pc = 0x11e280u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11e284: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11e284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e288: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11e28c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x11e28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x11e290u;
}
