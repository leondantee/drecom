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

// Function: entry_0026b72c
// Address: 0x26b72c - 0x26b748
void entry_0026b72c_0x26b72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b72c_0x26b72c");
#endif

    switch (ctx->pc) {
        case 0x26b740u: goto label_26b740;
        default: break;
    }

    ctx->pc = 0x26b72cu;

    // 0x26b72c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b738: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26B738u;
    SET_GPR_U32(ctx, 31, 0x26B740u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26B738u, 0x26B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B740u;
label_26b740:
    // 0x26b740: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26B740u;
    {
        const bool branch_taken_0x26b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b740) {
            ctx->pc = 0x26B778u;
            return;
        }
    }
    ctx->pc = 0x26B748u;
}
