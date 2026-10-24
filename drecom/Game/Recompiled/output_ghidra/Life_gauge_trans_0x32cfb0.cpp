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

// Function: Life_gauge_trans
// Address: 0x32cfb0 - 0x32e02c
void Life_gauge_trans_0x32cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Life_gauge_trans_0x32cfb0");
#endif

    switch (ctx->pc) {
        case 0x32d088u: goto label_32d088;
        case 0x32d174u: goto label_32d174;
        case 0x32d18cu: goto label_32d18c;
        case 0x32d1dcu: goto label_32d1dc;
        case 0x32d1e8u: goto label_32d1e8;
        case 0x32d218u: goto label_32d218;
        case 0x32d2d4u: goto label_32d2d4;
        case 0x32d2ecu: goto label_32d2ec;
        case 0x32d3b8u: goto label_32d3b8;
        case 0x32d3d0u: goto label_32d3d0;
        case 0x32d454u: goto label_32d454;
        case 0x32d460u: goto label_32d460;
        case 0x32d500u: goto label_32d500;
        case 0x32d524u: goto label_32d524;
        case 0x32d54cu: goto label_32d54c;
        case 0x32d570u: goto label_32d570;
        case 0x32d604u: goto label_32d604;
        case 0x32d61cu: goto label_32d61c;
        case 0x32d65cu: goto label_32d65c;
        case 0x32d674u: goto label_32d674;
        case 0x32d6b4u: goto label_32d6b4;
        case 0x32d6ccu: goto label_32d6cc;
        case 0x32d70cu: goto label_32d70c;
        case 0x32d724u: goto label_32d724;
        case 0x32d7b4u: goto label_32d7b4;
        case 0x32d864u: goto label_32d864;
        case 0x32d8fcu: goto label_32d8fc;
        case 0x32da18u: goto label_32da18;
        case 0x32dafcu: goto label_32dafc;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbb4u: goto label_32dbb4;
        case 0x32dc50u: goto label_32dc50;
        case 0x32dc74u: goto label_32dc74;
        case 0x32dc98u: goto label_32dc98;
        case 0x32dcbcu: goto label_32dcbc;
        case 0x32dd4cu: goto label_32dd4c;
        case 0x32dd64u: goto label_32dd64;
        case 0x32dda4u: goto label_32dda4;
        case 0x32ddbcu: goto label_32ddbc;
        case 0x32ddfcu: goto label_32ddfc;
        case 0x32de14u: goto label_32de14;
        case 0x32de54u: goto label_32de54;
        case 0x32de6cu: goto label_32de6c;
        case 0x32deccu: goto label_32decc;
        case 0x32df24u: goto label_32df24;
        case 0x32df58u: goto label_32df58;
        case 0x32dfb8u: goto label_32dfb8;
        case 0x32dff4u: goto label_32dff4;
        default: break;
    }

    ctx->pc = 0x32cfb0u;

    // 0x32cfb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x32cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x32cfb4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x32cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x32cfb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32cfbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32cfc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32cfc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32cfc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32cfcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32cfd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32cfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cfd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cfdc: 0x3c100086  lui         $s0, 0x86
    ctx->pc = 0x32cfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)134 << 16));
    // 0x32cfe0: 0x2612c2f0  addiu       $s2, $s0, -0x3D10
    ctx->pc = 0x32cfe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951664));
    // 0x32cfe4: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x32cfe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32cfe8: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x32cfe8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x32cfec: 0x2675dbc0  addiu       $s5, $s3, -0x2440
    ctx->pc = 0x32cfecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958016));
    // 0x32cff0: 0x72a0be28  paddub      $s7, $s5, $zero
    ctx->pc = 0x32cff0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x32cff4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32cff8: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x32cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32cffc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32cffcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d000: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32d004: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x32d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
    // 0x32d008: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32d008u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d00c: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32d010: 0x2442c290  addiu       $v0, $v0, -0x3D70
    ctx->pc = 0x32d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951568));
    // 0x32d014: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x32d014u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d018: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d01c: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x32d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x32d020: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x32d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x32d024: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x32d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x32d028: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d02c: 0x144003bf  bnez        $v0, . + 4 + (0x3BF << 2)
    ctx->pc = 0x32D02Cu;
    {
        const bool branch_taken_0x32d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d02c) {
            ctx->pc = 0x32DF2Cu;
            goto label_32df2c;
        }
    }
    ctx->pc = 0x32D034u;
    // 0x32d034: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x32d034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x32d038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d040: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32D040u;
    {
        const bool branch_taken_0x32d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d040) {
            ctx->pc = 0x32D074u;
            goto label_32d074;
        }
    }
    ctx->pc = 0x32D048u;
    // 0x32d048: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x32d048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32d04c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d054: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D054u;
    {
        const bool branch_taken_0x32d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d054) {
            ctx->pc = 0x32D074u;
            goto label_32d074;
        }
    }
    ctx->pc = 0x32D05Cu;
    // 0x32d05c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d060: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32d060u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32d064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32d064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32d068: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d06c: 0x104003af  beqz        $v0, . + 4 + (0x3AF << 2)
    ctx->pc = 0x32D06Cu;
    {
        const bool branch_taken_0x32d06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d06c) {
            ctx->pc = 0x32DF2Cu;
            goto label_32df2c;
        }
    }
    ctx->pc = 0x32D074u;
label_32d074:
    // 0x32d074: 0x26321020  addiu       $s2, $s1, 0x1020
    ctx->pc = 0x32d074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4128));
    // 0x32d078: 0x26331820  addiu       $s3, $s1, 0x1820
    ctx->pc = 0x32d078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 6176));
    // 0x32d07c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x32d07cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32d080: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x32D080u;
    {
        const bool branch_taken_0x32d080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d080) {
            ctx->pc = 0x32D7C8u;
            goto label_32d7c8;
        }
    }
    ctx->pc = 0x32D088u;
label_32d088:
    // 0x32d088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d08c: 0x12a20099  beq         $s5, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x32D08Cu;
    {
        const bool branch_taken_0x32d08c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d08c) {
            ctx->pc = 0x32D2F4u;
            goto label_32d2f4;
        }
    }
    ctx->pc = 0x32D094u;
    // 0x32d094: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D094u;
    {
        const bool branch_taken_0x32d094 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d094) {
            ctx->pc = 0x32D0A4u;
            goto label_32d0a4;
        }
    }
    ctx->pc = 0x32D09Cu;
    // 0x32d09c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x32D09Cu;
    {
        const bool branch_taken_0x32d09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d09c) {
            ctx->pc = 0x32D3D0u;
            goto label_32d3d0;
        }
    }
    ctx->pc = 0x32D0A4u;
