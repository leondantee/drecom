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

// Function: Get_zoom_view
// Address: 0x188b00 - 0x188f74
void Get_zoom_view_0x188b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_zoom_view_0x188b00");
#endif

    switch (ctx->pc) {
        case 0x188b74u: goto label_188b74;
        case 0x188ba0u: goto label_188ba0;
        case 0x188bb4u: goto label_188bb4;
        case 0x188be8u: goto label_188be8;
        case 0x188bfcu: goto label_188bfc;
        case 0x188c10u: goto label_188c10;
        case 0x188c44u: goto label_188c44;
        case 0x188c68u: goto label_188c68;
        case 0x188c7cu: goto label_188c7c;
        case 0x188cb0u: goto label_188cb0;
        case 0x188cc4u: goto label_188cc4;
        case 0x188cd8u: goto label_188cd8;
        case 0x188e1cu: goto label_188e1c;
        case 0x188f38u: goto label_188f38;
        default: break;
    }

    ctx->pc = 0x188b00u;

    // 0x188b00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x188b04: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x188b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x188b08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x188b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x188b0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x188b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x188b10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x188b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188b14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188b20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188b24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188b2c: 0x8c330af0  lw          $s3, 0xAF0($at)
    ctx->pc = 0x188b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x188b30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188b34: 0x8c360af8  lw          $s6, 0xAF8($at)
    ctx->pc = 0x188b34u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x5D0AF8u));
    // 0x188b38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x188b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x188b3c: 0x2454dbc0  addiu       $s4, $v0, -0x2440
    ctx->pc = 0x188b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x188b40: 0x938280b0  lbu         $v0, -0x7F50($gp)
    ctx->pc = 0x188b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x188b44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x188b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188b48: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x188b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x188b4c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x188b50: 0x24426db0  addiu       $v0, $v0, 0x6DB0
    ctx->pc = 0x188b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28080));
    // 0x188b54: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x188b54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188b58: 0x8e9513e8  lw          $s5, 0x13E8($s4)
    ctx->pc = 0x188b58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 5096)));
    // 0x188b5c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x188b5cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188b60: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x188b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x188b64: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x188b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188b68: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x188b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x188b6c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188B6Cu;
    SET_GPR_U32(ctx, 31, 0x188B74u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188B74u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188B74u) { return; }
    ctx->pc = 0x188B74u;
label_188b74:
    // 0x188b74: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x188b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188b78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x188b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x188b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188b80: 0x0  nop
    ctx->pc = 0x188b80u;
    // NOP
    // 0x188b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188b88: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x188b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x188b8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x188b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188b90: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188b94: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x188b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188b98: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188B98u;
    SET_GPR_U32(ctx, 31, 0x188BA0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188BA0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BA0u) { return; }
    ctx->pc = 0x188BA0u;
label_188ba0:
    // 0x188ba0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188ba4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x188ba8: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x188ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188bac: 0xc040c60  jal         func_103180
    ctx->pc = 0x188BACu;
    SET_GPR_U32(ctx, 31, 0x188BB4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188BB4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BB4u) { return; }
    ctx->pc = 0x188BB4u;
label_188bb4:
    // 0x188bb4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x188bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188bbc: 0x0  nop
    ctx->pc = 0x188bbcu;
    // NOP
    // 0x188bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188bc4: 0x0  nop
    ctx->pc = 0x188bc4u;
    // NOP
    // 0x188bc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188BC8u;
    {
        const bool branch_taken_0x188bc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188bc8) {
            ctx->pc = 0x188BD8u;
            goto label_188bd8;
        }
    }
    ctx->pc = 0x188BD0u;
    // 0x188bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188bd4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188bd8:
    // 0x188bd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bdc: 0x26850120  addiu       $a1, $s4, 0x120
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
    // 0x188be0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188BE0u;
    SET_GPR_U32(ctx, 31, 0x188BE8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188BE8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BE8u) { return; }
    ctx->pc = 0x188BE8u;
label_188be8:
    // 0x188be8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bec: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188bf0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188bf4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188BF4u;
    SET_GPR_U32(ctx, 31, 0x188BFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188BFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188BFCu) { return; }
    ctx->pc = 0x188BFCu;
label_188bfc:
    // 0x188bfc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188c00: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x188c04: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x188c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188c08: 0xc040c60  jal         func_103180
    ctx->pc = 0x188C08u;
    SET_GPR_U32(ctx, 31, 0x188C10u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188C10u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C10u) { return; }
    ctx->pc = 0x188C10u;
