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

// Function: Hokan_pl
// Address: 0x262930 - 0x262e78
void Hokan_pl_0x262930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hokan_pl_0x262930");
#endif

    switch (ctx->pc) {
        case 0x2629b4u: goto label_2629b4;
        case 0x2629d8u: goto label_2629d8;
        case 0x262a70u: goto label_262a70;
        case 0x262a80u: goto label_262a80;
        case 0x262a94u: goto label_262a94;
        case 0x262ab4u: goto label_262ab4;
        case 0x262ac8u: goto label_262ac8;
        case 0x262aecu: goto label_262aec;
        case 0x262b00u: goto label_262b00;
        case 0x262b14u: goto label_262b14;
        case 0x262b28u: goto label_262b28;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b50u: goto label_262b50;
        case 0x262b60u: goto label_262b60;
        case 0x262b74u: goto label_262b74;
        case 0x262b84u: goto label_262b84;
        case 0x262b98u: goto label_262b98;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bb8u: goto label_262bb8;
        case 0x262c0cu: goto label_262c0c;
        case 0x262c1cu: goto label_262c1c;
        case 0x262c30u: goto label_262c30;
        case 0x262c50u: goto label_262c50;
        case 0x262c64u: goto label_262c64;
        case 0x262c8cu: goto label_262c8c;
        case 0x262ca0u: goto label_262ca0;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cc8u: goto label_262cc8;
        case 0x262cdcu: goto label_262cdc;
        case 0x262cf0u: goto label_262cf0;
        case 0x262d00u: goto label_262d00;
        case 0x262d14u: goto label_262d14;
        case 0x262d24u: goto label_262d24;
        case 0x262d38u: goto label_262d38;
        case 0x262d48u: goto label_262d48;
        case 0x262d58u: goto label_262d58;
        default: break;
    }

    ctx->pc = 0x262930u;

    // 0x262930: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x262934: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x262934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x262938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26293c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262940: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x262940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x262944: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262948: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x262948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x26294c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262950: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262954: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x262954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x262958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x262958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26295c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26295cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262960: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x262960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x262964: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262968: 0x904209e5  lbu         $v0, 0x9E5($v0)
    ctx->pc = 0x262968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2533)));
    // 0x26296c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262970: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x262970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x262974: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262978: 0x90421083  lbu         $v0, 0x1083($v0)
    ctx->pc = 0x262978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
    // 0x26297c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262980: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262984: 0x90421084  lbu         $v0, 0x1084($v0)
    ctx->pc = 0x262984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4228)));
    // 0x262988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x262988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26298c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26298cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262990: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x262990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x262994: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262998: 0x90421083  lbu         $v0, 0x1083($v0)
    ctx->pc = 0x262998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
    // 0x26299c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2629a0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2629a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2629a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2629a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2629a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2629a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2629ac: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x2629ACu;
    SET_GPR_U32(ctx, 31, 0x2629B4u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x2629B4u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2629B4u) { return; }
    ctx->pc = 0x2629B4u;
label_2629b4:
    // 0x2629b4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2629b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2629b8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2629b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2629bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2629c0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2629c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2629c4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2629c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2629c8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2629c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2629cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2629ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2629d0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2629d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2629d4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2629d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2629d8:
    // 0x2629d8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2629d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2629dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2629dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2629e0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2629e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2629e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2629e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2629e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2629ec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2629ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2629f0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x2629f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x2629f4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2629f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2629f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2629f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2629fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2629fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262a00: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x262a04: 0x146000d8  bnez        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x262A04u;
    {
        const bool branch_taken_0x262a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a04) {
            ctx->pc = 0x262D68u;
            goto label_262d68;
        }
    }
    ctx->pc = 0x262A0Cu;
    // 0x262a0c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x262a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262a14: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x262a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x262a18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x262a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x262a1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x262a1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x262a20: 0xdca30a08  ld          $v1, 0xA08($a1)
    ctx->pc = 0x262a20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 2568)));
    // 0x262a24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x262a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x262a28: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x262A28u;
    {
        const bool branch_taken_0x262a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a28) {
            ctx->pc = 0x262BCCu;
            goto label_262bcc;
        }
    }
    ctx->pc = 0x262A30u;
    // 0x262a30: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a34: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x262a34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x262a38: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x262A38u;
    {
        const bool branch_taken_0x262a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a38) {
            ctx->pc = 0x262D68u;
            goto label_262d68;
        }
    }
    ctx->pc = 0x262A40u;
    // 0x262a40: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262a44: 0x8c42034c  lw          $v0, 0x34C($v0)
    ctx->pc = 0x262a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x262a48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262a4c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x262a4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262a50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262a54: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x262a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x262a58: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x262A58u;
    {
        const bool branch_taken_0x262a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262a58) {
            ctx->pc = 0x262AD8u;
            goto label_262ad8;
        }
    }
    ctx->pc = 0x262A60u;
    // 0x262a60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a64: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x262a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262a68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262A68u;
    SET_GPR_U32(ctx, 31, 0x262A70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262A70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A70u) { return; }
    ctx->pc = 0x262A70u;
