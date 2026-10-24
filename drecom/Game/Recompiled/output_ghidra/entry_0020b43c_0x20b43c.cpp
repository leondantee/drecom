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

// Function: entry_0020b43c
// Address: 0x20b43c - 0x20b464
void entry_0020b43c_0x20b43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b43c_0x20b43c");
#endif

    ctx->pc = 0x20b43cu;

    // 0x20b43c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b440: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b444: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20b448: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b44c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B44Cu;
    {
        const bool branch_taken_0x20b44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b44c) {
            ctx->pc = 0x20B464u;
            return;
        }
    }
    ctx->pc = 0x20B454u;
    // 0x20b454: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b458: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b45c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b460: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20b460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    ctx->pc = 0x20b464u;
}
