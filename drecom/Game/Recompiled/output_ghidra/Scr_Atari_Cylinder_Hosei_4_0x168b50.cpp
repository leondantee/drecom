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

// Function: Scr_Atari_Cylinder_Hosei_4
// Address: 0x168b50 - 0x168ff8
void Scr_Atari_Cylinder_Hosei_4_0x168b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_Atari_Cylinder_Hosei_4_0x168b50");
#endif

    switch (ctx->pc) {
        case 0x168c30u: goto label_168c30;
        case 0x168c40u: goto label_168c40;
        case 0x168c80u: goto label_168c80;
        case 0x168c90u: goto label_168c90;
        case 0x168cf4u: goto label_168cf4;
        case 0x168d1cu: goto label_168d1c;
        case 0x168d2cu: goto label_168d2c;
        case 0x168d40u: goto label_168d40;
        case 0x168d58u: goto label_168d58;
        case 0x168d6cu: goto label_168d6c;
        case 0x168d84u: goto label_168d84;
        case 0x168e68u: goto label_168e68;
        case 0x168e78u: goto label_168e78;
        case 0x168edcu: goto label_168edc;
        case 0x168f04u: goto label_168f04;
        case 0x168f14u: goto label_168f14;
        case 0x168f28u: goto label_168f28;
        case 0x168f40u: goto label_168f40;
        case 0x168f54u: goto label_168f54;
        case 0x168f6cu: goto label_168f6c;
        default: break;
    }

    ctx->pc = 0x168b50u;

    // 0x168b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x168b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x168b54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x168b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x168b58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168b5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168b60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168b64: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x168b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x168b68: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x168b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x168b6c: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x168b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x168b70: 0xafa800c8  sw          $t0, 0xC8($sp)
    ctx->pc = 0x168b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 8));
    // 0x168b74: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x168b74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x168b78: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x168b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x168b7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168b80: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x168b80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x168b84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168b88: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x168b88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x168b8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x168b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x168b90: 0x8c31fdf8  lw          $s1, -0x208($at)
    ctx->pc = 0x168b90u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x168b94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x168b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x168b98: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x168b9c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x168ba0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x168ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168ba4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x168ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168ba8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168bac: 0xe420ab08  swc1        $f0, -0x54F8($at)
    ctx->pc = 0x168bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB08u, _value); } while (0); }
    // 0x168bb0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168bb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168bb8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x168bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168bbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x168bc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168bc4: 0xac20bb30  sw          $zero, -0x44D0($at)
    ctx->pc = 0x168bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x168bc8: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x168bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x168bcc: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x168bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x168bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168bd4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168bd8: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x168bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x168bdc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168be0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168be4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168be8: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x168be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168bec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168becu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x168bf0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168bf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168bf8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168bfc: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x168bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x168c00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168c00u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x168c04: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168c08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x168c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168c0c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168c10: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x168c10u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x168c18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168c1c: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x168c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x168c20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168c24: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168c28: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x168C28u;
    SET_GPR_U32(ctx, 31, 0x168C30u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x168C30u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168C30u) { return; }
    ctx->pc = 0x168C30u;
label_168c30:
    // 0x168c30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x168c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x168c34: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x168c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168c38: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x168C38u;
    SET_GPR_U32(ctx, 31, 0x168C40u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x168C40u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168C40u) { return; }
    ctx->pc = 0x168C40u;
label_168c40:
    // 0x168c40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168c44: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x168c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x168c48: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x168c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x168c4c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x168c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x168c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168c54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x168c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x168c58: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x168c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x168c5c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x168c60: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x168c64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168c68: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x168c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x168c6c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x168c6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x168c70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168c74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x168c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168c78: 0xc05a6e0  jal         func_169B80
    ctx->pc = 0x168C78u;
    SET_GPR_U32(ctx, 31, 0x168C80u);
    ctx->pc = 0x169B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B80u, 0x168C78u, 0x168C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C80u;
