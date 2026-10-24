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

// Function: entry_0026b748
// Address: 0x26b748 - 0x26b778
void entry_0026b748_0x26b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026b748_0x26b748");
#endif

    switch (ctx->pc) {
        case 0x26b758u: goto label_26b758;
        case 0x26b764u: goto label_26b764;
        default: break;
    }

    ctx->pc = 0x26b748u;

    // 0x26b748: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b74c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b74cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b750: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26B750u;
    SET_GPR_U32(ctx, 31, 0x26B758u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26B750u, 0x26B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B758u;
label_26b758:
    // 0x26b758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b75c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26B75Cu;
    SET_GPR_U32(ctx, 31, 0x26B764u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26B75Cu, 0x26B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B764u;
label_26b764:
    // 0x26b764: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26b764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b768: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b76c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26b76cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26b770: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x26B770u;
    SET_GPR_U32(ctx, 31, 0x26B778u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26B770u, 0x26B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B778u;
}