label_262a70:
    // 0x262a70: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x262a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262a74: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x262a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x262a78: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262A78u;
    SET_GPR_U32(ctx, 31, 0x262A80u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262A80u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A80u) { return; }
    ctx->pc = 0x262A80u;
label_262a80:
    // 0x262a80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a84: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x262a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262a88: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262a8c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262A8Cu;
    SET_GPR_U32(ctx, 31, 0x262A94u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262A94u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262A94u) { return; }
    ctx->pc = 0x262A94u;
label_262a94:
    // 0x262a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262a9c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x262a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262aa0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x262aa0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262aa4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x262aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262aa8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x262aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262aac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262AACu;
    SET_GPR_U32(ctx, 31, 0x262AB4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262AB4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262AB4u) { return; }
    ctx->pc = 0x262AB4u;
label_262ab4:
    // 0x262ab4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x262ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262ab8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x262ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x262abc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x262abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x262ac0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x262AC0u;
    SET_GPR_U32(ctx, 31, 0x262AC8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x262AC0u, 0x262AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AC8u;
label_262ac8:
    // 0x262ac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262ad0: 0x0  nop
    ctx->pc = 0x262ad0u;
    // NOP
    // 0x262ad4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x262ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_262ad8:
    // 0x262ad8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262adc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262ae0: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x262ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262ae4: 0xc040c80  jal         func_103200
    ctx->pc = 0x262AE4u;
    SET_GPR_U32(ctx, 31, 0x262AECu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262AECu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262AECu) { return; }
    ctx->pc = 0x262AECu;
label_262aec:
    // 0x262aec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262af0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262af4: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x262af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x262af8: 0xc040c80  jal         func_103200
    ctx->pc = 0x262AF8u;
    SET_GPR_U32(ctx, 31, 0x262B00u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262B00u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B00u) { return; }
    ctx->pc = 0x262B00u;
label_262b00:
    // 0x262b00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b08: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262b0c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262B0Cu;
    SET_GPR_U32(ctx, 31, 0x262B14u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262B14u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B14u) { return; }
    ctx->pc = 0x262B14u;
label_262b14:
    // 0x262b14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b1c: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x262b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262b20: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262B28u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B28u) { return; }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b2c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b30: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262b34: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262B34u;
    SET_GPR_U32(ctx, 31, 0x262B3Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262B3Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B3Cu) { return; }
    ctx->pc = 0x262B3Cu;
label_262b3c:
    // 0x262b3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b44: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x262b48: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262B48u;
    SET_GPR_U32(ctx, 31, 0x262B50u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262B50u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B50u) { return; }
    ctx->pc = 0x262B50u;
label_262b50:
    // 0x262b50: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x262b50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262b54: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b58: 0xc040c24  jal         func_103090
    ctx->pc = 0x262B58u;
    SET_GPR_U32(ctx, 31, 0x262B60u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262B60u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B60u) { return; }
    ctx->pc = 0x262B60u;
label_262b60:
    // 0x262b60: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x262b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b64: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b6c: 0xc040c12  jal         func_103048
    ctx->pc = 0x262B6Cu;
    SET_GPR_U32(ctx, 31, 0x262B74u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262B74u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B74u) { return; }
    ctx->pc = 0x262B74u;
label_262b74:
    // 0x262b74: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x262b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x262b78: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b7c: 0xc040c24  jal         func_103090
    ctx->pc = 0x262B7Cu;
    SET_GPR_U32(ctx, 31, 0x262B84u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262B84u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B84u) { return; }
    ctx->pc = 0x262B84u;
label_262b84:
    // 0x262b84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262b88: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262b8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x262b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262b90: 0xc040c12  jal         func_103048
    ctx->pc = 0x262B90u;
    SET_GPR_U32(ctx, 31, 0x262B98u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262B98u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262B98u) { return; }
    ctx->pc = 0x262B98u;
label_262b98:
    // 0x262b98: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262b9c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ba0: 0xc040c24  jal         func_103090
    ctx->pc = 0x262BA0u;
    SET_GPR_U32(ctx, 31, 0x262BA8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262BA8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262BA8u) { return; }
    ctx->pc = 0x262BA8u;
label_262ba8:
    // 0x262ba8: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x262ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x262bac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262bb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262BB0u;
    SET_GPR_U32(ctx, 31, 0x262BB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262BB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262BB8u) { return; }
    ctx->pc = 0x262BB8u;
label_262bb8:
    // 0x262bb8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x262bb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x262bbc: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x262bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x262bc0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x262bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x262bc4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x262BC4u;
    {
        const bool branch_taken_0x262bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bc4) {
            ctx->pc = 0x262D68u;
            goto label_262d68;
        }
    }
    ctx->pc = 0x262BCCu;
