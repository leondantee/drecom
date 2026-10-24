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

// Function: entry_0020f694
// Address: 0x20f694 - 0x20f6d4
void entry_0020f694_0x20f694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f694_0x20f694");
#endif

    switch (ctx->pc) {
        case 0x20f6d0u: goto label_20f6d0;
        default: break;
    }

    ctx->pc = 0x20f694u;

    // 0x20f694: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f698: 0x85451278  lh          $a1, 0x1278($t2)
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20f69c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20f6a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f6a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20f6a4: 0x24040270  addiu       $a0, $zero, 0x270
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x20f6a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x20F6A8u;
    {
        const bool branch_taken_0x20f6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20f6a8) {
            ctx->pc = 0x20F6D4u;
            return;
        }
    }
    ctx->pc = 0x20F6B0u;
    // 0x20f6b0: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f6b4: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f6b8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x20f6bc: 0x24067811  addiu       $a2, $zero, 0x7811
    ctx->pc = 0x20f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30737));
    // 0x20f6c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f6c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20f6c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20F6C8u;
    SET_GPR_U32(ctx, 31, 0x20F6D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20F6C8u, 0x20F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6D0u;
label_20f6d0:
    // 0x20f6d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20f6d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20f6d4u;
}
