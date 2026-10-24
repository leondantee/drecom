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

// Function: entry_0032d7a0
// Address: 0x32d7a0 - 0x32d7b8
void entry_0032d7a0_0x32d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d7a0_0x32d7a0");
#endif

    switch (ctx->pc) {
        case 0x32d7b4u: goto label_32d7b4;
        default: break;
    }

    ctx->pc = 0x32d7a0u;

    // 0x32d7a0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x32d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x32d7a4: 0x24a41a14  addiu       $a0, $a1, 0x1A14
    ctx->pc = 0x32d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6676));
    // 0x32d7a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32d7a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32d7ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32D7ACu;
    SET_GPR_U32(ctx, 31, 0x32D7B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32D7ACu, 0x32D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7B4u;
label_32d7b4:
    // 0x32d7b4: 0x0  nop
    ctx->pc = 0x32d7b4u;
    // NOP
    ctx->pc = 0x32d7b8u;
}