label_262bcc:
    // 0x262bcc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262bd0: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262bd4: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x262BD4u;
    {
        const bool branch_taken_0x262bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bd4) {
            ctx->pc = 0x262D68u;
            goto label_262d68;
        }
    }
    ctx->pc = 0x262BDCu;
    // 0x262bdc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x262bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262be0: 0x8c42034c  lw          $v0, 0x34C($v0)
    ctx->pc = 0x262be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 844)));
    // 0x262be4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262be8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x262be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262bec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262bf0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x262bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x262bf4: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x262BF4u;
    {
        const bool branch_taken_0x262bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262bf4) {
            ctx->pc = 0x262C78u;
            goto label_262c78;
        }
    }
    ctx->pc = 0x262BFCu;
    // 0x262bfc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c00: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x262c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262c04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262C04u;
    SET_GPR_U32(ctx, 31, 0x262C0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262C0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C0Cu) { return; }
    ctx->pc = 0x262C0Cu;
label_262c0c:
    // 0x262c0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x262c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c10: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x262c14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x262C14u;
    SET_GPR_U32(ctx, 31, 0x262C1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x262C1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C1Cu) { return; }
    ctx->pc = 0x262C1Cu;
label_262c1c:
    // 0x262c1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c20: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c24: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262c28: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262C28u;
    SET_GPR_U32(ctx, 31, 0x262C30u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262C30u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C30u) { return; }
    ctx->pc = 0x262C30u;
label_262c30:
    // 0x262c30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262c34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x262c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262c38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x262c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262c3c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x262c3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262c40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x262c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c44: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x262c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c48: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262C48u;
    SET_GPR_U32(ctx, 31, 0x262C50u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262C50u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C50u) { return; }
    ctx->pc = 0x262C50u;
