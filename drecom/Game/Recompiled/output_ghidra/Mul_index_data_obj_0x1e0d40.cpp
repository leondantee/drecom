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

// Function: Mul_index_data_obj
// Address: 0x1e0d40 - 0x1e1278
void Mul_index_data_obj_0x1e0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj_0x1e0d40");
#endif

    switch (ctx->pc) {
        case 0x1e0dd8u: goto label_1e0dd8;
        case 0x1e0f70u: goto label_1e0f70;
        case 0x1e0fecu: goto label_1e0fec;
        case 0x1e1000u: goto label_1e1000;
        case 0x1e1014u: goto label_1e1014;
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10ccu: goto label_1e10cc;
        case 0x1e1134u: goto label_1e1134;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e120cu: goto label_1e120c;
        default: break;
    }

    ctx->pc = 0x1e0d40u;

    // 0x1e0d40: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1e0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1e0d44: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e0d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e0d48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e0d4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e0d50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e0d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e0d54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e0d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e0d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e0d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e0d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e0d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0d6c: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1e0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x1e0d70: 0xafa501a8  sw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 5));
    // 0x1e0d74: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e0d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0d78: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1e0d7c: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1e0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x1e0d80: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e0d80u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0d84: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e0d88: 0x8c700068  lw          $s0, 0x68($v1)
    ctx->pc = 0x1e0d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e0d8c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e0d90: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e0d94: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e0d98: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1e0d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1e0d9c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x1e0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x1e0da0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e0da4: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1e0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1e0da8: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x1e0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
    // 0x1e0dac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e0db0: 0x8c7e006c  lw          $fp, 0x6C($v1)
    ctx->pc = 0x1e0db0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e0db4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1e0db4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0db8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0dbc: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e0dc0: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x1e0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
    // 0x1e0dc4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0dc8: 0x8c760134  lw          $s6, 0x134($v1)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e0dcc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e0dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0dd0: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x1e0dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1e0dd4: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x1e0dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
