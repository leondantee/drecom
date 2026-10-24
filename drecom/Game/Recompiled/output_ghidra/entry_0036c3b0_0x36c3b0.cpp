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

// Function: entry_0036c3b0
// Address: 0x36c3b0 - 0x36c3e0
void entry_0036c3b0_0x36c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c3b0_0x36c3b0");
#endif

    switch (ctx->pc) {
        case 0x36c3d0u: goto label_36c3d0;
        default: break;
    }

    ctx->pc = 0x36c3b0u;

    // 0x36c3b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x36c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36c3bc: 0x24065a05  addiu       $a2, $zero, 0x5A05
    ctx->pc = 0x36c3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23045));
    // 0x36c3c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c3c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36c3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36c3c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36C3C8u;
    SET_GPR_U32(ctx, 31, 0x36C3D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36C3C8u, 0x36C3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3D0u;
label_36c3d0:
    // 0x36c3d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36c3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36c3d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c3dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36c3e0u;
}
