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

// Function: Scr_Atari_4
// Address: 0x167870 - 0x167ab8
void Scr_Atari_4_0x167870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_Atari_4_0x167870");
#endif

    switch (ctx->pc) {
        case 0x167900u: goto label_167900;
        case 0x16791cu: goto label_16791c;
        case 0x16792cu: goto label_16792c;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a4cu: goto label_167a4c;
        case 0x167a68u: goto label_167a68;
        case 0x167a7cu: goto label_167a7c;
        default: break;
    }

    ctx->pc = 0x167870u;

    // 0x167870: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x167870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x167874: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x167874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x167878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16787c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x167884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16788c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x16788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x167890: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x167890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x167894: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x167894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x167898: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x167898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x16789c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1678a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1678a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1678a4: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x1678a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x1678a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1678a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1678ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1678acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1678b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1678b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1678b4: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x1678b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x1678b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1678b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1678bc: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x1678bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x1678c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1678c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1678c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1678c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1678c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1678c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1678cc: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x1678ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1678d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1678d0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x1678d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1678d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1678d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1678dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1678e0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x1678e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1678e4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x1678e8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1678e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1678ec: 0x2444aaf0  addiu       $a0, $v0, -0x5510
    ctx->pc = 0x1678ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1678f0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1678f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1678f4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1678f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1678f8: 0xc040c80  jal         func_103200
    ctx->pc = 0x1678F8u;
    SET_GPR_U32(ctx, 31, 0x167900u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x167900u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167900u) { return; }
    ctx->pc = 0x167900u;
label_167900:
    // 0x167900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x167900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x167904: 0x8c33fdf8  lw          $s3, -0x208($at)
    ctx->pc = 0x167904u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x167908: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x16790c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x167910: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x167910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x167914: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x167914u;
    SET_GPR_U32(ctx, 31, 0x16791Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16791Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16791Cu) { return; }
    ctx->pc = 0x16791Cu;
label_16791c:
    // 0x16791c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x167920: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x167920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x167924: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x167924u;
    SET_GPR_U32(ctx, 31, 0x16792Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16792Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16792Cu) { return; }
    ctx->pc = 0x16792Cu;
label_16792c:
    // 0x16792c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167930: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167934: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167938: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167938u;
    {
        const bool branch_taken_0x167938 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x167938) {
            ctx->pc = 0x167958u;
            goto label_167958;
        }
    }
    ctx->pc = 0x167940u;
    // 0x167940: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167944: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167948: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167948u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16794c: 0x28023  negu        $s0, $v0
    ctx->pc = 0x16794cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x167950: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167950u;
    {
        const bool branch_taken_0x167950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167950) {
            ctx->pc = 0x167964u;
            goto label_167964;
        }
    }
    ctx->pc = 0x167958u;
label_167958:
    // 0x167958: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x167958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16795c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167960: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x167960u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167964:
    // 0x167964: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x167964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x167968: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x167968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x16796c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167970: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167974: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167978: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167978u;
    {
        const bool branch_taken_0x167978 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x167978) {
            ctx->pc = 0x167998u;
            goto label_167998;
        }
    }
    ctx->pc = 0x167980u;
    // 0x167980: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167984: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167988: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16798c: 0x28823  negu        $s1, $v0
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x167990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167990u;
    {
        const bool branch_taken_0x167990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167990) {
            ctx->pc = 0x1679A4u;
            goto label_1679a4;
        }
    }
    ctx->pc = 0x167998u;
label_167998:
    // 0x167998: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16799c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1679a0: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1679a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1679a4:
    // 0x1679a4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1679a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1679a8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1679a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1679ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679b8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1679B8u;
    {
        const bool branch_taken_0x1679b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1679b8) {
            ctx->pc = 0x1679D8u;
            goto label_1679d8;
        }
    }
    ctx->pc = 0x1679C0u;
    // 0x1679c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1679c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679cc: 0x29023  negu        $s2, $v0
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1679d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1679D0u;
    {
        const bool branch_taken_0x1679d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1679d0) {
            ctx->pc = 0x1679E4u;
            goto label_1679e4;
        }
    }
    ctx->pc = 0x1679D8u;
label_1679d8:
    // 0x1679d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679e0: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x1679e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1679e4:
    // 0x1679e4: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
    // 0x1679e8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1679e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1679ec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1679f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1679f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1679fc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1679fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x167a00: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167a04: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167a08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167a0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x167a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x167a10: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x167a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x167a14: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x167a18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x167a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167a1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167a20: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x167a24: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x167a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x167a28: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x167a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x167a2c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167a30: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167a34: 0xc059eb0  jal         func_167AC0
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x167AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AC0u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167a40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167a44: 0xc05af54  jal         func_16BD50
    ctx->pc = 0x167A44u;
    SET_GPR_U32(ctx, 31, 0x167A4Cu);
    ctx->pc = 0x16BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD50u, 0x167A44u, 0x167A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A4Cu;
label_167a4c:
    // 0x167a4c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a50: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x167a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x167a54: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x167a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x167a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167a5c: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x167a5cu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167a60: 0xc040c8c  jal         func_103230
    ctx->pc = 0x167A60u;
    SET_GPR_U32(ctx, 31, 0x167A68u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x167A68u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167A68u) { return; }
    ctx->pc = 0x167A68u;
label_167a68:
    // 0x167a68: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x167a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a6c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x167a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a70: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x167a74: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x167A74u;
    SET_GPR_U32(ctx, 31, 0x167A7Cu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x167A7Cu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x167A7Cu) { return; }
    ctx->pc = 0x167A7Cu;
label_167a7c:
    // 0x167a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x167a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167a84: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x167a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167a88: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x167a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x167a8c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x167a90: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x167a90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x167a94: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x167a94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167a98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167a98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167a9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167aa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167aac: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x167ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x167AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167AB8u;
}
