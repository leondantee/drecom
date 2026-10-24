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

// Function: entry_0013a1c8
// Address: 0x13a1c8 - 0x13a1ec
void entry_0013a1c8_0x13a1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a1c8_0x13a1c8");
#endif

    ctx->pc = 0x13a1c8u;

    // 0x13a1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1cc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13a1ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a1d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A1D0u;
    {
        const bool branch_taken_0x13a1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1d0) {
            ctx->pc = 0x13A1ECu;
            return;
        }
    }
    ctx->pc = 0x13A1D8u;
    // 0x13a1d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a1dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a1e0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A1E4u;
    {
        const bool branch_taken_0x13a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a1e4) {
            ctx->pc = 0x13A1F8u;
            return;
        }
    }
    ctx->pc = 0x13A1ECu;
}
