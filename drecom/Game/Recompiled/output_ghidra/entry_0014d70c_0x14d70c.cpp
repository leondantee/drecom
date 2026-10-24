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

// Function: entry_0014d70c
// Address: 0x14d70c - 0x14d748
void entry_0014d70c_0x14d70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d70c_0x14d70c");
#endif

    switch (ctx->pc) {
        case 0x14d71cu: goto label_14d71c;
        case 0x14d728u: goto label_14d728;
        case 0x14d73cu: goto label_14d73c;
        default: break;
    }

    ctx->pc = 0x14d70cu;

    // 0x14d70c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d714: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D714u;
    SET_GPR_U32(ctx, 31, 0x14D71Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D714u, 0x14D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D71Cu;
label_14d71c:
    // 0x14d71c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d720: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D720u;
    SET_GPR_U32(ctx, 31, 0x14D728u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D720u, 0x14D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d730: 0x93858098  lbu         $a1, -0x7F68($gp)
    ctx->pc = 0x14d730u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d734: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D734u;
    SET_GPR_U32(ctx, 31, 0x14D73Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D734u, 0x14D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D73Cu;
label_14d73c:
    // 0x14d73c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d73cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d740: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D740u;
    SET_GPR_U32(ctx, 31, 0x14D748u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D740u, 0x14D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D748u;
}
