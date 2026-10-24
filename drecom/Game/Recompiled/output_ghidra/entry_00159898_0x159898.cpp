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

// Function: entry_00159898
// Address: 0x159898 - 0x1598a8
void entry_00159898_0x159898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159898_0x159898");
#endif

    switch (ctx->pc) {
        case 0x1598a0u: goto label_1598a0;
        default: break;
    }

    ctx->pc = 0x159898u;

    // 0x159898: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159898u;
    SET_GPR_U32(ctx, 31, 0x1598A0u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159898u, 0x1598A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598A0u;
label_1598a0:
    // 0x1598a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1598a4: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x1598a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    ctx->pc = 0x1598a8u;
}
