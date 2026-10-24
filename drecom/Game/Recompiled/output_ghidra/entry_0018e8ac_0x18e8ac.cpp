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

// Function: entry_0018e8ac
// Address: 0x18e8ac - 0x18e8f8
void entry_0018e8ac_0x18e8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e8ac_0x18e8ac");
#endif

    switch (ctx->pc) {
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8f4u: goto label_18e8f4;
        default: break;
    }

    ctx->pc = 0x18e8acu;

    // 0x18e8ac: 0x8e43020c  lw          $v1, 0x20C($s2)
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x18e8b0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18e8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18e8b4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18E8B4u;
    {
        const bool branch_taken_0x18e8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8b4) {
            ctx->pc = 0x18E8F8u;
            return;
        }
    }
    ctx->pc = 0x18E8BCu;
    // 0x18e8bc: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18e8c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18e8c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18e8c4: 0xc064444  jal         func_191110
    ctx->pc = 0x18E8C4u;
    SET_GPR_U32(ctx, 31, 0x18E8CCu);
    ctx->pc = 0x191110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191110u, 0x18E8C4u, 0x18E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8CCu;
label_18e8cc:
    // 0x18e8cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18e8d0: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x18e8d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18e8d8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18e8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18e8dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18E8DCu;
    {
        const bool branch_taken_0x18e8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8dc) {
            ctx->pc = 0x18E8F8u;
            return;
        }
    }
    ctx->pc = 0x18E8E4u;
    // 0x18e8e4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x18e8e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x18e8e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e8ec: 0xc064444  jal         func_191110
    ctx->pc = 0x18E8ECu;
    SET_GPR_U32(ctx, 31, 0x18E8F4u);
    ctx->pc = 0x191110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191110u, 0x18E8ECu, 0x18E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E8F4u;
label_18e8f4:
    // 0x18e8f4: 0x0  nop
    ctx->pc = 0x18e8f4u;
    // NOP
    ctx->pc = 0x18e8f8u;
}
