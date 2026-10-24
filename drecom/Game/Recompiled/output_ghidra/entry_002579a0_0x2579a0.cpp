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

// Function: entry_002579a0
// Address: 0x2579a0 - 0x257a04
void entry_002579a0_0x2579a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002579a0_0x2579a0");
#endif

    ctx->pc = 0x2579a0u;

    // 0x2579a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579a4: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x2579a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x2579a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2579a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2579ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2579acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2579b0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2579B0u;
    {
        const bool branch_taken_0x2579b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2579b0) {
            ctx->pc = 0x257A04u;
            return;
        }
    }
    ctx->pc = 0x2579B8u;
    // 0x2579b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2579c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2579c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2579c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2579c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2579cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2579d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2579d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2579d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2579dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2579e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579e4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2579e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2579e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2579e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2579ec: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2579ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2579f0: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2579f4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2579f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2579f8: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2579f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2579fc: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2579FCu;
    SET_GPR_U32(ctx, 31, 0x257A04u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2579FCu, 0x257A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A04u;
}
