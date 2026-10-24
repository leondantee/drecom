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

// Function: entry_001004e4
// Address: 0x1004e4 - 0x100500
void entry_001004e4_0x1004e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004e4_0x1004e4");
#endif

    ctx->pc = 0x1004e4u;

    // 0x1004e4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1004e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1004e8: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1004e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1004ec: 0x1012  mflo        $v0
    ctx->pc = 0x1004ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1004f0: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1004f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1004f4: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1004f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1004f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1004fc: 0x64e30290  daddiu      $v1, $a3, 0x290
    ctx->pc = 0x1004fcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)656);
    ctx->pc = 0x100500u;
}
