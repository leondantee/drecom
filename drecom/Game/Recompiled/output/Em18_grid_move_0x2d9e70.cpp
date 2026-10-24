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

// Function: Em18_grid_move
// Address: 0x2d9e70 - 0x2da1e0
void Em18_grid_move_0x2d9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_grid_move_0x2d9e70");
#endif

    switch (ctx->pc) {
        case 0x2d9f48u: goto label_2d9f48;
        case 0x2d9facu: goto label_2d9fac;
        case 0x2d9fc4u: goto label_2d9fc4;
        case 0x2d9ffcu: goto label_2d9ffc;
        case 0x2da004u: goto label_2da004;
        case 0x2da034u: goto label_2da034;
        case 0x2da074u: goto label_2da074;
        case 0x2da094u: goto label_2da094;
        case 0x2da0b0u: goto label_2da0b0;
        case 0x2da0c4u: goto label_2da0c4;
        case 0x2da0d8u: goto label_2da0d8;
        case 0x2da0fcu: goto label_2da0fc;
        case 0x2da134u: goto label_2da134;
        case 0x2da14cu: goto label_2da14c;
        case 0x2da170u: goto label_2da170;
        case 0x2da1a8u: goto label_2da1a8;
        case 0x2da1c0u: goto label_2da1c0;
        default: break;
    }

    ctx->pc = 0x2d9e70u;

    // 0x2d9e70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d9e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d9e74: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2d9e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2d9e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9e88: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2d9e8c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9e90: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x2d9e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2d9e94: 0x920200d2  lbu         $v0, 0xD2($s0)
    ctx->pc = 0x2d9e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2d9e98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d9e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9ea0: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2d9ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2d9ea4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9ea8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9eac: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2d9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
    // 0x2d9eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9eb4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2d9eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9eb8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9ebc: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2d9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d9ec0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d9ec4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d9ec8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d9ecc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2d9eccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9ed0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2d9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9ed4: 0x920200d2  lbu         $v0, 0xD2($s0)
    ctx->pc = 0x2d9ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2d9ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9edc: 0xa20200d2  sb          $v0, 0xD2($s0)
    ctx->pc = 0x2d9edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 210), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9ee0: 0x920200d2  lbu         $v0, 0xD2($s0)
    ctx->pc = 0x2d9ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2d9ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9ee8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x2d9ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2d9eec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9EECu;
    {
        const bool branch_taken_0x2d9eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9eec) {
            ctx->pc = 0x2D9EF8u;
            goto label_2d9ef8;
        }
    }
    ctx->pc = 0x2D9EF4u;
    // 0x2d9ef4: 0xa20000d2  sb          $zero, 0xD2($s0)
    ctx->pc = 0x2d9ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 210), (uint8_t)GPR_U32(ctx, 0));
label_2d9ef8:
    // 0x2d9ef8: 0x920200d2  lbu         $v0, 0xD2($s0)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2d9efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d9efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9f04: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2d9f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2d9f08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9f0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9f10: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
    // 0x2d9f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9f18: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2d9f18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9f1c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9f20: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2d9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d9f24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d9f28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d9f2c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d9f30: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9f34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d9f38: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2d9f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9f3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9f40: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x2D9F40u;
    SET_GPR_U32(ctx, 31, 0x2D9F48u);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x2D9F40u, 0x2D9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F48u;
label_2d9f48:
    // 0x2d9f48: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x2d9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9f4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d9f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f54: 0x0  nop
    ctx->pc = 0x2d9f54u;
    // NOP
    // 0x2d9f58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d9f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d9f5c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2d9f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x2d9f60: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x2d9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9f64: 0x3c0244bc  lui         $v0, 0x44BC
    ctx->pc = 0x2d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17596 << 16));
    // 0x2d9f68: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2d9f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f70: 0x0  nop
    ctx->pc = 0x2d9f70u;
    // NOP
    // 0x2d9f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d9f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d9f78: 0x0  nop
    ctx->pc = 0x2d9f78u;
    // NOP
    // 0x2d9f7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9F7Cu;
    {
        const bool branch_taken_0x2d9f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9f7c) {
            ctx->pc = 0x2D9F90u;
            goto label_2d9f90;
        }
    }
    ctx->pc = 0x2D9F84u;
    // 0x2d9f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f88: 0x0  nop
    ctx->pc = 0x2d9f88u;
    // NOP
    // 0x2d9f8c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2d9f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_2d9f90:
    // 0x2d9f90: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9f94: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d9f98: 0x24513520  addiu       $s1, $v0, 0x3520
    ctx->pc = 0x2d9f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2d9f9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9fa0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2d9fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9fa4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D9FA4u;
    SET_GPR_U32(ctx, 31, 0x2D9FACu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D9FACu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FACu) { return; }
    ctx->pc = 0x2D9FACu;
label_2d9fac:
    // 0x2d9fac: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9fb0: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2d9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2d9fb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d9fb8: 0x24450220  addiu       $a1, $v0, 0x220
    ctx->pc = 0x2d9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2d9fbc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2D9FBCu;
    SET_GPR_U32(ctx, 31, 0x2D9FC4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2D9FC4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FC4u) { return; }
    ctx->pc = 0x2D9FC4u;
label_2d9fc4:
    // 0x2d9fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9fcc: 0x0  nop
    ctx->pc = 0x2d9fccu;
    // NOP
    // 0x2d9fd0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2d9fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2d9fd4: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2d9fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2d9fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9fdc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d9fe0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9fe4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d9fe8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d9fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9fec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d9ff0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d9ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d9ff4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2D9FF4u;
    SET_GPR_U32(ctx, 31, 0x2D9FFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2D9FFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D9FFCu) { return; }
    ctx->pc = 0x2D9FFCu;
