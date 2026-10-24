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

// Function: R103_enemy_disp_floor
// Address: 0x271a80 - 0x271ba4
void R103_enemy_disp_floor_0x271a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103_enemy_disp_floor_0x271a80");
#endif

    switch (ctx->pc) {
        case 0x271aacu: goto label_271aac;
        default: break;
    }

    ctx->pc = 0x271a80u;

    // 0x271a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x271a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x271a84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271a90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x271a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x271a94: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x271a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x271a98: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x271a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x271a9c: 0x2472bb48  addiu       $s2, $v1, -0x44B8
    ctx->pc = 0x271a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x271aa0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x271aa0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271aa4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x271AA4u;
    {
        const bool branch_taken_0x271aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271aa4) {
            ctx->pc = 0x271B78u;
            goto label_271b78;
        }
    }
    ctx->pc = 0x271AACu;
label_271aac:
    // 0x271aac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x271aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x271ab0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x271ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x271ab4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x271ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271ab8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271abc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x271abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x271ac0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x271AC0u;
    {
        const bool branch_taken_0x271ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271ac0) {
            ctx->pc = 0x271B70u;
            goto label_271b70;
        }
    }
    ctx->pc = 0x271AC8u;
    // 0x271ac8: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x271ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271acc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271ad0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271ad4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271ad8: 0x2463cb90  addiu       $v1, $v1, -0x3470
    ctx->pc = 0x271ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953872));
    // 0x271adc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271ae0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x271ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271ae8: 0x0  nop
    ctx->pc = 0x271ae8u;
    // NOP
    // 0x271aec: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x271AECu;
    {
        const bool branch_taken_0x271aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x271aec) {
            ctx->pc = 0x271B70u;
            goto label_271b70;
        }
    }
    ctx->pc = 0x271AF4u;
    // 0x271af4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x271af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271af8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271afc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x271b00: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x271b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x271b04: 0x2463cb90  addiu       $v1, $v1, -0x3470
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953872));
    // 0x271b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x271b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x271b0c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x271b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271b10: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x271b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x271b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x271b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271b18: 0x0  nop
    ctx->pc = 0x271b18u;
    // NOP
    // 0x271b1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x271b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271b20: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x271b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271b24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x271b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271b28: 0x0  nop
    ctx->pc = 0x271b28u;
    // NOP
    // 0x271b2c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x271B2Cu;
    {
        const bool branch_taken_0x271b2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271b2c) {
            ctx->pc = 0x271B70u;
            goto label_271b70;
        }
    }
    ctx->pc = 0x271B34u;
    // 0x271b34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x271b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271b3c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271B3Cu;
    {
        const bool branch_taken_0x271b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x271b3c) {
            ctx->pc = 0x271B50u;
            goto label_271b50;
        }
    }
    ctx->pc = 0x271B44u;
    // 0x271b44: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x271b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271b48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x271b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x271b4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x271b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_271b50:
    // 0x271b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271b54: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x271B54u;
    {
        const bool branch_taken_0x271b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271b54) {
            ctx->pc = 0x271B70u;
            goto label_271b70;
        }
    }
    ctx->pc = 0x271B5Cu;
    // 0x271b5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271b60: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x271b64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x271b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x271b68: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x271b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x271b6c: 0x0  nop
    ctx->pc = 0x271b6cu;
    // NOP
label_271b70:
    // 0x271b70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x271b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x271b74: 0x0  nop
    ctx->pc = 0x271b74u;
    // NOP
label_271b78:
    // 0x271b78: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x271b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x271b7c: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x271b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x271b80: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x271b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x271b84: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x271B84u;
    {
        const bool branch_taken_0x271b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271b84) {
            ctx->pc = 0x271AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271aac;
        }
    }
    ctx->pc = 0x271B8Cu;
    // 0x271b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271b98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x271b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x271B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271BA4u;
}
