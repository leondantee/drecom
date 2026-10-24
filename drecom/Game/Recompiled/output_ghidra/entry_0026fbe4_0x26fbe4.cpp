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

// Function: entry_0026fbe4
// Address: 0x26fbe4 - 0x26fc20
void entry_0026fbe4_0x26fbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026fbe4_0x26fbe4");
#endif

    switch (ctx->pc) {
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc1cu: goto label_26fc1c;
        default: break;
    }

    ctx->pc = 0x26fbe4u;

    // 0x26fbe4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fbe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fbe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fbec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26FBECu;
    SET_GPR_U32(ctx, 31, 0x26FBF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26FBECu, 0x26FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBF4u;
label_26fbf4:
    // 0x26fbf4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fbf4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26fbf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fbfc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26FBFCu;
    SET_GPR_U32(ctx, 31, 0x26FC04u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26FBFCu, 0x26FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC04u;
label_26fc04:
    // 0x26fc04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26fc08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26fc08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26fc0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26fc10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26fc10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26fc14: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x26FC14u;
    SET_GPR_U32(ctx, 31, 0x26FC1Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26FC14u, 0x26FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC1Cu;
label_26fc1c:
    // 0x26fc1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26fc1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x26fc20u;
}
