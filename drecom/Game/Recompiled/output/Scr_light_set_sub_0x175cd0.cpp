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

// Function: Scr_light_set_sub
// Address: 0x175cd0 - 0x176310
void Scr_light_set_sub_0x175cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_light_set_sub_0x175cd0");
#endif

    switch (ctx->pc) {
        case 0x175e10u: goto label_175e10;
        case 0x175ea4u: goto label_175ea4;
        case 0x176234u: goto label_176234;
        case 0x176254u: goto label_176254;
        case 0x17629cu: goto label_17629c;
        case 0x1762bcu: goto label_1762bc;
        default: break;
    }

    ctx->pc = 0x175cd0u;

    // 0x175cd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x175cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x175cd4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x175cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x175cd8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x175cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x175cdc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x175cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x175ce0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x175ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x175ce4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x175ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x175ce8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x175ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x175cec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x175cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x175cf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x175cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x175cf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175cf8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x175cf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x175cfc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x175cfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x175d00: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x175d00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x175d04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x175d04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x175d08: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x175d08u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x175d0c: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x175d0cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x175d10: 0x8ed700a0  lw          $s7, 0xA0($s6)
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 160)));
    // 0x175d14: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x175d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x175d18: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x175d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x175d1c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x175D1Cu;
    {
        const bool branch_taken_0x175d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175d1c) {
            ctx->pc = 0x175DACu;
            goto label_175dac;
        }
    }
    ctx->pc = 0x175D24u;
    // 0x175d24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175d28: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x175d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x175d2c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x175d2cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C950u));
    // 0x175d30: 0x26a300b0  addiu       $v1, $s5, 0xB0
    ctx->pc = 0x175d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x175d34: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x175d34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x175d38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175d3c: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x175d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x175d40: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x175d40u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C950u));
    // 0x175d44: 0x26a300c0  addiu       $v1, $s5, 0xC0
    ctx->pc = 0x175d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x175d48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x175d48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x175d4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175d50: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x175d54: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x175d54u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C950u));
    // 0x175d58: 0x26a300d0  addiu       $v1, $s5, 0xD0
    ctx->pc = 0x175d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x175d5c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x175d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x175d60: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175d64: 0x2463c950  addiu       $v1, $v1, -0x36B0
    ctx->pc = 0x175d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953296));
    // 0x175d68: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x175d68u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C950u));
    // 0x175d6c: 0x26a300e0  addiu       $v1, $s5, 0xE0
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x175d70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x175d70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x175d74: 0x92c3008c  lbu         $v1, 0x8C($s6)
    ctx->pc = 0x175d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x175d78: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x175d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x175d7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x175d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x175d80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175d84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x175d88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x175d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x175d8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x175d90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175d94: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x175d98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x175d98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175d9c: 0x26a30140  addiu       $v1, $s5, 0x140
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x175da0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x175da0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x175da4: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x175DA4u;
    {
        const bool branch_taken_0x175da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175da4) {
            ctx->pc = 0x1762D0u;
            goto label_1762d0;
        }
    }
    ctx->pc = 0x175DACu;
label_175dac:
    // 0x175dac: 0x92c2008c  lbu         $v0, 0x8C($s6)
    ctx->pc = 0x175dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x175db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175db4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175db8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175db8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175dbc: 0x92c2008d  lbu         $v0, 0x8D($s6)
    ctx->pc = 0x175dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 141)));
    // 0x175dc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175dc4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175dc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175dc8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175dc8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175dcc: 0x92c2008e  lbu         $v0, 0x8E($s6)
    ctx->pc = 0x175dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 142)));
    // 0x175dd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175dd4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x175dd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175dd8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175dd8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175ddc: 0x92c2008f  lbu         $v0, 0x8F($s6)
    ctx->pc = 0x175ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 143)));
    // 0x175de0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x175de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175de4: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x175de4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175de8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175de8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x175dec: 0xc6d40090  lwc1        $f20, 0x90($s6)
    ctx->pc = 0x175decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x175df0: 0xc6d50094  lwc1        $f21, 0x94($s6)
    ctx->pc = 0x175df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x175df4: 0xc6d60098  lwc1        $f22, 0x98($s6)
    ctx->pc = 0x175df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x175df8: 0xc6d7009c  lwc1        $f23, 0x9C($s6)
    ctx->pc = 0x175df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x175dfc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175e00: 0x9422cc8a  lhu         $v0, -0x3376($at)
    ctx->pc = 0x175e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x175e04: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x175e04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175e08: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x175E08u;
    {
        const bool branch_taken_0x175e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e08) {
            ctx->pc = 0x175F78u;
            goto label_175f78;
        }
    }
    ctx->pc = 0x175E10u;
