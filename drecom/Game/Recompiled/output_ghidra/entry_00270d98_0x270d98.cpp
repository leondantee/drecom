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

// Function: entry_00270d98
// Address: 0x270d98 - 0x270dd4
void entry_00270d98_0x270d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270d98_0x270d98");
#endif

    switch (ctx->pc) {
        case 0x270da8u: goto label_270da8;
        case 0x270db4u: goto label_270db4;
        case 0x270dc8u: goto label_270dc8;
        default: break;
    }

    ctx->pc = 0x270d98u;

    // 0x270d98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x270d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270da0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270DA0u;
    SET_GPR_U32(ctx, 31, 0x270DA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270DA0u, 0x270DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DA8u;
label_270da8:
    // 0x270da8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x270DACu;
    SET_GPR_U32(ctx, 31, 0x270DB4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x270DACu, 0x270DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DB4u;
label_270db4:
    // 0x270db4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270db8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270dbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270dbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270dc0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x270DC0u;
    SET_GPR_U32(ctx, 31, 0x270DC8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x270DC0u, 0x270DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DC8u;
label_270dc8:
    // 0x270dc8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270dcc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x270DCCu;
    SET_GPR_U32(ctx, 31, 0x270DD4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x270DCCu, 0x270DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270DD4u;
}
