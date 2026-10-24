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

// Function: caseD_7
// Address: 0x1323ec - 0x132470
void caseD_7_0x1323ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1323ec");
#endif

    switch (ctx->pc) {
        case 0x1323fcu: goto label_1323fc;
        case 0x132408u: goto label_132408;
        case 0x132418u: goto label_132418;
        case 0x132424u: goto label_132424;
        default: break;
    }

    ctx->pc = 0x1323ecu;

    // 0x1323ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1323f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1323f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1323f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1323F4u;
    SET_GPR_U32(ctx, 31, 0x1323FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1323F4u, 0x1323FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323FCu;
label_1323fc:
    // 0x1323fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132400: 0xc05cd10  jal         func_173440
    ctx->pc = 0x132400u;
    SET_GPR_U32(ctx, 31, 0x132408u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132400u, 0x132408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132408u;
label_132408:
    // 0x132408: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13240c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13240cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132410: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132410u;
    SET_GPR_U32(ctx, 31, 0x132418u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132410u, 0x132418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132418u;
label_132418:
    // 0x132418: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13241c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13241Cu;
    SET_GPR_U32(ctx, 31, 0x132424u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13241Cu, 0x132424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132424u;
label_132424:
    // 0x132424: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132428: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13242c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13242Cu;
    {
        const bool branch_taken_0x13242c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13242c) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x132434u;
    // 0x132434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x132434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13243c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x13243cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x132440: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132448: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x132448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x13244c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132450: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x132450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x132454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132458: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x132458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x13245c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132460: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x132460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x132464: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x132464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x132468: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x132468u;
    {
        const bool branch_taken_0x132468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132468) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x132470u;
}
