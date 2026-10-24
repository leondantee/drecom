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

// Function: entry_002df834
// Address: 0x2df834 - 0x2df898
void entry_002df834_0x2df834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df834_0x2df834");
#endif

    switch (ctx->pc) {
        case 0x2df858u: goto label_2df858;
        case 0x2df864u: goto label_2df864;
        case 0x2df874u: goto label_2df874;
        case 0x2df880u: goto label_2df880;
        default: break;
    }

    ctx->pc = 0x2df834u;

    // 0x2df834: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df838: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2df838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2df83c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2df83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2df840: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2df840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2df844: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2df844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2df848: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df850: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF850u;
    SET_GPR_U32(ctx, 31, 0x2DF858u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF850u, 0x2DF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF858u;
label_2df858:
    // 0x2df858: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df85c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF85Cu;
    SET_GPR_U32(ctx, 31, 0x2DF864u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF85Cu, 0x2DF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF864u;
label_2df864:
    // 0x2df864: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df868: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df86c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF86Cu;
    SET_GPR_U32(ctx, 31, 0x2DF874u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF86Cu, 0x2DF874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF874u;
label_2df874:
    // 0x2df874: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df878: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x2DF878u;
    SET_GPR_U32(ctx, 31, 0x2DF880u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x2DF878u, 0x2DF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF880u;
label_2df880:
    // 0x2df880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF880u;
    {
        const bool branch_taken_0x2df880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df880) {
            ctx->pc = 0x2DF898u;
            return;
        }
    }
    ctx->pc = 0x2DF888u;
    // 0x2df888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df88c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df894: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2df898u;
}
