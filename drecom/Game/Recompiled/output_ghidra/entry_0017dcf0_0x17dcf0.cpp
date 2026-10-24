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

// Function: entry_0017dcf0
// Address: 0x17dcf0 - 0x17dd10
void entry_0017dcf0_0x17dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dcf0_0x17dcf0");
#endif

    switch (ctx->pc) {
        case 0x17dd04u: goto label_17dd04;
        default: break;
    }

    ctx->pc = 0x17dcf0u;

    // 0x17dcf0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x17dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x17dcf4: 0x2444dce0  addiu       $a0, $v0, -0x2320
    ctx->pc = 0x17dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x17dcf8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17dcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17dcfc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x17DCFCu;
    SET_GPR_U32(ctx, 31, 0x17DD04u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x17DCFCu, 0x17DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD04u;
label_17dd04:
    // 0x17dd04: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17dd08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17DD08u;
    {
        const bool branch_taken_0x17dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd08) {
            ctx->pc = 0x17DD24u;
            return;
        }
    }
    ctx->pc = 0x17DD10u;
}
