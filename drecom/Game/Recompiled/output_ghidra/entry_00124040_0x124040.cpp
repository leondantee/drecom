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

// Function: entry_00124040
// Address: 0x124040 - 0x124088
void entry_00124040_0x124040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124040_0x124040");
#endif

    ctx->pc = 0x124040u;

    // 0x124040: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124044: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12404c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x12404cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x124050u;
    {
        const bool branch_taken_0x124050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124050) {
            ctx->pc = 0x124088u;
            return;
        }
    }
    ctx->pc = 0x124058u;
    // 0x124058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12405c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x12405cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124060: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124064: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x124064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x124068: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x124068u;
    {
        const bool branch_taken_0x124068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124068) {
            ctx->pc = 0x124088u;
            return;
        }
    }
    ctx->pc = 0x124070u;
    // 0x124070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124074: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x124074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124078: 0xa0400bd0  sb          $zero, 0xBD0($v0)
    ctx->pc = 0x124078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3024), (uint8_t)GPR_U32(ctx, 0));
    // 0x12407c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124080: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x124080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124084: 0xa0a00ea0  sb          $zero, 0xEA0($a1)
    ctx->pc = 0x124084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3744), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x124088u;
}