label_32d0a4:
    // 0x32d0a4: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x32d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x32d0a8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d0ac: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x32d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x32d0b0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32d0b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x32d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32d0b8: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32d0bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d0c0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d0c4: 0x86e210a6  lh          $v0, 0x10A6($s7)
    ctx->pc = 0x32d0c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4262)));
    // 0x32d0c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d0cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d0ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d0d0: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x32d0d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x32d0d4: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x32D0D4u;
    {
        const bool branch_taken_0x32d0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0d4) {
            ctx->pc = 0x32D218u;
            goto label_32d218;
        }
    }
    ctx->pc = 0x32D0DCu;
    // 0x32d0dc: 0x8e222828  lw          $v0, 0x2828($s1)
    ctx->pc = 0x32d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d0e0: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x32d0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x32d0e4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D0E4u;
    {
        const bool branch_taken_0x32d0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0e4) {
            ctx->pc = 0x32D120u;
            goto label_32d120;
        }
    }
    ctx->pc = 0x32D0ECu;
    // 0x32d0ec: 0x8e222828  lw          $v0, 0x2828($s1)
    ctx->pc = 0x32d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d0f4: 0x0  nop
    ctx->pc = 0x32d0f4u;
    // NOP
    // 0x32d0f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d0fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d104: 0x0  nop
    ctx->pc = 0x32d104u;
    // NOP
    // 0x32d108: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d10c: 0x0  nop
    ctx->pc = 0x32d10cu;
    // NOP
    // 0x32d110: 0x0  nop
    ctx->pc = 0x32d110u;
    // NOP
    // 0x32d114: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d118: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32D118u;
    {
        const bool branch_taken_0x32d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d118) {
            ctx->pc = 0x32D150u;
            goto label_32d150;
        }
    }
    ctx->pc = 0x32D120u;
label_32d120:
    // 0x32d120: 0x8e232828  lw          $v1, 0x2828($s1)
    ctx->pc = 0x32d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10280)));
    // 0x32d124: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x32d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x32d128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32d128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d130: 0x0  nop
    ctx->pc = 0x32d130u;
    // NOP
    // 0x32d134: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d138: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d13c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d140: 0x0  nop
    ctx->pc = 0x32d140u;
    // NOP
    // 0x32d144: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d144u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d148: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d14c: 0x0  nop
    ctx->pc = 0x32d14cu;
    // NOP
label_32d150:
    // 0x32d150: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d154: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x32d154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x32d158: 0x24a2a5e0  addiu       $v0, $a1, -0x5A20
    ctx->pc = 0x32d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944224));
    // 0x32d15c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d160: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d164: 0x2446a5f0  addiu       $a2, $v0, -0x5A10
    ctx->pc = 0x32d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x32d168: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d16c: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D16Cu;
    SET_GPR_U32(ctx, 31, 0x32D174u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D174u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D174u) { return; }
    ctx->pc = 0x32D174u;
label_32d174:
    // 0x32d174: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d178: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d17c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d180: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d180u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d184: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D184u;
    SET_GPR_U32(ctx, 31, 0x32D18Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D18Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D18Cu) { return; }
    ctx->pc = 0x32D18Cu;
label_32d18c:
    // 0x32d18c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d190: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32d190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32d194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32d198: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d19c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32D19Cu;
    {
        const bool branch_taken_0x32d19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d19c) {
            ctx->pc = 0x32D218u;
            goto label_32d218;
        }
    }
    ctx->pc = 0x32D1A4u;
    // 0x32d1a4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32d1a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32d1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d1ac: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32d1b0: 0x34420203  ori         $v0, $v0, 0x203
    ctx->pc = 0x32d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x32d1b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32d1b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d1bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32d1c0: 0x24451f10  addiu       $a1, $v0, 0x1F10
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    // 0x32d1c4: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x32d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d1c8: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x32d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d1cc: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x32d1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d1d0: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x32d1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d1d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32D1D4u;
    SET_GPR_U32(ctx, 31, 0x32D1DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32D1D4u, 0x32D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1DCu;
label_32d1dc:
    // 0x32d1dc: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d1e0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32D1E0u;
    SET_GPR_U32(ctx, 31, 0x32D1E8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32D1E0u, 0x32D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1E8u;
label_32d1e8:
    // 0x32d1e8: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32d1ec: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32d1ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32d1f0: 0x3c031d04  lui         $v1, 0x1D04
    ctx->pc = 0x32d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7428 << 16));
    // 0x32d1f4: 0x34661e02  ori         $a2, $v1, 0x1E02
    ctx->pc = 0x32d1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7682);
    // 0x32d1f8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32d1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32d1fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32d1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d200: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32d200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32d204: 0x24631f38  addiu       $v1, $v1, 0x1F38
    ctx->pc = 0x32d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7992));
    // 0x32d208: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d20c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32d20cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d210: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32D210u;
    SET_GPR_U32(ctx, 31, 0x32D218u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32D210u, 0x32D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D218u;
label_32d218:
    // 0x32d218: 0x9223290e  lbu         $v1, 0x290E($s1)
    ctx->pc = 0x32d218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10510)));
    // 0x32d21c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d224: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x32D224u;
    {
        const bool branch_taken_0x32d224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d224) {
            ctx->pc = 0x32D3D0u;
            goto label_32d3d0;
        }
    }
    ctx->pc = 0x32D22Cu;
    // 0x32d22c: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d22cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d230: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d234: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d234u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d238: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x32d238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x32d23c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D23Cu;
    {
        const bool branch_taken_0x32d23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d23c) {
            ctx->pc = 0x32D278u;
            goto label_32d278;
        }
    }
    ctx->pc = 0x32D244u;
    // 0x32d244: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d24c: 0x0  nop
    ctx->pc = 0x32d24cu;
    // NOP
    // 0x32d250: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d254: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x32d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x32d258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d25c: 0x0  nop
    ctx->pc = 0x32d25cu;
    // NOP
    // 0x32d260: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d260u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d264: 0x0  nop
    ctx->pc = 0x32d264u;
    // NOP
    // 0x32d268: 0x0  nop
    ctx->pc = 0x32d268u;
    // NOP
    // 0x32d26c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d270: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32D270u;
    {
        const bool branch_taken_0x32d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d270) {
            ctx->pc = 0x32D2B0u;
            goto label_32d2b0;
        }
    }
    ctx->pc = 0x32D278u;
label_32d278:
    // 0x32d278: 0x86222910  lh          $v0, 0x2910($s1)
    ctx->pc = 0x32d278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10512)));
    // 0x32d27c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32d27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d280: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32d280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32d284: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x32d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32d288: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32d288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d28c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d290: 0x0  nop
    ctx->pc = 0x32d290u;
    // NOP
    // 0x32d294: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d298: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x32d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x32d29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d2a0: 0x0  nop
    ctx->pc = 0x32d2a0u;
    // NOP
    // 0x32d2a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d2a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d2a8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d2ac: 0x0  nop
    ctx->pc = 0x32d2acu;
    // NOP
label_32d2b0:
    // 0x32d2b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d2b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d2b8: 0x2443a620  addiu       $v1, $v0, -0x59E0
    ctx->pc = 0x32d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x32d2bc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d2bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d2c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d2c4: 0x2446a630  addiu       $a2, $v0, -0x59D0
    ctx->pc = 0x32d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x32d2c8: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d2cc: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D2CCu;
    SET_GPR_U32(ctx, 31, 0x32D2D4u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D2D4u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D2D4u) { return; }
    ctx->pc = 0x32D2D4u;
