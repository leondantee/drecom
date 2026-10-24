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

// Function: Em1a_dm_ck
// Address: 0x35fc00 - 0x35fecc
void Em1a_dm_ck_0x35fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1a_dm_ck_0x35fc00");
#endif

    switch (ctx->pc) {
        case 0x35fc68u: goto label_35fc68;
        case 0x35fc80u: goto label_35fc80;
        default: break;
    }

    ctx->pc = 0x35fc00u;

    // 0x35fc00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35fc04: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35fc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35fc08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35fc0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35fc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35fc14: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x35fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x35fc18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc1c: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x35fc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35fc20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc24: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x35fc24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x35fc28: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x35FC28u;
    {
        const bool branch_taken_0x35fc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fc28) {
            ctx->pc = 0x35FEB0u;
            goto label_35feb0;
        }
    }
    ctx->pc = 0x35FC30u;
    // 0x35fc30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc34: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35fc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fc38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc3c: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x35fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x35fc40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc44: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x35fc44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x35fc48: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x35fc48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35fc4c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x35fc4cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x35fc50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc58: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x35fc58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35fc5c: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x35fc5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x35fc60: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x35FC60u;
    SET_GPR_U32(ctx, 31, 0x35FC68u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x35FC60u, 0x35FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC68u;
label_35fc68:
    // 0x35fc68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fc70: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x35fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35fc74: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x35fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35fc78: 0xc058f20  jal         func_163C80
    ctx->pc = 0x35FC78u;
    SET_GPR_U32(ctx, 31, 0x35FC80u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x35FC78u, 0x35FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC80u;
label_35fc80:
    // 0x35fc80: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35fc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x35fc84: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x35fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35fc88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35fc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35fc8c: 0x0  nop
    ctx->pc = 0x35fc8cu;
    // NOP
    // 0x35fc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35fc94: 0x0  nop
    ctx->pc = 0x35fc94u;
    // NOP
    // 0x35fc98: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x35FC98u;
    {
        const bool branch_taken_0x35fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35fc98) {
            ctx->pc = 0x35FCB4u;
            goto label_35fcb4;
        }
    }
    ctx->pc = 0x35FCA0u;
    // 0x35fca0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x35fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x35fca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35fca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35fca8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x35fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35fcac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35fcacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35fcb0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x35fcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_35fcb4:
    // 0x35fcb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fcb8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x35fcb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x35fcbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35fcc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35fcc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35fcc4: 0x4610028  bgez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x35FCC4u;
    {
        const bool branch_taken_0x35fcc4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x35fcc4) {
            ctx->pc = 0x35FD68u;
            goto label_35fd68;
        }
    }
    ctx->pc = 0x35FCCCu;
    // 0x35fccc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fcd0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x35fcd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x35fcd4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x35fcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35fcd8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35fcdc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x35FCDCu;
    {
        const bool branch_taken_0x35fcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fcdc) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FCE4u;
    // 0x35fce4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x35fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x35fce8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35FCE8u;
    {
        const bool branch_taken_0x35fce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fce8) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FCF0u;
    // 0x35fcf0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x35fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35fcf4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x35FCF4u;
    {
        const bool branch_taken_0x35fcf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fcf4) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FCFCu;
    // 0x35fcfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x35fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35fd00: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35FD00u;
    {
        const bool branch_taken_0x35fd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd00) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FD08u;
    // 0x35fd08: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x35fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x35fd0c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FD0Cu;
    {
        const bool branch_taken_0x35fd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd0c) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FD14u;
    // 0x35fd14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fd18: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FD18u;
    {
        const bool branch_taken_0x35fd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd18) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FD20u;
    // 0x35fd20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fd24: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FD24u;
    {
        const bool branch_taken_0x35fd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd24) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FD2Cu;
    // 0x35fd2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FD2Cu;
    {
        const bool branch_taken_0x35fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fd2c) {
            ctx->pc = 0x35FD34u;
            goto label_35fd34;
        }
    }
    ctx->pc = 0x35FD34u;
