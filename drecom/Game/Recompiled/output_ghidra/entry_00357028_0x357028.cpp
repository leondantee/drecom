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

// Function: entry_00357028
// Address: 0x357028 - 0x357064
void entry_00357028_0x357028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357028_0x357028");
#endif

    switch (ctx->pc) {
        case 0x35704cu: goto label_35704c;
        case 0x357058u: goto label_357058;
        default: break;
    }

    ctx->pc = 0x357028u;

    // 0x357028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x357028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35702c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35702Cu;
    {
        const bool branch_taken_0x35702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35702c) {
            ctx->pc = 0x357064u;
            return;
        }
    }
    ctx->pc = 0x357034u;
    // 0x357034: 0x34048400  ori         $a0, $zero, 0x8400
    ctx->pc = 0x357034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    // 0x357038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35703c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x35703cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x357040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357044u;
    SET_GPR_U32(ctx, 31, 0x35704Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357044u, 0x35704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35704Cu;
label_35704c:
    // 0x35704c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35704cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357050u;
    SET_GPR_U32(ctx, 31, 0x357058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357050u, 0x357058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357058u;
label_357058:
    // 0x357058: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357058u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35705c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35705Cu;
    {
        const bool branch_taken_0x35705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35705c) {
            ctx->pc = 0x3570B8u;
            return;
        }
    }
    ctx->pc = 0x357064u;
}
