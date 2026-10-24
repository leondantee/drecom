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

// Function: R102_obj_disp_floor
// Address: 0x279e20 - 0x279f54
void R102_obj_disp_floor_0x279e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102_obj_disp_floor_0x279e20");
#endif

    switch (ctx->pc) {
        case 0x279e48u: goto label_279e48;
        default: break;
    }

    ctx->pc = 0x279e20u;

    // 0x279e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x279e2c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x279e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x279e30: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x279e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x279e34: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279e38: 0x9023e652  lbu         $v1, -0x19AE($at)
    ctx->pc = 0x279e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E652u));
    // 0x279e3c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x279e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x279e40: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x279E40u;
    {
        const bool branch_taken_0x279e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279e40) {
            ctx->pc = 0x279F28u;
            goto label_279f28;
        }
    }
    ctx->pc = 0x279E48u;
label_279e48:
    // 0x279e48: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x279e4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x279e50: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x279e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x279e54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279e58: 0x8c701390  lw          $s0, 0x1390($v1)
    ctx->pc = 0x279e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x279e5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279e60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279e64: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x279E64u;
    {
        const bool branch_taken_0x279e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279e64) {
            ctx->pc = 0x279F20u;
            goto label_279f20;
        }
    }
    ctx->pc = 0x279E6Cu;
    // 0x279e6c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x279e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x279e70: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x279e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279e74: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x279e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x279e78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279e7c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279e80: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279e84: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x279e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x279e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279e8c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x279e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279e90: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x279e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279e94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x279e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279e98: 0x0  nop
    ctx->pc = 0x279e98u;
    // NOP
    // 0x279e9c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x279E9Cu;
    {
        const bool branch_taken_0x279e9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279e9c) {
            ctx->pc = 0x279F20u;
            goto label_279f20;
        }
    }
    ctx->pc = 0x279EA4u;
    // 0x279ea4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279ea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x279ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x279eac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279eb0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279eb4: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x279eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x279eb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279ebc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x279ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ec0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x279ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x279ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279ec8: 0x0  nop
    ctx->pc = 0x279ec8u;
    // NOP
    // 0x279ecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279eccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279ed0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x279ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ed4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279ed8: 0x0  nop
    ctx->pc = 0x279ed8u;
    // NOP
    // 0x279edc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x279EDCu;
    {
        const bool branch_taken_0x279edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279edc) {
            ctx->pc = 0x279F20u;
            goto label_279f20;
        }
    }
    ctx->pc = 0x279EE4u;
    // 0x279ee4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x279ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279ee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279eec: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x279EECu;
    {
        const bool branch_taken_0x279eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x279eec) {
            ctx->pc = 0x279F00u;
            goto label_279f00;
        }
    }
    ctx->pc = 0x279EF4u;
    // 0x279ef4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279ef8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x279ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x279efc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_279f00:
    // 0x279f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x279f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279f04: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279F04u;
    {
        const bool branch_taken_0x279f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f04) {
            ctx->pc = 0x279F20u;
            goto label_279f20;
        }
    }
    ctx->pc = 0x279F0Cu;
    // 0x279f0c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x279f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279f10: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x279f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x279f14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x279f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x279f18: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x279f1c: 0x0  nop
    ctx->pc = 0x279f1cu;
    // NOP
label_279f20:
    // 0x279f20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x279f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x279f24: 0x0  nop
    ctx->pc = 0x279f24u;
    // NOP
label_279f28:
    // 0x279f28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279f2c: 0x9023e651  lbu         $v1, -0x19AF($at)
    ctx->pc = 0x279f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E651u));
    // 0x279f30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x279f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x279f34: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x279f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x279f38: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x279F38u;
    {
        const bool branch_taken_0x279f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279f38) {
            ctx->pc = 0x279E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279e48;
        }
    }
    ctx->pc = 0x279F40u;
    // 0x279f40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279f44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279f48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x279F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F54u;
}
