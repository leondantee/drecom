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

// Function: Scr_Atari_cam
// Address: 0x16a9f0 - 0x16ac48
void Scr_Atari_cam_0x16a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_Atari_cam_0x16a9f0");
#endif

    switch (ctx->pc) {
        case 0x16aa9cu: goto label_16aa9c;
        case 0x16aab8u: goto label_16aab8;
        case 0x16aac8u: goto label_16aac8;
        case 0x16abd8u: goto label_16abd8;
        case 0x16abf4u: goto label_16abf4;
        case 0x16ac08u: goto label_16ac08;
        default: break;
    }

    ctx->pc = 0x16a9f0u;

    // 0x16a9f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16a9f4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x16a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x16a9f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16a9fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16aa00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16aa04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16aa08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16aa0c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x16aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x16aa10: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x16aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x16aa14: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x16aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x16aa18: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x16aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x16aa1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16aa20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16aa24: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x16aa24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x16aa28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16aa2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16aa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aa30: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16aa34: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16aa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16aa38: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16aa3c: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x16aa3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16aa40: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16aa44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16aa44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16aa4c: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16aa50: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16aa50u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x16aa54: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16aa58: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16aa58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16aa60: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x16aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16aa64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16aa64u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x16aa68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16aa6c: 0x8c220df0  lw          $v0, 0xDF0($at)
    ctx->pc = 0x16aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0DF0u));
    // 0x16aa70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA70u;
    {
        const bool branch_taken_0x16aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa70) {
            ctx->pc = 0x16AA84u;
            goto label_16aa84;
        }
    }
    ctx->pc = 0x16AA78u;
    // 0x16aa78: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16aa78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16aa7c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16AC24u;
            goto label_16ac24;
        }
    }
    ctx->pc = 0x16AA84u;
label_16aa84:
    // 0x16aa84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16aa88: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16aa8c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16aa90: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16aa94: 0xc040c80  jal         func_103200
    ctx->pc = 0x16AA94u;
    SET_GPR_U32(ctx, 31, 0x16AA9Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16AA9Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AA9Cu) { return; }
    ctx->pc = 0x16AA9Cu;
label_16aa9c:
    // 0x16aa9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16aaa0: 0x8c330df0  lw          $s3, 0xDF0($at)
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0DF0u));
    // 0x16aaa4: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16aaa8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16aaac: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16aab0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16AAB0u;
    SET_GPR_U32(ctx, 31, 0x16AAB8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16AAB8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AAB8u) { return; }
    ctx->pc = 0x16AAB8u;
label_16aab8:
    // 0x16aab8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16aabc: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x16aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16aac0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16AAC0u;
    SET_GPR_U32(ctx, 31, 0x16AAC8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16AAC8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AAC8u) { return; }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aacc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aad0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aad4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AAD4u;
    {
        const bool branch_taken_0x16aad4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16aad4) {
            ctx->pc = 0x16AAF4u;
            goto label_16aaf4;
        }
    }
    ctx->pc = 0x16AADCu;
    // 0x16aadc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aae0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aae4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aae8: 0x28023  negu        $s0, $v0
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16aaec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AAECu;
    {
        const bool branch_taken_0x16aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aaec) {
            ctx->pc = 0x16AB00u;
            goto label_16ab00;
        }
    }
    ctx->pc = 0x16AAF4u;
label_16aaf4:
    // 0x16aaf4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aaf8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aafc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x16aafcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ab00:
    // 0x16ab00: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x16ab04: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x16ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x16ab08: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab0c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab14: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AB14u;
    {
        const bool branch_taken_0x16ab14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ab14) {
            ctx->pc = 0x16AB34u;
            goto label_16ab34;
        }
    }
    ctx->pc = 0x16AB1Cu;
    // 0x16ab1c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab20: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab28: 0x28823  negu        $s1, $v0
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16ab2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB2Cu;
    {
        const bool branch_taken_0x16ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab2c) {
            ctx->pc = 0x16AB40u;
            goto label_16ab40;
        }
    }
    ctx->pc = 0x16AB34u;
label_16ab34:
    // 0x16ab34: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab38: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab3c: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ab40:
    // 0x16ab40: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x16ab40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x16ab44: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x16ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x16ab48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ab4c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ab50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab54: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AB54u;
    {
        const bool branch_taken_0x16ab54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ab54) {
            ctx->pc = 0x16AB74u;
            goto label_16ab74;
        }
    }
    ctx->pc = 0x16AB5Cu;
    // 0x16ab5c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ab60: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ab64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab68: 0x29023  negu        $s2, $v0
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16ab6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB6Cu;
    {
        const bool branch_taken_0x16ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab6c) {
            ctx->pc = 0x16AB80u;
            goto label_16ab80;
        }
    }
    ctx->pc = 0x16AB74u;
label_16ab74:
    // 0x16ab74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ab78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ab7c: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x16ab7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16ab80:
    // 0x16ab80: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x16ab84: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x16ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x16ab88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ab8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ab90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16ab94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ab98: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x16ab9c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16aba0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16aba4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aba8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16aba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16abac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x16abacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x16abb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16abb4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16abb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16abbc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16abc0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x16abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x16abc4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x16abc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x16abc8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16abcc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16abd0: 0xc05ab14  jal         func_16AC50
    ctx->pc = 0x16ABD0u;
    SET_GPR_U32(ctx, 31, 0x16ABD8u);
    ctx->pc = 0x16AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AC50u, 0x16ABD0u, 0x16ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABD8u;
label_16abd8:
    // 0x16abd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x16abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16abe0: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16abe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16abe8: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x16abe8u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16abec: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16ABECu;
    SET_GPR_U32(ctx, 31, 0x16ABF4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x16ABF4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16ABF4u) { return; }
    ctx->pc = 0x16ABF4u;
label_16abf4:
    // 0x16abf4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x16abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abf8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16abfc: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16ac00: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x16AC00u;
    SET_GPR_U32(ctx, 31, 0x16AC08u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x16AC08u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16AC08u) { return; }
    ctx->pc = 0x16AC08u;
label_16ac08:
    // 0x16ac08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ac0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ac10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16ac14: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x16ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x16ac18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16ac18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ac1c: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x16ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x16ac20: 0x0  nop
    ctx->pc = 0x16ac20u;
    // NOP
label_16ac24:
    // 0x16ac24: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x16ac24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16ac28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16ac28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ac2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16ac2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ac30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16ac30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ac34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ac34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ac38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac3c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AC48u;
}