label_35fd34:
    // 0x35fd34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fd38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fd40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fd54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fd58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35fd60: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x35FD60u;
    {
        const bool branch_taken_0x35fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fd60) {
            ctx->pc = 0x35FEB0u;
            goto label_35feb0;
        }
    }
    ctx->pc = 0x35FD68u;
label_35fd68:
    // 0x35fd68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd6c: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x35fd6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x35fd70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd74: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x35fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fd78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fd7c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x35fd7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x35fd80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x35fd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35fd84: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x35fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x35fd88: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x35FD88u;
    {
        const bool branch_taken_0x35fd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd88) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FD90u;
    // 0x35fd90: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x35fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x35fd94: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x35FD94u;
    {
        const bool branch_taken_0x35fd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd94) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FD9Cu;
    // 0x35fd9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x35fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x35fda0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x35FDA0u;
    {
        const bool branch_taken_0x35fda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fda0) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDA8u;
    // 0x35fda8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x35fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x35fdac: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x35FDACu;
    {
        const bool branch_taken_0x35fdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdac) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDB4u;
    // 0x35fdb4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x35fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x35fdb8: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x35FDB8u;
    {
        const bool branch_taken_0x35fdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdb8) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDC0u;
    // 0x35fdc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35fdc4: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x35FDC4u;
    {
        const bool branch_taken_0x35fdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdc4) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDCCu;
    // 0x35fdcc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35fdd0: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x35FDD0u;
    {
        const bool branch_taken_0x35fdd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdd0) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDD8u;
    // 0x35fdd8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x35fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35fddc: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x35FDDCu;
    {
        const bool branch_taken_0x35fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fddc) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDE4u;
    // 0x35fde4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fde8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x35FDE8u;
    {
        const bool branch_taken_0x35fde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fde8) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDF0u;
    // 0x35fdf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fdf4: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x35FDF4u;
    {
        const bool branch_taken_0x35fdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fdf4) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FDFCu;
    // 0x35fdfc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x35fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35fe00: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x35FE00u;
    {
        const bool branch_taken_0x35fe00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe00) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FE08u;
    // 0x35fe08: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x35fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x35fe0c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x35FE0Cu;
    {
        const bool branch_taken_0x35fe0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe0c) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FE14u;
    // 0x35fe14: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x35fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35fe18: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35FE18u;
    {
        const bool branch_taken_0x35fe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe18) {
            ctx->pc = 0x35FE80u;
            goto label_35fe80;
        }
    }
    ctx->pc = 0x35FE20u;
    // 0x35fe20: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x35fe24: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35FE24u;
    {
        const bool branch_taken_0x35fe24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe24) {
            ctx->pc = 0x35FE4Cu;
            goto label_35fe4c;
        }
    }
    ctx->pc = 0x35FE2Cu;
    // 0x35fe2c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x35fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35fe30: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35FE30u;
    {
        const bool branch_taken_0x35fe30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe30) {
            ctx->pc = 0x35FE4Cu;
            goto label_35fe4c;
        }
    }
    ctx->pc = 0x35FE38u;
    // 0x35fe38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fe3c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FE3Cu;
    {
        const bool branch_taken_0x35fe3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fe3c) {
            ctx->pc = 0x35FE4Cu;
            goto label_35fe4c;
        }
    }
    ctx->pc = 0x35FE44u;
    // 0x35fe44: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FE44u;
    {
        const bool branch_taken_0x35fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe44) {
            ctx->pc = 0x35FE4Cu;
            goto label_35fe4c;
        }
    }
    ctx->pc = 0x35FE4Cu;
label_35fe4c:
    // 0x35fe4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fe50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fe54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe5c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35fe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fe64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fe70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35fe78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35FE78u;
    {
        const bool branch_taken_0x35fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe78) {
            ctx->pc = 0x35FEB0u;
            goto label_35feb0;
        }
    }
    ctx->pc = 0x35FE80u;
label_35fe80:
    // 0x35fe80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fe84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fe88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fe90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x35fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fea0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fea4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fea8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35feac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35feb0:
    // 0x35feb0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35feb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35feb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35feb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35feb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35feb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35febc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35febcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fec0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35fec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35fec4: 0x3e00008  jr          $ra
    ctx->pc = 0x35FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FECCu;
}
