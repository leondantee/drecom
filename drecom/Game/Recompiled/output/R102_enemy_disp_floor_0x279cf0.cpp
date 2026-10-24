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

// Function: R102_enemy_disp_floor
// Address: 0x279cf0 - 0x279e14
void R102_enemy_disp_floor_0x279cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102_enemy_disp_floor_0x279cf0");
#endif

    switch (ctx->pc) {
        case 0x279d1cu: goto label_279d1c;
        default: break;
    }

    ctx->pc = 0x279cf0u;

    // 0x279cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x279cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279d00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x279d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x279d04: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x279d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x279d08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x279d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x279d0c: 0x2472bb48  addiu       $s2, $v1, -0x44B8
    ctx->pc = 0x279d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x279d10: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x279d10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279d14: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x279D14u;
    {
        const bool branch_taken_0x279d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279d14) {
            ctx->pc = 0x279DE8u;
            goto label_279de8;
        }
    }
    ctx->pc = 0x279D1Cu;
label_279d1c:
    // 0x279d1c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x279d20: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x279d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x279d24: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x279d24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279d28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279d2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279d30: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x279D30u;
    {
        const bool branch_taken_0x279d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279d30) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279D38u;
    // 0x279d38: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x279d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279d3c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279d44: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279d48: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x279d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279d50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x279d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279d54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279d58: 0x0  nop
    ctx->pc = 0x279d58u;
    // NOP
    // 0x279d5c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x279D5Cu;
    {
        const bool branch_taken_0x279d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279d5c) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279D64u;
    // 0x279d64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x279d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x279d6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279d70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279d74: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x279d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x279d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279d7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x279d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279d80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x279d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x279d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279d88: 0x0  nop
    ctx->pc = 0x279d88u;
    // NOP
    // 0x279d8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279d90: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x279d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279d94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279d98: 0x0  nop
    ctx->pc = 0x279d98u;
    // NOP
    // 0x279d9c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x279D9Cu;
    {
        const bool branch_taken_0x279d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279d9c) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279DA4u;
    // 0x279da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x279da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279dac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x279DACu;
    {
        const bool branch_taken_0x279dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x279dac) {
            ctx->pc = 0x279DC0u;
            goto label_279dc0;
        }
    }
    ctx->pc = 0x279DB4u;
    // 0x279db4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279db8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x279db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x279dbc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_279dc0:
    // 0x279dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x279dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279dc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279DC4u;
    {
        const bool branch_taken_0x279dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279dc4) {
            ctx->pc = 0x279DE0u;
            goto label_279de0;
        }
    }
    ctx->pc = 0x279DCCu;
    // 0x279dcc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x279dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279dd0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x279dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x279dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x279dd8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x279ddc: 0x0  nop
    ctx->pc = 0x279ddcu;
    // NOP
label_279de0:
    // 0x279de0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x279de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x279de4: 0x0  nop
    ctx->pc = 0x279de4u;
    // NOP
label_279de8:
    // 0x279de8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x279de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x279dec: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x279decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x279df0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x279df4: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x279DF4u;
    {
        const bool branch_taken_0x279df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279df4) {
            ctx->pc = 0x279D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279d1c;
        }
    }
    ctx->pc = 0x279DFCu;
    // 0x279dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x279E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279E14u;
}
