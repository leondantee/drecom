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

// Function: entry_00258e78
// Address: 0x258e78 - 0x258e90
void entry_00258e78_0x258e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258e78_0x258e78");
#endif

    switch (ctx->pc) {
        case 0x258e8cu: goto label_258e8c;
        default: break;
    }

    ctx->pc = 0x258e78u;

    // 0x258e78: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x258e78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x258e7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258e80: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258e80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258e84: 0xc0963d0  jal         func_258F40
    ctx->pc = 0x258E84u;
    SET_GPR_U32(ctx, 31, 0x258E8Cu);
    ctx->pc = 0x258F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F40u, 0x258E84u, 0x258E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E8Cu;
label_258e8c:
    // 0x258e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258e90u;
}
