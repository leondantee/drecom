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

// Function: entry_00103f60
// Address: 0x103f60 - 0x103f74
void entry_00103f60_0x103f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103f60_0x103f60");
#endif

    ctx->pc = 0x103f60u;

    // 0x103f60: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f64: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103f68: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f6c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103f70: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x103f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x103f74u;
}