label_2d9ffc:
    // 0x2d9ffc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9FFCu;
    SET_GPR_U32(ctx, 31, 0x2DA004u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9FFCu, 0x2DA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA004u;
label_2da004:
    // 0x2da004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da008: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2da008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2da00c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da010: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2da010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2da014: 0x24428b30  addiu       $v0, $v0, -0x74D0
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937392));
    // 0x2da018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da01c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2da01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da020: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2da020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da028: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2da028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2da02c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DA02Cu;
    SET_GPR_U32(ctx, 31, 0x2DA034u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DA02Cu, 0x2DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA034u;
label_2da034:
    // 0x2da034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da038: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2da038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2da03c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2da03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2da040: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2da040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2da044: 0x24428b30  addiu       $v0, $v0, -0x74D0
    ctx->pc = 0x2da044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937392));
    // 0x2da048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da04c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2da04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da050: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da054: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da058: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2da058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2da05c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da060: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da064: 0x24443520  addiu       $a0, $v0, 0x3520
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x2da068: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da06c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA06Cu;
    SET_GPR_U32(ctx, 31, 0x2DA074u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA074u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA074u) { return; }
    ctx->pc = 0x2DA074u;
label_2da074:
    // 0x2da074: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x2da074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da078: 0x3c023d00  lui         $v0, 0x3D00
    ctx->pc = 0x2da078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15616 << 16));
    // 0x2da07c: 0x3442adfd  ori         $v0, $v0, 0xADFD
    ctx->pc = 0x2da07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x2da080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da084: 0x0  nop
    ctx->pc = 0x2da084u;
    // NOP
    // 0x2da088: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2da088u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da08c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DA08Cu;
    SET_GPR_U32(ctx, 31, 0x2DA094u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DA08Cu, 0x2DA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA094u;
label_2da094:
    // 0x2da094: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2da094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2da098: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2da098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2da09c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da0a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da0a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0a8: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x2DA0A8u;
    SET_GPR_U32(ctx, 31, 0x2DA0B0u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x2DA0A8u, 0x2DA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0B0u;
label_2da0b0:
    // 0x2da0b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0b8: 0xc60c0064  lwc1        $f12, 0x64($s0)
    ctx->pc = 0x2da0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da0bc: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x2DA0BCu;
    SET_GPR_U32(ctx, 31, 0x2DA0C4u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x2DA0BCu, 0x2DA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0C4u;
label_2da0c4:
    // 0x2da0c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2da0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2da0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da0cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da0d0: 0xc040c00  jal         func_103000
    ctx->pc = 0x2DA0D0u;
    SET_GPR_U32(ctx, 31, 0x2DA0D8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2DA0D8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA0D8u) { return; }
    ctx->pc = 0x2DA0D8u;
label_2da0d8:
    // 0x2da0d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da0dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da0e0: 0x24513390  addiu       $s1, $v0, 0x3390
    ctx->pc = 0x2da0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2da0e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da0e8: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2da0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2da0ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2da0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da0f0: 0x24450210  addiu       $a1, $v0, 0x210
    ctx->pc = 0x2da0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2da0f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DA0F4u;
    SET_GPR_U32(ctx, 31, 0x2DA0FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DA0FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA0FCu) { return; }
    ctx->pc = 0x2DA0FCu;
label_2da0fc:
    // 0x2da0fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da104: 0x0  nop
    ctx->pc = 0x2da104u;
    // NOP
    // 0x2da108: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2da108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2da10c: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2da10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2da110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da114: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2da114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2da118: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da11c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2da120: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da124: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2da124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2da128: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2da128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da12c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DA12Cu;
    SET_GPR_U32(ctx, 31, 0x2DA134u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DA134u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA134u) { return; }
    ctx->pc = 0x2DA134u;
label_2da134:
    // 0x2da134: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da138: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da13c: 0x24443390  addiu       $a0, $v0, 0x3390
    ctx->pc = 0x2da13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x2da140: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2da144: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA144u;
    SET_GPR_U32(ctx, 31, 0x2DA14Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA14Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA14Cu) { return; }
    ctx->pc = 0x2DA14Cu;
label_2da14c:
    // 0x2da14c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da150: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da154: 0x245136b0  addiu       $s1, $v0, 0x36B0
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x2da158: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da15c: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x2da15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x2da160: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da164: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x2da168: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DA168u;
    SET_GPR_U32(ctx, 31, 0x2DA170u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DA170u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA170u) { return; }
    ctx->pc = 0x2DA170u;
label_2da170:
    // 0x2da170: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2da174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da178: 0x0  nop
    ctx->pc = 0x2da178u;
    // NOP
    // 0x2da17c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2da17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2da180: 0x92220143  lbu         $v0, 0x143($s1)
    ctx->pc = 0x2da180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 323)));
    // 0x2da184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2da188: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2da188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2da18c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da190: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2da190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2da194: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2da194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2da198: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2da198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da19c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2da19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2da1a0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DA1A0u;
    SET_GPR_U32(ctx, 31, 0x2DA1A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DA1A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA1A8u) { return; }
    ctx->pc = 0x2DA1A8u;
label_2da1a8:
    // 0x2da1a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2da1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2da1ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2da1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2da1b0: 0x244436b0  addiu       $a0, $v0, 0x36B0
    ctx->pc = 0x2da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x2da1b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2da1b8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2DA1B8u;
    SET_GPR_U32(ctx, 31, 0x2DA1C0u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2DA1C0u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DA1C0u) { return; }
    ctx->pc = 0x2DA1C0u;
label_2da1c0:
    // 0x2da1c0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2da1c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da1c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da1c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da1c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da1d4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2da1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2da1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA1E0u;
}
