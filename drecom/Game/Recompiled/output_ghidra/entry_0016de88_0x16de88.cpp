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

// Function: entry_0016de88
// Address: 0x16de88 - 0x16dea8
void entry_0016de88_0x16de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de88_0x16de88");
#endif

    switch (ctx->pc) {
        case 0x16de98u: goto label_16de98;
        default: break;
    }

    ctx->pc = 0x16de88u;

    // 0x16de88: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16de8c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16de8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16de90: 0xc05b7c4  jal         func_16DF10
    ctx->pc = 0x16DE90u;
    SET_GPR_U32(ctx, 31, 0x16DE98u);
    ctx->pc = 0x16DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF10u, 0x16DE90u, 0x16DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE98u;
label_16de98:
    // 0x16de98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16de9c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16dea0: 0x7200be28  paddub      $s7, $s0, $zero
    ctx->pc = 0x16dea0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16dea4: 0x0  nop
    ctx->pc = 0x16dea4u;
    // NOP
    ctx->pc = 0x16dea8u;
}