label_32d2d4:
    // 0x32d2d4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d2d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d2d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d2dc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d2e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d2e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d2e4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D2E4u;
    SET_GPR_U32(ctx, 31, 0x32D2ECu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D2ECu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D2ECu) { return; }
    ctx->pc = 0x32D2ECu;
label_32d2ec:
    // 0x32d2ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x32D2ECu;
    {
        const bool branch_taken_0x32d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d2ec) {
            ctx->pc = 0x32D3D0u;
            goto label_32d3d0;
        }
    }
    ctx->pc = 0x32D2F4u;
label_32d2f4:
    // 0x32d2f4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x32d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x32d2f8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d2fc: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x32d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x32d300: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x32d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x32d304: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32d308: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d30c: 0x92222904  lbu         $v0, 0x2904($s1)
    ctx->pc = 0x32d30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10500)));
    // 0x32d310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d318: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x32D318u;
    {
        const bool branch_taken_0x32d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d318) {
            ctx->pc = 0x32D3D0u;
            goto label_32d3d0;
        }
    }
    ctx->pc = 0x32D320u;
    // 0x32d320: 0x8e22282c  lw          $v0, 0x282C($s1)
    ctx->pc = 0x32d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d324: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x32d324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x32d328: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32D328u;
    {
        const bool branch_taken_0x32d328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d328) {
            ctx->pc = 0x32D364u;
            goto label_32d364;
        }
    }
    ctx->pc = 0x32D330u;
    // 0x32d330: 0x8e26282c  lw          $a2, 0x282C($s1)
    ctx->pc = 0x32d330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d334: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32d334u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d338: 0x0  nop
    ctx->pc = 0x32d338u;
    // NOP
    // 0x32d33c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d340: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x32d340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x32d344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d348: 0x0  nop
    ctx->pc = 0x32d348u;
    // NOP
    // 0x32d34c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d34cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d350: 0x0  nop
    ctx->pc = 0x32d350u;
    // NOP
    // 0x32d354: 0x0  nop
    ctx->pc = 0x32d354u;
    // NOP
    // 0x32d358: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x32d35c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32D35Cu;
    {
        const bool branch_taken_0x32d35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d35c) {
            ctx->pc = 0x32D390u;
            goto label_32d390;
        }
    }
    ctx->pc = 0x32D364u;
label_32d364:
    // 0x32d364: 0x8e23282c  lw          $v1, 0x282C($s1)
    ctx->pc = 0x32d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10284)));
    // 0x32d368: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x32d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x32d36c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d374: 0x0  nop
    ctx->pc = 0x32d374u;
    // NOP
    // 0x32d378: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d37c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x32d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x32d380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d384: 0x0  nop
    ctx->pc = 0x32d384u;
    // NOP
    // 0x32d388: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d388u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d38c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x32d38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_32d390:
    // 0x32d390: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d394: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d398: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d39c: 0x2443a610  addiu       $v1, $v0, -0x59F0
    ctx->pc = 0x32d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x32d3a0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d3a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d3a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d3a8: 0x2446a600  addiu       $a2, $v0, -0x5A00
    ctx->pc = 0x32d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x32d3ac: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d3b0: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D3B0u;
    SET_GPR_U32(ctx, 31, 0x32D3B8u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D3B8u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D3B8u) { return; }
    ctx->pc = 0x32D3B8u;
label_32d3b8:
    // 0x32d3b8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d3bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d3bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d3c0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d3c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d3c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d3c8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D3C8u;
    SET_GPR_U32(ctx, 31, 0x32D3D0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D3D0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D3D0u) { return; }
    ctx->pc = 0x32D3D0u;
label_32d3d0:
    // 0x32d3d0: 0x923e000d  lbu         $fp, 0xD($s1)
    ctx->pc = 0x32d3d0u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32d3d4: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x32d3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x32d3d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d3dc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32D3DCu;
    {
        const bool branch_taken_0x32d3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d3dc) {
            ctx->pc = 0x32D408u;
            goto label_32d408;
        }
    }
    ctx->pc = 0x32D3E4u;
    // 0x32d3e4: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x32d3e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32d3e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d3ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d3ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d3f0: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x32d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32d3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32d3f8: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x32d3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32d3fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32d3fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d400: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x32d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x32d404: 0x0  nop
    ctx->pc = 0x32d404u;
    // NOP
label_32d408:
    // 0x32d408: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32d408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32d40c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32d410: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32d414: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32d414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32d418: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32d418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32d41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d420: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32d420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32d424: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x32d424u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x32d428: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x32d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x32d42c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x32D42Cu;
    {
        const bool branch_taken_0x32d42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d42c) {
            ctx->pc = 0x32D578u;
            goto label_32d578;
        }
    }
    ctx->pc = 0x32D434u;
    // 0x32d434: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32d434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32d438: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d440: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32D440u;
    {
        const bool branch_taken_0x32d440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d440) {
            ctx->pc = 0x32D46Cu;
            goto label_32d46c;
        }
    }
    ctx->pc = 0x32D448u;
    // 0x32d448: 0xc68c5e00  lwc1        $f12, 0x5E00($s4)
    ctx->pc = 0x32d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d44c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32D44Cu;
    SET_GPR_U32(ctx, 31, 0x32D454u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32D44Cu, 0x32D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D454u;
label_32d454:
    // 0x32d454: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d458: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32D458u;
    SET_GPR_U32(ctx, 31, 0x32D460u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32D458u, 0x32D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D460u;
label_32d460:
    // 0x32d460: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32D464u;
    {
        const bool branch_taken_0x32d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d464) {
            ctx->pc = 0x32D4A8u;
            goto label_32d4a8;
        }
    }
    ctx->pc = 0x32D46Cu;
label_32d46c:
    // 0x32d46c: 0x92835e04  lbu         $v1, 0x5E04($s4)
    ctx->pc = 0x32d46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32d470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d478: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32D478u;
    {
        const bool branch_taken_0x32d478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d478) {
            ctx->pc = 0x32D4A8u;
            goto label_32d4a8;
        }
    }
    ctx->pc = 0x32D480u;
    // 0x32d480: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32d484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d488: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d48c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32d48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d490: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32d494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d498: 0x0  nop
    ctx->pc = 0x32d498u;
    // NOP
    // 0x32d49c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d4a0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d4a4: 0x0  nop
    ctx->pc = 0x32d4a4u;
    // NOP
label_32d4a8:
    // 0x32d4a8: 0xc6815e00  lwc1        $f1, 0x5E00($s4)
    ctx->pc = 0x32d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d4ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d4b0: 0x0  nop
    ctx->pc = 0x32d4b0u;
    // NOP
    // 0x32d4b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32d4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d4b8: 0x0  nop
    ctx->pc = 0x32d4b8u;
    // NOP
    // 0x32d4bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32D4BCu;
    {
        const bool branch_taken_0x32d4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d4bc) {
            ctx->pc = 0x32D4D4u;
            goto label_32d4d4;
        }
    }
    ctx->pc = 0x32D4C4u;
    // 0x32d4c4: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d4c8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32D4CCu;
    {
        const bool branch_taken_0x32d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d4cc) {
            ctx->pc = 0x32D4E0u;
            goto label_32d4e0;
        }
    }
    ctx->pc = 0x32D4D4u;
