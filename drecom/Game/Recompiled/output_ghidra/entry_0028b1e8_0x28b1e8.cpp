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

// Function: entry_0028b1e8
// Address: 0x28b1e8 - 0x28b228
void entry_0028b1e8_0x28b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b1e8_0x28b1e8");
#endif

    switch (ctx->pc) {
        case 0x28b204u: goto label_28b204;
        case 0x28b214u: goto label_28b214;
        default: break;
    }

    ctx->pc = 0x28b1e8u;

    // 0x28b1e8: 0x24046902  addiu       $a0, $zero, 0x6902
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26882));
    // 0x28b1ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b1ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b1f0: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b1f4: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b1f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b1f8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b1f8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b1fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B1FCu;
    SET_GPR_U32(ctx, 31, 0x28B204u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B1FCu, 0x28B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B204u;
label_28b204:
    // 0x28b204: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b204u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b208: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b20c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B20Cu;
    SET_GPR_U32(ctx, 31, 0x28B214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B20Cu, 0x28B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B214u;
label_28b214:
    // 0x28b214: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x28b214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b21c: 0xac252044  sw          $a1, 0x2044($at)
    ctx->pc = 0x28b21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b220: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28B220u;
    {
        const bool branch_taken_0x28b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b220) {
            ctx->pc = 0x28B290u;
            return;
        }
    }
    ctx->pc = 0x28B228u;
}
