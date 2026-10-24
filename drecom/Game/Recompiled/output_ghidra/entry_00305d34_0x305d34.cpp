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

// Function: entry_00305d34
// Address: 0x305d34 - 0x305dac
void entry_00305d34_0x305d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305d34_0x305d34");
#endif

    switch (ctx->pc) {
        case 0x305d44u: goto label_305d44;
        case 0x305d50u: goto label_305d50;
        case 0x305d60u: goto label_305d60;
        case 0x305d6cu: goto label_305d6c;
        default: break;
    }

    ctx->pc = 0x305d34u;

    // 0x305d34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305d38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305D3Cu;
    SET_GPR_U32(ctx, 31, 0x305D44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305D3Cu, 0x305D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D44u;
label_305d44:
    // 0x305d44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305D48u;
    SET_GPR_U32(ctx, 31, 0x305D50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305D48u, 0x305D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D50u;
label_305d50:
    // 0x305d50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d58: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305D58u;
    SET_GPR_U32(ctx, 31, 0x305D60u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305D58u, 0x305D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D60u;
label_305d60:
    // 0x305d60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d64: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305D64u;
    SET_GPR_U32(ctx, 31, 0x305D6Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305D64u, 0x305D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D6Cu;
label_305d6c:
    // 0x305d6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305d74: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305D74u;
    {
        const bool branch_taken_0x305d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d74) {
            ctx->pc = 0x305DACu;
            return;
        }
    }
    ctx->pc = 0x305D7Cu;
    // 0x305d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305d8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305d94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305d98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305d9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305da0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305da4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x305da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305da8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x305dacu;
}
