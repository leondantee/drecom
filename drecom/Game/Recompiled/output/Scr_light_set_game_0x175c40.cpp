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

// Function: Scr_light_set_game
// Address: 0x175c40 - 0x175cc8
void Scr_light_set_game_0x175c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_light_set_game_0x175c40");
#endif

    switch (ctx->pc) {
        case 0x175c6cu: goto label_175c6c;
        case 0x175c94u: goto label_175c94;
        default: break;
    }

    ctx->pc = 0x175c40u;

    // 0x175c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175c44: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x175c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x175c48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175c4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175c58: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x175c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x175c5c: 0x24730b10  addiu       $s3, $v1, 0xB10
    ctx->pc = 0x175c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x175c60: 0x8e7002d0  lw          $s0, 0x2D0($s3)
    ctx->pc = 0x175c60u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x175c64: 0x96630052  lhu         $v1, 0x52($s3)
    ctx->pc = 0x175c64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x175c68: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x175c68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_175c6c:
    // 0x175c6c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x175c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175c70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x175c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175c74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x175c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x175c78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x175C78u;
    {
        const bool branch_taken_0x175c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c78) {
            ctx->pc = 0x175C98u;
            goto label_175c98;
        }
    }
    ctx->pc = 0x175C80u;
    // 0x175c80: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x175c80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x175c84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x175c84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x175c88: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x175c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x175c8c: 0xc05d734  jal         func_175CD0
    ctx->pc = 0x175C8Cu;
    SET_GPR_U32(ctx, 31, 0x175C94u);
    ctx->pc = 0x175CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175CD0u, 0x175C8Cu, 0x175C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175C94u;
label_175c94:
    // 0x175c94: 0x0  nop
    ctx->pc = 0x175c94u;
    // NOP
label_175c98:
    // 0x175c98: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x175c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x175c9c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x175c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x175ca0: 0x1640fff2  bnez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x175CA0u;
    {
        const bool branch_taken_0x175ca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x175ca0) {
            ctx->pc = 0x175C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175c6c;
        }
    }
    ctx->pc = 0x175CA8u;
    // 0x175ca8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x175ca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175cac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175cb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175cbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x175cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x175cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x175CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175CC8u;
}
