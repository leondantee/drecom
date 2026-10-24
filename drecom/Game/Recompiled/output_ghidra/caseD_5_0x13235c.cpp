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
// Address: 0x13235c - 0x1323bc
void caseD_5_0x13235c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x13235c");
#endif

    switch (ctx->pc) {
        case 0x13236cu: goto label_13236c;
        case 0x132378u: goto label_132378;
        case 0x132388u: goto label_132388;
        case 0x132394u: goto label_132394;
        default: break;
    }

    ctx->pc = 0x13235cu;

    // 0x13235c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132360: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x132360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x132364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132364u;
    SET_GPR_U32(ctx, 31, 0x13236Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132364u, 0x13236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13236Cu;
label_13236c:
    // 0x13236c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132370: 0xc05cd10  jal         func_173440
    ctx->pc = 0x132370u;
    SET_GPR_U32(ctx, 31, 0x132378u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x132370u, 0x132378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132378u;
label_132378:
    // 0x132378: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13237c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13237cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132380: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x132380u;
    SET_GPR_U32(ctx, 31, 0x132388u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x132380u, 0x132388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132388u;
label_132388:
    // 0x132388: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13238c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13238Cu;
    SET_GPR_U32(ctx, 31, 0x132394u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13238Cu, 0x132394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132394u;
label_132394:
    // 0x132394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132398: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x13239c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x13239Cu;
    {
        const bool branch_taken_0x13239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13239c) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x1323A4u;
    // 0x1323a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1323a8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1323a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1323ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1323acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1323b0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1323b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1323b4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1323B4u;
    {
        const bool branch_taken_0x1323b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323b4) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x1323BCu;
}