label_168c80:
    // 0x168c80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168c84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168c88: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x168C88u;
    SET_GPR_U32(ctx, 31, 0x168C90u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x168C88u, 0x168C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C90u;
label_168c90:
    // 0x168c90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168c94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168c98: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x168c98u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x168c9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168ca0: 0x0  nop
    ctx->pc = 0x168ca0u;
    // NOP
    // 0x168ca4: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x168CA4u;
    {
        const bool branch_taken_0x168ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168ca4) {
            ctx->pc = 0x168DE4u;
            goto label_168de4;
        }
    }
    ctx->pc = 0x168CACu;
    // 0x168cac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168cb0: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x168cb0u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168cb4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168cb8: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168cb8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168cbc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168cc0: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168cc0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168cc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168cc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x168cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168ccc: 0x0  nop
    ctx->pc = 0x168cccu;
    // NOP
    // 0x168cd0: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x168CD0u;
    {
        const bool branch_taken_0x168cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168cd0) {
            ctx->pc = 0x168DE4u;
            goto label_168de4;
        }
    }
    ctx->pc = 0x168CD8u;
    // 0x168cd8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168cdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ce0: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168ce4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ce8: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x168ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168cec: 0xc040c80  jal         func_103200
    ctx->pc = 0x168CECu;
    SET_GPR_U32(ctx, 31, 0x168CF4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168CF4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168CF4u) { return; }
    ctx->pc = 0x168CF4u;
label_168cf4:
    // 0x168cf4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168cf8: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168cf8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168cfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168d04: 0x0  nop
    ctx->pc = 0x168d04u;
    // NOP
    // 0x168d08: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x168d08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168d0c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d10: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d14: 0xc040c8c  jal         func_103230
    ctx->pc = 0x168D14u;
    SET_GPR_U32(ctx, 31, 0x168D1Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x168D1Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168D1Cu) { return; }
    ctx->pc = 0x168D1Cu;
label_168d1c:
    // 0x168d1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168d20: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x168d20u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168d24: 0xc045630  jal         func_1158C0
    ctx->pc = 0x168D24u;
    SET_GPR_U32(ctx, 31, 0x168D2Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x168D24u, 0x168D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D2Cu;
label_168d2c:
    // 0x168d2c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d30: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x168d34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x168d38: 0xc040c60  jal         func_103180
    ctx->pc = 0x168D38u;
    SET_GPR_U32(ctx, 31, 0x168D40u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x168D40u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168D40u) { return; }
    ctx->pc = 0x168D40u;
label_168d40:
    // 0x168d40: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168d48: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168d4c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d50: 0xc040c80  jal         func_103200
    ctx->pc = 0x168D50u;
    SET_GPR_U32(ctx, 31, 0x168D58u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168D58u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168D58u) { return; }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168d5c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x168d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168d60: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168d64: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x168D64u;
    SET_GPR_U32(ctx, 31, 0x168D6Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x168D64u, 0x168D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D6Cu;
label_168d6c:
    // 0x168d6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168d70: 0x0  nop
    ctx->pc = 0x168d70u;
    // NOP
    // 0x168d74: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x168d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x168d78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168d7c: 0xc067588  jal         func_19D620
    ctx->pc = 0x168D7Cu;
    SET_GPR_U32(ctx, 31, 0x168D84u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x168D7Cu, 0x168D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D84u;
label_168d84:
    // 0x168d84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x168d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x168d88: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x168d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168d8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168d90: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168d90u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168d98: 0x0  nop
    ctx->pc = 0x168d98u;
    // NOP
    // 0x168d9c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x168D9Cu;
    {
        const bool branch_taken_0x168d9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168d9c) {
            ctx->pc = 0x168DCCu;
            goto label_168dcc;
        }
    }
    ctx->pc = 0x168DA4u;
    // 0x168da4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168da8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x168da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168dac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168db0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x168db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x168db4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168db8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x168db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168dbc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168dc0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x168dc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168DC4u;
    {
        const bool branch_taken_0x168dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168dc4) {
            ctx->pc = 0x168DF4u;
            goto label_168df4;
        }
    }
    ctx->pc = 0x168DCCu;
label_168dcc:
    // 0x168dcc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168dd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168dd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168dd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168dd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x168ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168DDCu;
    {
        const bool branch_taken_0x168ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ddc) {
            ctx->pc = 0x168DF4u;
            goto label_168df4;
        }
    }
    ctx->pc = 0x168DE4u;
