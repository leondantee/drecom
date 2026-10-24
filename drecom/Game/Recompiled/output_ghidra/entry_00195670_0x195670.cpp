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

// Function: entry_00195670
// Address: 0x195670 - 0x195698
void entry_00195670_0x195670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195670_0x195670");
#endif

    ctx->pc = 0x195670u;

    // 0x195670: 0x9203034d  lbu         $v1, 0x34D($s0)
    ctx->pc = 0x195670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 845)));
    // 0x195674: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195678: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19567c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19567Cu;
    {
        const bool branch_taken_0x19567c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19567c) {
            ctx->pc = 0x195698u;
            return;
        }
    }
    ctx->pc = 0x195684u;
    // 0x195684: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195688: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19568c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19568Cu;
    {
        const bool branch_taken_0x19568c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19568c) {
            ctx->pc = 0x1956D8u;
            return;
        }
    }
    ctx->pc = 0x195694u;
    // 0x195694: 0x0  nop
    ctx->pc = 0x195694u;
    // NOP
    ctx->pc = 0x195698u;
}
