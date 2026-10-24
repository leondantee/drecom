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

// Function: entry_001f4784
// Address: 0x1f4784 - 0x1f47e4
void entry_001f4784_0x1f4784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4784_0x1f4784");
#endif

    switch (ctx->pc) {
        case 0x1f47a4u: goto label_1f47a4;
        default: break;
    }

    ctx->pc = 0x1f4784u;

label_1f4784:
    // 0x1f4784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4788: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f478c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f478cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f4790: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f4790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4794: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4798: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4798u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f479c: 0xc096254  jal         func_258950
    ctx->pc = 0x1F479Cu;
    SET_GPR_U32(ctx, 31, 0x1F47A4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F479Cu, 0x1F47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F47A4u;
label_1f47a4:
    // 0x1f47a4: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f47a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f47a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f47a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f47ac: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F47ACu;
    {
        const bool branch_taken_0x1f47ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f47ac) {
            ctx->pc = 0x1F4784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4784;
        }
    }
    ctx->pc = 0x1F47B4u;
    // 0x1f47b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47b8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f47b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f47bc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f47c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f47c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f47c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F47C4u;
    {
        const bool branch_taken_0x1f47c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f47c4) {
            ctx->pc = 0x1F47E4u;
            return;
        }
    }
    ctx->pc = 0x1F47CCu;
    // 0x1f47cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47d0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f47d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f47d8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f47d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f47dc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F47DCu;
    {
        const bool branch_taken_0x1f47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f47dc) {
            ctx->pc = 0x1F487Cu;
            return;
        }
    }
    ctx->pc = 0x1F47E4u;
}
