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

// Function: Mul_index_data_obj8
// Address: 0x1e3fb0 - 0x1e4500
void Mul_index_data_obj8_0x1e3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mul_index_data_obj8_0x1e3fb0");
#endif

    switch (ctx->pc) {
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4494u: goto label_1e4494;
        default: break;
    }

    ctx->pc = 0x1e3fb0u;

    // 0x1e3fb0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1e3fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1e3fb4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e3fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e3fb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e3fbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e3fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e3fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e3fc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e3fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e3fc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e3fcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e3fd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e3fd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e3fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3fdc: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x1e3fe0: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e3fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x1e3fe4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e3fe8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x1e3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x1e3fec: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1e3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x1e3ff0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e3ff0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3ff4: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e3ff8: 0x8c500068  lw          $s0, 0x68($v0)
    ctx->pc = 0x1e3ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e3ffc: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e4000: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x1e4000u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4004: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e4008: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1e4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1e400c: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e400cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
    // 0x1e4010: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e4014: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1e4014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e4018: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e4018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x1e401c: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x1e401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e4020: 0x8c57006c  lw          $s7, 0x6C($v0)
    ctx->pc = 0x1e4020u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1e4024: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1e4024u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4028: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e402c: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x1e402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e4030: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x1e4030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x1e4034: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e4034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e4038: 0x8c5e0134  lw          $fp, 0x134($v0)
    ctx->pc = 0x1e4038u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e403c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e4040: 0x8c540130  lw          $s4, 0x130($v0)
    ctx->pc = 0x1e4040u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e4044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e404c: 0x0  nop
    ctx->pc = 0x1e404cu;
    // NOP
    // 0x1e4050: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e4050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e4054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e405c: 0x0  nop
    ctx->pc = 0x1e405cu;
    // NOP
    // 0x1e4060: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e4060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e4064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e406c: 0x0  nop
    ctx->pc = 0x1e406cu;
    // NOP
    // 0x1e4070: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e4070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e4074: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1e4074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e4078: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E4078u;
    SET_GPR_U32(ctx, 31, 0x1E4080u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E4080u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4080u) { return; }
    ctx->pc = 0x1E4080u;
label_1e4080:
    // 0x1e4080: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1e4080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e4084: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1e4084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e4088: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x1e4088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1e408c: 0xc040d62  jal         func_103588
    ctx->pc = 0x1E408Cu;
    SET_GPR_U32(ctx, 31, 0x1E4094u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1E4094u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4094u) { return; }
    ctx->pc = 0x1E4094u;
label_1e4094:
    // 0x1e4094: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e4094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e4098: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1e4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e409c: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x1e40a0: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x1e40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
label_1e40a4:
    // 0x1e40a4: 0x32e30001  andi        $v1, $s7, 0x1
    ctx->pc = 0x1e40a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1e40a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E40A8u;
    {
        const bool branch_taken_0x1e40a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40a8) {
            ctx->pc = 0x1E40C8u;
            goto label_1e40c8;
        }
    }
    ctx->pc = 0x1E40B0u;
    // 0x1e40b0: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1e40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e40b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e40b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e40bc: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x1e40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x1e40c0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e40c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e40c4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e40c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1e40c8:
    // 0x1e40c8: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e40ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e40d0: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1E40D0u;
    {
        const bool branch_taken_0x1e40d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40d0) {
            ctx->pc = 0x1E4498u;
            goto label_1e4498;
        }
    }
    ctx->pc = 0x1E40D8u;
    // 0x1e40d8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e40dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e40e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E40E0u;
    {
        const bool branch_taken_0x1e40e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40e0) {
            ctx->pc = 0x1E40F0u;
            goto label_1e40f0;
        }
    }
    ctx->pc = 0x1E40E8u;
    // 0x1e40e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e40ec: 0x0  nop
    ctx->pc = 0x1e40ecu;
    // NOP
