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
// Address: 0x367a7c - 0x367ac4
void caseD_7_0x367a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x367a7c");
#endif

    switch (ctx->pc) {
        case 0x367a8cu: goto label_367a8c;
        case 0x367a9cu: goto label_367a9c;
        case 0x367aa8u: goto label_367aa8;
        default: break;
    }

    ctx->pc = 0x367a7cu;

    // 0x367a7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367a80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367a84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367A84u;
    SET_GPR_U32(ctx, 31, 0x367A8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367A84u, 0x367A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A8Cu;
label_367a8c:
    // 0x367a8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367a90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367a94: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367A94u;
    SET_GPR_U32(ctx, 31, 0x367A9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367A94u, 0x367A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A9Cu;
label_367a9c:
    // 0x367a9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367aa0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367AA0u;
    SET_GPR_U32(ctx, 31, 0x367AA8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367AA0u, 0x367AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AA8u;
label_367aa8:
    // 0x367aa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367aac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367ab0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x367AB0u;
    {
        const bool branch_taken_0x367ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ab0) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x367AB8u;
    // 0x367ab8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x367ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367ac0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x367ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x367ac4u;
}
