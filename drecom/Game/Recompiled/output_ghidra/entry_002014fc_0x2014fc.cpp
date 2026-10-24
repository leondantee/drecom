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

// Function: entry_002014fc
// Address: 0x2014fc - 0x201518
void entry_002014fc_0x2014fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002014fc_0x2014fc");
#endif

    ctx->pc = 0x2014fcu;

    // 0x2014fc: 0x24034860  addiu       $v1, $zero, 0x4860
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18528));
    // 0x201500: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x201500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x201504: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x201504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x201508: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x20150c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201510: 0xa060485f  sb          $zero, 0x485F($v1)
    ctx->pc = 0x201510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18527), (uint8_t)GPR_U32(ctx, 0));
    // 0x201514: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x201518u;
}