label_175e10:
    // 0x175e10: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e14: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e20: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e24: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e2c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x175e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x175e30: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x175e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x175e34: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x175e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x175e38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x175e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x175e3c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x175E3Cu;
    {
        const bool branch_taken_0x175e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175e3c) {
            ctx->pc = 0x175F70u;
            goto label_175f70;
        }
    }
    ctx->pc = 0x175E44u;
    // 0x175e44: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e50: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e58: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e60: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x175e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x175e64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x175e64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175e68: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x175e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175e6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175e70: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175e74: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x175e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175e80: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175e84: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x175e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x175e88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175e8c: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x175e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175e90: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x175e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x175e94: 0x26c400e0  addiu       $a0, $s6, 0xE0
    ctx->pc = 0x175e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x175e98: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x175e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175e9c: 0xc05da44  jal         func_176910
    ctx->pc = 0x175E9Cu;
    SET_GPR_U32(ctx, 31, 0x175EA4u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x175E9Cu, 0x175EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175EA4u;
label_175ea4:
    // 0x175ea4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x175ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175ea8: 0x0  nop
    ctx->pc = 0x175ea8u;
    // NOP
    // 0x175eac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x175EACu;
    {
        const bool branch_taken_0x175eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175eac) {
            ctx->pc = 0x175EC8u;
            goto label_175ec8;
        }
    }
    ctx->pc = 0x175EB4u;
    // 0x175eb4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x175eb4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x175eb8: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x175eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x175ebc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ec0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x175ec0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ec4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175ec4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_175ec8:
    // 0x175ec8: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x175ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175ecc: 0x0  nop
    ctx->pc = 0x175eccu;
    // NOP
    // 0x175ed0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175ED0u;
    {
        const bool branch_taken_0x175ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175ed0) {
            ctx->pc = 0x175F00u;
            goto label_175f00;
        }
    }
    ctx->pc = 0x175ED8u;
    // 0x175ed8: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x175ed8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
    // 0x175edc: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x175edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x175ee0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ee4: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x175ee4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x175ee8: 0x129c3c  dsll32      $s3, $s2, 16
    ctx->pc = 0x175ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 16));
    // 0x175eec: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x175eecu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x175ef0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x175ef0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x175ef4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x175ef4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ef8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175ef8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175efc: 0x0  nop
    ctx->pc = 0x175efcu;
    // NOP
label_175f00:
    // 0x175f00: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x175f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f04: 0x0  nop
    ctx->pc = 0x175f04u;
    // NOP
    // 0x175f08: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175F08u;
    {
        const bool branch_taken_0x175f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175f08) {
            ctx->pc = 0x175F38u;
            goto label_175f38;
        }
    }
    ctx->pc = 0x175F10u;
    // 0x175f10: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x175f10u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    // 0x175f14: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x175f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x175f18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f1c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x175f1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x175f20: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x175f20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175f24: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x175f24u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x175f28: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x175f28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x175f2c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175f2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175f30: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175f30u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175f34: 0x0  nop
    ctx->pc = 0x175f34u;
    // NOP
label_175f38:
    // 0x175f38: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x175f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175f3c: 0x0  nop
    ctx->pc = 0x175f3cu;
    // NOP
    // 0x175f40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x175F40u;
    {
        const bool branch_taken_0x175f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x175f40) {
            ctx->pc = 0x175F70u;
            goto label_175f70;
        }
    }
    ctx->pc = 0x175F48u;
    // 0x175f48: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x175f48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x175f4c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175f50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f54: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x175f54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x175f58: 0x108c3c  dsll32      $s1, $s0, 16
    ctx->pc = 0x175f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 16));
    // 0x175f5c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175f5cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175f60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x175f60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x175f64: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175f64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175f68: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175f68u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175f6c: 0x0  nop
    ctx->pc = 0x175f6cu;
    // NOP
label_175f70:
    // 0x175f70: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x175f74: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x175f74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_175f78:
    // 0x175f78: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175f7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175f80: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x175f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x175f84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x175f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175f88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x175f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175f8c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x175F8Cu;
    {
        const bool branch_taken_0x175f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f8c) {
            ctx->pc = 0x175E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175e10;
        }
    }
    ctx->pc = 0x175F94u;
    // 0x175f94: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x175f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x175f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f9c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175F9Cu;
    {
        const bool branch_taken_0x175f9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175f9c) {
            ctx->pc = 0x175FB0u;
            goto label_175fb0;
        }
    }
    ctx->pc = 0x175FA4u;
    // 0x175fa4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x175fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x175fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175FA8u;
    {
        const bool branch_taken_0x175fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fa8) {
            ctx->pc = 0x175FB8u;
            goto label_175fb8;
        }
    }
    ctx->pc = 0x175FB0u;
