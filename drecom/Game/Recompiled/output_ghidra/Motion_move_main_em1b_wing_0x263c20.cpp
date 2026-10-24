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

// Function: Motion_move_main_em1b_wing
// Address: 0x263c20 - 0x264034
void Motion_move_main_em1b_wing_0x263c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_main_em1b_wing_0x263c20");
#endif

    switch (ctx->pc) {
        case 0x263d48u: goto label_263d48;
        case 0x263e6cu: goto label_263e6c;
        case 0x263e8cu: goto label_263e8c;
        case 0x263f88u: goto label_263f88;
        case 0x263fa0u: goto label_263fa0;
        case 0x263fb4u: goto label_263fb4;
        case 0x263fc8u: goto label_263fc8;
        case 0x263fe8u: goto label_263fe8;
        default: break;
    }

    ctx->pc = 0x263c20u;

    // 0x263c20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x263c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x263c24: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x263c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x263c28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x263c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x263c2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x263c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x263c30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x263c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x263c34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x263c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x263c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x263c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x263c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x263c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263c4c: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x263c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x263c50: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x263c50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x263c54: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263c58: 0x90631082  lbu         $v1, 0x1082($v1)
    ctx->pc = 0x263c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4226)));
    // 0x263c5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263c60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x263c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x263c64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x263c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x263c68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x263c68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x263c6c: 0x3f43c  dsll32      $fp, $v1, 16
    ctx->pc = 0x263c6cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 16));
    // 0x263c70: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x263c70u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x263c74: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263c78: 0x8c631098  lw          $v1, 0x1098($v1)
    ctx->pc = 0x263c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4248)));
    // 0x263c7c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x263c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x263c80: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x263C80u;
    {
        const bool branch_taken_0x263c80 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x263c80) {
            ctx->pc = 0x263C9Cu;
            goto label_263c9c;
        }
    }
    ctx->pc = 0x263C88u;
    // 0x263c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263c8c: 0x0  nop
    ctx->pc = 0x263c8cu;
    // NOP
    // 0x263c90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x263c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x263c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263C94u;
    {
        const bool branch_taken_0x263c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c94) {
            ctx->pc = 0x263CB8u;
            goto label_263cb8;
        }
    }
    ctx->pc = 0x263C9Cu;
label_263c9c:
    // 0x263c9c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x263c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x263ca0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263ca4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x263ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x263ca8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x263ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cac: 0x0  nop
    ctx->pc = 0x263cacu;
    // NOP
    // 0x263cb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x263cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x263cb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x263cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_263cb8:
    // 0x263cb8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263cbc: 0x8c631098  lw          $v1, 0x1098($v1)
    ctx->pc = 0x263cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4248)));
    // 0x263cc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263cc4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x263CC4u;
    {
        const bool branch_taken_0x263cc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x263cc4) {
            ctx->pc = 0x263CE0u;
            goto label_263ce0;
        }
    }
    ctx->pc = 0x263CCCu;
    // 0x263ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cd0: 0x0  nop
    ctx->pc = 0x263cd0u;
    // NOP
    // 0x263cd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263CD8u;
    {
        const bool branch_taken_0x263cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263cd8) {
            ctx->pc = 0x263CFCu;
            goto label_263cfc;
        }
    }
    ctx->pc = 0x263CE0u;
label_263ce0:
    // 0x263ce0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x263ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x263ce4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263ce8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x263ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x263cec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x263cecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cf0: 0x0  nop
    ctx->pc = 0x263cf0u;
    // NOP
    // 0x263cf4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263cf8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x263cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_263cfc:
    // 0x263cfc: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x263cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x263d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263d04: 0x0  nop
    ctx->pc = 0x263d04u;
    // NOP
    // 0x263d08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x263d08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x263d0c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x263d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x263d10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d14: 0xe4601070  swc1        $f0, 0x1070($v1)
    ctx->pc = 0x263d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4208), bits); }
    // 0x263d18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d1c: 0xc4601070  lwc1        $f0, 0x1070($v1)
    ctx->pc = 0x263d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x263d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x263d24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d28: 0xc4601074  lwc1        $f0, 0x1074($v1)
    ctx->pc = 0x263d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263d2c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x263d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x263d30: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d34: 0x94631080  lhu         $v1, 0x1080($v1)
    ctx->pc = 0x263d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4224)));
    // 0x263d38: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x263d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x263d3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d40: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x263d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x263d44: 0xa3a300c0  sb          $v1, 0xC0($sp)
    ctx->pc = 0x263d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 3));
