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

// Function: entry_002058c4
// Address: 0x2058c4 - 0x2058e8
void entry_002058c4_0x2058c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002058c4_0x2058c4");
#endif

    switch (ctx->pc) {
        case 0x2058e0u: goto label_2058e0;
        default: break;
    }

    ctx->pc = 0x2058c4u;

    // 0x2058c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2058c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058c8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2058cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2058ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2058d0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2058d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2058d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2058D8u;
    SET_GPR_U32(ctx, 31, 0x2058E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2058D8u, 0x2058E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058E0u;
label_2058e0:
    // 0x2058e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2058e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2058e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2058e8u;
}
