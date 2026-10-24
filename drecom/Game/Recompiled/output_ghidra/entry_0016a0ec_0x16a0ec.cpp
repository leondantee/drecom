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

// Function: entry_0016a0ec
// Address: 0x16a0ec - 0x16a108
void entry_0016a0ec_0x16a0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0ec_0x16a0ec");
#endif

    switch (ctx->pc) {
        case 0x16a0fcu: goto label_16a0fc;
        default: break;
    }

    ctx->pc = 0x16a0ecu;

    // 0x16a0ec: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x16a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a0f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x16a0f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16a0f4: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A0F4u;
    SET_GPR_U32(ctx, 31, 0x16A0FCu);
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A0F4u, 0x16A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0FCu;
label_16a0fc:
    // 0x16a0fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16a100: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x16a100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x16a104: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16a104u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16a108u;
}