label_175fb0:
    // 0x175fb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x175fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x175fb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_175fb8:
    // 0x175fb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x175fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175fc0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x175fc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175fc4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x175fc4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x175fc8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175fcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175fd0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x175FE4u;
            goto label_175fe4;
        }
    }
    ctx->pc = 0x175FD8u;
    // 0x175fd8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x175fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x175fdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175FDCu;
    {
        const bool branch_taken_0x175fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fdc) {
            ctx->pc = 0x175FECu;
            goto label_175fec;
        }
    }
    ctx->pc = 0x175FE4u;
label_175fe4:
    // 0x175fe4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175fe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_175fec:
    // 0x175fec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x175fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ff0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175ff0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175ff4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x175ff4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x175ff8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x175ff8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x175ffc: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x175ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x176000: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176004: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176004u;
    {
        const bool branch_taken_0x176004 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176004) {
            ctx->pc = 0x176018u;
            goto label_176018;
        }
    }
    ctx->pc = 0x17600Cu;
    // 0x17600c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x17600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176010u;
    {
        const bool branch_taken_0x176010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176010) {
            ctx->pc = 0x176020u;
            goto label_176020;
        }
    }
    ctx->pc = 0x176018u;
label_176018:
    // 0x176018: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x176018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17601c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17601cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_176020:
    // 0x176020: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x176020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176024: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176024u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176028: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x176028u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17602c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x17602cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x176030: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x176030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x176038: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176038u;
    {
        const bool branch_taken_0x176038 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176038) {
            ctx->pc = 0x17604Cu;
            goto label_17604c;
        }
    }
    ctx->pc = 0x176040u;
    // 0x176040: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176044u;
    {
        const bool branch_taken_0x176044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176044) {
            ctx->pc = 0x176054u;
            goto label_176054;
        }
    }
    ctx->pc = 0x17604Cu;