label_263d48:
    // 0x263d48: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d4c: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x263d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x263d50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x263d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x263d54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263d54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263d58: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x263d58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d5c: 0x3283003f  andi        $v1, $s4, 0x3F
    ctx->pc = 0x263d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x263d60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d64: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x263d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d68: 0xafb100dc  sw          $s1, 0xDC($sp)
    ctx->pc = 0x263d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 17));
    // 0x263d6c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263d74: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x263d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263d78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263d7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263d80: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263d84: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263d88: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x263d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263d8c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x263d8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263d90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263d94: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x263d94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x263d98: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263d9c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263da0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x263DA0u;
    {
        const bool branch_taken_0x263da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263da0) {
            ctx->pc = 0x263DF0u;
            goto label_263df0;
        }
    }
    ctx->pc = 0x263DA8u;
    // 0x263da8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dac: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x263dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x263db0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x263DB0u;
    {
        const bool branch_taken_0x263db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263db0) {
            ctx->pc = 0x263DF0u;
            goto label_263df0;
        }
    }
    ctx->pc = 0x263DB8u;
    // 0x263db8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dbc: 0x8c630354  lw          $v1, 0x354($v1)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 852)));
    // 0x263dc0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263dc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263dc8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x263dc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263dcc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263dd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263dd4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x263dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x263dd8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263ddc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263de0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263de4: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263de8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263dec: 0x0  nop
    ctx->pc = 0x263decu;
    // NOP
label_263df0:
    // 0x263df0: 0x328300c0  andi        $v1, $s4, 0xC0
    ctx->pc = 0x263df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)192);
    // 0x263df4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x263DF4u;
    {
        const bool branch_taken_0x263df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263df4) {
            ctx->pc = 0x263E70u;
            goto label_263e70;
        }
    }
    ctx->pc = 0x263DFCu;
    // 0x263dfc: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263dfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263e00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263e04: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x263e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x263e08: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x263E08u;
    {
        const bool branch_taken_0x263e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e08) {
            ctx->pc = 0x263E70u;
            goto label_263e70;
        }
    }
    ctx->pc = 0x263E10u;
    // 0x263e10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263e14: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x263e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263e1c: 0x8c630a18  lw          $v1, 0xA18($v1)
    ctx->pc = 0x263e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2584)));
    // 0x263e20: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x263E20u;
    {
        const bool branch_taken_0x263e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263e20) {
            ctx->pc = 0x263E70u;
            goto label_263e70;
        }
    }
    ctx->pc = 0x263E28u;
    // 0x263e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263e2c: 0xa7a200aa  sh          $v0, 0xAA($sp)
    ctx->pc = 0x263e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x263e30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x263e34: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e3c: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x263e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x263e40: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x263e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x263e44: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x263e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x263e48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x263e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x263e4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x263e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263e50: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x263e5c: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x263e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x263e60: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x263e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x263e64: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263E64u;
    SET_GPR_U32(ctx, 31, 0x263E6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263E64u, 0x263E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263E6Cu;
label_263e6c:
    // 0x263e6c: 0x0  nop
    ctx->pc = 0x263e6cu;
    // NOP
label_263e70:
    // 0x263e70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x263e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x263e74: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x263e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x263e78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x263e78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x263e7c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x263e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263e80: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x263E80u;
    {
        const bool branch_taken_0x263e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263e80) {
            ctx->pc = 0x263D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263d48;
        }
    }
    ctx->pc = 0x263E88u;
    // 0x263e88: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x263e88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_263e8c:
    // 0x263e8c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263e90: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x263e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x263e94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x263e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x263e98: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263e9c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x263e9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263ea0: 0x32c3003f  andi        $v1, $s6, 0x3F
    ctx->pc = 0x263ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x263ea4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263ea8: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x263ea8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263eac: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x263eacu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x263eb0: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x263eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263eb4: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x263eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x263eb8: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x263ebc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x263ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x263ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x263ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x263ec4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x263ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x263ec8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x263ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x263ecc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x263eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263ed0: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x263ed0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263ed4: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x263ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
    // 0x263ed8: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x263ED8u;
    {
        const bool branch_taken_0x263ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ed8) {
            ctx->pc = 0x263FE8u;
            goto label_263fe8;
        }
    }
    ctx->pc = 0x263EE0u;
    // 0x263ee0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263ee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263ee4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263ee8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x263ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x263eec: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x263EECu;
    {
        const bool branch_taken_0x263eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263eec) {
            ctx->pc = 0x263F38u;
            goto label_263f38;
        }
    }
    ctx->pc = 0x263EF4u;
    // 0x263ef4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263ef8: 0x94631080  lhu         $v1, 0x1080($v1)
    ctx->pc = 0x263ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4224)));
    // 0x263efc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f00: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263f04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x263F04u;
    {
        const bool branch_taken_0x263f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f04) {
            ctx->pc = 0x263F38u;
            goto label_263f38;
        }
    }
    ctx->pc = 0x263F0Cu;
    // 0x263f0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x263f10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263f14: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x263f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263f18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263f1c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x263f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x263f20: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x263f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x263f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263f28: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x263f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263f2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x263f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x263f30: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x263f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x263f34: 0x0  nop
    ctx->pc = 0x263f34u;
    // NOP
