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

// Function: Scr_AtCy4
// Address: 0x16d580 - 0x16d76c
void Scr_AtCy4_0x16d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_AtCy4_0x16d580");
#endif

    switch (ctx->pc) {
        case 0x16d6c8u: goto label_16d6c8;
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d718u: goto label_16d718;
        default: break;
    }

    ctx->pc = 0x16d580u;

    // 0x16d580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16d584: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x16d584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x16d588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d594: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x16d594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x16d598: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x16d598u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16d59c: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x16d59cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16d5a0: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x16d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x16d5a4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16d5a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16d5a8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d5ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d5b0: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x16d5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x16d5b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d5b8: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x16d5b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x16d5bc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x16d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x16d5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16d5c4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16d5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5c8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x16d5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16d5cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16d5d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16d5d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d5d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x16d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16d5d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16d5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16d5dc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x16d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d5e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d5e4: 0x0  nop
    ctx->pc = 0x16d5e4u;
    // NOP
    // 0x16d5e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d5ec: 0x0  nop
    ctx->pc = 0x16d5ecu;
    // NOP
    // 0x16d5f0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x16D5F0u;
    {
        const bool branch_taken_0x16d5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d5f0) {
            ctx->pc = 0x16D61Cu;
            goto label_16d61c;
        }
    }
    ctx->pc = 0x16D5F8u;
    // 0x16d5f8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x16d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d5fc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d600: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16d600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16d604: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x16d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x16d608: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d60c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16d60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d610: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d614: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16d618: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x16d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_16d61c:
    // 0x16d61c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x16d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d620: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d624: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16d624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
    // 0x16d628: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x16d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d62c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d630: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16d630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16d634: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d638: 0xe420ab18  swc1        $f0, -0x54E8($at)
    ctx->pc = 0x16d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB18u, _value); } while (0); }
    // 0x16d63c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16d63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16d640: 0x8c31fdf8  lw          $s1, -0x208($at)
    ctx->pc = 0x16d640u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x16d644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16d644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16d648: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x16d648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x16d64c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x16d64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16d650: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x16d650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d654: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d658: 0xe420ab08  swc1        $f0, -0x54F8($at)
    ctx->pc = 0x16d658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB08u, _value); } while (0); }
    // 0x16d65c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d660: 0xac20bb30  sw          $zero, -0x44D0($at)
    ctx->pc = 0x16d660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x16d664: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x16d668: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x16d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x16d66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d670: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d674: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16d678: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x16d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16d67c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16d67cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d680: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16d684: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16d684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16d688: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16d688u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x16d68c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16d690: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16d690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d694: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16d694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16d698: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16d69c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16d69cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x16d6a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d6a4: 0xc421aae4  lwc1        $f1, -0x551C($at)
    ctx->pc = 0x16d6a4u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d6a8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x16d6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d6ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16d6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16d6b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d6b4: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x16d6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x16d6b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16d6bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x16d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16d6c0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16D6C0u;
    SET_GPR_U32(ctx, 31, 0x16D6C8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16D6C8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16D6C8u) { return; }
    ctx->pc = 0x16D6C8u;
label_16d6c8:
    // 0x16d6c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16d6cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16d6d0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16D6D0u;
    SET_GPR_U32(ctx, 31, 0x16D6D8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16D6D8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16D6D8u) { return; }
    ctx->pc = 0x16D6D8u;
label_16d6d8:
    // 0x16d6d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d6dc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x16d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x16d6e0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x16d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x16d6e4: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x16d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x16d6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d6ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d6f0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x16d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x16d6f4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x16d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x16d6f8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x16d6fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d700: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x16d700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x16d704: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16d704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16d708: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16d708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16d70c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x16d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16d710: 0xc05b5dc  jal         func_16D770
    ctx->pc = 0x16D710u;
    SET_GPR_U32(ctx, 31, 0x16D718u);
    ctx->pc = 0x16D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D770u, 0x16D710u, 0x16D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D718u;
label_16d718:
    // 0x16d718: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x16d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d71c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d720: 0x0  nop
    ctx->pc = 0x16d720u;
    // NOP
    // 0x16d724: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d728: 0x0  nop
    ctx->pc = 0x16d728u;
    // NOP
    // 0x16d72c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16D72Cu;
    {
        const bool branch_taken_0x16d72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d72c) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D734u;
    // 0x16d734: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d738: 0xc420ab10  lwc1        $f0, -0x54F0($at)
    ctx->pc = 0x16d738u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D73Cu;
    {
        const bool branch_taken_0x16d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d73c) {
            ctx->pc = 0x16D750u;
            goto label_16d750;
        }
    }
    ctx->pc = 0x16D744u;
label_16d744:
    // 0x16d744: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d748: 0xc420ab18  lwc1        $f0, -0x54E8($at)
    ctx->pc = 0x16d748u;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d74c: 0x0  nop
    ctx->pc = 0x16d74cu;
    // NOP
label_16d750:
    // 0x16d750: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x16d750u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d75c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d760: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16d764: 0x3e00008  jr          $ra
    ctx->pc = 0x16D764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D76Cu;
}