label_1e40f0:
    // 0x1e40f0: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x1e40f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e40f4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1e40f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e40f8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e40f8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e40fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4100: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4108: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e410c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4110: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e4110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e4114: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4118: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e411c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e411cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4120: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4124: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4128: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1e4128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1e412c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e412cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4130: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4138: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e413c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4140: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1e4140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1e4144: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e414c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e414cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4150: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4154: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4158: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e4158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e415c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4168: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e416c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4170: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e4170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e4174: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e4174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4178: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e417c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4180: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e4184: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4188: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e418c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e4190: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e4194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4198: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e419c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e41a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e41a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e41a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e41ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e41b4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e41b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e41b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e41bc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e41c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e41c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e41c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e41cc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e41d0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e41d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e41d4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e41d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e41d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e41dc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E41DCu;
    {
        const bool branch_taken_0x1e41dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e41dc) {
            ctx->pc = 0x1E4288u;
            goto label_1e4288;
        }
    }
    ctx->pc = 0x1E41E4u;
    // 0x1e41e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e41e8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e41ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e41f0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e41f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e41f4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e41f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e41f8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e41fc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e4200: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e4200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e4204: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e4208: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e4208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e420c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1e420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e4210: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e4214: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e4214u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e4218: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e421c: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x1e421cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e4220: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e4220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4224: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x1e4224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1e4228: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e4228u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e422c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E422Cu;
    SET_GPR_U32(ctx, 31, 0x1E4234u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E422Cu, 0x1E4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4234u;
label_1e4234:
    // 0x1e4234: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e4238: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e4238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e423c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e4240: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4244: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x1e4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e424c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4250: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4250u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4254: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e4254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e4258: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e425c: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x1e425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4260: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4260u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e4264: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4268: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4268u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e426c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e4270: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4274: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x1e4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4278: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e4278u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e427c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1e427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4280: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e4280u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e4284: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e4284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_1e4288:
    // 0x1e4288: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e4288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e428c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e428cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4290: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e4294: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E4294u;
    SET_GPR_U32(ctx, 31, 0x1E429Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E4294u, 0x1E429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E429Cu;
label_1e429c:
    // 0x1e429c: 0xc60100c0  lwc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42a0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1e42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e42ac: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42b0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e42b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e42bc: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42c0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1e42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e42c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e42c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e42c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e42cc: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e42d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e42d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e42d8: 0x0  nop
    ctx->pc = 0x1e42d8u;
    // NOP
    // 0x1e42dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e42dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e42e0: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e42e4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e42e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e42e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e42ec: 0x0  nop
    ctx->pc = 0x1e42ecu;
    // NOP
    // 0x1e42f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e42f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e42f4: 0x0  nop
    ctx->pc = 0x1e42f4u;
    // NOP
    // 0x1e42f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E42F8u;
    {
        const bool branch_taken_0x1e42f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e42f8) {
            ctx->pc = 0x1E4310u;
            goto label_1e4310;
        }
    }
    ctx->pc = 0x1E4300u;
    // 0x1e4300: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e4304: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1e4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1e4308: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e4308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e430c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e430cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e4310:
    // 0x1e4310: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e4310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e4314: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4318: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e431c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E431Cu;
    SET_GPR_U32(ctx, 31, 0x1E4324u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E431Cu, 0x1E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e4328: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e432c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e4330: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e4330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e4334: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E4334u;
    SET_GPR_U32(ctx, 31, 0x1E433Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E4334u, 0x1E433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E433Cu;
label_1e433c:
    // 0x1e433c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4340: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e4340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e4344: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e4344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e4348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e4348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e434c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E434Cu;
    SET_GPR_U32(ctx, 31, 0x1E4354u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E4354u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4354u) { return; }
    ctx->pc = 0x1E4354u;
label_1e4354:
    // 0x1e4354: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e435c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e435cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4360: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4360u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e4364: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4364u;
    {
        const bool branch_taken_0x1e4364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4364) {
            ctx->pc = 0x1E4388u;
            goto label_1e4388;
        }
    }
    ctx->pc = 0x1E436Cu;
    // 0x1e436c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e4370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4374: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e4374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4378: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e437c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E437Cu;
    {
        const bool branch_taken_0x1e437c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e437c) {
            ctx->pc = 0x1E4390u;
            goto label_1e4390;
        }
    }
    ctx->pc = 0x1E4384u;
    // 0x1e4384: 0x0  nop
    ctx->pc = 0x1e4384u;
    // NOP
label_1e4388:
    // 0x1e4388: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e4388u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e438c: 0x0  nop
    ctx->pc = 0x1e438cu;
    // NOP
label_1e4390:
    // 0x1e4390: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1e4394: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4398: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e4398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e439c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E439Cu;
    {
        const bool branch_taken_0x1e439c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e439c) {
            ctx->pc = 0x1E43A8u;
            goto label_1e43a8;
        }
    }
    ctx->pc = 0x1E43A4u;
    // 0x1e43a4: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e43a8:
    // 0x1e43a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e43ac: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e43b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e43b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e43b4: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E43B4u;
    SET_GPR_U32(ctx, 31, 0x1E43BCu);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E43B4u, 0x1E43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43BCu;
