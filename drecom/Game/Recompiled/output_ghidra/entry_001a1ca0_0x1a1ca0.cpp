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

// Function: entry_001a1ca0
// Address: 0x1a1ca0 - 0x1a1ce0
void entry_001a1ca0_0x1a1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ca0_0x1a1ca0");
#endif

    switch (ctx->pc) {
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd8u: goto label_1a1cd8;
        default: break;
    }

    ctx->pc = 0x1a1ca0u;

    // 0x1a1ca0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1ca4: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1ca8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a1ca8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a1cac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1CACu;
    SET_GPR_U32(ctx, 31, 0x1A1CB4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1CACu, 0x1A1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CB4u;
label_1a1cb4:
    // 0x1a1cb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1cb8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1cbc: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1cc0: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a1cc4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1CC4u;
    SET_GPR_U32(ctx, 31, 0x1A1CCCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1CC4u, 0x1A1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CCCu;
label_1a1ccc:
    // 0x1a1ccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1cd0: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1CD0u;
    SET_GPR_U32(ctx, 31, 0x1A1CD8u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1CD0u, 0x1A1CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CD8u;
label_1a1cd8:
    // 0x1a1cd8: 0x1000ff77  b           . + 4 + (-0x89 << 2)
    ctx->pc = 0x1A1CD8u;
    {
        const bool branch_taken_0x1a1cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cd8) {
            ctx->pc = 0x1A1AB8u;
            return;
        }
    }
    ctx->pc = 0x1A1CE0u;
}
