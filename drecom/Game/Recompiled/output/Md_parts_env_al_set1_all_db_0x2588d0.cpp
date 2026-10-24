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

// Function: Md_parts_env_al_set1_all_db
// Address: 0x2588d0 - 0x25894c
void Md_parts_env_al_set1_all_db_0x2588d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_al_set1_all_db_0x2588d0");
#endif

    switch (ctx->pc) {
        case 0x2588fcu: goto label_2588fc;
        case 0x258914u: goto label_258914;
        default: break;
    }

    ctx->pc = 0x2588d0u;

    // 0x2588d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2588d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2588d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2588d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2588d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2588d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2588dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2588dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2588e0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2588e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2588e4: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x2588e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x2588e8: 0xa3a60048  sb          $a2, 0x48($sp)
    ctx->pc = 0x2588e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 6));
    // 0x2588ec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2588ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2588f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2588f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2588f4: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x2588f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2588f8: 0x0  nop
    ctx->pc = 0x2588f8u;
    // NOP
label_2588fc:
    // 0x2588fc: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x2588fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258900: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x258900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x258904: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x258904u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258908: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x258908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25890c: 0xc096254  jal         func_258950
    ctx->pc = 0x25890Cu;
    SET_GPR_U32(ctx, 31, 0x258914u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x25890Cu, 0x258914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258914u;
label_258914:
    // 0x258914: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x258914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x258918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x258918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25891c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x25891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x258920: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258924: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258928: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x258928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25892c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x25892Cu;
    {
        const bool branch_taken_0x25892c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25892c) {
            ctx->pc = 0x2588FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2588fc;
        }
    }
    ctx->pc = 0x258934u;
    // 0x258934: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x258934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25893c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25893cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258940: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x258940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x258944: 0x3e00008  jr          $ra
    ctx->pc = 0x258944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25894Cu;
}