label_1e43bc:
    // 0x1e43bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e43c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e43c4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e43c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e43c8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e43c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e43cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E43CCu;
    {
        const bool branch_taken_0x1e43cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e43cc) {
            ctx->pc = 0x1E43F0u;
            goto label_1e43f0;
        }
    }
    ctx->pc = 0x1E43D4u;
    // 0x1e43d4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1e43d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e43dc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e43dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e43e0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e43e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e43e4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E43E4u;
    {
        const bool branch_taken_0x1e43e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e43e4) {
            ctx->pc = 0x1E43F8u;
            goto label_1e43f8;
        }
    }
    ctx->pc = 0x1E43ECu;
    // 0x1e43ec: 0x0  nop
    ctx->pc = 0x1e43ecu;
    // NOP
label_1e43f0:
    // 0x1e43f0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e43f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e43f4: 0x0  nop
    ctx->pc = 0x1e43f4u;
    // NOP
label_1e43f8:
    // 0x1e43f8: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1e43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e43fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4400: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e4400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e4404: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4404u;
    {
        const bool branch_taken_0x1e4404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4404) {
            ctx->pc = 0x1E4410u;
            goto label_1e4410;
        }
    }
    ctx->pc = 0x1E440Cu;
    // 0x1e440c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e440cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e4410:
    // 0x1e4410: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e4410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4414: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e4414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e4418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e441c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E441Cu;
    SET_GPR_U32(ctx, 31, 0x1E4424u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E441Cu, 0x1E4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4424u;
label_1e4424:
    // 0x1e4424: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e442c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e442cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4430: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e4434: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4434u;
    {
        const bool branch_taken_0x1e4434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4434) {
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E443Cu;
    // 0x1e443c: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e4440: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4444: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e4444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4448: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e444c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E444Cu;
    {
        const bool branch_taken_0x1e444c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e444c) {
            ctx->pc = 0x1E4460u;
            goto label_1e4460;
        }
    }
    ctx->pc = 0x1E4454u;
    // 0x1e4454: 0x0  nop
    ctx->pc = 0x1e4454u;
    // NOP
label_1e4458:
    // 0x1e4458: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e4458u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e445c: 0x0  nop
    ctx->pc = 0x1e445cu;
    // NOP
label_1e4460:
    // 0x1e4460: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x1e4460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1e4464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4468: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e4468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e446c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E446Cu;
    {
        const bool branch_taken_0x1e446c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e446c) {
            ctx->pc = 0x1E4478u;
            goto label_1e4478;
        }
    }
    ctx->pc = 0x1E4474u;
    // 0x1e4474: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e4474u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e4478:
    // 0x1e4478: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e4478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e447c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4480: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e4480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e4484: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1e4484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4488: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e4488u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e448c: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E448Cu;
    SET_GPR_U32(ctx, 31, 0x1E4494u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E448Cu, 0x1E4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4494u;
label_1e4494:
    // 0x1e4494: 0x0  nop
    ctx->pc = 0x1e4494u;
    // NOP
label_1e4498:
    // 0x1e4498: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e4498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e449c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1e44a0: 0x16e0ff00  bnez        $s7, . + 4 + (-0x100 << 2)
    ctx->pc = 0x1E44A0u;
    {
        const bool branch_taken_0x1e44a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e44a0) {
            ctx->pc = 0x1E40A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e40a4;
        }
    }
    ctx->pc = 0x1E44A8u;
    // 0x1e44a8: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e44ac: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e44b0: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E44B0u;
    {
        const bool branch_taken_0x1e44b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e44b0) {
            ctx->pc = 0x1E44CCu;
            goto label_1e44cc;
        }
    }
    ctx->pc = 0x1E44B8u;
    // 0x1e44b8: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e44bc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e44c0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e44c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e44c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e44c8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e44c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_1e44cc:
    // 0x1e44cc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e44ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e44d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e44d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e44d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e44d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e44d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e44d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e44dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e44dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e44e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e44e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e44e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e44e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e44e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e44e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e44ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e44ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e44f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e44f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e44f4: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x1e44f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e44f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E44F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4500u;
}
