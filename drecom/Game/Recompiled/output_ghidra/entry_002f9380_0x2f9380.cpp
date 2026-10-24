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

// Function: entry_002f9380
// Address: 0x2f9380 - 0x2f939c
void entry_002f9380_0x2f9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9380_0x2f9380");
#endif

    switch (ctx->pc) {
        case 0x2f9398u: goto label_2f9398;
        default: break;
    }

    ctx->pc = 0x2f9380u;

    // 0x2f9380: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2f9380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f9384: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9384u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9388: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2f9388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f938c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f938cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9390: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9390u;
    SET_GPR_U32(ctx, 31, 0x2F9398u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9390u, 0x2F9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9398u;
label_2f9398:
    // 0x2f9398: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f9398u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f939cu;
}
