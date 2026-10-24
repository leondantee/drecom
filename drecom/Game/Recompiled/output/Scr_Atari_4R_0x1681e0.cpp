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

// Function: Scr_Atari_4R
// Address: 0x1681e0 - 0x168428
void Scr_Atari_4R_0x1681e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_Atari_4R_0x1681e0");
#endif

    switch (ctx->pc) {
        case 0x168270u: goto label_168270;
        case 0x16828cu: goto label_16828c;
        case 0x16829cu: goto label_16829c;
        case 0x1683acu: goto label_1683ac;
        case 0x1683bcu: goto label_1683bc;
        case 0x1683d8u: goto label_1683d8;
        case 0x1683ecu: goto label_1683ec;
        default: break;
    }

    ctx->pc = 0x1681e0u;

    // 0x1681e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1681e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1681e4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1681e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1681e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1681e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1681ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1681ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1681f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1681f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1681f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1681f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1681f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1681f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1681fc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1681fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x168200: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x168200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x168204: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x168204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x168208: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x168208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x16820c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x168210: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168214: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x168214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x168218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16821c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16821cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168220: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168224: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x168224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x168228: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x168228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16822c: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x16822cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x168230: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x168230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168234: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168238: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16823c: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x168240: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168240u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x168244: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x168244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168248: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16824c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x168250: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x168250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x168254: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168254u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x168258: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x168258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16825c: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x16825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x168260: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x168260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168264: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x168264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168268: 0xc040c80  jal         func_103200
    ctx->pc = 0x168268u;
    SET_GPR_U32(ctx, 31, 0x168270u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x168270u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x168270u) { return; }
    ctx->pc = 0x168270u;
label_168270:
    // 0x168270: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x168274: 0x8c33fdf8  lw          $s3, -0x208($at)
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x168278: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16827c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16827cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x168280: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168284: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x168284u;
    SET_GPR_U32(ctx, 31, 0x16828Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16828Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16828Cu) { return; }
    ctx->pc = 0x16828Cu;
label_16828c:
    // 0x16828c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16828cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168290: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x168290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168294: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x168294u;
    SET_GPR_U32(ctx, 31, 0x16829Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16829Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16829Cu) { return; }
    ctx->pc = 0x16829Cu;
label_16829c:
    // 0x16829c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1682a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1682a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1682a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682a8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1682A8u;
    {
        const bool branch_taken_0x1682a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1682a8) {
            ctx->pc = 0x1682C8u;
            goto label_1682c8;
        }
    }
    ctx->pc = 0x1682B0u;
    // 0x1682b0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1682b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1682b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1682b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1682b8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682bc: 0x28023  negu        $s0, $v0
    ctx->pc = 0x1682bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1682c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1682C0u;
    {
        const bool branch_taken_0x1682c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1682c0) {
            ctx->pc = 0x1682D4u;
            goto label_1682d4;
        }
    }
    ctx->pc = 0x1682C8u;
label_1682c8:
    // 0x1682c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1682cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1682ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1682d0: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1682d4:
    // 0x1682d4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x1682d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1682d8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x1682dc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1682e0: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1682e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1682E8u;
    {
        const bool branch_taken_0x1682e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1682e8) {
            ctx->pc = 0x168308u;
            goto label_168308;
        }
    }
    ctx->pc = 0x1682F0u;
    // 0x1682f0: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1682f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1682f4: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x1682f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1682f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1682fc: 0x28823  negu        $s1, $v0
    ctx->pc = 0x1682fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x168300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168300u;
    {
        const bool branch_taken_0x168300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168300) {
            ctx->pc = 0x168314u;
            goto label_168314;
        }
    }
    ctx->pc = 0x168308u;
label_168308:
    // 0x168308: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x168308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16830c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x168310: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x168310u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_168314:
    // 0x168314: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x168314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x168318: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x168318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x16831c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x16831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168320: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168324: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x168324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168328: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x168328u;
    {
        const bool branch_taken_0x168328 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168328) {
            ctx->pc = 0x168348u;
            goto label_168348;
        }
    }
    ctx->pc = 0x168330u;
    // 0x168330: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168334: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168338: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x168338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16833c: 0x29023  negu        $s2, $v0
    ctx->pc = 0x16833cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x168340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168340u;
    {
        const bool branch_taken_0x168340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168340) {
            ctx->pc = 0x168354u;
            goto label_168354;
        }
    }
    ctx->pc = 0x168348u;
label_168348:
    // 0x168348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16834c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x168350: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x168350u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_168354:
    // 0x168354: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x168354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x168358: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x168358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x16835c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168360: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168364: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168368: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16836c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x168370: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x168374: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x168374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x168378: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16837c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16837cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x168380: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x168380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x168384: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x168384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x168388: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x168388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16838c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168390: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x168390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x168394: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x168394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x168398: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x168398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x16839c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1683a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1683a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1683a4: 0xc05a10c  jal         func_168430
    ctx->pc = 0x1683A4u;
    SET_GPR_U32(ctx, 31, 0x1683ACu);
    ctx->pc = 0x168430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168430u, 0x1683A4u, 0x1683ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683ACu;
label_1683ac:
    // 0x1683ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1683b0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1683b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1683b4: 0xc05afe0  jal         func_16BF80
    ctx->pc = 0x1683B4u;
    SET_GPR_U32(ctx, 31, 0x1683BCu);
    ctx->pc = 0x16BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF80u, 0x1683B4u, 0x1683BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683BCu;
label_1683bc:
    // 0x1683bc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1683c4: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x1683c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1683c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1683cc: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x1683ccu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1683d0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1683D0u;
    SET_GPR_U32(ctx, 31, 0x1683D8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1683D8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1683D8u) { return; }
    ctx->pc = 0x1683D8u;
label_1683d8:
    // 0x1683d8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1683d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683dc: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1683dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683e0: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1683e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1683e4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1683E4u;
    SET_GPR_U32(ctx, 31, 0x1683ECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1683ECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1683ECu) { return; }
    ctx->pc = 0x1683ECu;
label_1683ec:
    // 0x1683ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1683f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1683f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1683f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1683f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1683f8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1683f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1683fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x168400: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x168400u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x168404: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x168404u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168408: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168408u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16840c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16840cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16841c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x16841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x168420: 0x3e00008  jr          $ra
    ctx->pc = 0x168420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168428u;
}
