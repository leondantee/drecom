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
// Address: 0x13a75c - 0x13a790
void caseD_5_0x13a75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x13a75c");
#endif

    switch (ctx->pc) {
        case 0x13a768u: goto label_13a768;
        default: break;
    }

    ctx->pc = 0x13a75cu;

    // 0x13a75c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x13a75cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a760: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x13A760u;
    SET_GPR_U32(ctx, 31, 0x13A768u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x13A760u, 0x13A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A768u;
label_13a768:
    // 0x13a768: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a76c: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x13a76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x13a770: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x13A770u;
    {
        const bool branch_taken_0x13a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a770) {
            ctx->pc = 0x13AC60u;
            return;
        }
    }
    ctx->pc = 0x13A778u;
    // 0x13a778: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a77c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13a780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a784: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x13a788: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x13A788u;
    {
        const bool branch_taken_0x13a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a788) {
            ctx->pc = 0x13AC60u;
            return;
        }
    }
    ctx->pc = 0x13A790u;
}
