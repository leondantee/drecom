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

// Function: entry_0015b374
// Address: 0x15b374 - 0x15b39c
void entry_0015b374_0x15b374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b374_0x15b374");
#endif

    switch (ctx->pc) {
        case 0x15b390u: goto label_15b390;
        default: break;
    }

    ctx->pc = 0x15b374u;

    // 0x15b374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b378: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b37c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b380: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b384: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15b388: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x15B388u;
    SET_GPR_U32(ctx, 31, 0x15B390u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x15B388u, 0x15B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B390u;
label_15b390:
    // 0x15b390: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b394: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x15b39cu;
}
