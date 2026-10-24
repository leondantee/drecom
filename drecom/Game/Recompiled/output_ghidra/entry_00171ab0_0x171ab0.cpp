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

// Function: entry_00171ab0
// Address: 0x171ab0 - 0x171d2c
void entry_00171ab0_0x171ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171ab0_0x171ab0");
#endif

    switch (ctx->pc) {
        case 0x171b88u: goto label_171b88;
        case 0x171bb0u: goto label_171bb0;
        case 0x171bd8u: goto label_171bd8;
        case 0x171c94u: goto label_171c94;
        case 0x171ca8u: goto label_171ca8;
        case 0x171cbcu: goto label_171cbc;
        case 0x171d04u: goto label_171d04;
        case 0x171d24u: goto label_171d24;
        default: break;
    }

    ctx->pc = 0x171ab0u;

    // 0x171ab0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x171ab4: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x171ab4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171ab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171abc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x171ac0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ac4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171acc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x171accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x171ad0: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x171ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x171ad4: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x171ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x171ad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x171ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171adc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x171adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x171ae0: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x171AE0u;
    {
        const bool branch_taken_0x171ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ae0) {
            ctx->pc = 0x171D2Cu;
            return;
        }
    }
    ctx->pc = 0x171AE8u;
    // 0x171ae8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171aec: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x171aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171af0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x171af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171af4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171af8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171b00: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171b04: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x171b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171b08: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x171b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b0c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171b10: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x171b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171b14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171b18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171b1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171b20: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171b24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171b28: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171b2c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x171b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b30: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171b34: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x171b34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x171b38: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x171b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171b3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x171b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x171b40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171b44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171b48: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171b4c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171b50: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x171b54: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171b54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171b58: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171b5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171b60: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171b64: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x171b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171b68: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x171b6c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x171b70: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x171b74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b78: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171b7c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x171b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171b80: 0xc040c80  jal         func_103200
    ctx->pc = 0x171B80u;
    SET_GPR_U32(ctx, 31, 0x171B88u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171B88u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171B88u) { return; }
    ctx->pc = 0x171B88u;
label_171b88:
    // 0x171b88: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171b8c: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x171b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171b90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x171b94: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x171b98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171b9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171ba0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171ba4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171ba8: 0xc040c80  jal         func_103200
    ctx->pc = 0x171BA8u;
    SET_GPR_U32(ctx, 31, 0x171BB0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171BB0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171BB0u) { return; }
    ctx->pc = 0x171BB0u;
label_171bb0:
    // 0x171bb0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171bb4: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x171bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171bb8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x171bbc: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x171bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171bc4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x171bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171bc8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171bcc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171bd0: 0xc040c80  jal         func_103200
    ctx->pc = 0x171BD0u;
    SET_GPR_U32(ctx, 31, 0x171BD8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x171BD8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171BD8u) { return; }
    ctx->pc = 0x171BD8u;
label_171bd8:
    // 0x171bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171be0: 0x0  nop
    ctx->pc = 0x171be0u;
    // NOP
    // 0x171be4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x171be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x171be8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171bf0: 0x0  nop
    ctx->pc = 0x171bf0u;
    // NOP
    // 0x171bf4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x171bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x171bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171c00: 0x0  nop
    ctx->pc = 0x171c00u;
    // NOP
    // 0x171c04: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x171c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x171c08: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171c0c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171c10: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c14: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171c18: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171c1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171c20: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171c28: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x171c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171c30: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x171c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171c34: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x171c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171c38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x171c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171c40: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171c48: 0x24540070  addiu       $s4, $v0, 0x70
    ctx->pc = 0x171c48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c4c: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x171c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171c50: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c54: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x171c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x171c58: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171c5c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x171c60: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171c64: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171c68: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171c6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171c70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171c74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x171c74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171c78: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x171c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171c7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x171c80: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c84: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x171c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171c88: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x171c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171c8c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171C8Cu;
    SET_GPR_U32(ctx, 31, 0x171C94u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171C94u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171C94u) { return; }
    ctx->pc = 0x171C94u;
label_171c94:
    // 0x171c94: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c98: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171c9c: 0xc7ac0148  lwc1        $f12, 0x148($sp)
    ctx->pc = 0x171c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171ca0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171CA0u;
    SET_GPR_U32(ctx, 31, 0x171CA8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171CA8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171CA8u) { return; }
    ctx->pc = 0x171CA8u;
label_171ca8:
    // 0x171ca8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171cac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x171cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171cb0: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x171cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x171cb4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x171CB4u;
    SET_GPR_U32(ctx, 31, 0x171CBCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x171CBCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171CBCu) { return; }
    ctx->pc = 0x171CBCu;
label_171cbc:
    // 0x171cbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cc4: 0x0  nop
    ctx->pc = 0x171cc4u;
    // NOP
    // 0x171cc8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x171cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x171ccc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171cd4: 0x0  nop
    ctx->pc = 0x171cd4u;
    // NOP
    // 0x171cd8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x171cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x171cdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x171ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ce4: 0x0  nop
    ctx->pc = 0x171ce4u;
    // NOP
    // 0x171ce8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x171ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x171cec: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x171cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x171cf0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x171cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x171cf4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x171cf8: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x171cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x171cfc: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x171CFCu;
    SET_GPR_U32(ctx, 31, 0x171D04u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x171D04u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171D04u) { return; }
    ctx->pc = 0x171D04u;
label_171d04:
    // 0x171d04: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x171d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x171d08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x171d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x171d0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x171d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171d10: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x171d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x171d14: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x171d14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x171d18: 0x2688bd50  addiu       $t0, $s4, -0x42B0
    ctx->pc = 0x171d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950224));
    // 0x171d1c: 0xc040ddc  jal         func_103770
    ctx->pc = 0x171D1Cu;
    SET_GPR_U32(ctx, 31, 0x171D24u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x171D24u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171D24u) { return; }
    ctx->pc = 0x171D24u;
label_171d24:
    // 0x171d24: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x171D24u;
    {
        const bool branch_taken_0x171d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171d24) {
            ctx->pc = 0x171E70u;
            return;
        }
    }
    ctx->pc = 0x171D2Cu;
}
