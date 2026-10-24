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

// Function: caseD_a
// Address: 0x296730 - 0x296768
void caseD_a_0x296730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x296730");
#endif

    ctx->pc = 0x296730u;

    // 0x296730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296734: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296738: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29673c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x29673cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296740: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296744: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29674c: 0xac64699c  sw          $a0, 0x699C($v1)
    ctx->pc = 0x29674cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27036), GPR_U32(ctx, 4));
    // 0x296750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296754: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29675c: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x29675cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296760: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x296760u;
    {
        const bool branch_taken_0x296760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296760) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x296768u;
}
