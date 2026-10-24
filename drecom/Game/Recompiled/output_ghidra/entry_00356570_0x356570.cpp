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

// Function: entry_00356570
// Address: 0x356570 - 0x3565c0
void entry_00356570_0x356570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356570_0x356570");
#endif

    switch (ctx->pc) {
        case 0x3565b0u: goto label_3565b0;
        case 0x3565bcu: goto label_3565bc;
        default: break;
    }

    ctx->pc = 0x356570u;

    // 0x356570: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x356570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x356574: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x356574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x356578: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x356578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35657c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x35657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x356580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356584: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x356584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x356588: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x356588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x35658c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35658cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356590: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x356590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x356594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356598: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x356598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x35659c: 0x24041722  addiu       $a0, $zero, 0x1722
    ctx->pc = 0x35659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5922));
    // 0x3565a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3565a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3565a4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x3565a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3565a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3565A8u;
    SET_GPR_U32(ctx, 31, 0x3565B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3565A8u, 0x3565B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565B0u;
label_3565b0:
    // 0x3565b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3565b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3565b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3565B4u;
    SET_GPR_U32(ctx, 31, 0x3565BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3565B4u, 0x3565BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3565BCu;
label_3565bc:
    // 0x3565bc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3565bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3565c0u;
}
