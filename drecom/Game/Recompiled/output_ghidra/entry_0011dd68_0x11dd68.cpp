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

// Function: entry_0011dd68
// Address: 0x11dd68 - 0x11dd80
void entry_0011dd68_0x11dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dd68_0x11dd68");
#endif

    ctx->pc = 0x11dd68u;

    // 0x11dd68: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x11dd68u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11dd6c: 0x1012  mflo        $v0
    ctx->pc = 0x11dd6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11dd70: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x11dd70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11dd78: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x11dd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x11dd7c: 0x0  nop
    ctx->pc = 0x11dd7cu;
    // NOP
    ctx->pc = 0x11dd80u;
}