label_32d4d4:
    // 0x32d4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d4d8: 0x0  nop
    ctx->pc = 0x32d4d8u;
    // NOP
    // 0x32d4dc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_32d4e0:
    // 0x32d4e0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d4e8: 0x0  nop
    ctx->pc = 0x32d4e8u;
    // NOP
    // 0x32d4ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d4f0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d4f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d4f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d4f8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D4F8u;
    SET_GPR_U32(ctx, 31, 0x32D500u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D4F8u, 0x32D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D500u;
label_32d500:
    // 0x32d500: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32d504: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d50c: 0x0  nop
    ctx->pc = 0x32d50cu;
    // NOP
    // 0x32d510: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d514: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d518: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d518u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d51c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D51Cu;
    SET_GPR_U32(ctx, 31, 0x32D524u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D51Cu, 0x32D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D524u;
label_32d524:
    // 0x32d524: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32d524u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d528: 0xafbe00a4  sw          $fp, 0xA4($sp)
    ctx->pc = 0x32d528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 30));
    // 0x32d52c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d534: 0x0  nop
    ctx->pc = 0x32d534u;
    // NOP
    // 0x32d538: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d53c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d540: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d540u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d544: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D544u;
    SET_GPR_U32(ctx, 31, 0x32D54Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D544u, 0x32D54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D54Cu;
label_32d54c:
    // 0x32d54c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32d550: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d558: 0x0  nop
    ctx->pc = 0x32d558u;
    // NOP
    // 0x32d55c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d560: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d564: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d564u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d568: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D568u;
    SET_GPR_U32(ctx, 31, 0x32D570u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D568u, 0x32D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D570u;
label_32d570:
    // 0x32d570: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32d570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32d574: 0x0  nop
    ctx->pc = 0x32d574u;
    // NOP
label_32d578:
    // 0x32d578: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d57c: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d580: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d584: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x32d584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32d588: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32d590: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x32d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32d594: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d598: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x32d598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32d59c: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x32d59cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32d5a0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32d5a4: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32d5a8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5ac: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32d5b0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5b4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32d5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32d5b8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5bc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32d5c0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32d5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5c4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32d5c8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5cc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32d5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32d5d0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32d5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5d4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32d5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32d5d8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5dc: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32d5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32d5e0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5e4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32d5e8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d5ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d5f4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32d5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d5f8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d5f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d5fc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D5FCu;
    SET_GPR_U32(ctx, 31, 0x32D604u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D5FCu, 0x32D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D604u;
label_32d604:
    // 0x32d604: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d608: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32d60c: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d60cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d610: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d614: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D614u;
    SET_GPR_U32(ctx, 31, 0x32D61Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D614u, 0x32D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D61Cu;
label_32d61c:
    // 0x32d61c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d620: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d624: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d628: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32d62c: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32d630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d634: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32d634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d638: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32d63c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d640: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d644: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d64c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d650: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d650u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d654: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D654u;
    SET_GPR_U32(ctx, 31, 0x32D65Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D654u, 0x32D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D65Cu;
label_32d65c:
    // 0x32d65c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d660: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32d664: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d664u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d668: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d66c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D66Cu;
    SET_GPR_U32(ctx, 31, 0x32D674u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D66Cu, 0x32D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D674u;
label_32d674:
    // 0x32d674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d678: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d67c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d680: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32d680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32d684: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32d688: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d68c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d690: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32d694: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d698: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d69c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d6a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32d6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d6a4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d6a8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d6a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d6ac: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D6ACu;
    SET_GPR_U32(ctx, 31, 0x32D6B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D6ACu, 0x32D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6B4u;
label_32d6b4:
    // 0x32d6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d6b8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32d6bc: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32d6bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32d6c0: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d6c4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D6C4u;
    SET_GPR_U32(ctx, 31, 0x32D6CCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D6C4u, 0x32D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D6CCu;
label_32d6cc:
    // 0x32d6cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32d6d0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32d6d4: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32d6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32d6d8: 0x3c61825  or          $v1, $fp, $a2
    ctx->pc = 0x32d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x32d6dc: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32d6e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32d6e4: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x32d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d6e8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x32d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32d6ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d6f0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d6f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d6f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d6fc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d700: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d700u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d704: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D704u;
    SET_GPR_U32(ctx, 31, 0x32D70Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D704u, 0x32D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D70Cu;
label_32d70c:
    // 0x32d70c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32d710: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x32d710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32d714: 0x30deffff  andi        $fp, $a2, 0xFFFF
    ctx->pc = 0x32d714u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x32d718: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d71c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32D71Cu;
    SET_GPR_U32(ctx, 31, 0x32D724u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32D71Cu, 0x32D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D724u;
label_32d724:
    // 0x32d724: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x32d724u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d728: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32d72c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x32d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32d730: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32d734: 0x3c31025  or          $v0, $fp, $v1
    ctx->pc = 0x32d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x32d738: 0x2603004c  addiu       $v1, $s0, 0x4C
    ctx->pc = 0x32d738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32d73c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d740: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x32d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32d744: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32d748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32d748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32d74c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32d750: 0x2446e870  addiu       $a2, $v0, -0x1790
    ctx->pc = 0x32d750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32d754: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x32d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x32d758: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x32d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32d75c: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x32d75cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x32d760: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x32d760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x32d764: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32d764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32d768: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32D768u;
    {
        const bool branch_taken_0x32d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d768) {
            ctx->pc = 0x32D7B8u;
            goto label_32d7b8;
        }
    }
    ctx->pc = 0x32D770u;
    // 0x32d770: 0x92232904  lbu         $v1, 0x2904($s1)
    ctx->pc = 0x32d770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10500)));
    // 0x32d774: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d778: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32D778u;
    {
        const bool branch_taken_0x32d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d778) {
            ctx->pc = 0x32D7A0u;
            goto label_32d7a0;
        }
    }
    ctx->pc = 0x32D780u;
    // 0x32d780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d784: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D784u;
    {
        const bool branch_taken_0x32d784 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d784) {
            ctx->pc = 0x32D7A0u;
            goto label_32d7a0;
        }
    }
    ctx->pc = 0x32D78Cu;
    // 0x32d78c: 0x92222909  lbu         $v0, 0x2909($s1)
    ctx->pc = 0x32d78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10505)));
    // 0x32d790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d794: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32D794u;
    {
        const bool branch_taken_0x32d794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d794) {
            ctx->pc = 0x32D7B8u;
            goto label_32d7b8;
        }
    }
    ctx->pc = 0x32D79Cu;
    // 0x32d79c: 0x0  nop
    ctx->pc = 0x32d79cu;
    // NOP
