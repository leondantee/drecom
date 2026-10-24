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

// Function: entry_0016c890
// Address: 0x16c890 - 0x16c8b4
void entry_0016c890_0x16c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c890_0x16c890");
#endif

    ctx->pc = 0x16c890u;

    // 0x16c890: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x16c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c894: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c898: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c89c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C89Cu;
    {
        const bool branch_taken_0x16c89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c89c) {
            ctx->pc = 0x16C8B4u;
            return;
        }
    }
    ctx->pc = 0x16C8A4u;
    // 0x16c8a4: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c8a8: 0x8fb200d4  lw          $s2, 0xD4($sp)
    ctx->pc = 0x16c8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c8ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C8ACu;
    {
        const bool branch_taken_0x16c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c8ac) {
            ctx->pc = 0x16C8C0u;
            return;
        }
    }
    ctx->pc = 0x16C8B4u;
}
