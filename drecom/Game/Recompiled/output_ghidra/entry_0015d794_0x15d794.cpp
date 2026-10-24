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

// Function: entry_0015d794
// Address: 0x15d794 - 0x15d7c0
void entry_0015d794_0x15d794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d794_0x15d794");
#endif

    switch (ctx->pc) {
        case 0x15d7b8u: goto label_15d7b8;
        default: break;
    }

    ctx->pc = 0x15d794u;

    // 0x15d794: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d79c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d7a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d7a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7a8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x15d7ac: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15d7b0: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D7B0u;
    SET_GPR_U32(ctx, 31, 0x15D7B8u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D7B0u, 0x15D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7B8u;
label_15d7b8:
    // 0x15d7b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D7B8u;
    {
        const bool branch_taken_0x15d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7b8) {
            ctx->pc = 0x15D7E0u;
            return;
        }
    }
    ctx->pc = 0x15D7C0u;
}
