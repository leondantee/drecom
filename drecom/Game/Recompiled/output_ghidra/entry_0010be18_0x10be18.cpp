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

// Function: entry_0010be18
// Address: 0x10be18 - 0x10be34
void entry_0010be18_0x10be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be18_0x10be18");
#endif

    ctx->pc = 0x10be18u;

    // 0x10be18: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x10be1c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x10be1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10be20: 0x72842018  mult1       $a0, $s4, $a0
    ctx->pc = 0x10be20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10be24: 0x26a23990  addiu       $v0, $s5, 0x3990
    ctx->pc = 0x10be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 14736));
    // 0x10be28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10be2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10be30: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x10be30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x10be34u;
}