label_1e0dd8:
    // 0x1e0dd8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0ddc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e0ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e0de0: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x1E0DE0u;
    {
        const bool branch_taken_0x1e0de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0de0) {
            ctx->pc = 0x1E1210u;
            goto label_1e1210;
        }
    }
    ctx->pc = 0x1E0DE8u;
    // 0x1e0de8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e0de8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e0dec: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0df0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e0df4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0DF4u;
    {
        const bool branch_taken_0x1e0df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0df4) {
            ctx->pc = 0x1E0E00u;
            goto label_1e0e00;
        }
    }
    ctx->pc = 0x1E0DFCu;
    // 0x1e0dfc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e0e00:
    // 0x1e0e00: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e0e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e0e04: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0e08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e1c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e0e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e0e20: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e34: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e0e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e0e38: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e44: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e4c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e0e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e0e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0e58: 0x0  nop
    ctx->pc = 0x1e0e58u;
    // NOP
    // 0x1e0e5c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e0e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e0e60: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e70: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e74: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e0e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e0e78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0e88: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e8c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e0e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e0e90: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0e94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0e9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ea0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ea4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e0ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e0ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0eb0: 0x0  nop
    ctx->pc = 0x1e0eb0u;
    // NOP
    // 0x1e0eb4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e0eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e0eb8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0ec4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ec8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e0ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ecc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e0eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e0ed0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0ed4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0edc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ee0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ee4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e0ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e0ee8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e0eec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e0ef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0ef4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e0ef8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e0ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0efc: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e0efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e0f00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0f08: 0x0  nop
    ctx->pc = 0x1e0f08u;
    // NOP
    // 0x1e0f0c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e0f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e0f10: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0f14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e0f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e0f18: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E0F18u;
    {
        const bool branch_taken_0x1e0f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f18) {
            ctx->pc = 0x1E0FE0u;
            goto label_1e0fe0;
        }
    }
    ctx->pc = 0x1E0F20u;
    // 0x1e0f20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e0f24: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e0f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f2c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e0f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e0f30: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e0f30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0f34: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0f38: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e0f3c: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e0f40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e0f44: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e0f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f48: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e0f4c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e0f50: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e0f54: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e0f58: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e0f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f5c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e0f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0f60: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e0f60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e0f64: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e0f64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e0f68: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E0F68u;
    SET_GPR_U32(ctx, 31, 0x1E0F70u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E0F68u, 0x1E0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0F70u;
label_1e0f70:
    // 0x1e0f70: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e0f74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e0f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e0f78: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e0f7c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0f80: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e0f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0f84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0f88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0f90: 0x0  nop
    ctx->pc = 0x1e0f90u;
    // NOP
    // 0x1e0f94: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0f94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0f98: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e0f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e0f9c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fa0: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e0fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fa4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0fa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0fb0: 0x0  nop
    ctx->pc = 0x1e0fb0u;
    // NOP
    // 0x1e0fb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0fb8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e0fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e0fbc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fc0: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e0fc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fc8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0fd0: 0x0  nop
    ctx->pc = 0x1e0fd0u;
    // NOP
    // 0x1e0fd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0fd8: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e0fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e0fdc: 0x0  nop
    ctx->pc = 0x1e0fdcu;
    // NOP
label_1e0fe0:
    // 0x1e0fe0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e0fe4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E0FE4u;
    SET_GPR_U32(ctx, 31, 0x1E0FECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E0FECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0FECu) { return; }
    ctx->pc = 0x1E0FECu;
label_1e0fec:
    // 0x1e0fec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e0ff0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e0ff4: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x1e0ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e0ff8: 0xc040d62  jal         func_103588
    ctx->pc = 0x1E0FF8u;
    SET_GPR_U32(ctx, 31, 0x1E1000u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1E1000u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E1000u) { return; }
    ctx->pc = 0x1E1000u;
label_1e1000:
    // 0x1e1000: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e1000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1004: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e1004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1008: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e1008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e100c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E100Cu;
    SET_GPR_U32(ctx, 31, 0x1E1014u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E100Cu, 0x1E1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1014u;
label_1e1014:
    // 0x1e1014: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e1014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1018: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e1018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e101c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e101cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1020: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e1020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e1024: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1028: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e1028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e102c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e102cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1030: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e1030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e1034: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1038: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e1038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e103c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e103cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1040: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e1040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e1044: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1048: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e104c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e104cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1050: 0x0  nop
    ctx->pc = 0x1e1050u;
    // NOP
    // 0x1e1054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1058: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e1058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e105c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1064: 0x0  nop
    ctx->pc = 0x1e1064u;
    // NOP
    // 0x1e1068: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e106c: 0x0  nop
    ctx->pc = 0x1e106cu;
    // NOP
    // 0x1e1070: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1070u;
    {
        const bool branch_taken_0x1e1070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1070) {
            ctx->pc = 0x1E1088u;
            goto label_1e1088;
        }
    }
    ctx->pc = 0x1E1078u;
    // 0x1e1078: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e107c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e1080: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1084: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1084u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e1088:
    // 0x1e1088: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e108c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e108cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1090: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e1094: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E1094u;
    SET_GPR_U32(ctx, 31, 0x1E109Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E1094u, 0x1E109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E109Cu;
label_1e109c:
    // 0x1e109c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e10a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e10a4: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e10a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e10ac: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E10ACu;
    SET_GPR_U32(ctx, 31, 0x1E10B4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E10ACu, 0x1E10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10B4u;
label_1e10b4:
    // 0x1e10b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e10b8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e10bc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e10bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e10c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e10c4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E10C4u;
    SET_GPR_U32(ctx, 31, 0x1E10CCu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E10CCu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E10CCu) { return; }
    ctx->pc = 0x1E10CCu;
label_1e10cc:
    // 0x1e10cc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e10d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e10d4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e10d8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e10d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e10dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E10DCu;
    {
        const bool branch_taken_0x1e10dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e10dc) {
            ctx->pc = 0x1E1100u;
            goto label_1e1100;
        }
    }
    ctx->pc = 0x1E10E4u;
    // 0x1e10e4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e10e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e10ec: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e10ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e10f0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e10f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e10f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E10F4u;
    {
        const bool branch_taken_0x1e10f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e10f4) {
            ctx->pc = 0x1E1108u;
            goto label_1e1108;
        }
    }
    ctx->pc = 0x1E10FCu;
    // 0x1e10fc: 0x0  nop
    ctx->pc = 0x1e10fcu;
    // NOP
label_1e1100:
    // 0x1e1100: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1100u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1104: 0x0  nop
    ctx->pc = 0x1e1104u;
    // NOP
label_1e1108:
    // 0x1e1108: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x1e1108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1e110c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1110: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e1110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e1114: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1114u;
    {
        const bool branch_taken_0x1e1114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1114) {
            ctx->pc = 0x1E1120u;
            goto label_1e1120;
        }
    }
    ctx->pc = 0x1E111Cu;
    // 0x1e111c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e111cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e1120:
    // 0x1e1120: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1124: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e1124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e1128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e112c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E112Cu;
    SET_GPR_U32(ctx, 31, 0x1E1134u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E112Cu, 0x1E1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1134u;
label_1e1134:
    // 0x1e1134: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e1134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e1138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e113c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e113cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1140: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e1144: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1144u;
    {
        const bool branch_taken_0x1e1144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1144) {
            ctx->pc = 0x1E1168u;
            goto label_1e1168;
        }
    }
    ctx->pc = 0x1E114Cu;
    // 0x1e114c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e1150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1154: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e1154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e1158: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e1158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e115c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E115Cu;
    {
        const bool branch_taken_0x1e115c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e115c) {
            ctx->pc = 0x1E1170u;
            goto label_1e1170;
        }
    }
    ctx->pc = 0x1E1164u;
    // 0x1e1164: 0x0  nop
    ctx->pc = 0x1e1164u;
    // NOP
