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

// Function: entry_0026fbc4
// Address: 0x26fbc4 - 0x26fbe4
void entry_0026fbc4_0x26fbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fbc4_0x26fbc4");
#endif

    switch (ctx->pc) {
        case 0x26fbd8u: goto label_26fbd8;
        default: break;
    }

    ctx->pc = 0x26fbc4u;

    // 0x26fbc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fbc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fbc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fbcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fbccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fbd0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26FBD0u;
    SET_GPR_U32(ctx, 31, 0x26FBD8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26FBD0u, 0x26FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBD8u;
label_26fbd8:
    // 0x26fbd8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fbd8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26fbdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26FBDCu;
    {
        const bool branch_taken_0x26fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fbdc) {
            ctx->pc = 0x26FC20u;
            return;
        }
    }
    ctx->pc = 0x26FBE4u;
}
