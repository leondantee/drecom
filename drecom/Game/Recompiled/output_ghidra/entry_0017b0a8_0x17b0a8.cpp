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

// Function: entry_0017b0a8
// Address: 0x17b0a8 - 0x17b104
void entry_0017b0a8_0x17b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b0a8_0x17b0a8");
#endif

    switch (ctx->pc) {
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b100u: goto label_17b100;
        default: break;
    }

    ctx->pc = 0x17b0a8u;

    // 0x17b0a8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17B0A8u;
    {
        const bool branch_taken_0x17b0a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b0a8) {
            ctx->pc = 0x17B104u;
            return;
        }
    }
    ctx->pc = 0x17B0B0u;
    // 0x17b0b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17b0b4: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x17b0b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17b0bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17b0c0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b0c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0c4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17b0c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b0c8: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0C8u;
    SET_GPR_U32(ctx, 31, 0x17B0D0u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0C8u, 0x17B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0D0u;
label_17b0d0:
    // 0x17b0d0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17b0d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17b0d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17b0dc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x17b0dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0e0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17b0e4: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0E4u;
    SET_GPR_U32(ctx, 31, 0x17B0ECu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0E4u, 0x17B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0ECu;
label_17b0ec:
    // 0x17b0ec: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17b0f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b0f4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b0f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b0f8: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B0F8u;
    SET_GPR_U32(ctx, 31, 0x17B100u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B0F8u, 0x17B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B100u;
label_17b100:
    // 0x17b100: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17b104u;
}
