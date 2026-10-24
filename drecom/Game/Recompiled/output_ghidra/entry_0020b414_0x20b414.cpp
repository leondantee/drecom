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

// Function: entry_0020b414
// Address: 0x20b414 - 0x20b43c
void entry_0020b414_0x20b414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b414_0x20b414");
#endif

    ctx->pc = 0x20b414u;

    // 0x20b414: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b418: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b41c: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x20b420: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b424: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B424u;
    {
        const bool branch_taken_0x20b424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b424) {
            ctx->pc = 0x20B43Cu;
            return;
        }
    }
    ctx->pc = 0x20B42Cu;
    // 0x20b42c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b430: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b434: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b438: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20b438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    ctx->pc = 0x20b43cu;
}
