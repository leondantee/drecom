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

// Function: entry_0033f1c8
// Address: 0x33f1c8 - 0x33f1e0
void entry_0033f1c8_0x33f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f1c8_0x33f1c8");
#endif

    ctx->pc = 0x33f1c8u;

    // 0x33f1c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f1cc: 0x944210a4  lhu         $v0, 0x10A4($v0)
    ctx->pc = 0x33f1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4260)));
    // 0x33f1d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33f1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33f1d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x33f1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33f1d8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x33F1D8u;
    {
        const bool branch_taken_0x33f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f1d8) {
            ctx->pc = 0x33F190u;
            return;
        }
    }
    ctx->pc = 0x33F1E0u;
}
