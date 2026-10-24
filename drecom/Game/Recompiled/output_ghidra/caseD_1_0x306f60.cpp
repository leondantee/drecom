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

// Function: caseD_1
// Address: 0x306f60 - 0x306fd0
void caseD_1_0x306f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x306f60");
#endif

    switch (ctx->pc) {
        case 0x306f80u: goto label_306f80;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa8u: goto label_306fa8;
        default: break;
    }

    ctx->pc = 0x306f60u;

    // 0x306f60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f64: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x306f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x306f68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x306f6c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x306f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x306f70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306f78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306F78u;
    SET_GPR_U32(ctx, 31, 0x306F80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306F78u, 0x306F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F80u;
label_306f80:
    // 0x306f80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f84: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306F84u;
    SET_GPR_U32(ctx, 31, 0x306F8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306F84u, 0x306F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F8Cu;
label_306f8c:
    // 0x306f8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306f90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306f94: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306F94u;
    SET_GPR_U32(ctx, 31, 0x306F9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306F94u, 0x306F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F9Cu;
label_306f9c:
    // 0x306f9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306fa0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306FA0u;
    SET_GPR_U32(ctx, 31, 0x306FA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306FA0u, 0x306FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FA8u;
label_306fa8:
    // 0x306fa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306fb0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x306FB0u;
    {
        const bool branch_taken_0x306fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fb0) {
            ctx->pc = 0x307120u;
            return;
        }
    }
    ctx->pc = 0x306FB8u;
    // 0x306fb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x306fbc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x306fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x306fc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306fc4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x306fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x306fc8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x306FC8u;
    {
        const bool branch_taken_0x306fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fc8) {
            ctx->pc = 0x307120u;
            return;
        }
    }
    ctx->pc = 0x306FD0u;
}
