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

// Function: entry_003181a0
// Address: 0x3181a0 - 0x318200
void entry_003181a0_0x3181a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003181a0_0x3181a0");
#endif

    switch (ctx->pc) {
        case 0x3181c8u: goto label_3181c8;
        default: break;
    }

    ctx->pc = 0x3181a0u;

    // 0x3181a0: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x3181a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3181a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3181a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3181a8: 0x250200e0  addiu       $v0, $t0, 0xE0
    ctx->pc = 0x3181a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x3181ac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3181acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3181b0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x3181b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3181b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3181b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3181b8: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x3181b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x3181bc: 0x2447ae80  addiu       $a3, $v0, -0x5180
    ctx->pc = 0x3181bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x3181c0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3181C0u;
    SET_GPR_U32(ctx, 31, 0x3181C8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3181C0u, 0x3181C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3181C8u;
label_3181c8:
    // 0x3181c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3181c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3181cc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3181CCu;
    {
        const bool branch_taken_0x3181cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181cc) {
            ctx->pc = 0x31823Cu;
            return;
        }
    }
    ctx->pc = 0x3181D4u;
    // 0x3181d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3181d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3181d8: 0x8c861294  lw          $a2, 0x1294($a0)
    ctx->pc = 0x3181d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4756)));
    // 0x3181dc: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3181DCu;
    {
        const bool branch_taken_0x3181dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3181dc) {
            ctx->pc = 0x318200u;
            return;
        }
    }
    ctx->pc = 0x3181E4u;
    // 0x3181e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3181e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3181e8: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x3181e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x3181ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3181ECu;
    {
        const bool branch_taken_0x3181ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3181ec) {
            ctx->pc = 0x318200u;
            return;
        }
    }
    ctx->pc = 0x3181F4u;
    // 0x3181f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3181f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3181fc: 0xac6712a0  sw          $a3, 0x12A0($v1)
    ctx->pc = 0x3181fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 7));
    ctx->pc = 0x318200u;
}
