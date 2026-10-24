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

// Function: caseD_5
// Address: 0x132a64 - 0x132ac4
void caseD_5_0x132a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x132a64");
#endif

    switch (ctx->pc) {
        case 0x132a74u: goto label_132a74;
        case 0x132a80u: goto label_132a80;
        case 0x132a90u: goto label_132a90;
        case 0x132a9cu: goto label_132a9c;
        default: break;
    }

    ctx->pc = 0x132a64u;

    // 0x132a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a68: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x132a6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132A6Cu;
    SET_GPR_U32(ctx, 31, 0x132A74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132A6Cu, 0x132A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A74u;
label_132a74:
    // 0x132a74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x132A78u;
    SET_GPR_U32(ctx, 31, 0x132A80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132A78u, 0x132A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A80u;
label_132a80:
    // 0x132a80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132a88: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132A88u;
    SET_GPR_U32(ctx, 31, 0x132A90u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132A88u, 0x132A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A90u;
label_132a90:
    // 0x132a90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a94: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132A94u;
    SET_GPR_U32(ctx, 31, 0x132A9Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132A94u, 0x132A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A9Cu;
label_132a9c:
    // 0x132a9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132aa0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132aa4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x132AA4u;
    {
        const bool branch_taken_0x132aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132aa4) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132AACu;
    // 0x132aac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ab0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132ab8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x132ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x132abc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132AC4u;
}
