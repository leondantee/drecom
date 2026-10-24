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

// Function: entry_00341b6c
// Address: 0x341b6c - 0x341ba8
void entry_00341b6c_0x341b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341b6c_0x341b6c");
#endif

    ctx->pc = 0x341b6cu;

    // 0x341b6c: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x341b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x341b70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341B70u;
    {
        const bool branch_taken_0x341b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b70) {
            ctx->pc = 0x341BA8u;
            return;
        }
    }
    ctx->pc = 0x341B78u;
    // 0x341b78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341b7c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x341b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x341b80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x341b84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341b88: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x341b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x341b90: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x341b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x341b98: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341b9c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x341b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x341ba0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341ba4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x341ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x341ba8u;
}
