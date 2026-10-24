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

// Function: entry_001cc298
// Address: 0x1cc298 - 0x1cc2e0
void entry_001cc298_0x1cc298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc298_0x1cc298");
#endif

    ctx->pc = 0x1cc298u;

    // 0x1cc298: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc29c: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x1cc29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1cc2a0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC2A0u;
    {
        const bool branch_taken_0x1cc2a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2a0) {
            ctx->pc = 0x1CC2E0u;
            return;
        }
    }
    ctx->pc = 0x1CC2A8u;
    // 0x1cc2a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc2ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cc2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc2b4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1cc2b8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2bc: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cc2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc2c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cc2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc2c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2cc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cc2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc2d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1cc2d8: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x1CC2D8u;
    {
        const bool branch_taken_0x1cc2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2d8) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC2E0u;
}
