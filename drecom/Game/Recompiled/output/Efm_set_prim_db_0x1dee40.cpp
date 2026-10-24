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

// Function: Efm_set_prim_db
// Address: 0x1dee40 - 0x1def4c
void Efm_set_prim_db_0x1dee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Efm_set_prim_db_0x1dee40");
#endif

    switch (ctx->pc) {
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee80u: goto label_1dee80;
        case 0x1deea0u: goto label_1deea0;
        default: break;
    }

    ctx->pc = 0x1dee40u;

    // 0x1dee40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1dee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1dee44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dee48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dee4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dee50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dee54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dee58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dee5c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1dee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1dee60: 0xffa50070  sd          $a1, 0x70($sp)
    ctx->pc = 0x1dee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 5));
    // 0x1dee64: 0xa3a60078  sb          $a2, 0x78($sp)
    ctx->pc = 0x1dee64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x1dee68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dee6c: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x1dee6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dee70: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1dee70u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dee74:
    // 0x1dee74: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x1dee74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1dee78: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1dee78u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dee7c: 0x0  nop
    ctx->pc = 0x1dee7cu;
    // NOP
label_1dee80:
    // 0x1dee80: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x1dee80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1dee84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1dee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dee88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dee88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dee8c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1dee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1dee90: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x1dee90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dee94: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1dee94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1dee98: 0x0  nop
    ctx->pc = 0x1dee98u;
    // NOP
    // 0x1dee9c: 0x0  nop
    ctx->pc = 0x1dee9cu;
    // NOP
label_1deea0:
    // 0x1deea0: 0xdfa40070  ld          $a0, 0x70($sp)
    ctx->pc = 0x1deea0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1deea4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1deea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1deea8: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1deea8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deeac: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x1deeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x1deeb0: 0x433fc  dsll32      $a2, $a0, 15
    ctx->pc = 0x1deeb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1deeb4: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x1deeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x1deeb8: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x1deeb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x1deebc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1deebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1deec0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1deec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1deec4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1deec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1deec8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1deec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1deecc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1deeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1deed0: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x1deed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1deed4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1deed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1deed8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1deed8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1deedc: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1deedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1deee0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1deee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1deee4: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DEEE4u;
    {
        const bool branch_taken_0x1deee4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deee4) {
            ctx->pc = 0x1DEEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1deea0;
        }
    }
    ctx->pc = 0x1DEEECu;
    // 0x1deeec: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x1deeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1deef0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1deef4: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1deef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1deef8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deefc: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1deefcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1def00: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DEF00u;
    {
        const bool branch_taken_0x1def00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def00) {
            ctx->pc = 0x1DEE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee80;
        }
    }
    ctx->pc = 0x1DEF08u;
    // 0x1def08: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x1def08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x1def0c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1def0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1def10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1def14: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1def14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1def18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1def18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1def1c: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1def1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1def20: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1DEF20u;
    {
        const bool branch_taken_0x1def20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def20) {
            ctx->pc = 0x1DEE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dee74;
        }
    }
    ctx->pc = 0x1DEF28u;
    // 0x1def28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1def28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1def2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1def2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1def30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1def30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1def34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1def34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1def38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1def38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1def3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def40: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1def40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1def44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEF4Cu;
}
