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

// Function: entry_001f4130
// Address: 0x1f4130 - 0x1f4188
void entry_001f4130_0x1f4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4130_0x1f4130");
#endif

    switch (ctx->pc) {
        case 0x1f4150u: goto label_1f4150;
        default: break;
    }

    ctx->pc = 0x1f4130u;

label_1f4130:
    // 0x1f4130: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4134: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4138: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f4138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f413c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1f413cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4140: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f4144: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1f4148: 0xc096254  jal         func_258950
    ctx->pc = 0x1F4148u;
    SET_GPR_U32(ctx, 31, 0x1F4150u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x1F4148u, 0x1F4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4150u;
label_1f4150:
    // 0x1f4150: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1f4154: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f4158: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F4158u;
    {
        const bool branch_taken_0x1f4158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4158) {
            ctx->pc = 0x1F4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4130;
        }
    }
    ctx->pc = 0x1F4160u;
    // 0x1f4160: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4164: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f4164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f4168: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f416c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f416cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4170u;
    {
        const bool branch_taken_0x1f4170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4170) {
            ctx->pc = 0x1F4188u;
            return;
        }
    }
    ctx->pc = 0x1F4178u;
    // 0x1f4178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f417c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f4180: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f4184: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f4184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1f4188u;
}
