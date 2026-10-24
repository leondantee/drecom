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

// Function: entry_00167c60
// Address: 0x167c60 - 0x167c80
void entry_00167c60_0x167c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c60_0x167c60");
#endif

    switch (ctx->pc) {
        case 0x167c7cu: goto label_167c7c;
        default: break;
    }

    ctx->pc = 0x167c60u;

    // 0x167c60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c64: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167c68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167c6c: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x167c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x167c70: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x167c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x167c74: 0xc059f30  jal         func_167CC0
    ctx->pc = 0x167C74u;
    SET_GPR_U32(ctx, 31, 0x167C7Cu);
    ctx->pc = 0x167CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167CC0u, 0x167C74u, 0x167C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
    ctx->pc = 0x167c80u;
}