label_262c50:
    // 0x262c50: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x262c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x262c54: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x262c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x262c58: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x262c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x262c5c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x262C5Cu;
    SET_GPR_U32(ctx, 31, 0x262C64u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x262C5Cu, 0x262C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C64u;
label_262c64:
    // 0x262c64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x262c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x262c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x262c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262c6c: 0x0  nop
    ctx->pc = 0x262c6cu;
    // NOP
    // 0x262c70: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x262c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x262c74: 0x0  nop
    ctx->pc = 0x262c74u;
    // NOP
label_262c78:
    // 0x262c78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262c7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262c7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262c80: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262c84: 0xc040c80  jal         func_103200
    ctx->pc = 0x262C84u;
    SET_GPR_U32(ctx, 31, 0x262C8Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262C8Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262C8Cu) { return; }
    ctx->pc = 0x262C8Cu;
label_262c8c:
    // 0x262c8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262c90: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262c94: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262c98: 0xc040c80  jal         func_103200
    ctx->pc = 0x262C98u;
    SET_GPR_U32(ctx, 31, 0x262CA0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x262CA0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CA0u) { return; }
    ctx->pc = 0x262CA0u;
label_262ca0:
    // 0x262ca0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ca4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ca8: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262cac: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262CACu;
    SET_GPR_U32(ctx, 31, 0x262CB4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262CB4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CB4u) { return; }
    ctx->pc = 0x262CB4u;
label_262cb4:
    // 0x262cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262cb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262cbc: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x262cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x262cc0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x262CC0u;
    SET_GPR_U32(ctx, 31, 0x262CC8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x262CC8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CC8u) { return; }
    ctx->pc = 0x262CC8u;
label_262cc8:
    // 0x262cc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x262cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262ccc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262cd0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x262cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262cd4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262CD4u;
    SET_GPR_U32(ctx, 31, 0x262CDCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262CDCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CDCu) { return; }
    ctx->pc = 0x262CDCu;
label_262cdc:
    // 0x262cdc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ce0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262ce4: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x262ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x262ce8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x262CE8u;
    SET_GPR_U32(ctx, 31, 0x262CF0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x262CF0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262CF0u) { return; }
    ctx->pc = 0x262CF0u;
label_262cf0:
    // 0x262cf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x262cf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262cf4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262cf8: 0xc040c24  jal         func_103090
    ctx->pc = 0x262CF8u;
    SET_GPR_U32(ctx, 31, 0x262D00u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D00u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D00u) { return; }
    ctx->pc = 0x262D00u;
label_262d00:
    // 0x262d00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x262d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x262d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262d08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x262d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d0c: 0xc040c12  jal         func_103048
    ctx->pc = 0x262D0Cu;
    SET_GPR_U32(ctx, 31, 0x262D14u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262D14u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D14u) { return; }
    ctx->pc = 0x262D14u;
label_262d14:
    // 0x262d14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x262d18: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d1c: 0xc040c24  jal         func_103090
    ctx->pc = 0x262D1Cu;
    SET_GPR_U32(ctx, 31, 0x262D24u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D24u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D24u) { return; }
    ctx->pc = 0x262D24u;
label_262d24:
    // 0x262d24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x262d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d28: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x262d2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262d30: 0xc040c12  jal         func_103048
    ctx->pc = 0x262D30u;
    SET_GPR_U32(ctx, 31, 0x262D38u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x262D38u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D38u) { return; }
    ctx->pc = 0x262D38u;
label_262d38:
    // 0x262d38: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x262d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x262d3c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262d40: 0xc040c24  jal         func_103090
    ctx->pc = 0x262D40u;
    SET_GPR_U32(ctx, 31, 0x262D48u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x262D48u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D48u) { return; }
    ctx->pc = 0x262D48u;
label_262d48:
    // 0x262d48: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x262d4c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x262d4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x262d50: 0xc040ca2  jal         func_103288
    ctx->pc = 0x262D50u;
    SET_GPR_U32(ctx, 31, 0x262D58u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x262D58u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x262D58u) { return; }
    ctx->pc = 0x262D58u;
label_262d58:
    // 0x262d58: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x262d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x262d5c: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x262d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x262d60: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x262d60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x262d64: 0x0  nop
    ctx->pc = 0x262d64u;
    // NOP
label_262d68:
    // 0x262d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x262d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x262d6c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d70: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x262d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x262d74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262d78: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x262d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x262d7c: 0x1460ff16  bnez        $v1, . + 4 + (-0xEA << 2)
    ctx->pc = 0x262D7Cu;
    {
        const bool branch_taken_0x262d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d7c) {
            ctx->pc = 0x2629D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2629d8;
        }
    }
    ctx->pc = 0x262D84u;
    // 0x262d84: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d88: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x262d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x262d8c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262D8Cu;
    {
        const bool branch_taken_0x262d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d8c) {
            ctx->pc = 0x262E28u;
            goto label_262e28;
        }
    }
    ctx->pc = 0x262D94u;
    // 0x262d94: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262d98: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262d9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262da0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x262da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x262da4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x262DA4u;
    {
        const bool branch_taken_0x262da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262da4) {
            ctx->pc = 0x262DECu;
            goto label_262dec;
        }
    }
    ctx->pc = 0x262DACu;
    // 0x262dac: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262db0: 0xc46109cc  lwc1        $f1, 0x9CC($v1)
    ctx->pc = 0x262db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262db4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262db8: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x262dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x262dc0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x262dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x262dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x262dc8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262dcc: 0xc46009c8  lwc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262dd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x262dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x262dd4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262dd8: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x262ddc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262de0: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262de4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262de8: 0xe46009c8  swc1        $f0, 0x9C8($v1)
    ctx->pc = 0x262de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2504), bits); }
label_262dec:
    // 0x262dec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262df0: 0xc46009cc  lwc1        $f0, 0x9CC($v1)
    ctx->pc = 0x262df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262df4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262df8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x262df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x262dfc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x262dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x262e00: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e04: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262e04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262e08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262e0c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x262e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262e10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262E10u;
    {
        const bool branch_taken_0x262e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e10) {
            ctx->pc = 0x262E28u;
            goto label_262e28;
        }
    }
    ctx->pc = 0x262E18u;
    // 0x262e18: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x262e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e1c: 0x908309e6  lbu         $v1, 0x9E6($a0)
    ctx->pc = 0x262e1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2534)));
    // 0x262e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262e24: 0xa08309e6  sb          $v1, 0x9E6($a0)
    ctx->pc = 0x262e24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2534), (uint8_t)GPR_U32(ctx, 3));
label_262e28:
    // 0x262e28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e2c: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x262e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x262e30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x262E30u;
    {
        const bool branch_taken_0x262e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e30) {
            ctx->pc = 0x262E60u;
            goto label_262e60;
        }
    }
    ctx->pc = 0x262E38u;
    // 0x262e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e3c: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262e40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262e44: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x262e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262e48: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262E48u;
    {
        const bool branch_taken_0x262e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e48) {
            ctx->pc = 0x262E60u;
            goto label_262e60;
        }
    }
    ctx->pc = 0x262E50u;
    // 0x262e50: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x262e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e54: 0x90831084  lbu         $v1, 0x1084($a0)
    ctx->pc = 0x262e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4228)));
    // 0x262e58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262e5c: 0xa0831084  sb          $v1, 0x1084($a0)
    ctx->pc = 0x262e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4228), (uint8_t)GPR_U32(ctx, 3));
label_262e60:
    // 0x262e60: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x262e60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262e6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x262e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x262e70: 0x3e00008  jr          $ra
    ctx->pc = 0x262E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E78u;
}
