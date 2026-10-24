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

// Function: entry_0020bf48
// Address: 0x20bf48 - 0x20bf60
void entry_0020bf48_0x20bf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bf48_0x20bf48");
#endif

    switch (ctx->pc) {
        case 0x20bf5cu: goto label_20bf5c;
        default: break;
    }

    ctx->pc = 0x20bf48u;

    // 0x20bf48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20bf4c: 0x2444a2a0  addiu       $a0, $v0, -0x5D60
    ctx->pc = 0x20bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20bf50: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20bf54: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20BF54u;
    SET_GPR_U32(ctx, 31, 0x20BF5Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20BF54u, 0x20BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF5Cu;
label_20bf5c:
    // 0x20bf5c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->pc = 0x20bf60u;
}
