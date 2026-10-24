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

// Function: entry_00225a94
// Address: 0x225a94 - 0x225ae0
void entry_00225a94_0x225a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225a94_0x225a94");
#endif

    ctx->pc = 0x225a94u;

    // 0x225a94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x225a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x225a98: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x225a9c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x225a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x225aa0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x225aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x225aa4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225aa8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AE0u;
            return;
        }
    }
    ctx->pc = 0x225AB0u;
    // 0x225ab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ab4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ab8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225abc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x225abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x225ac0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ac4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x225ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x225ac8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225acc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x225accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x225ad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ad4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x225ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225ad8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225adc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x225ae0u;
}
