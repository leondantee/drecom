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

// Function: entry_0020e5b8
// Address: 0x20e5b8 - 0x20e5e8
void entry_0020e5b8_0x20e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e5b8_0x20e5b8");
#endif

    switch (ctx->pc) {
        case 0x20e5d8u: goto label_20e5d8;
        default: break;
    }

    ctx->pc = 0x20e5b8u;

    // 0x20e5b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5c0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e5c4: 0x24066428  addiu       $a2, $zero, 0x6428
    ctx->pc = 0x20e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25640));
    // 0x20e5c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e5cc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e5d0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E5D0u;
    SET_GPR_U32(ctx, 31, 0x20E5D8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E5D0u, 0x20E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5D8u;
label_20e5d8:
    // 0x20e5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e5e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e5e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20e5e8u;
}
