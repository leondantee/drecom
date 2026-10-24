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

// Function: entry_0030e9cc
// Address: 0x30e9cc - 0x30ea1c
void entry_0030e9cc_0x30e9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e9cc_0x30e9cc");
#endif

    switch (ctx->pc) {
        case 0x30ea04u: goto label_30ea04;
        case 0x30ea10u: goto label_30ea10;
        default: break;
    }

    ctx->pc = 0x30e9ccu;

    // 0x30e9cc: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e9d0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30e9d4: 0x246602c0  addiu       $a2, $v1, 0x2C0
    ctx->pc = 0x30e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x30e9d8: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x30e9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30e9dc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x30e9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x30e9e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x30e9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e9e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30e9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30e9e8: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x30e9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e9ec: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x30e9ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x30e9f0: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x30e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x30e9f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e9f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x30e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e9fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30E9FCu;
    SET_GPR_U32(ctx, 31, 0x30EA04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30E9FCu, 0x30EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA04u;
label_30ea04:
    // 0x30ea04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ea04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ea08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30EA08u;
    SET_GPR_U32(ctx, 31, 0x30EA10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30EA08u, 0x30EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA10u;
label_30ea10:
    // 0x30ea10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ea10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ea14: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30EA14u;
    {
        const bool branch_taken_0x30ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ea14) {
            ctx->pc = 0x30EB08u;
            return;
        }
    }
    ctx->pc = 0x30EA1Cu;
}