label_263f38:
    // 0x263f38: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f3c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x263f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x263f40: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x263f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x263f44: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f48: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f4c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263f50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x263F50u;
    {
        const bool branch_taken_0x263f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f50) {
            ctx->pc = 0x263F90u;
            goto label_263f90;
        }
    }
    ctx->pc = 0x263F58u;
    // 0x263f58: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f60: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x263f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x263f64: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x263F64u;
    {
        const bool branch_taken_0x263f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f64) {
            ctx->pc = 0x263FE8u;
            goto label_263fe8;
        }
    }
    ctx->pc = 0x263F6Cu;
    // 0x263f6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263f70: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x263f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x263f74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x263f78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263f7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263f80: 0xc040ca2  jal         func_103288
    ctx->pc = 0x263F80u;
    SET_GPR_U32(ctx, 31, 0x263F88u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x263F88u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x263F88u) { return; }
    ctx->pc = 0x263F88u;
label_263f88:
    // 0x263f88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263F88u;
    {
        const bool branch_taken_0x263f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f88) {
            ctx->pc = 0x263FE8u;
            goto label_263fe8;
        }
    }
    ctx->pc = 0x263F90u;
label_263f90:
    // 0x263f90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263f90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263f94: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x263f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263f98: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x263F98u;
    SET_GPR_U32(ctx, 31, 0x263FA0u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x263F98u, 0x263FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FA0u;
label_263fa0:
    // 0x263fa0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fa4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263fa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fa8: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x263fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263fac: 0xc067808  jal         func_19E020
    ctx->pc = 0x263FACu;
    SET_GPR_U32(ctx, 31, 0x263FB4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x263FACu, 0x263FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FB4u;
label_263fb4:
    // 0x263fb4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263fb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fb8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fbc: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x263fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263fc0: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x263FC0u;
    SET_GPR_U32(ctx, 31, 0x263FC8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x263FC0u, 0x263FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FC8u;
label_263fc8:
    // 0x263fc8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263fcc: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x263fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x263fd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x263fd4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263fd8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x263fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x263fdc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x263fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fe0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x263FE0u;
    SET_GPR_U32(ctx, 31, 0x263FE8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x263FE0u, 0x263FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FE8u;
label_263fe8:
    // 0x263fe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x263fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x263fec: 0x1e1c3c  dsll32      $v1, $fp, 16
    ctx->pc = 0x263fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 16));
    // 0x263ff0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x263ff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x263ff4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x263ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263ff8: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x263FF8u;
    {
        const bool branch_taken_0x263ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263ff8) {
            ctx->pc = 0x263E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263e8c;
        }
    }
    ctx->pc = 0x264000u;
    // 0x264000: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x264000u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264004: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264008: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x264008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26400c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26400cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264010: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26401c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26401cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264028: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x26402c: 0x3e00008  jr          $ra
    ctx->pc = 0x26402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264034u;
}