label_1e1168:
    // 0x1e1168: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1168u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e116c: 0x0  nop
    ctx->pc = 0x1e116cu;
    // NOP
label_1e1170:
    // 0x1e1170: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1e1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e1174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1178: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e1178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e117c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E117Cu;
    {
        const bool branch_taken_0x1e117c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e117c) {
            ctx->pc = 0x1E1188u;
            goto label_1e1188;
        }
    }
    ctx->pc = 0x1E1184u;
    // 0x1e1184: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1184u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e1188:
    // 0x1e1188: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e1188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e118c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e118cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e1190: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e1190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1194: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E1194u, 0x1E119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e11a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11a4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e11a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e11a8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e11a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e11ac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E11ACu;
    {
        const bool branch_taken_0x1e11ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e11ac) {
            ctx->pc = 0x1E11D0u;
            goto label_1e11d0;
        }
    }
    ctx->pc = 0x1E11B4u;
    // 0x1e11b4: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e11b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11bc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e11bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e11c0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e11c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e11c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E11C4u;
    {
        const bool branch_taken_0x1e11c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e11c4) {
            ctx->pc = 0x1E11D8u;
            goto label_1e11d8;
        }
    }
    ctx->pc = 0x1E11CCu;
    // 0x1e11cc: 0x0  nop
    ctx->pc = 0x1e11ccu;
    // NOP
label_1e11d0:
    // 0x1e11d0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e11d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e11d4: 0x0  nop
    ctx->pc = 0x1e11d4u;
    // NOP
label_1e11d8:
    // 0x1e11d8: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e11dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e11e0: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e11e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e11e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E11E4u;
    {
        const bool branch_taken_0x1e11e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e11e4) {
            ctx->pc = 0x1E11F0u;
            goto label_1e11f0;
        }
    }
    ctx->pc = 0x1E11ECu;
    // 0x1e11ec: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e11ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e11f0:
    // 0x1e11f0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e11f4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e11f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e11f8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e11f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e11fc: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1e11fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e1200: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e1200u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e1204: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E1204u;
    SET_GPR_U32(ctx, 31, 0x1E120Cu);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E1204u, 0x1E120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E120Cu;
label_1e120c:
    // 0x1e120c: 0x0  nop
    ctx->pc = 0x1e120cu;
    // NOP
label_1e1210:
    // 0x1e1210: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1214: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1e1214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e1218: 0x17c0feef  bnez        $fp, . + 4 + (-0x111 << 2)
    ctx->pc = 0x1E1218u;
    {
        const bool branch_taken_0x1e1218 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1218) {
            ctx->pc = 0x1E0DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0dd8;
        }
    }
    ctx->pc = 0x1E1220u;
    // 0x1e1220: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1224: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e1224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e1228: 0x16e30006  bne         $s7, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1228u;
    {
        const bool branch_taken_0x1e1228 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1228) {
            ctx->pc = 0x1E1244u;
            goto label_1e1244;
        }
    }
    ctx->pc = 0x1E1230u;
    // 0x1e1230: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1234: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e1238: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e123c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e1240: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e1240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e1244:
    // 0x1e1244: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e1244u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e1248: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e1248u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e124c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e124cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e1250: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e1250u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e1254: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e1254u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1258: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e1258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e125c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e125cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1264: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e126c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x1e126cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e1270: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1278u;
}
