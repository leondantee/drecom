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

// Function: entry_002d2bc0
// Address: 0x2d2bc0 - 0x2d2be0
void entry_002d2bc0_0x2d2bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2bc0_0x2d2bc0");
#endif

    switch (ctx->pc) {
        case 0x2d2bd8u: goto label_2d2bd8;
        default: break;
    }

    ctx->pc = 0x2d2bc0u;

    // 0x2d2bc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2bc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2bc8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d2bcc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2bd0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2D2BD0u;
    SET_GPR_U32(ctx, 31, 0x2D2BD8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2D2BD0u, 0x2D2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2BD8u;
label_2d2bd8:
    // 0x2d2bd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2bdc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2d2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x2d2be0u;
}
