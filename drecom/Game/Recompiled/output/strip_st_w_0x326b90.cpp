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

// Function: strip_st_w
// Address: 0x326b90 - 0x326fbc
void strip_st_w_0x326b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_st_w_0x326b90");
#endif

    switch (ctx->pc) {
        case 0x326c34u: goto label_326c34;
        case 0x326df4u: goto label_326df4;
        default: break;
    }

    ctx->pc = 0x326b90u;

    // 0x326b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x326b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x326b94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x326b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x326b98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x326b9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x326ba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326ba4: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x326ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x326ba8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326bac: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x326bacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326bb0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x326bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x326bb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326bb8: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x326bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326bbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326bc0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x326bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x326bc4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x326bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x326bc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326bcc: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x326bccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x326bd0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x326bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x326bd4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x326bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x326bd8: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x326BD8u;
    {
        const bool branch_taken_0x326bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326bd8) {
            ctx->pc = 0x326DDCu;
            goto label_326ddc;
        }
    }
    ctx->pc = 0x326BE0u;
    // 0x326be0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326be4: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x326be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x326be8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x326be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326bec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326bf0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x326bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x326bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326bf8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x326bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326bfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326bfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326c00: 0x0  nop
    ctx->pc = 0x326c00u;
    // NOP
    // 0x326c04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x326c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x326c08: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x326c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326c0c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x326c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x326c14: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x326c14u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x326c18: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x326c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x326c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x326c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326c20: 0x0  nop
    ctx->pc = 0x326c20u;
    // NOP
    // 0x326c24: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x326c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x326c28: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x326c28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326c2c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x326C2Cu;
    {
        const bool branch_taken_0x326c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326c2c) {
            ctx->pc = 0x326DB8u;
            goto label_326db8;
        }
    }
    ctx->pc = 0x326C34u;
label_326c34:
    // 0x326c34: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326c38: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326c3c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326c44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326c48: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c54: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326c58: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c5c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c68: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326c6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326c70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326c74: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326c78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326c7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c80: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326c84: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326c88: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326c8c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326c90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326c94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326c98: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326c9c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ca4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ca8: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326cac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326cb0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326cb4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326cb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326cc0: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326cc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326cc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ccc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326cd0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326cd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326cdc: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ce0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x326ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326ce4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326cec: 0x0  nop
    ctx->pc = 0x326cecu;
    // NOP
    // 0x326cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x326cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x326cf4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x326cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x326cf8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326cfc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326d00: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326d08: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326d0c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d10: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d1c: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326d20: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d24: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d28: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d34: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326d38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326d40: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326d44: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d50: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326d54: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x326d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x326d58: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x326d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326d5c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x326d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326d64: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x326d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x326d68: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326d6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d78: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326d7c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d80: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326d84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326d88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326d8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326d90: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326d94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326d98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326d9c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326da0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326da4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326dac: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326db0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x326db4: 0x0  nop
    ctx->pc = 0x326db4u;
    // NOP
label_326db8:
    // 0x326db8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326dbc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x326dbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326dc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326dc8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326dc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326dcc: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x326DCCu;
    {
        const bool branch_taken_0x326dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326dcc) {
            ctx->pc = 0x326C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326c34;
        }
    }
    ctx->pc = 0x326DD4u;
    // 0x326dd4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x326DD4u;
    {
        const bool branch_taken_0x326dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326dd4) {
            ctx->pc = 0x326FA0u;
            goto label_326fa0;
        }
    }
    ctx->pc = 0x326DDCu;
label_326ddc:
    // 0x326ddc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326de0: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x326de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326de4: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x326de4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326de8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x326de8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326dec: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x326DECu;
    {
        const bool branch_taken_0x326dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326dec) {
            ctx->pc = 0x326F80u;
            goto label_326f80;
        }
    }
    ctx->pc = 0x326DF4u;
label_326df4:
    // 0x326df4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326df8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326dfc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e04: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e08: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e0c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326e10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e18: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326e1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326e24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x326e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x326e28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e30: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326e34: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x326e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e38: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e3c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e48: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e4c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e50: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e60: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326e64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326e6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x326e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x326e70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e7c: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326e80: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e84: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326e88: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326e8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e94: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326e98: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x326e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326e9c: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326ea0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ea4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326eac: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326eb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326eb8: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x326eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x326ebc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ec0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ec8: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326ecc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x326eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ed0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326ed4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326edc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ee0: 0xe46005b0  swc1        $f0, 0x5B0($v1)
    ctx->pc = 0x326ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1456), bits); }
    // 0x326ee4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x326ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326ee8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326eec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326ef0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326ef8: 0xe46005b4  swc1        $f0, 0x5B4($v1)
    ctx->pc = 0x326ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1460), bits); }
    // 0x326efc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x326f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x326f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326f04: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x326f08: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x326f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x326f0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326f14: 0xe46005b8  swc1        $f0, 0x5B8($v1)
    ctx->pc = 0x326f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1464), bits); }
    // 0x326f18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x326f1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f20: 0x8c720ac4  lw          $s2, 0xAC4($v1)
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2756)));
    // 0x326f24: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x326f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x326f28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326f2c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x326f2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326f30: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x326F30u;
    {
        const bool branch_taken_0x326f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326f30) {
            ctx->pc = 0x326F70u;
            goto label_326f70;
        }
    }
    ctx->pc = 0x326F38u;
    // 0x326f38: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x326f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x326f3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326f40: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x326f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x326f44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326F44u;
    {
        const bool branch_taken_0x326f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f44) {
            ctx->pc = 0x326F58u;
            goto label_326f58;
        }
    }
    ctx->pc = 0x326F4Cu;
    // 0x326f4c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x326f4cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326F50u;
    {
        const bool branch_taken_0x326f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f50) {
            ctx->pc = 0x326F70u;
            goto label_326f70;
        }
    }
    ctx->pc = 0x326F58u;
label_326f58:
    // 0x326f58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f5c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x326f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x326f60: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x326f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x326f64: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x326f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x326f68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x326F68u;
    {
        const bool branch_taken_0x326f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f68) {
            ctx->pc = 0x326FA0u;
            goto label_326fa0;
        }
    }
    ctx->pc = 0x326F70u;
label_326f70:
    // 0x326f70: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x326f74: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x326f78: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x326f7c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_326f80:
    // 0x326f80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f84: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x326f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326f88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326f90: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326f90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326f94: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x326F94u;
    {
        const bool branch_taken_0x326f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326f94) {
            ctx->pc = 0x326DF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326df4;
        }
    }
    ctx->pc = 0x326F9Cu;
    // 0x326f9c: 0x0  nop
    ctx->pc = 0x326f9cu;
    // NOP
label_326fa0:
    // 0x326fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326fb0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x326fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x326fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x326FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FBCu;
}
