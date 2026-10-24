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

// Function: Sg_ot_init
// Address: 0x1abf20 - 0x1abfd0
void Sg_ot_init_0x1abf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sg_ot_init_0x1abf20");
#endif

    switch (ctx->pc) {
        case 0x1abf38u: goto label_1abf38;
        case 0x1abf80u: goto label_1abf80;
        default: break;
    }

    ctx->pc = 0x1abf20u;

    // 0x1abf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abf24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abf2c: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1abf30: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abf34: 0x24704f50  addiu       $s0, $v1, 0x4F50
    ctx->pc = 0x1abf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20304));
label_1abf38:
    // 0x1abf38: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abf44: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abf44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf48: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abf4c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abf50: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf54: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abf58: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abf58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abf60: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABF60u;
    {
        const bool branch_taken_0x1abf60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf60) {
            ctx->pc = 0x1ABF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf38;
        }
    }
    ctx->pc = 0x1ABF68u;
    // 0x1abf68: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abf6c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf70: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abf74: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abf78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abf7c: 0x24703f40  addiu       $s0, $v1, 0x3F40
    ctx->pc = 0x1abf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16192));
label_1abf80:
    // 0x1abf80: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abf84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abf8c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abf8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abf90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abf94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abf98: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abf9c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abfa0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abfa4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abfa8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABFA8u;
    {
        const bool branch_taken_0x1abfa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abfa8) {
            ctx->pc = 0x1ABF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abf80;
        }
    }
    ctx->pc = 0x1ABFB0u;
    // 0x1abfb0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abfb4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abfb8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abfbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abfc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abfc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1abfc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1abfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABFD0u;
}
