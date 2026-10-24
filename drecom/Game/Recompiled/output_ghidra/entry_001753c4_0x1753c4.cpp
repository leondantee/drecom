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

// Function: entry_001753c4
// Address: 0x1753c4 - 0x1753f4
void entry_001753c4_0x1753c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001753c4_0x1753c4");
#endif

    ctx->pc = 0x1753c4u;

    // 0x1753c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1753cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1753ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1753d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1753d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1753d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1753e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1753e4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1753e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1753ec: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1753ECu;
    SET_GPR_U32(ctx, 31, 0x1753F4u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1753ECu, 0x1753F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753F4u;
}
