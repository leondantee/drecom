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

// Function: entry_002e54e4
// Address: 0x2e54e4 - 0x2e54f4
void entry_002e54e4_0x2e54e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e54e4_0x2e54e4");
#endif

    ctx->pc = 0x2e54e4u;

    // 0x2e54e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e54ec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E54ECu;
    SET_GPR_U32(ctx, 31, 0x2E54F4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E54ECu, 0x2E54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54F4u;
}
