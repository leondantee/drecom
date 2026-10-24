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

// Function: caseD_3
// Address: 0x1487c4 - 0x148828
void caseD_3_0x1487c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1487c4");
#endif

    switch (ctx->pc) {
        case 0x1487e8u: goto label_1487e8;
        case 0x1487f4u: goto label_1487f4;
        case 0x148808u: goto label_148808;
        case 0x148814u: goto label_148814;
        default: break;
    }

    ctx->pc = 0x1487c4u;

    // 0x1487c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1487cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1487d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1487d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1487d4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1487d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1487d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1487dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1487e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1487E0u;
    SET_GPR_U32(ctx, 31, 0x1487E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1487E0u, 0x1487E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E8u;
label_1487e8:
    // 0x1487e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1487ECu;
    SET_GPR_U32(ctx, 31, 0x1487F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1487ECu, 0x1487F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F4u;
label_1487f4:
    // 0x1487f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1487f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1487f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1487fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x148800: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x148800u;
    SET_GPR_U32(ctx, 31, 0x148808u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x148800u, 0x148808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148808u;
label_148808:
    // 0x148808: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14880c: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x14880Cu;
    SET_GPR_U32(ctx, 31, 0x148814u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x14880Cu, 0x148814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148814u;
label_148814:
    // 0x148814: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x148814u;
    {
        const bool branch_taken_0x148814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148814) {
            ctx->pc = 0x148828u;
            return;
        }
    }
    ctx->pc = 0x14881Cu;
    // 0x14881c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x148820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148824: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x148824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x148828u;
}
