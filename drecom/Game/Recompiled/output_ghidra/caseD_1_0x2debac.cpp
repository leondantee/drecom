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
// Address: 0x2debac - 0x2dec0c
void caseD_1_0x2debac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2debac");
#endif

    switch (ctx->pc) {
        case 0x2debbcu: goto label_2debbc;
        case 0x2debc8u: goto label_2debc8;
        case 0x2debd8u: goto label_2debd8;
        case 0x2debe4u: goto label_2debe4;
        default: break;
    }

    ctx->pc = 0x2debacu;

    // 0x2debac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2debb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2debb4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DEBB4u;
    SET_GPR_U32(ctx, 31, 0x2DEBBCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DEBB4u, 0x2DEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBBCu;
label_2debbc:
    // 0x2debbc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debc0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DEBC0u;
    SET_GPR_U32(ctx, 31, 0x2DEBC8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DEBC0u, 0x2DEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBC8u;
label_2debc8:
    // 0x2debc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2debccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2debd0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DEBD0u;
    SET_GPR_U32(ctx, 31, 0x2DEBD8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DEBD0u, 0x2DEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBD8u;
label_2debd8:
    // 0x2debd8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debdc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DEBDCu;
    SET_GPR_U32(ctx, 31, 0x2DEBE4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DEBDCu, 0x2DEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBE4u;
label_2debe4:
    // 0x2debe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2debe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debe8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2debe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2debec: 0x10600180  beqz        $v1, . + 4 + (0x180 << 2)
    ctx->pc = 0x2DEBECu;
    {
        const bool branch_taken_0x2debec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2debec) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DEBF4u;
    // 0x2debf4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2debf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2debf8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2debf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2debfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2debfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dec00: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dec00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dec04: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2DEC04u;
    {
        const bool branch_taken_0x2dec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dec04) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DEC0Cu;
}
