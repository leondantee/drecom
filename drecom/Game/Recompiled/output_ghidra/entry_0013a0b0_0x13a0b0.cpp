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

// Function: entry_0013a0b0
// Address: 0x13a0b0 - 0x13a0d4
void entry_0013a0b0_0x13a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a0b0_0x13a0b0");
#endif

    ctx->pc = 0x13a0b0u;

    // 0x13a0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a0b4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a0b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A0B8u;
    {
        const bool branch_taken_0x13a0b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0b8) {
            ctx->pc = 0x13A0D4u;
            return;
        }
    }
    ctx->pc = 0x13A0C0u;
    // 0x13a0c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13a0c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a0c8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x13a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x13a0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A0CCu;
    {
        const bool branch_taken_0x13a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0cc) {
            ctx->pc = 0x13A0E0u;
            return;
        }
    }
    ctx->pc = 0x13A0D4u;
}
