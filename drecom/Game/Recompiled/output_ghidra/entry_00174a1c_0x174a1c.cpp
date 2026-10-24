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

// Function: entry_00174a1c
// Address: 0x174a1c - 0x174a48
void entry_00174a1c_0x174a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a1c_0x174a1c");
#endif

    switch (ctx->pc) {
        case 0x174a44u: goto label_174a44;
        default: break;
    }

    ctx->pc = 0x174a1cu;

    // 0x174a1c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x174a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x174a20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x174a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174a24: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x174a28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174a2c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x174a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x174a30: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174a34: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x174a38: 0x344707c0  ori         $a3, $v0, 0x7C0
    ctx->pc = 0x174a38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1984);
    // 0x174a3c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174A3Cu;
    SET_GPR_U32(ctx, 31, 0x174A44u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174A3Cu, 0x174A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A44u;
label_174a44:
    // 0x174a44: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x174a44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x174a48u;
}
