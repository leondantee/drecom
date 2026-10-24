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

// Function: entry_00258c70
// Address: 0x258c70 - 0x258d1c
void entry_00258c70_0x258c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258c70_0x258c70");
#endif

    ctx->pc = 0x258c70u;

label_258c70:
    // 0x258c70: 0xde300020  ld          $s0, 0x20($s1)
    ctx->pc = 0x258c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x258c74: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x258c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x258c78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x258c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258c7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x258c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x258c80: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x258c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x258c84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x258c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x258c88: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x258c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x258c8c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x258c8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x258c90: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x258c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x258c94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x258c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x258c98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x258c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x258c9c: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x258c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x258ca0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x258ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x258ca4: 0xfe300020  sd          $s0, 0x20($s1)
    ctx->pc = 0x258ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 16));
    // 0x258ca8: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x258ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x258cac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x258cb0: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x258CB0u;
    {
        const bool branch_taken_0x258cb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cb0) {
            ctx->pc = 0x258C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258c70;
        }
    }
    ctx->pc = 0x258CB8u;
    // 0x258cb8: 0x267300c0  addiu       $s3, $s3, 0xC0
    ctx->pc = 0x258cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x258cbc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x258cbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x258cc0: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x258cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x258cc4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258cc8: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x258cc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258ccc: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x258CCCu;
    {
        const bool branch_taken_0x258ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258ccc) {
            ctx->pc = 0x258C50u;
            return;
        }
    }
    ctx->pc = 0x258CD4u;
    // 0x258cd4: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x258cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x258cd8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x258cd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x258cdc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x258cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x258ce0: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258ce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258ce4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258ce8: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x258ce8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258cec: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x258CECu;
    {
        const bool branch_taken_0x258cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cec) {
            ctx->pc = 0x258C48u;
            return;
        }
    }
    ctx->pc = 0x258CF4u;
    // 0x258cf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x258cf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258cf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258cf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258cfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x258cfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258d00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x258d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258d04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d10: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x258d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x258d14: 0x3e00008  jr          $ra
    ctx->pc = 0x258D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D1Cu;
}