label_168de4:
    // 0x168de4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168de8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168de8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168dec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168df0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168df0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_168df4:
    // 0x168df4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168df8: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x168df8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x168dfc: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x168dfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x168e00: 0x14200070  bnez        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x168E00u;
    {
        const bool branch_taken_0x168e00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168e00) {
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168E08u;
    // 0x168e08: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x168e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x168e0c: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x168e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168e14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e18: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x168e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x168e1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168e24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168e28: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x168e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168e2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168e2cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x168e30: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168e34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168e38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168e3c: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x168e40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168e40u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x168e44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168e48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x168e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168e4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e50: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x168e50u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168e54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x168e58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e5c: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x168e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x168e60: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x168E60u;
    SET_GPR_U32(ctx, 31, 0x168E68u);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x168E60u, 0x168E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E68u;
label_168e68:
    // 0x168e68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168e6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x168e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168e70: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x168E70u;
    SET_GPR_U32(ctx, 31, 0x168E78u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x168E70u, 0x168E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E78u;
label_168e78:
    // 0x168e78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x168e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x168e7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e80: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x168e80u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168e84: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x168e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168e88: 0x0  nop
    ctx->pc = 0x168e88u;
    // NOP
    // 0x168e8c: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
    ctx->pc = 0x168E8Cu;
    {
        const bool branch_taken_0x168e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168e8c) {
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168E94u;
    // 0x168e94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168e98: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x168e98u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168e9c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ea0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168ea0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ea8: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168ea8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168eac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168eb0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x168eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168eb4: 0x0  nop
    ctx->pc = 0x168eb4u;
    // NOP
    // 0x168eb8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x168EB8u;
    {
        const bool branch_taken_0x168eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168eb8) {
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168EC0u;
    // 0x168ec0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168ec4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ec8: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168ecc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168ed0: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168ed4: 0xc040c80  jal         func_103200
    ctx->pc = 0x168ED4u;
    SET_GPR_U32(ctx, 31, 0x168EDCu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168EDCu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168EDCu) { return; }
    ctx->pc = 0x168EDCu;
label_168edc:
    // 0x168edc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168ee0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x168ee0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168ee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168eec: 0x0  nop
    ctx->pc = 0x168eecu;
    // NOP
    // 0x168ef0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x168ef0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x168ef4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168ef8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168efc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x168EFCu;
    SET_GPR_U32(ctx, 31, 0x168F04u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x168F04u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F04u) { return; }
    ctx->pc = 0x168F04u;
label_168f04:
    // 0x168f04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168f08: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x168f08u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168f0c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x168F0Cu;
    SET_GPR_U32(ctx, 31, 0x168F14u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x168F0Cu, 0x168F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F14u;
label_168f14:
    // 0x168f14: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f18: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x168f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f1c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x168f1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x168f20: 0xc040c60  jal         func_103180
    ctx->pc = 0x168F20u;
    SET_GPR_U32(ctx, 31, 0x168F28u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x168F28u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F28u) { return; }
    ctx->pc = 0x168F28u;
label_168f28:
    // 0x168f28: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x168f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168f30: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168f34: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f38: 0xc040c80  jal         func_103200
    ctx->pc = 0x168F38u;
    SET_GPR_U32(ctx, 31, 0x168F40u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168F40u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168F40u) { return; }
    ctx->pc = 0x168F40u;
label_168f40:
    // 0x168f40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168f44: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168f48: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f4c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x168F4Cu;
    SET_GPR_U32(ctx, 31, 0x168F54u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x168F4Cu, 0x168F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F54u;
label_168f54:
    // 0x168f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168f58: 0x0  nop
    ctx->pc = 0x168f58u;
    // NOP
    // 0x168f5c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x168f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x168f60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x168f64: 0xc067588  jal         func_19D620
    ctx->pc = 0x168F64u;
    SET_GPR_U32(ctx, 31, 0x168F6Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x168F64u, 0x168F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F6Cu;
label_168f6c:
    // 0x168f6c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x168f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x168f70: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x168f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168f74: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168f78: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x168f78u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168f7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x168f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168f80: 0x0  nop
    ctx->pc = 0x168f80u;
    // NOP
    // 0x168f84: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x168F84u;
    {
        const bool branch_taken_0x168f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x168f84) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F8Cu;
    // 0x168f8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x168f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168f94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168f98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x168f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x168f9c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x168fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168fa4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168fa8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x168fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x168fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168FACu;
    {
        const bool branch_taken_0x168fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fac) {
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168FB4u;
label_168fb4:
    // 0x168fb4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168fb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168fbc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_168fc4:
    // 0x168fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168fcc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fd0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x168fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x168fd4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168fd8: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x168fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x168fdc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x168fdcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168fe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168fe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168fe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fec: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x168fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x168FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FF8u;
}
