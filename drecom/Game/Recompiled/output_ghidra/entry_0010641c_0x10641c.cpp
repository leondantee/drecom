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

// Function: entry_0010641c
// Address: 0x10641c - 0x106430
void entry_0010641c_0x10641c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010641c_0x10641c");
#endif

    ctx->pc = 0x10641cu;

    // 0x10641c: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15788)));
    // 0x106420: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106424: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106428: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x106428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10642c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x10642cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x106430u;
}
