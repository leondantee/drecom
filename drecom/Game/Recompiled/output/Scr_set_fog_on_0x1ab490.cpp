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

// Function: Scr_set_fog_on
// Address: 0x1ab490 - 0x1ab530
void Scr_set_fog_on_0x1ab490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_set_fog_on_0x1ab490");
#endif

    switch (ctx->pc) {
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4f8u: goto label_1ab4f8;
        default: break;
    }

    ctx->pc = 0x1ab490u;

    // 0x1ab490: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ab494: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1ab494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1ab498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ab498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ab49c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab4a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab4ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1ab4b0: 0x24540b10  addiu       $s4, $v0, 0xB10
    ctx->pc = 0x1ab4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x1ab4b4: 0x8e9002d0  lw          $s0, 0x2D0($s4)
    ctx->pc = 0x1ab4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x1ab4b8: 0x8e1100a0  lw          $s1, 0xA0($s0)
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1ab4bc: 0x96820052  lhu         $v0, 0x52($s4)
    ctx->pc = 0x1ab4bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x1ab4c0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1ab4c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1ab4c4:
    // 0x1ab4c4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x1ab4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ab4c8: 0x3242001f  andi        $v0, $s2, 0x1F
    ctx->pc = 0x1ab4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
    // 0x1ab4cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB4CCu;
    {
        const bool branch_taken_0x1ab4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4cc) {
            ctx->pc = 0x1AB4E0u;
            goto label_1ab4e0;
        }
    }
    ctx->pc = 0x1AB4D4u;
    // 0x1ab4d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ab4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ab4d8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ab4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ab4dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ab4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ab4e0:
    // 0x1ab4e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab4e4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab4e8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab4ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab4ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab4f0: 0xc06ad4c  jal         func_1AB530
    ctx->pc = 0x1AB4F0u;
    SET_GPR_U32(ctx, 31, 0x1AB4F8u);
    ctx->pc = 0x1AB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB530u, 0x1AB4F0u, 0x1AB4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4F8u;
label_1ab4f8:
    // 0x1ab4f8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1ab4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1ab4fc: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x1ab4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1ab500: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ab500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ab504: 0x1660ffef  bnez        $s3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1AB504u;
    {
        const bool branch_taken_0x1ab504 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab504) {
            ctx->pc = 0x1AB4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab4c4;
        }
    }
    ctx->pc = 0x1AB50Cu;
    // 0x1ab50c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1ab50cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ab510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ab510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab524: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ab528: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB530u;
}
