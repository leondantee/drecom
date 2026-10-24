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

// Function: entry_00305634
// Address: 0x305634 - 0x305694
void entry_00305634_0x305634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305634_0x305634");
#endif

    switch (ctx->pc) {
        case 0x305644u: goto label_305644;
        case 0x305650u: goto label_305650;
        case 0x305660u: goto label_305660;
        case 0x30566cu: goto label_30566c;
        default: break;
    }

    ctx->pc = 0x305634u;

    // 0x305634: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305638: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30563c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30563Cu;
    SET_GPR_U32(ctx, 31, 0x305644u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30563Cu, 0x305644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305644u;
label_305644:
    // 0x305644: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305648: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305648u;
    SET_GPR_U32(ctx, 31, 0x305650u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305648u, 0x305650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305650u;
label_305650:
    // 0x305650: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305654: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305658: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305658u;
    SET_GPR_U32(ctx, 31, 0x305660u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305658u, 0x305660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305660u;
label_305660:
    // 0x305660: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305664: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305664u;
    SET_GPR_U32(ctx, 31, 0x30566Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305664u, 0x30566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30566Cu;
label_30566c:
    // 0x30566c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x30566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305670: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305674: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x305674u;
    {
        const bool branch_taken_0x305674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305674) {
            ctx->pc = 0x3058B8u;
            return;
        }
    }
    ctx->pc = 0x30567Cu;
    // 0x30567c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305680: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x305680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x305684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x305684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x305688: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x305688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x30568c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x30568Cu;
    {
        const bool branch_taken_0x30568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30568c) {
            ctx->pc = 0x3058B8u;
            return;
        }
    }
    ctx->pc = 0x305694u;
}
