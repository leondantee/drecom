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

// Function: entry_0012bab0
// Address: 0x12bab0 - 0x12bae8
void entry_0012bab0_0x12bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bab0_0x12bab0");
#endif

    ctx->pc = 0x12bab0u;

    // 0x12bab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bab4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bab8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12bab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12babc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x12babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12bac0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bac4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bacc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12baccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bad4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12badc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12badcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12bae0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12BB48u;
            return;
        }
    }
    ctx->pc = 0x12BAE8u;
}