label_17604c:
    // 0x17604c: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176050: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_176054:
    // 0x176054: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x176054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176058: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176058u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17605c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x17605cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x176060: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x176060u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x176064: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x176064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17606c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176074: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176078: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17607c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176084: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x176084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176088: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x176088u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17608c: 0x26a200b0  addiu       $v0, $s5, 0xB0
    ctx->pc = 0x17608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x176090: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x176090u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x176094: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x176094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x176098: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17609c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1760a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1760a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1760a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1760ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1760b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760b4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1760b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1760b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1760b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760bc: 0x26a200c0  addiu       $v0, $s5, 0xC0
    ctx->pc = 0x1760bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1760c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1760c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1760c4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1760c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1760c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1760c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1760cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1760ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1760d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1760d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1760dc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1760dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1760e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1760e4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1760e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1760e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1760e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1760ec: 0x26a200d0  addiu       $v0, $s5, 0xD0
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x1760f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1760f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1760f4: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1760f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1760f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1760fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176108: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17610c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176114: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x176114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176118: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x176118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17611c: 0x26a200e0  addiu       $v0, $s5, 0xE0
    ctx->pc = 0x17611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x176120: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x176120u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x176124: 0x26a200f0  addiu       $v0, $s5, 0xF0
    ctx->pc = 0x176124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x176128: 0x26c300e0  addiu       $v1, $s6, 0xE0
    ctx->pc = 0x176128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x17612c: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x17612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176130: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x176130u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x176134: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x176138: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x176138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17613c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x17613cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x176140: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x176140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x176144: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x176144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x176148: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x176148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17614c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x17614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x176150: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x176150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
    // 0x176154: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x176154u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x176158: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x176158u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17615c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176160: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x176164: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x176164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x176168: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x176168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x17616c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176170: 0x24a70060  addiu       $a3, $a1, 0x60
    ctx->pc = 0x176170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x176174: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x176174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x176178: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x176178u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17617c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x17617cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x176180: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x176180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176184: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x176184u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x176188: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x176188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17618c: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x17618cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x176190: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x176190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x176194: 0x24a80060  addiu       $t0, $a1, 0x60
    ctx->pc = 0x176194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x176198: 0x13343c  dsll32      $a2, $s3, 16
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 16));
    // 0x17619c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17619cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1761a0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1761a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1761a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1761a8: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1761ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1761b0: 0x24a5bd00  addiu       $a1, $a1, -0x4300
    ctx->pc = 0x1761b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1761b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1761b8: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1761bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1761bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1761c0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1761c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1761c4: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x1761c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1761c8: 0xd9040000  lqc2        $vf4, 0x0($t0)
    ctx->pc = 0x1761c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1761cc: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1761ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1761d0: 0x4bc111ac  vsub.xyz    $vf6, $vf2, $vf1
    ctx->pc = 0x1761d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1761d4: 0x4bc119ec  vsub.xyz    $vf7, $vf3, $vf1
    ctx->pc = 0x1761d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1761d8: 0x4bc1222c  vsub.xyz    $vf8, $vf4, $vf1
    ctx->pc = 0x1761d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1761dc: 0x4bc12a6c  vsub.xyz    $vf9, $vf5, $vf1
    ctx->pc = 0x1761dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1761e0: 0x4bc2333c  vmove.xyz   $vf2, $vf6
    ctx->pc = 0x1761e0u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x1761e4: 0x4bc33b3c  vmove.xyz   $vf3, $vf7
    ctx->pc = 0x1761e4u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], ctx->vu0_vf[7], _mm_castsi128_ps(mask)); }
    // 0x1761e8: 0x4bc4433c  vmove.xyz   $vf4, $vf8
    ctx->pc = 0x1761e8u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[8], _mm_castsi128_ps(mask)); }
    // 0x1761ec: 0x4bc54b3c  vmove.xyz   $vf5, $vf9
    ctx->pc = 0x1761ecu;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[9], _mm_castsi128_ps(mask)); }
    // 0x1761f0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1761f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1761f4: 0xf8430010  sqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1761f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1761f8: 0xf8440020  sqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1761f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1761fc: 0xf8450030  sqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1761fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x176200: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x176204: 0x30420e00  andi        $v0, $v0, 0xE00
    ctx->pc = 0x176204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3584);
    // 0x176208: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x176208u;
    {
        const bool branch_taken_0x176208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176208) {
            ctx->pc = 0x1762ACu;
            goto label_1762ac;
        }
    }
    ctx->pc = 0x176210u;
    // 0x176210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x176214: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x176214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x176218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17621c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x176220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x176224: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x176224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x176228: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x176228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x17622c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x17622Cu;
    SET_GPR_U32(ctx, 31, 0x176234u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x17622Cu, 0x176234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176234u;
label_176234:
    // 0x176234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17623c: 0x0  nop
    ctx->pc = 0x17623cu;
    // NOP
    // 0x176240: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x176244: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x176244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x176248: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x176248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17624c: 0xc040c24  jal         func_103090
    ctx->pc = 0x17624Cu;
    SET_GPR_U32(ctx, 31, 0x176254u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x176254u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x176254u) { return; }
    ctx->pc = 0x176254u;
label_176254:
    // 0x176254: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x176254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176258: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x176258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x17625c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x17625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176260: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x176260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x176264: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176268: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x176268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x17626c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176270: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176270u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176274: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17627c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17627cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176280: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176284: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x176288: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17628c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x176290: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x176290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x176294: 0xc040c24  jal         func_103090
    ctx->pc = 0x176294u;
    SET_GPR_U32(ctx, 31, 0x17629Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17629Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17629Cu) { return; }
    ctx->pc = 0x17629Cu;
label_17629c:
    // 0x17629c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1762a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1762a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1762a4: 0x26c20060  addiu       $v0, $s6, 0x60
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1762a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1762a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1762ac:
    // 0x1762ac: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1762b0: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1762b4: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x1762B4u;
    SET_GPR_U32(ctx, 31, 0x1762BCu);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x1762B4u, 0x1762BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1762BCu;
label_1762bc:
    // 0x1762bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1762c0: 0x2463bd10  addiu       $v1, $v1, -0x42F0
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950160));
    // 0x1762c4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1762c4u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD10u));
    // 0x1762c8: 0x26a30140  addiu       $v1, $s5, 0x140
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
    // 0x1762cc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1762ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1762d0:
    // 0x1762d0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1762d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1762d4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1762d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1762d8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1762d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1762dc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1762dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1762e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1762e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1762e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1762e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1762e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1762e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1762ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1762ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1762f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1762f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1762f4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1762f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1762f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1762f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1762fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1762fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x176300: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176304: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x176304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x176308: 0x3e00008  jr          $ra
    ctx->pc = 0x176308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176310u;
}
