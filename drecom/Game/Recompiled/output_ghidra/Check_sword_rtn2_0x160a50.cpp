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

// Function: Check_sword_rtn2
// Address: 0x160a50 - 0x160d20
void Check_sword_rtn2_0x160a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_sword_rtn2_0x160a50");
#endif

    switch (ctx->pc) {
        case 0x160b10u: goto label_160b10;
        case 0x160c38u: goto label_160c38;
        default: break;
    }

    ctx->pc = 0x160a50u;

    // 0x160a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160a54: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x160a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x160a58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160a5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160a60: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x160a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x160a64: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x160a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x160a68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x160a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x160a6c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x160a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x160a70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x160a74: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x160a78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160a7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160A7Cu;
    {
        const bool branch_taken_0x160a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160a7c) {
            ctx->pc = 0x160A90u;
            goto label_160a90;
        }
    }
    ctx->pc = 0x160A84u;
    // 0x160a84: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160a84u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160a88: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x160A88u;
    {
        const bool branch_taken_0x160a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a88) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160A90u;
label_160a90:
    // 0x160a90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160a94: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x160a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x160a98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x160a9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160aa0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x160aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160aa4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160aac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ab0: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x160AB0u;
    {
        const bool branch_taken_0x160ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ab0) {
            ctx->pc = 0x160BF4u;
            goto label_160bf4;
        }
    }
    ctx->pc = 0x160AB8u;
    // 0x160ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160abc: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x160ABCu;
    {
        const bool branch_taken_0x160abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160abc) {
            ctx->pc = 0x160BF4u;
            goto label_160bf4;
        }
    }
    ctx->pc = 0x160AC4u;
    // 0x160ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160ac8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160AC8u;
    {
        const bool branch_taken_0x160ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ac8) {
            ctx->pc = 0x160AE0u;
            goto label_160ae0;
        }
    }
    ctx->pc = 0x160AD0u;
    // 0x160ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160AD0u;
    {
        const bool branch_taken_0x160ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad0) {
            ctx->pc = 0x160AE0u;
            goto label_160ae0;
        }
    }
    ctx->pc = 0x160AD8u;
    // 0x160ad8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160D04u;
            goto label_160d04;
        }
    }
    ctx->pc = 0x160AE0u;
label_160ae0:
    // 0x160ae0: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x160ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160ae4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160aec: 0x0  nop
    ctx->pc = 0x160aecu;
    // NOP
    // 0x160af0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
    // 0x160af8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x160AF8u;
    {
        const bool branch_taken_0x160af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160af8) {
            ctx->pc = 0x160BCCu;
            goto label_160bcc;
        }
    }
    ctx->pc = 0x160B00u;
    // 0x160b00: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160b04: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160b08: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160B08u;
    SET_GPR_U32(ctx, 31, 0x160B10u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160B08u, 0x160B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B10u;
label_160b10:
    // 0x160b10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160b14: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160b18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b1c: 0x0  nop
    ctx->pc = 0x160b1cu;
    // NOP
    // 0x160b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160b24: 0x0  nop
    ctx->pc = 0x160b24u;
    // NOP
    // 0x160b28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160B28u;
    {
        const bool branch_taken_0x160b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160b28) {
            ctx->pc = 0x160B44u;
            goto label_160b44;
        }
    }
    ctx->pc = 0x160B30u;
    // 0x160b30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160b38: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160b40: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_160b44:
    // 0x160b44: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160b48: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x160b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x160b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x160b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x160b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b54: 0x0  nop
    ctx->pc = 0x160b54u;
    // NOP
    // 0x160b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160b5c: 0x0  nop
    ctx->pc = 0x160b5cu;
    // NOP
    // 0x160b60: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x160B60u;
    {
        const bool branch_taken_0x160b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160b60) {
            ctx->pc = 0x160BCCu;
            goto label_160bcc;
        }
    }
    ctx->pc = 0x160B68u;
    // 0x160b68: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x160b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x160b6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160b70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160B70u;
    {
        const bool branch_taken_0x160b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b70) {
            ctx->pc = 0x160B9Cu;
            goto label_160b9c;
        }
    }
    ctx->pc = 0x160B78u;
    // 0x160b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160b80: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x160b84: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160b88: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b8c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160b94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160B94u;
    {
        const bool branch_taken_0x160b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b94) {
            ctx->pc = 0x160BC0u;
            goto label_160bc0;
        }
    }
    ctx->pc = 0x160B9Cu;