label_188c10:
    // 0x188c10: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x188c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188c18: 0x0  nop
    ctx->pc = 0x188c18u;
    // NOP
    // 0x188c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c20: 0x0  nop
    ctx->pc = 0x188c20u;
    // NOP
    // 0x188c24: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188C24u;
    {
        const bool branch_taken_0x188c24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c24) {
            ctx->pc = 0x188C34u;
            goto label_188c34;
        }
    }
    ctx->pc = 0x188C2Cu;
    // 0x188c2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c30: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188c30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188c34:
    // 0x188c34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c38: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x188c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x188c3c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188C3Cu;
    SET_GPR_U32(ctx, 31, 0x188C44u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188C44u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C44u) { return; }
    ctx->pc = 0x188C44u;
label_188c44:
    // 0x188c44: 0xc6a111e4  lwc1        $f1, 0x11E4($s5)
    ctx->pc = 0x188c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c48: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x188c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188c50: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x188c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x188c54: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c58: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188c5c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c60: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188C60u;
    SET_GPR_U32(ctx, 31, 0x188C68u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188C68u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C68u) { return; }
    ctx->pc = 0x188C68u;
label_188c68:
    // 0x188c68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x188c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x188c70: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x188c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188c74: 0xc040c60  jal         func_103180
    ctx->pc = 0x188C74u;
    SET_GPR_U32(ctx, 31, 0x188C7Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188C7Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188C7Cu) { return; }
    ctx->pc = 0x188C7Cu;
label_188c7c:
    // 0x188c7c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x188c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188c84: 0x0  nop
    ctx->pc = 0x188c84u;
    // NOP
    // 0x188c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188c8c: 0x0  nop
    ctx->pc = 0x188c8cu;
    // NOP
    // 0x188c90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188C90u;
    {
        const bool branch_taken_0x188c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188c90) {
            ctx->pc = 0x188CA0u;
            goto label_188ca0;
        }
    }
    ctx->pc = 0x188C98u;
    // 0x188c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188c9c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188c9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188ca0:
    // 0x188ca0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188ca4: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x188ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x188ca8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x188CA8u;
    SET_GPR_U32(ctx, 31, 0x188CB0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x188CB0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CB0u) { return; }
    ctx->pc = 0x188CB0u;
label_188cb0:
    // 0x188cb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cb4: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x188cb8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cbc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x188CBCu;
    SET_GPR_U32(ctx, 31, 0x188CC4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x188CC4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CC4u) { return; }
    ctx->pc = 0x188CC4u;
label_188cc4:
    // 0x188cc4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188cc8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x188cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x188ccc: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x188cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188cd0: 0xc040c60  jal         func_103180
    ctx->pc = 0x188CD0u;
    SET_GPR_U32(ctx, 31, 0x188CD8u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x188CD8u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x188CD8u) { return; }
    ctx->pc = 0x188CD8u;
label_188cd8:
    // 0x188cd8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x188cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188cdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ce0: 0x0  nop
    ctx->pc = 0x188ce0u;
    // NOP
    // 0x188ce4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ce8: 0x0  nop
    ctx->pc = 0x188ce8u;
    // NOP
    // 0x188cec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x188CECu;
    {
        const bool branch_taken_0x188cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188cec) {
            ctx->pc = 0x188CFCu;
            goto label_188cfc;
        }
    }
    ctx->pc = 0x188CF4u;
    // 0x188cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188cf8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188cfc:
    // 0x188cfc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x188CFCu;
    {
        const bool branch_taken_0x188cfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cfc) {
            ctx->pc = 0x188D10u;
            goto label_188d10;
        }
    }
    ctx->pc = 0x188D04u;
    // 0x188d04: 0xc6c00180  lwc1        $f0, 0x180($s6)
    ctx->pc = 0x188d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188d08: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x188D08u;
    {
        const bool branch_taken_0x188d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d08) {
            ctx->pc = 0x188F44u;
            goto label_188f44;
        }
    }
    ctx->pc = 0x188D10u;
