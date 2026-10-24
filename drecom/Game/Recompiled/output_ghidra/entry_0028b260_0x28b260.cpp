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

// Function: entry_0028b260
// Address: 0x28b260 - 0x28b290
void entry_0028b260_0x28b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b260_0x28b260");
#endif

    switch (ctx->pc) {
        case 0x28b278u: goto label_28b278;
        case 0x28b284u: goto label_28b284;
        default: break;
    }

    ctx->pc = 0x28b260u;

    // 0x28b260: 0x24046b02  addiu       $a0, $zero, 0x6B02
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27394));
    // 0x28b264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b268: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b26c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b26cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b270: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B270u;
    SET_GPR_U32(ctx, 31, 0x28B278u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B270u, 0x28B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B278u;
label_28b278:
    // 0x28b278: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b27c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B27Cu;
    SET_GPR_U32(ctx, 31, 0x28B284u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B27Cu, 0x28B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B284u;
label_28b284:
    // 0x28b284: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b284u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b288: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b28c: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    ctx->pc = 0x28b290u;
}
