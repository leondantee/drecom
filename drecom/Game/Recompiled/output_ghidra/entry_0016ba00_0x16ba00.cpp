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

// Function: entry_0016ba00
// Address: 0x16ba00 - 0x16ba24
void entry_0016ba00_0x16ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba00_0x16ba00");
#endif

    ctx->pc = 0x16ba00u;

    // 0x16ba00: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x16ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ba04: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ba08: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ba0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA0Cu;
    {
        const bool branch_taken_0x16ba0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba0c) {
            ctx->pc = 0x16BA24u;
            return;
        }
    }
    ctx->pc = 0x16BA14u;
    // 0x16ba14: 0x8fb000b4  lw          $s0, 0xB4($sp)
    ctx->pc = 0x16ba14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ba18: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ba1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA1Cu;
    {
        const bool branch_taken_0x16ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba1c) {
            ctx->pc = 0x16BA30u;
            return;
        }
    }
    ctx->pc = 0x16BA24u;
}