label_188d10:
    // 0x188d10: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d18: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x188d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d1c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d24: 0x0  nop
    ctx->pc = 0x188d24u;
    // NOP
    // 0x188d28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x188d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x188d34: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d3c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x188d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d40: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d48: 0x0  nop
    ctx->pc = 0x188d48u;
    // NOP
    // 0x188d4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d50: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d54: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x188d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x188d58: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d60: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x188d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d64: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d6c: 0x0  nop
    ctx->pc = 0x188d6cu;
    // NOP
    // 0x188d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d78: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x188d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x188d7c: 0x3c023ee0  lui         $v0, 0x3EE0
    ctx->pc = 0x188d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16096 << 16));
    // 0x188d80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188d84: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x188d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188d88: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188d90: 0x0  nop
    ctx->pc = 0x188d90u;
    // NOP
    // 0x188d94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188d98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188d9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x188d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x188da0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x188da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188da4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188dac: 0x0  nop
    ctx->pc = 0x188dacu;
    // NOP
    // 0x188db0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188db4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x188db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x188db8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x188db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dbc: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188dc4: 0x0  nop
    ctx->pc = 0x188dc4u;
    // NOP
    // 0x188dc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188dcc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x188dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x188dd0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x188dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dd4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ddc: 0x0  nop
    ctx->pc = 0x188ddcu;
    // NOP
    // 0x188de0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188de4: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x188de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x188de8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x188de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188dec: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x188df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188df4: 0x0  nop
    ctx->pc = 0x188df4u;
    // NOP
    // 0x188df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188dfc: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x188dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x188e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e04: 0x0  nop
    ctx->pc = 0x188e04u;
    // NOP
    // 0x188e08: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188e0c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x188e0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188e10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x188e10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x188e14: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x188E14u;
    {
        const bool branch_taken_0x188e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e14) {
            ctx->pc = 0x188F18u;
            goto label_188f18;
        }
    }
    ctx->pc = 0x188E1Cu;
label_188e1c:
    // 0x188e1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e24: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x188e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e2c: 0x0  nop
    ctx->pc = 0x188e2cu;
    // NOP
    // 0x188e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188e34: 0x0  nop
    ctx->pc = 0x188e34u;
    // NOP
    // 0x188e38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x188E38u;
    {
        const bool branch_taken_0x188e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188e38) {
            ctx->pc = 0x188E60u;
            goto label_188e60;
        }
    }
    ctx->pc = 0x188E40u;
    // 0x188e40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e44: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x188e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188e4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e50: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x188e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188e58: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x188e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x188e5c: 0x0  nop
    ctx->pc = 0x188e5cu;
    // NOP
label_188e60:
    // 0x188e60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e68: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x188e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188e6c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x188e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188e74: 0x0  nop
    ctx->pc = 0x188e74u;
    // NOP
    // 0x188e78: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188E78u;
    {
        const bool branch_taken_0x188e78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188e78) {
            ctx->pc = 0x188E98u;
            goto label_188e98;
        }
    }
    ctx->pc = 0x188E80u;
    // 0x188e80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188e88: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x188e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e8c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188e90: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x188e90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x188e94: 0x0  nop
    ctx->pc = 0x188e94u;
    // NOP
label_188e98:
    // 0x188e98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188e9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ea0: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x188ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x188ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ea8: 0x0  nop
    ctx->pc = 0x188ea8u;
    // NOP
    // 0x188eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188eb0: 0x0  nop
    ctx->pc = 0x188eb0u;
    // NOP
    // 0x188eb4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x188EB4u;
    {
        const bool branch_taken_0x188eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188eb4) {
            ctx->pc = 0x188ED8u;
            goto label_188ed8;
        }
    }
    ctx->pc = 0x188EBCu;
    // 0x188ebc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188ec0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x188ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ec4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x188ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x188ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188ecc: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ed0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x188ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188ed4: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x188ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
label_188ed8:
    // 0x188ed8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188edc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188ee0: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x188ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ee4: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ee8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x188ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188eec: 0x0  nop
    ctx->pc = 0x188eecu;
    // NOP
    // 0x188ef0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188EF0u;
    {
        const bool branch_taken_0x188ef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188ef0) {
            ctx->pc = 0x188F10u;
            goto label_188f10;
        }
    }
    ctx->pc = 0x188EF8u;
    // 0x188ef8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x188ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x188efc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188f00: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x188f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f04: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188f08: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x188f08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x188f0c: 0x0  nop
    ctx->pc = 0x188f0cu;
    // NOP
label_188f10:
    // 0x188f10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x188f14: 0x0  nop
    ctx->pc = 0x188f14u;
    // NOP
label_188f18:
    // 0x188f18: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x188f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x188f1c: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x188F1Cu;
    {
        const bool branch_taken_0x188f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f1c) {
            ctx->pc = 0x188E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188e1c;
        }
    }
    ctx->pc = 0x188F24u;
    // 0x188f24: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x188f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x188f28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x188f2c: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x188f30: 0xc06224c  jal         func_188930
    ctx->pc = 0x188F30u;
    SET_GPR_U32(ctx, 31, 0x188F38u);
    ctx->pc = 0x188930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188930u, 0x188F30u, 0x188F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F38u;
label_188f38:
    // 0x188f38: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x188f3c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x188f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f40: 0x0  nop
    ctx->pc = 0x188f40u;
    // NOP
label_188f44:
    // 0x188f44: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x188f44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188f48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x188f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188f4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x188f4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188f50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x188f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188f54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188f58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188f5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f68: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x188f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x188f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x188F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F74u;
}
