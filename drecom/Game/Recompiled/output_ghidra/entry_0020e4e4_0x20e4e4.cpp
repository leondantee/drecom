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

// Function: entry_0020e4e4
// Address: 0x20e4e4 - 0x20e504
void entry_0020e4e4_0x20e4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e4e4_0x20e4e4");
#endif

    switch (ctx->pc) {
        case 0x20e4fcu: goto label_20e4fc;
        default: break;
    }

    ctx->pc = 0x20e4e4u;

    // 0x20e4e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e4ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e4f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e4f4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20E4F4u;
    SET_GPR_U32(ctx, 31, 0x20E4FCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20E4F4u, 0x20E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4FCu;
label_20e4fc:
    // 0x20e4fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e500: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20e500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x20e504u;
}
