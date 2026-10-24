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

// Function: entry_0036ce98
// Address: 0x36ce98 - 0x36cf10
void entry_0036ce98_0x36ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ce98_0x36ce98");
#endif

    switch (ctx->pc) {
        case 0x36cea8u: goto label_36cea8;
        case 0x36ceb4u: goto label_36ceb4;
        case 0x36cec4u: goto label_36cec4;
        case 0x36ced0u: goto label_36ced0;
        default: break;
    }

    ctx->pc = 0x36ce98u;

    // 0x36ce98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ce9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ce9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36cea0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36CEA0u;
    SET_GPR_U32(ctx, 31, 0x36CEA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36CEA0u, 0x36CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEA8u;
label_36cea8:
    // 0x36cea8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ceac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36CEACu;
    SET_GPR_U32(ctx, 31, 0x36CEB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36CEACu, 0x36CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEB4u;
label_36ceb4:
    // 0x36ceb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ceb8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36cebc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36CEBCu;
    SET_GPR_U32(ctx, 31, 0x36CEC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36CEBCu, 0x36CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CEC4u;
label_36cec4:
    // 0x36cec4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cec8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x36CEC8u;
    SET_GPR_U32(ctx, 31, 0x36CED0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x36CEC8u, 0x36CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CED0u;
label_36ced0:
    // 0x36ced0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ced4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36ced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36ced8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x36CED8u;
    {
        const bool branch_taken_0x36ced8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ced8) {
            ctx->pc = 0x36CF10u;
            return;
        }
    }
    ctx->pc = 0x36CEE0u;
    // 0x36cee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cee4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cee8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36cee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ceec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36cef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cef4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cefc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36cefcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cf00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cf04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36cf04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cf08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cf0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x36cf10u;
}