label_32d7a0:
    // 0x32d7a0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x32d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x32d7a4: 0x24a41a14  addiu       $a0, $a1, 0x1A14
    ctx->pc = 0x32d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6676));
    // 0x32d7a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32d7a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32d7ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32D7ACu;
    SET_GPR_U32(ctx, 31, 0x32D7B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32D7ACu, 0x32D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7B4u;
label_32d7b4:
    // 0x32d7b4: 0x0  nop
    ctx->pc = 0x32d7b4u;
    // NOP
label_32d7b8:
    // 0x32d7b8: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x32d7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32d7bc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x32d7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32d7c0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x32d7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x32d7c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32d7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_32d7c8:
    // 0x32d7c8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x32d7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32d7cc: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x32D7CCu;
    {
        const bool branch_taken_0x32d7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d7cc) {
            ctx->pc = 0x32D088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d088;
        }
    }
    ctx->pc = 0x32D7D4u;
    // 0x32d7d4: 0x92222909  lbu         $v0, 0x2909($s1)
    ctx->pc = 0x32d7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10505)));
    // 0x32d7d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32d7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32d7dc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x32d7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32d7e0: 0x142000a5  bnez        $at, . + 4 + (0xA5 << 2)
    ctx->pc = 0x32D7E0u;
    {
        const bool branch_taken_0x32d7e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d7e0) {
            ctx->pc = 0x32DA78u;
            goto label_32da78;
        }
    }
    ctx->pc = 0x32D7E8u;
    // 0x32d7e8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d7ec: 0x8c22af78  lw          $v0, -0x5088($at)
    ctx->pc = 0x32d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF78u));
    // 0x32d7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d7f4: 0x0  nop
    ctx->pc = 0x32d7f4u;
    // NOP
    // 0x32d7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32d7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32d7fc: 0xe6202824  swc1        $f0, 0x2824($s1)
    ctx->pc = 0x32d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10276), bits); }
    // 0x32d800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d804: 0xa2222904  sb          $v0, 0x2904($s1)
    ctx->pc = 0x32d804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10500), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d808: 0xa2202909  sb          $zero, 0x2909($s1)
    ctx->pc = 0x32d808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d80c: 0xa2202905  sb          $zero, 0x2905($s1)
    ctx->pc = 0x32d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10501), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d810: 0x8622290a  lh          $v0, 0x290A($s1)
    ctx->pc = 0x32d810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10506)));
    // 0x32d814: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d818: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32d818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32d81c: 0x8622290c  lh          $v0, 0x290C($s1)
    ctx->pc = 0x32d81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10508)));
    // 0x32d820: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32d824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32d824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32d828: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32d828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32d82c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d830: 0xac22c2a0  sw          $v0, -0x3D60($at)
    ctx->pc = 0x32d830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A0u, _value); } while (0);
    // 0x32d834: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d838: 0x8c22c2a0  lw          $v0, -0x3D60($at)
    ctx->pc = 0x32d838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d83c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d840: 0x0  nop
    ctx->pc = 0x32d840u;
    // NOP
    // 0x32d844: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d848: 0x3c023e51  lui         $v0, 0x3E51
    ctx->pc = 0x32d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15953 << 16));
    // 0x32d84c: 0x3443b718  ori         $v1, $v0, 0xB718
    ctx->pc = 0x32d84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46872);
    // 0x32d850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d854: 0x0  nop
    ctx->pc = 0x32d854u;
    // NOP
    // 0x32d858: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32d858u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d85c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32D85Cu;
    SET_GPR_U32(ctx, 31, 0x32D864u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32D85Cu, 0x32D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D864u;
label_32d864:
    // 0x32d864: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d868: 0xac22c2a0  sw          $v0, -0x3D60($at)
    ctx->pc = 0x32d868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85C2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A0u, _value); } while (0);
    // 0x32d86c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d870: 0x8c23c2a0  lw          $v1, -0x3D60($at)
    ctx->pc = 0x32d870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d878: 0x0  nop
    ctx->pc = 0x32d878u;
    // NOP
    // 0x32d87c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d880: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x32d880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x32d884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d888: 0x0  nop
    ctx->pc = 0x32d888u;
    // NOP
    // 0x32d88c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32d88cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d890: 0x0  nop
    ctx->pc = 0x32d890u;
    // NOP
    // 0x32d894: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x32D894u;
    {
        const bool branch_taken_0x32d894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d894) {
            ctx->pc = 0x32D8D4u;
            goto label_32d8d4;
        }
    }
    ctx->pc = 0x32D89Cu;
    // 0x32d89c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8a0: 0x8c23c2a0  lw          $v1, -0x3D60($at)
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32d8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32d8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8a8: 0x0  nop
    ctx->pc = 0x32d8a8u;
    // NOP
    // 0x32d8ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32d8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32d8b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x32d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x32d8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8b8: 0x0  nop
    ctx->pc = 0x32d8b8u;
    // NOP
    // 0x32d8bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32d8bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32d8c0: 0x0  nop
    ctx->pc = 0x32d8c0u;
    // NOP
    // 0x32d8c4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8c8: 0xe420c2a8  swc1        $f0, -0x3D58($at)
    ctx->pc = 0x32d8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A8u, _value); } while (0); }
    // 0x32d8cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32D8CCu;
    {
        const bool branch_taken_0x32d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8cc) {
            ctx->pc = 0x32D8E8u;
            goto label_32d8e8;
        }
    }
    ctx->pc = 0x32D8D4u;
label_32d8d4:
    // 0x32d8d4: 0x3c124066  lui         $s2, 0x4066
    ctx->pc = 0x32d8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16486 << 16));
    // 0x32d8d8: 0x36426666  ori         $v0, $s2, 0x6666
    ctx->pc = 0x32d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)26214);
    // 0x32d8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8e0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32d8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32d8e4: 0xe420c2a8  swc1        $f0, -0x3D58($at)
    ctx->pc = 0x32d8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x85C2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85C2A8u, _value); } while (0); }
label_32d8e8:
    // 0x32d8e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8ec: 0x0  nop
    ctx->pc = 0x32d8ecu;
    // NOP
    // 0x32d8f0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x32d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x32d8f4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x32D8F4u;
    {
        const bool branch_taken_0x32d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8f4) {
            ctx->pc = 0x32DA30u;
            goto label_32da30;
        }
    }
    ctx->pc = 0x32D8FCu;
