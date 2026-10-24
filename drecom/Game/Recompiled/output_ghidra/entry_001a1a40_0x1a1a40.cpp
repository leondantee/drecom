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

// Function: entry_001a1a40
// Address: 0x1a1a40 - 0x1a1a80
void entry_001a1a40_0x1a1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a40_0x1a1a40");
#endif

    switch (ctx->pc) {
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a78u: goto label_1a1a78;
        default: break;
    }

    ctx->pc = 0x1a1a40u;

    // 0x1a1a40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1a44: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1a48: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1a1a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a1a4c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1a58: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1a5c: 0x2444161c  addiu       $a0, $v0, 0x161C
    ctx->pc = 0x1a1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5660));
    // 0x1a1a60: 0x24650058  addiu       $a1, $v1, 0x58
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x1a1a64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A1A64u;
    SET_GPR_U32(ctx, 31, 0x1A1A6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A1A64u, 0x1A1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A6Cu;
label_1a1a6c:
    // 0x1a1a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1a70: 0xc06750c  jal         func_19D430
    ctx->pc = 0x1A1A70u;
    SET_GPR_U32(ctx, 31, 0x1A1A78u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x1A1A70u, 0x1A1A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A78u;
label_1a1a78:
    // 0x1a1a78: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
    ctx->pc = 0x1A1A78u;
    {
        const bool branch_taken_0x1a1a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a78) {
            ctx->pc = 0x1A17E8u;
            return;
        }
    }
    ctx->pc = 0x1A1A80u;
}
