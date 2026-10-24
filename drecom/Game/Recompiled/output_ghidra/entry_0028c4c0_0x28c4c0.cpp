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

// Function: entry_0028c4c0
// Address: 0x28c4c0 - 0x28c504
void entry_0028c4c0_0x28c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c4c0_0x28c4c0");
#endif

    switch (ctx->pc) {
        case 0x28c4e8u: goto label_28c4e8;
        case 0x28c500u: goto label_28c500;
        default: break;
    }

    ctx->pc = 0x28c4c0u;

    // 0x28c4c0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c4c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c4c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c4cc: 0x1471000d  bne         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x28C4CCu;
    {
        const bool branch_taken_0x28c4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x28c4cc) {
            ctx->pc = 0x28C504u;
            return;
        }
    }
    ctx->pc = 0x28C4D4u;
    // 0x28c4d4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x28c4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c4d8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28c4d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28c4dc: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28c4dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28c4e0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4E0u;
    SET_GPR_U32(ctx, 31, 0x28C4E8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4E0u, 0x28C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4E8u;
label_28c4e8:
    // 0x28c4e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c4e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c4f0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c4f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c4f4: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c4f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c4f8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4F8u;
    SET_GPR_U32(ctx, 31, 0x28C500u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4F8u, 0x28C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C500u;
label_28c500:
    // 0x28c500: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28c504u;
}