label_32d8fc:
    // 0x32d8fc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32d900: 0x3453cccd  ori         $s3, $v0, 0xCCCD
    ctx->pc = 0x32d900u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d904: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x32d904u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d908: 0xc6201028  lwc1        $f0, 0x1028($s1)
    ctx->pc = 0x32d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d90c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32d90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d910: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x32d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x32d914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d918: 0x0  nop
    ctx->pc = 0x32d918u;
    // NOP
    // 0x32d91c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32d91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32d920: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x32d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d924: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d928: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x32d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x32d92c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x32d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d930: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32d930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32d934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d938: 0x0  nop
    ctx->pc = 0x32d938u;
    // NOP
    // 0x32d93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32d93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d940: 0x0  nop
    ctx->pc = 0x32d940u;
    // NOP
    // 0x32d944: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x32D944u;
    {
        const bool branch_taken_0x32d944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d944) {
            ctx->pc = 0x32D994u;
            goto label_32d994;
        }
    }
    ctx->pc = 0x32D94Cu;
    // 0x32d94c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x32d950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d954: 0xc6201034  lwc1        $f0, 0x1034($s1)
    ctx->pc = 0x32d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d958: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32d958u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32d95c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x32d960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d964: 0x0  nop
    ctx->pc = 0x32d964u;
    // NOP
    // 0x32d968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d96c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d970: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d974: 0x3c0240cc  lui         $v0, 0x40CC
    ctx->pc = 0x32d974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16588 << 16));
    // 0x32d978: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32d97c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d980: 0x0  nop
    ctx->pc = 0x32d980u;
    // NOP
    // 0x32d984: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d988: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d98c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32D98Cu;
    {
        const bool branch_taken_0x32d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d98c) {
            ctx->pc = 0x32D9D8u;
            goto label_32d9d8;
        }
    }
    ctx->pc = 0x32D994u;
label_32d994:
    // 0x32d994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x32d998: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d99c: 0xc6201034  lwc1        $f0, 0x1034($s1)
    ctx->pc = 0x32d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d9a0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x32d9a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32d9a4: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x32d9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9ac: 0x0  nop
    ctx->pc = 0x32d9acu;
    // NOP
    // 0x32d9b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d9b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d9b4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d9b8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x32d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d9bc: 0x3c03404c  lui         $v1, 0x404C
    ctx->pc = 0x32d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16460 << 16));
    // 0x32d9c0: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x32d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x32d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9c8: 0x0  nop
    ctx->pc = 0x32d9c8u;
    // NOP
    // 0x32d9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32d9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32d9d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x32d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x32d9d4: 0x0  nop
    ctx->pc = 0x32d9d4u;
    // NOP
label_32d9d8:
    // 0x32d9d8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x32d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x32d9dc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x32d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x32d9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9e4: 0x0  nop
    ctx->pc = 0x32d9e4u;
    // NOP
    // 0x32d9e8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32d9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32d9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9f4: 0x0  nop
    ctx->pc = 0x32d9f4u;
    // NOP
    // 0x32d9f8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x32d9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x32d9fc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x32d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32da00: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x32da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x32da04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32da04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32da08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x32da0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x32DA10u;
    SET_GPR_U32(ctx, 31, 0x32DA18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x32DA10u, 0x32DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA18u;
label_32da18:
    // 0x32da18: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x32da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32da1c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32da1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32da20: 0xc420c2a8  lwc1        $f0, -0x3D58($at)
    ctx->pc = 0x32da20u;
    { uint32_t bits = FAST_READ32(0x85C2A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32da24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32da24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32da28: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x32da28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x32da2c: 0x0  nop
    ctx->pc = 0x32da2cu;
    // NOP
label_32da30:
    // 0x32da30: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x32da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32da34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32da34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32da38: 0x8c22c2a0  lw          $v0, -0x3D60($at)
    ctx->pc = 0x32da38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32da3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32da3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32da40: 0x0  nop
    ctx->pc = 0x32da40u;
    // NOP
    // 0x32da44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32da44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32da48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32da48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32da4c: 0x0  nop
    ctx->pc = 0x32da4cu;
    // NOP
    // 0x32da50: 0x4501ffaa  bc1t        . + 4 + (-0x56 << 2)
    ctx->pc = 0x32DA50u;
    {
        const bool branch_taken_0x32da50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32da50) {
            ctx->pc = 0x32D8FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d8fc;
        }
    }
    ctx->pc = 0x32DA58u;
    // 0x32da58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32da5c: 0xa2262906  sb          $a2, 0x2906($s1)
    ctx->pc = 0x32da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10502), (uint8_t)GPR_U32(ctx, 6));
    // 0x32da60: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da64: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32da68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32da68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32da6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32DA6Cu;
    {
        const bool branch_taken_0x32da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32da6c) {
            ctx->pc = 0x32DA78u;
            goto label_32da78;
        }
    }
    ctx->pc = 0x32DA74u;
    // 0x32da74: 0xa2202907  sb          $zero, 0x2907($s1)
    ctx->pc = 0x32da74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 0));
label_32da78:
    // 0x32da78: 0x92222906  lbu         $v0, 0x2906($s1)
    ctx->pc = 0x32da78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10502)));
    // 0x32da7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32da80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32da84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DA84u;
    {
        const bool branch_taken_0x32da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32da84) {
            ctx->pc = 0x32DA98u;
            goto label_32da98;
        }
    }
    ctx->pc = 0x32DA8Cu;
    // 0x32da8c: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32da94: 0xa2222907  sb          $v0, 0x2907($s1)
    ctx->pc = 0x32da94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 2));
label_32da98:
    // 0x32da98: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da9c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32daa0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32daa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32daa4: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x32daa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32daa8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DAA8u;
    {
        const bool branch_taken_0x32daa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32daa8) {
            ctx->pc = 0x32DAB8u;
            goto label_32dab8;
        }
    }
    ctx->pc = 0x32DAB0u;
    // 0x32dab0: 0xa2202907  sb          $zero, 0x2907($s1)
    ctx->pc = 0x32dab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 0));
    // 0x32dab4: 0xa2202906  sb          $zero, 0x2906($s1)
    ctx->pc = 0x32dab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10502), (uint8_t)GPR_U32(ctx, 0));
label_32dab8:
    // 0x32dab8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x32dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32dabc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32dabcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dac0: 0x26220820  addiu       $v0, $s1, 0x820
    ctx->pc = 0x32dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x32dac4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32dac4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dac8: 0x86e210a6  lh          $v0, 0x10A6($s7)
    ctx->pc = 0x32dac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4262)));
    // 0x32dacc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32dad0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32dad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32dad4: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x32dad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x32dad8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x32DAD8u;
    {
        const bool branch_taken_0x32dad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dad8) {
            ctx->pc = 0x32DB08u;
            goto label_32db08;
        }
    }
    ctx->pc = 0x32DAE0u;
    // 0x32dae0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x32dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32dae4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x32dae4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x32dae8: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x32dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x32daec: 0x24c7a5f0  addiu       $a3, $a2, -0x5A10
    ctx->pc = 0x32daecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944240));
    // 0x32daf0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x32daf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32daf4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32DAF4u;
    SET_GPR_U32(ctx, 31, 0x32DAFCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32DAFCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32DAFCu) { return; }
    ctx->pc = 0x32DAFCu;
label_32dafc:
    // 0x32dafc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x32dafcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32db00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32DB00u;
    {
        const bool branch_taken_0x32db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32db00) {
            ctx->pc = 0x32DB28u;
            goto label_32db28;
        }
    }
    ctx->pc = 0x32DB08u;