label_160b9c:
    // 0x160b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ba0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160ba4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x160ba8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160bb0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160bb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160bb8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x160bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160bbc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_160bc0:
    // 0x160bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bc4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x160BC4u;
    {
        const bool branch_taken_0x160bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bc4) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160BCCu;
label_160bcc:
    // 0x160bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bd0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bd4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x160bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160bd8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bdc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160be0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160be4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x160BECu;
    {
        const bool branch_taken_0x160bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bec) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160BF4u;
label_160bf4:
    // 0x160bf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160bf8: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160bfc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x160bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x160c00: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x160C00u;
    {
        const bool branch_taken_0x160c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c00) {
            ctx->pc = 0x160CDCu;
            goto label_160cdc;
        }
    }
    ctx->pc = 0x160C08u;
    // 0x160c08: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x160c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c0c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160c10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c14: 0x0  nop
    ctx->pc = 0x160c14u;
    // NOP
    // 0x160c18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160c18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c1c: 0x0  nop
    ctx->pc = 0x160c1cu;
    // NOP
    // 0x160c20: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x160C20u;
    {
        const bool branch_taken_0x160c20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c20) {
            ctx->pc = 0x160CB8u;
            goto label_160cb8;
        }
    }
    ctx->pc = 0x160C28u;
    // 0x160c28: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160c2c: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160c30: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160C30u;
    SET_GPR_U32(ctx, 31, 0x160C38u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160C30u, 0x160C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C38u;
label_160c38:
    // 0x160c38: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160c3c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c44: 0x0  nop
    ctx->pc = 0x160c44u;
    // NOP
    // 0x160c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c4c: 0x0  nop
    ctx->pc = 0x160c4cu;
    // NOP
    // 0x160c50: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160C50u;
    {
        const bool branch_taken_0x160c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c50) {
            ctx->pc = 0x160C6Cu;
            goto label_160c6c;
        }
    }
    ctx->pc = 0x160C58u;
    // 0x160c58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160c5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160c60: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160c68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_160c6c:
    // 0x160c6c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c70: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x160c74: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x160c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x160c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c7c: 0x0  nop
    ctx->pc = 0x160c7cu;
    // NOP
    // 0x160c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c84: 0x0  nop
    ctx->pc = 0x160c84u;
    // NOP
    // 0x160c88: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x160C88u;
    {
        const bool branch_taken_0x160c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160c88) {
            ctx->pc = 0x160CB8u;
            goto label_160cb8;
        }
    }
    ctx->pc = 0x160C90u;
    // 0x160c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c94: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160c98: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x160c9c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160ca0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ca4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ca8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cb0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x160CB0u;
    {
        const bool branch_taken_0x160cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160cb0) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160CB8u;
label_160cb8:
    // 0x160cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cbc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160cc0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x160cc4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160cc8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ccc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160cd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160CD4u;
    {
        const bool branch_taken_0x160cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160cd4) {
            ctx->pc = 0x160CF8u;
            goto label_160cf8;
        }
    }
    ctx->pc = 0x160CDCu;
label_160cdc:
    // 0x160cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ce0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160ce4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x160ce8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160cec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160cf0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160cf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_160cf8:
    // 0x160cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160cfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160CFCu;
    {
        const bool branch_taken_0x160cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160cfc) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160D04u;
label_160d04:
    // 0x160d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160d08:
    // 0x160d08: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x160d08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160d18: 0x3e00008  jr          $ra
    ctx->pc = 0x160D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D20u;
}
