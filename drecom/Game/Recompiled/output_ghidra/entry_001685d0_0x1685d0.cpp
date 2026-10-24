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

// Function: entry_001685d0
// Address: 0x1685d0 - 0x1685f0
void entry_001685d0_0x1685d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001685d0_0x1685d0");
#endif

    switch (ctx->pc) {
        case 0x1685ecu: goto label_1685ec;
        default: break;
    }

    ctx->pc = 0x1685d0u;

    // 0x1685d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685d4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1685d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685dc: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1685dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1685e0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1685e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685e4: 0xc05a18c  jal         func_168630
    ctx->pc = 0x1685E4u;
    SET_GPR_U32(ctx, 31, 0x1685ECu);
    ctx->pc = 0x168630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168630u, 0x1685E4u, 0x1685ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685ECu;
label_1685ec:
    // 0x1685ec: 0x0  nop
    ctx->pc = 0x1685ecu;
    // NOP
    ctx->pc = 0x1685f0u;
}