label_32db08:
    // 0x32db08: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x32db0c: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x32db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
    // 0x32db10: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32db14: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32db14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32db18: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x32db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x32db1c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32db20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x32db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32db24: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x32db24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_32db28:
    // 0x32db28: 0x9227000d  lbu         $a3, 0xD($s1)
    ctx->pc = 0x32db28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32db2c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x32db2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32db30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db34: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DB34u;
    {
        const bool branch_taken_0x32db34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32db34) {
            ctx->pc = 0x32DB5Cu;
            goto label_32db5c;
        }
    }
    ctx->pc = 0x32DB3Cu;
    // 0x32db3c: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x32db3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32db40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32db44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32db44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32db48: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x32db48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x32db4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32db50: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32db54: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32db54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32db58: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_32db5c:
    // 0x32db5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32db60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32db60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32db64: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32db68: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32db6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32db70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32db70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32db74: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32db74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32db78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32db7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32db7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32db80: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x32DB80u;
    {
        const bool branch_taken_0x32db80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32db80) {
            ctx->pc = 0x32DCC0u;
            goto label_32dcc0;
        }
    }
    ctx->pc = 0x32DB88u;
    // 0x32db88: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32db88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32db8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32db8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32db90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DB94u;
    {
        const bool branch_taken_0x32db94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32db94) {
            ctx->pc = 0x32DBC0u;
            goto label_32dbc0;
        }
    }
    ctx->pc = 0x32DB9Cu;
    // 0x32db9c: 0xc68c5e00  lwc1        $f12, 0x5E00($s4)
    ctx->pc = 0x32db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32dba0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32DBA0u;
    SET_GPR_U32(ctx, 31, 0x32DBA8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32DBA0u, 0x32DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBA8u;
label_32dba8:
    // 0x32dba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dbac: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x32DBACu;
    SET_GPR_U32(ctx, 31, 0x32DBB4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x32DBACu, 0x32DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBB4u;
label_32dbb4:
    // 0x32dbb4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x32dbb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32DBB8u;
    {
        const bool branch_taken_0x32dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dbb8) {
            ctx->pc = 0x32DBF8u;
            goto label_32dbf8;
        }
    }
    ctx->pc = 0x32DBC0u;
label_32dbc0:
    // 0x32dbc0: 0x92825e04  lbu         $v0, 0x5E04($s4)
    ctx->pc = 0x32dbc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32dbc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32dbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32dbc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32dbcc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32DBCCu;
    {
        const bool branch_taken_0x32dbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32dbcc) {
            ctx->pc = 0x32DBF8u;
            goto label_32dbf8;
        }
    }
    ctx->pc = 0x32DBD4u;
    // 0x32dbd4: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x32dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x32dbd8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32dbd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dbdc: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dbe0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32dbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dbe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32dbe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dbec: 0x0  nop
    ctx->pc = 0x32dbecu;
    // NOP
    // 0x32dbf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32dbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32dbf4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_32dbf8:
    // 0x32dbf8: 0xc6815e00  lwc1        $f1, 0x5E00($s4)
    ctx->pc = 0x32dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32dbfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32dbfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc00: 0x0  nop
    ctx->pc = 0x32dc00u;
    // NOP
    // 0x32dc04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32dc04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32dc08: 0x0  nop
    ctx->pc = 0x32dc08u;
    // NOP
    // 0x32dc0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32DC0Cu;
    {
        const bool branch_taken_0x32dc0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32dc0c) {
            ctx->pc = 0x32DC24u;
            goto label_32dc24;
        }
    }
    ctx->pc = 0x32DC14u;
    // 0x32dc14: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x32dc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32DC1Cu;
    {
        const bool branch_taken_0x32dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dc1c) {
            ctx->pc = 0x32DC30u;
            goto label_32dc30;
        }
    }
    ctx->pc = 0x32DC24u;
