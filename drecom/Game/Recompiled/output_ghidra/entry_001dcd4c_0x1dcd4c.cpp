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

// Function: entry_001dcd4c
// Address: 0x1dcd4c - 0x1dcd74
void entry_001dcd4c_0x1dcd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcd4c_0x1dcd4c");
#endif

    switch (ctx->pc) {
        case 0x1dcd58u: goto label_1dcd58;
        default: break;
    }

    ctx->pc = 0x1dcd4cu;

    // 0x1dcd4c: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x1dcd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcd50: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DCD50u;
    SET_GPR_U32(ctx, 31, 0x1DCD58u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DCD50u, 0x1DCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD58u;
label_1dcd58:
    // 0x1dcd58: 0xa7a2017e  sh          $v0, 0x17E($sp)
    ctx->pc = 0x1dcd58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dcd5c: 0x97a6017e  lhu         $a2, 0x17E($sp)
    ctx->pc = 0x1dcd5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1dcd60: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x1dcd60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1dcd64: 0xa7a7017e  sh          $a3, 0x17E($sp)
    ctx->pc = 0x1dcd64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 382), (uint16_t)GPR_U32(ctx, 7));
    // 0x1dcd68: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dcd6c: 0x8c560058  lw          $s6, 0x58($v0)
    ctx->pc = 0x1dcd6cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dcd70: 0x0  nop
    ctx->pc = 0x1dcd70u;
    // NOP
    ctx->pc = 0x1dcd74u;
}
