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

// Function: entry_0019b61c
// Address: 0x19b61c - 0x19b63c
void entry_0019b61c_0x19b61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b61c_0x19b61c");
#endif

    switch (ctx->pc) {
        case 0x19b634u: goto label_19b634;
        default: break;
    }

    ctx->pc = 0x19b61cu;

    // 0x19b61c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b620: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b624: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b628: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b62c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B62Cu;
    SET_GPR_U32(ctx, 31, 0x19B634u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B62Cu, 0x19B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B634u;
label_19b634:
    // 0x19b634: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b638: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x19b63cu;
}
