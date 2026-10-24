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
// Address: 0x133110 - 0x133170
void caseD_1_0x133110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x133110");
#endif

    switch (ctx->pc) {
        case 0x133120u: goto label_133120;
        case 0x13312cu: goto label_13312c;
        case 0x13313cu: goto label_13313c;
        case 0x133148u: goto label_133148;
        default: break;
    }

    ctx->pc = 0x133110u;

    // 0x133110: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133114: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133118: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133118u;
    SET_GPR_U32(ctx, 31, 0x133120u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133118u, 0x133120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133120u;
label_133120:
    // 0x133120: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133124: 0xc05cd10  jal         func_173440
    ctx->pc = 0x133124u;
    SET_GPR_U32(ctx, 31, 0x13312Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133124u, 0x13312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13312Cu;
label_13312c:
    // 0x13312c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133134: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133134u;
    SET_GPR_U32(ctx, 31, 0x13313Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133134u, 0x13313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13313Cu;
label_13313c:
    // 0x13313c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133140: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133140u;
    SET_GPR_U32(ctx, 31, 0x133148u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133140u, 0x133148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133148u;
label_133148:
    // 0x133148: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13314c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x13314cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x133150: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x133150u;
    {
        const bool branch_taken_0x133150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133150) {
            ctx->pc = 0x1334B4u;
            return;
        }
    }
    ctx->pc = 0x133158u;
    // 0x133158: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13315c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13315cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133164: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x133168: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x133168u;
    {
        const bool branch_taken_0x133168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133168) {
            ctx->pc = 0x1334B4u;
            return;
        }
    }
    ctx->pc = 0x133170u;
}
