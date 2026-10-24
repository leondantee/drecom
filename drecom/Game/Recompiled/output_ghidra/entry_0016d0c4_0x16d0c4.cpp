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

// Function: entry_0016d0c4
// Address: 0x16d0c4 - 0x16d0e8
void entry_0016d0c4_0x16d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0c4_0x16d0c4");
#endif

    ctx->pc = 0x16d0c4u;

    // 0x16d0c4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d0c8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d0cc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d0d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D0D0u;
    {
        const bool branch_taken_0x16d0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0d0) {
            ctx->pc = 0x16D0E8u;
            return;
        }
    }
    ctx->pc = 0x16D0D8u;
    // 0x16d0d8: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d0dc: 0x8fb200d4  lw          $s2, 0xD4($sp)
    ctx->pc = 0x16d0dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d0e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D0E0u;
    {
        const bool branch_taken_0x16d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0e0) {
            ctx->pc = 0x16D0F4u;
            return;
        }
    }
    ctx->pc = 0x16D0E8u;
}