label_32dc24:
    // 0x32dc24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32dc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc28: 0x0  nop
    ctx->pc = 0x32dc28u;
    // NOP
    // 0x32dc2c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_32dc30:
    // 0x32dc30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32dc34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc38: 0x0  nop
    ctx->pc = 0x32dc38u;
    // NOP
    // 0x32dc3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc40: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc44: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc48: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC48u;
    SET_GPR_U32(ctx, 31, 0x32DC50u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC48u, 0x32DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC50u;
label_32dc50:
    // 0x32dc50: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32dc54: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32dc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc5c: 0x0  nop
    ctx->pc = 0x32dc5cu;
    // NOP
    // 0x32dc60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc64: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc68: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc6c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC6Cu;
    SET_GPR_U32(ctx, 31, 0x32DC74u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC6Cu, 0x32DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC74u;
label_32dc74:
    // 0x32dc74: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32dc78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32dc7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32dc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc80: 0x0  nop
    ctx->pc = 0x32dc80u;
    // NOP
    // 0x32dc84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dc88: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc8c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dc8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dc90: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DC90u;
    SET_GPR_U32(ctx, 31, 0x32DC98u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DC90u, 0x32DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC98u;
label_32dc98:
    // 0x32dc98: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32dc9c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32dca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32dca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dca4: 0x0  nop
    ctx->pc = 0x32dca4u;
    // NOP
    // 0x32dca8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32dcac: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcb0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dcb0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dcb4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32DCB4u;
    SET_GPR_U32(ctx, 31, 0x32DCBCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32DCB4u, 0x32DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCBCu;
label_32dcbc:
    // 0x32dcbc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32dcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_32dcc0:
    // 0x32dcc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32dcc4: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x32dcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32dcc8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32dccc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x32dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32dcd0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32dcd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dcd8: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32dcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32dcdc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32dce0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32dce4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32dce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dce8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32dcec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dcf0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcf4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32dcf8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dcfc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32dd00: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd04: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32dd08: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd0c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32dd10: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x32dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd14: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32dd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32dd18: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd1c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32dd20: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd24: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32dd28: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd2c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32dd30: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dd34: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x32dd34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dd38: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x32dd38u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dd3c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd40: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dd40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dd44: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD44u;
    SET_GPR_U32(ctx, 31, 0x32DD4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD44u, 0x32DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD4Cu;
label_32dd4c:
    // 0x32dd4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32dd50: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32dd54: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32dd54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32dd58: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32dd5c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD5Cu;
    SET_GPR_U32(ctx, 31, 0x32DD64u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD5Cu, 0x32DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DD64u;
label_32dd64:
    // 0x32dd64: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32dd68: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x32dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32dd6c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32dd70: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32dd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32dd74: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x32dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32dd78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dd7c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x32dd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32dd80: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32dd84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dd88: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dd8c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32dd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dd90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32dd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dd94: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dd98: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32dd98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32dd9c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DD9Cu;
    SET_GPR_U32(ctx, 31, 0x32DDA4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DD9Cu, 0x32DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDA4u;
label_32dda4:
    // 0x32dda4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32dda8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32ddac: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32ddacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32ddb0: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x32ddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32ddb4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DDB4u;
    SET_GPR_U32(ctx, 31, 0x32DDBCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DDB4u, 0x32DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDBCu;
label_32ddbc:
    // 0x32ddbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32ddc0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x32ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32ddc4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32ddc8: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x32ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32ddcc: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x32ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32ddd0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32ddd4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x32ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32ddd8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32dddc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32dde0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32dde4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32dde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32dde8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32dde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ddec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ddf0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32ddf0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ddf4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DDF4u;
    SET_GPR_U32(ctx, 31, 0x32DDFCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DDF4u, 0x32DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DDFCu;
label_32ddfc:
    // 0x32ddfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32de00: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32de04: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x32de04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32de08: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32de0c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE0Cu;
    SET_GPR_U32(ctx, 31, 0x32DE14u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE0Cu, 0x32DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE14u;
label_32de14:
    // 0x32de14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32de14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32de18: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32de1c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32de20: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x32de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32de24: 0x2606003c  addiu       $a2, $s0, 0x3C
    ctx->pc = 0x32de24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32de28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32de28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32de2c: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x32de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32de30: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x32de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32de34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32de34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32de38: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32de38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32de3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32de40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32de40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32de44: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32de48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32de48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32de4c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE4Cu;
    SET_GPR_U32(ctx, 31, 0x32DE54u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE4Cu, 0x32DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE54u;
label_32de54:
    // 0x32de54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32de54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32de58: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32de5c: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x32de5cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32de60: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x32de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32de64: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32DE64u;
    SET_GPR_U32(ctx, 31, 0x32DE6Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32DE64u, 0x32DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE6Cu;
label_32de6c:
    // 0x32de6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32de70: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32de74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32de74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32de78: 0x3c21825  or          $v1, $fp, $v0
    ctx->pc = 0x32de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x32de7c: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x32de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32de80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32de80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32de84: 0x341efffb  ori         $fp, $zero, 0xFFFB
    ctx->pc = 0x32de84u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x32de88: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x32de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32de8c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x32de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x32de90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32de94: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x32de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32de98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32de9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32dea0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x32dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32dea4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x32dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x32dea8: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32dea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32deac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DEACu;
    {
        const bool branch_taken_0x32deac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32deac) {
            ctx->pc = 0x32DECCu;
            goto label_32decc;
        }
    }
    ctx->pc = 0x32DEB4u;
    // 0x32deb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32deb8: 0x24621a14  addiu       $v0, $v1, 0x1A14
    ctx->pc = 0x32deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x32debc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32debcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dec0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32dec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32dec4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32DEC4u;
    SET_GPR_U32(ctx, 31, 0x32DECCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32DEC4u, 0x32DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DECCu;
label_32decc:
    // 0x32decc: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x32deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32ded0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32ded0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32ded4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32ded8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32ded8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dedc: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x32dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x32dee0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32dee0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dee4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32dee8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x32dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x32deec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32deecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32def0: 0x345e1043  ori         $fp, $v0, 0x1043
    ctx->pc = 0x32def0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32def4: 0xaede0004  sw          $fp, 0x4($s6)
    ctx->pc = 0x32def4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 30));
    // 0x32def8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x32def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32defc: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x32defcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x32df00: 0x92222830  lbu         $v0, 0x2830($s1)
    ctx->pc = 0x32df00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10288)));
    // 0x32df04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DF04u;
    {
        const bool branch_taken_0x32df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32df04) {
            ctx->pc = 0x32DF24u;
            goto label_32df24;
        }
    }
    ctx->pc = 0x32DF0Cu;
    // 0x32df0c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32df10: 0x24431a14  addiu       $v1, $v0, 0x1A14
    ctx->pc = 0x32df10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32df14: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32df14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32df18: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x32df18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x32df1c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32DF1Cu;
    SET_GPR_U32(ctx, 31, 0x32DF24u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32DF1Cu, 0x32DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF24u;
label_32df24:
    // 0x32df24: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x32df24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x32df28: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x32df28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_32df2c:
    // 0x32df2c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32df30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32df30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32df34: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32df38: 0x34420a18  ori         $v0, $v0, 0xA18
    ctx->pc = 0x32df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2584);
    // 0x32df3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32df40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32df40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32df44: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32df44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32df48: 0x245e1f40  addiu       $fp, $v0, 0x1F40
    ctx->pc = 0x32df48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x32df4c: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x32df4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x32df50: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DF50u;
    SET_GPR_U32(ctx, 31, 0x32DF58u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DF50u, 0x32DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF58u;
label_32df58:
    // 0x32df58: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x32df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x32df5c: 0x2442c190  addiu       $v0, $v0, -0x3E70
    ctx->pc = 0x32df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951312));
    // 0x32df60: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x32df60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32df64: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x32df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x32df68: 0x3c0230c3  lui         $v0, 0x30C3
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12483 << 16));
    // 0x32df6c: 0x34420c31  ori         $v0, $v0, 0xC31
    ctx->pc = 0x32df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3121);
    // 0x32df70: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x32df70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32df74: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x32df74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x32df78: 0x0  nop
    ctx->pc = 0x32df78u;
    // NOP
    // 0x32df7c: 0x1010  mfhi        $v0
    ctx->pc = 0x32df7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x32df80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x32df80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x32df84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32df88: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32df8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x32df8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32df90: 0x3c031e07  lui         $v1, 0x1E07
    ctx->pc = 0x32df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7687 << 16));
    // 0x32df94: 0x347e0a19  ori         $fp, $v1, 0xA19
    ctx->pc = 0x32df94u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2585);
    // 0x32df98: 0x3c61825  or          $v1, $fp, $a2
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x32df9c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32df9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32dfa0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32dfa4: 0x24631f00  addiu       $v1, $v1, 0x1F00
    ctx->pc = 0x32dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x32dfa8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32dfa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32dfac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32dfacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dfb0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DFB0u;
    SET_GPR_U32(ctx, 31, 0x32DFB8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DFB0u, 0x32DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFB8u;
label_32dfb8:
    // 0x32dfb8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x32dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x32dfbc: 0x2462c290  addiu       $v0, $v1, -0x3D70
    ctx->pc = 0x32dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951568));
    // 0x32dfc0: 0x2c21823  subu        $v1, $s6, $v0
    ctx->pc = 0x32dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32dfc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32dfc8: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x32dfc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x32dfcc: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32dfd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32dfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32dfd4: 0x3c021e07  lui         $v0, 0x1E07
    ctx->pc = 0x32dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7687 << 16));
    // 0x32dfd8: 0x34420a1a  ori         $v0, $v0, 0xA1A
    ctx->pc = 0x32dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2586);
    // 0x32dfdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32dfe0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dfe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dfe4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32dfe8: 0x24451f00  addiu       $a1, $v0, 0x1F00
    ctx->pc = 0x32dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7936));
    // 0x32dfec: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32DFECu;
    SET_GPR_U32(ctx, 31, 0x32DFF4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32DFECu, 0x32DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFF4u;
label_32dff4:
    // 0x32dff4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32dff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32dff8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x32dff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32dffc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32dffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32e000: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32e000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e004: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32e004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e008: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32e008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e00c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32e00cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32e010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32e014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32e018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e020: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x32e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x32e024: 0x3e00008  jr          $ra
    ctx->pc = 0x32E024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E02Cu;
}
