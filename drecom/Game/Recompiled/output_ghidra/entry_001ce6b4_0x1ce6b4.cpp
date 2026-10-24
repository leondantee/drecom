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

// Function: entry_001ce6b4
// Address: 0x1ce6b4 - 0x1ce6fc
void entry_001ce6b4_0x1ce6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce6b4_0x1ce6b4");
#endif

    ctx->pc = 0x1ce6b4u;

    // 0x1ce6b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce6b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6c0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce6c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6c8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ce6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce6cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce6d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce6dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ce6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ce6e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce6ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce6f0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce6f4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1CE6F4u;
    {
        const bool branch_taken_0x1ce6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6f4) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE6FCu;
}
