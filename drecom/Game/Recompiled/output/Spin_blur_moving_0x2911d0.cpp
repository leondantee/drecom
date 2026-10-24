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

// Function: Spin_blur_moving
// Address: 0x2911d0 - 0x292064
void Spin_blur_moving_0x2911d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Spin_blur_moving_0x2911d0");
#endif

    switch (ctx->pc) {
        case 0x2914fcu: goto label_2914fc;
        case 0x29150cu: goto label_29150c;
        case 0x291534u: goto label_291534;
        case 0x2916e0u: goto label_2916e0;
        case 0x29176cu: goto label_29176c;
        case 0x291784u: goto label_291784;
        case 0x291790u: goto label_291790;
        case 0x2917f8u: goto label_2917f8;
        case 0x291810u: goto label_291810;
        case 0x291824u: goto label_291824;
        case 0x291830u: goto label_291830;
        case 0x291854u: goto label_291854;
        case 0x2918ecu: goto label_2918ec;
        case 0x291918u: goto label_291918;
        case 0x291930u: goto label_291930;
        case 0x291960u: goto label_291960;
        case 0x291978u: goto label_291978;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919f0u: goto label_2919f0;
        case 0x291a08u: goto label_291a08;
        case 0x291b1cu: goto label_291b1c;
        case 0x291b80u: goto label_291b80;
        case 0x291bb8u: goto label_291bb8;
        case 0x291c3cu: goto label_291c3c;
        case 0x291c78u: goto label_291c78;
        case 0x291ce4u: goto label_291ce4;
        case 0x291d18u: goto label_291d18;
        case 0x291da0u: goto label_291da0;
        case 0x291ddcu: goto label_291ddc;
        case 0x291e64u: goto label_291e64;
        case 0x291ea0u: goto label_291ea0;
        case 0x291f00u: goto label_291f00;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fd8u: goto label_291fd8;
        case 0x292008u: goto label_292008;
        default: break;
    }

    ctx->pc = 0x2911d0u;

    // 0x2911d0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2911d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x2911d4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2911d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2911d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2911d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2911dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2911dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2911e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2911e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2911e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2911e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2911e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2911e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2911ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2911ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2911f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2911f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2911f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2911f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2911f8: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x2911f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x2911fc: 0xafa50200  sw          $a1, 0x200($sp)
    ctx->pc = 0x2911fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 5));
    // 0x291200: 0xafa60208  sw          $a2, 0x208($sp)
    ctx->pc = 0x291200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 6));
    // 0x291204: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x291204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x291208: 0x246232c0  addiu       $v0, $v1, 0x32C0
    ctx->pc = 0x291208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12992));
    // 0x29120c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x29120cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291210: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x291210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x291214: 0x24434800  addiu       $v1, $v0, 0x4800
    ctx->pc = 0x291214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18432));
    // 0x291218: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x291218u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29121c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29121cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291220: 0x8c222a50  lw          $v0, 0x2A50($at)
    ctx->pc = 0x291220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A50u));
    // 0x291224: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x291224u;
    {
        const bool branch_taken_0x291224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291224) {
            ctx->pc = 0x2914DCu;
            goto label_2914dc;
        }
    }
    ctx->pc = 0x29122Cu;
    // 0x29122c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29122cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291230: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291234: 0xe4202a60  swc1        $f0, 0x2A60($at)
    ctx->pc = 0x291234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A60u, _value); } while (0); }
    // 0x291238: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29123c: 0x94420034  lhu         $v0, 0x34($v0)
    ctx->pc = 0x29123cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x291240: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x291240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291244: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291248: 0x94430030  lhu         $v1, 0x30($v0)
    ctx->pc = 0x291248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29124c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x29124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291250: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x291250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x291254: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291258: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x291258u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29125c: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x29125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291260: 0x94820036  lhu         $v0, 0x36($a0)
    ctx->pc = 0x291260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x291264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x291264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291268: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x29126c: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x29126cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291270: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291274: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x291274u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291278: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29127c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x29127cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291280: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x291280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x291284: 0x21023  negu        $v0, $v0
    ctx->pc = 0x291284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x291288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29128c: 0x0  nop
    ctx->pc = 0x29128cu;
    // NOP
    // 0x291290: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291294: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x291294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x291298: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x291298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29129c: 0x0  nop
    ctx->pc = 0x29129cu;
    // NOP
    // 0x2912a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2912a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2912a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2912a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2912a8: 0xe4203280  swc1        $f0, 0x3280($at)
    ctx->pc = 0x2912a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623280u, _value); } while (0); }
    // 0x2912ac: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x2912acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x2912b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2912b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2912b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2912b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2912b8: 0x0  nop
    ctx->pc = 0x2912b8u;
    // NOP
    // 0x2912bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2912bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2912c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2912c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2912c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2912c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2912c8: 0x0  nop
    ctx->pc = 0x2912c8u;
    // NOP
    // 0x2912cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2912ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2912d0: 0x0  nop
    ctx->pc = 0x2912d0u;
    // NOP
    // 0x2912d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2912d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2912d8: 0xe4203284  swc1        $f0, 0x3284($at)
    ctx->pc = 0x2912d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623284u, _value); } while (0); }
    // 0x2912dc: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2912DCu;
    {
        const bool branch_taken_0x2912dc = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2912dc) {
            ctx->pc = 0x2912F8u;
            goto label_2912f8;
        }
    }
    ctx->pc = 0x2912E4u;
    // 0x2912e4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2912e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2912e8: 0x0  nop
    ctx->pc = 0x2912e8u;
    // NOP
    // 0x2912ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2912ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2912f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2912F0u;
    {
        const bool branch_taken_0x2912f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2912f0) {
            ctx->pc = 0x291314u;
            goto label_291314;
        }
    }
    ctx->pc = 0x2912F8u;
label_2912f8:
    // 0x2912f8: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2912f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2912fc: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2912fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x291300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291308: 0x0  nop
    ctx->pc = 0x291308u;
    // NOP
    // 0x29130c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29130cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291310: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_291314:
    // 0x291314: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x291314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x291318: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291318u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29131c: 0x0  nop
    ctx->pc = 0x29131cu;
    // NOP
    // 0x291320: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291320u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291324: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291328: 0xe4203290  swc1        $f0, 0x3290($at)
    ctx->pc = 0x291328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623290u, _value); } while (0); }
    // 0x29132c: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x29132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x291330: 0x21023  negu        $v0, $v0
    ctx->pc = 0x291330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x291334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291338: 0x0  nop
    ctx->pc = 0x291338u;
    // NOP
    // 0x29133c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29133cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291340: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291348: 0x0  nop
    ctx->pc = 0x291348u;
    // NOP
    // 0x29134c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29134cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291350: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291354: 0xe4203294  swc1        $f0, 0x3294($at)
    ctx->pc = 0x291354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x623294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x623294u, _value); } while (0); }
    // 0x291358: 0x32a2ffff  andi        $v0, $s5, 0xFFFF
    ctx->pc = 0x291358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x29135c: 0x22023  negu        $a0, $v0
    ctx->pc = 0x29135cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x291360: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x291360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291364: 0x0  nop
    ctx->pc = 0x291364u;
    // NOP
    // 0x291368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29136c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291374: 0x0  nop
    ctx->pc = 0x291374u;
    // NOP
    // 0x291378: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291378u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29137c: 0x0  nop
    ctx->pc = 0x29137cu;
    // NOP
    // 0x291380: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291384: 0xe42032a0  swc1        $f0, 0x32A0($at)
    ctx->pc = 0x291384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232A0u, _value); } while (0); }
    // 0x291388: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x291388u;
    {
        const bool branch_taken_0x291388 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x291388) {
            ctx->pc = 0x2913A4u;
            goto label_2913a4;
        }
    }
    ctx->pc = 0x291390u;
    // 0x291390: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x291390u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291394: 0x0  nop
    ctx->pc = 0x291394u;
    // NOP
    // 0x291398: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29139c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29139Cu;
    {
        const bool branch_taken_0x29139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29139c) {
            ctx->pc = 0x2913C0u;
            goto label_2913c0;
        }
    }
    ctx->pc = 0x2913A4u;
label_2913a4:
    // 0x2913a4: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x2913a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x2913a8: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2913a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x2913ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2913acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2913b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2913b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2913b4: 0x0  nop
    ctx->pc = 0x2913b4u;
    // NOP
    // 0x2913b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2913b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2913bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2913bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2913c0:
    // 0x2913c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2913c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2913c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2913c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2913c8: 0x0  nop
    ctx->pc = 0x2913c8u;
    // NOP
    // 0x2913cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2913ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2913d0: 0x0  nop
    ctx->pc = 0x2913d0u;
    // NOP
    // 0x2913d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2913d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2913d8: 0xe42032a4  swc1        $f0, 0x32A4($at)
    ctx->pc = 0x2913d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232A4u, _value); } while (0); }
    // 0x2913dc: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2913DCu;
    {
        const bool branch_taken_0x2913dc = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x2913dc) {
            ctx->pc = 0x2913F8u;
            goto label_2913f8;
        }
    }
    ctx->pc = 0x2913E4u;
    // 0x2913e4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x2913e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2913e8: 0x0  nop
    ctx->pc = 0x2913e8u;
    // NOP
    // 0x2913ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2913ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2913f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2913F0u;
    {
        const bool branch_taken_0x2913f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2913f0) {
            ctx->pc = 0x291414u;
            goto label_291414;
        }
    }
    ctx->pc = 0x2913F8u;
label_2913f8:
    // 0x2913f8: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x2913f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x2913fc: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2913fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x291400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291408: 0x0  nop
    ctx->pc = 0x291408u;
    // NOP
    // 0x29140c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29140cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291410: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291410u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_291414:
    // 0x291414: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x291418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29141c: 0x0  nop
    ctx->pc = 0x29141cu;
    // NOP
    // 0x291420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291424: 0x0  nop
    ctx->pc = 0x291424u;
    // NOP
    // 0x291428: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29142c: 0xe42032b0  swc1        $f0, 0x32B0($at)
    ctx->pc = 0x29142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232B0u, _value); } while (0); }
    // 0x291430: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x291430u;
    {
        const bool branch_taken_0x291430 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x291430) {
            ctx->pc = 0x29144Cu;
            goto label_29144c;
        }
    }
    ctx->pc = 0x291438u;
    // 0x291438: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x291438u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29143c: 0x0  nop
    ctx->pc = 0x29143cu;
    // NOP
    // 0x291440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291444u;
    {
        const bool branch_taken_0x291444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291444) {
            ctx->pc = 0x291468u;
            goto label_291468;
        }
    }
    ctx->pc = 0x29144Cu;
label_29144c:
    // 0x29144c: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x29144cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x291450: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x291450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x291454: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29145c: 0x0  nop
    ctx->pc = 0x29145cu;
    // NOP
    // 0x291460: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291464: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291464u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_291468:
    // 0x291468: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x291468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x29146c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291470: 0x0  nop
    ctx->pc = 0x291470u;
    // NOP
    // 0x291474: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x291474u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x291478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29147c: 0xe42032b4  swc1        $f0, 0x32B4($at)
    ctx->pc = 0x29147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232B4u, _value); } while (0); }
    // 0x291480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291488: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29148c: 0xe420328c  swc1        $f0, 0x328C($at)
    ctx->pc = 0x29148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62328Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62328Cu, _value); } while (0); }
    // 0x291490: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291498: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29149c: 0xe420329c  swc1        $f0, 0x329C($at)
    ctx->pc = 0x29149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x62329Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62329Cu, _value); } while (0); }
    // 0x2914a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2914a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2914a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2914a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2914a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914ac: 0xe42032ac  swc1        $f0, 0x32AC($at)
    ctx->pc = 0x2914acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232ACu, _value); } while (0); }
    // 0x2914b0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2914b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2914b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2914b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2914b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914bc: 0xe42032bc  swc1        $f0, 0x32BC($at)
    ctx->pc = 0x2914bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6232BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6232BCu, _value); } while (0); }
    // 0x2914c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914c4: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x2914c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x2914c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914cc: 0x8c222a50  lw          $v0, 0x2A50($at)
    ctx->pc = 0x2914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A50u));
    // 0x2914d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2914d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2914d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2914d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2914d8: 0xac222a50  sw          $v0, 0x2A50($at)
    ctx->pc = 0x2914d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A50u, _value); } while (0);
label_2914dc:
    // 0x2914dc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2914dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2914e0: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x2914e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2914e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2914e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2914e8: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x2914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2914ec: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2914ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2914f0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2914f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2914f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2914F4u;
    SET_GPR_U32(ctx, 31, 0x2914FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2914FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2914FCu) { return; }
    ctx->pc = 0x2914FCu;
label_2914fc:
    // 0x2914fc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2914fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x291500: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291504: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x291504u;
    SET_GPR_U32(ctx, 31, 0x29150Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x29150Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29150Cu) { return; }
    ctx->pc = 0x29150Cu;
label_29150c:
    // 0x29150c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29150cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291510: 0xac202a68  sw          $zero, 0x2A68($at)
    ctx->pc = 0x291510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A68u, _value); } while (0);
    // 0x291514: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291518: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x29151c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291520: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291524: 0xac222a70  sw          $v0, 0x2A70($at)
    ctx->pc = 0x291524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A70u, _value); } while (0);
    // 0x291528: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x291528u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29152c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x29152Cu;
    {
        const bool branch_taken_0x29152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29152c) {
            ctx->pc = 0x291878u;
            goto label_291878;
        }
    }
    ctx->pc = 0x291534u;
label_291534:
    // 0x291534: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291538: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x291538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29153c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29153Cu;
    {
        const bool branch_taken_0x29153c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29153c) {
            ctx->pc = 0x291558u;
            goto label_291558;
        }
    }
    ctx->pc = 0x291544u;
    // 0x291544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291548: 0x0  nop
    ctx->pc = 0x291548u;
    // NOP
    // 0x29154c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29154cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291550u;
    {
        const bool branch_taken_0x291550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291550) {
            ctx->pc = 0x291574u;
            goto label_291574;
        }
    }
    ctx->pc = 0x291558u;
label_291558:
    // 0x291558: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x291558u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29155c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29155cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x291560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x291560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x291564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291568: 0x0  nop
    ctx->pc = 0x291568u;
    // NOP
    // 0x29156c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29156cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291570: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_291574:
    // 0x291574: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x291574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x291578: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x291578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x29157c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29157cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291580: 0x0  nop
    ctx->pc = 0x291580u;
    // NOP
    // 0x291584: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x291584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x291588: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x291588u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29158c: 0x0  nop
    ctx->pc = 0x29158cu;
    // NOP
    // 0x291590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x291590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x291594: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x291594u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x291598: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x291598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29159c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x29159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2915a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2915a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2915a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2915a8: 0xc4202a60  lwc1        $f0, 0x2A60($at)
    ctx->pc = 0x2915a8u;
    { uint32_t bits = FAST_READ32(0x622A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2915ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2915acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2915b0: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2915b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2915b4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x2915b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2915b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2915b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2915bc: 0x0  nop
    ctx->pc = 0x2915bcu;
    // NOP
    // 0x2915c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2915c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2915c4: 0x0  nop
    ctx->pc = 0x2915c4u;
    // NOP
    // 0x2915c8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2915C8u;
    {
        const bool branch_taken_0x2915c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2915c8) {
            ctx->pc = 0x291610u;
            goto label_291610;
        }
    }
    ctx->pc = 0x2915D0u;
    // 0x2915d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2915d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2915d4: 0x0  nop
    ctx->pc = 0x2915d4u;
    // NOP
    // 0x2915d8: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2915d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2915dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2915dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2915e0: 0xac342a70  sw          $s4, 0x2A70($at)
    ctx->pc = 0x2915e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x622A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A70u, _value); } while (0);
    // 0x2915e4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2915e8: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x2915e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x2915ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2915ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2915f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2915f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2915f4: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2915F4u;
    {
        const bool branch_taken_0x2915f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2915f4) {
            ctx->pc = 0x291890u;
            goto label_291890;
        }
    }
    ctx->pc = 0x2915FCu;
    // 0x2915fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291600: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291604: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x291604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x291608: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x291608u;
    {
        const bool branch_taken_0x291608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291608) {
            ctx->pc = 0x291890u;
            goto label_291890;
        }
    }
    ctx->pc = 0x291610u;
label_291610:
    // 0x291610: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x291610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291614: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29161c: 0x0  nop
    ctx->pc = 0x29161cu;
    // NOP
    // 0x291620: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x291620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291624: 0x0  nop
    ctx->pc = 0x291624u;
    // NOP
    // 0x291628: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x291628) {
            ctx->pc = 0x291684u;
            goto label_291684;
        }
    }
    ctx->pc = 0x291630u;
    // 0x291630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x291634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291638: 0x0  nop
    ctx->pc = 0x291638u;
    // NOP
    // 0x29163c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x29163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x291640: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291644: 0xac342a68  sw          $s4, 0x2A68($at)
    ctx->pc = 0x291644u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x622A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A68u, _value); } while (0);
    // 0x291648: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x291648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29164c: 0x90820015  lbu         $v0, 0x15($a0)
    ctx->pc = 0x29164cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x291650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291654: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x291654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x291658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291658u;
    {
        const bool branch_taken_0x291658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291658) {
            ctx->pc = 0x291670u;
            goto label_291670;
        }
    }
    ctx->pc = 0x291660u;
    // 0x291660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291664: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291668: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x291668u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x29166c: 0x0  nop
    ctx->pc = 0x29166cu;
    // NOP
label_291670:
    // 0x291670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291678: 0xac222a58  sw          $v0, 0x2A58($at)
    ctx->pc = 0x291678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x29167c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29167Cu;
    {
        const bool branch_taken_0x29167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29167c) {
            ctx->pc = 0x291690u;
            goto label_291690;
        }
    }
    ctx->pc = 0x291684u;
label_291684:
    // 0x291684: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291688: 0xac202a58  sw          $zero, 0x2A58($at)
    ctx->pc = 0x291688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A58u, _value); } while (0);
    // 0x29168c: 0x0  nop
    ctx->pc = 0x29168cu;
    // NOP
label_291690:
    // 0x291690: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x291694: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x291694u;
    {
        const bool branch_taken_0x291694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291694) {
            ctx->pc = 0x2916E8u;
            goto label_2916e8;
        }
    }
    ctx->pc = 0x29169Cu;
    // 0x29169c: 0x8fa60200  lw          $a2, 0x200($sp)
    ctx->pc = 0x29169cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a0: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2916a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a4: 0x8fa80200  lw          $t0, 0x200($sp)
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916a8: 0x8fa90200  lw          $t1, 0x200($sp)
    ctx->pc = 0x2916a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916ac: 0x8faa0200  lw          $t2, 0x200($sp)
    ctx->pc = 0x2916acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916b0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2916b4: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp)
    ctx->pc = 0x2916b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2916b8: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2916bc: 0x27a501d4  addiu       $a1, $sp, 0x1D4
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2916c0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2916c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2916c4: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2916c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2916c8: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x2916c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
    // 0x2916cc: 0x25290084  addiu       $t1, $t1, 0x84
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 132));
    // 0x2916d0: 0x254a00c4  addiu       $t2, $t2, 0xC4
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 196));
    // 0x2916d4: 0x246b0104  addiu       $t3, $v1, 0x104
    ctx->pc = 0x2916d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x2916d8: 0xc0a4450  jal         func_291140
    ctx->pc = 0x2916D8u;
    SET_GPR_U32(ctx, 31, 0x2916E0u);
    ctx->pc = 0x291140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291140u, 0x2916D8u, 0x2916E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916E0u;
label_2916e0:
    // 0x2916e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2916E0u;
    {
        const bool branch_taken_0x2916e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2916e0) {
            ctx->pc = 0x291708u;
            goto label_291708;
        }
    }
    ctx->pc = 0x2916E8u;
label_2916e8:
    // 0x2916e8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2916e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2916ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2916ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2916f0: 0x0  nop
    ctx->pc = 0x2916f0u;
    // NOP
    // 0x2916f4: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2916f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2916f8: 0x3c024374  lui         $v0, 0x4374
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17268 << 16));
    // 0x2916fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2916fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291700: 0x0  nop
    ctx->pc = 0x291700u;
    // NOP
    // 0x291704: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x291704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_291708:
    // 0x291708: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29170c: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x29170cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x291710: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291710u;
    {
        const bool branch_taken_0x291710 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x291710) {
            ctx->pc = 0x29172Cu;
            goto label_29172c;
        }
    }
    ctx->pc = 0x291718u;
    // 0x291718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29171c: 0x0  nop
    ctx->pc = 0x29171cu;
    // NOP
    // 0x291720: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291724u;
    {
        const bool branch_taken_0x291724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291724) {
            ctx->pc = 0x291748u;
            goto label_291748;
        }
    }
    ctx->pc = 0x29172Cu;
label_29172c:
    // 0x29172c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x29172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x291730: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x291734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x291734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x291738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29173c: 0x0  nop
    ctx->pc = 0x29173cu;
    // NOP
    // 0x291740: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x291740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291744: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x291744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_291748:
    // 0x291748: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x291748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x29174c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x29174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x291750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291754: 0x0  nop
    ctx->pc = 0x291754u;
    // NOP
    // 0x291758: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x291758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29175c: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x29175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291760: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x291760u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x291764: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x291764u;
    SET_GPR_U32(ctx, 31, 0x29176Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x291764u, 0x29176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29176Cu;
label_29176c:
    // 0x29176c: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x29176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x291770: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x291770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x291774: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x291774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x291778: 0xc7ac01ec  lwc1        $f12, 0x1EC($sp)
    ctx->pc = 0x291778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29177c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x29177Cu;
    SET_GPR_U32(ctx, 31, 0x291784u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x291784u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291784u) { return; }
    ctx->pc = 0x291784u;
label_291784:
    // 0x291784: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x291784u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x291788: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x291788u;
    {
        const bool branch_taken_0x291788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291788) {
            ctx->pc = 0x2917D8u;
            goto label_2917d8;
        }
    }
    ctx->pc = 0x291790u;
label_291790:
    // 0x291790: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291794: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x291794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291798: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29179c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x29179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2917a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2917a4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2917a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2917a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2917ac: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x2917acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2917b0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2917b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2917b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2917b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2917b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2917bc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2917c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2917c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2917c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2917c8: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2917c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2917cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2917ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2917d0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2917d0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2917d4: 0x0  nop
    ctx->pc = 0x2917d4u;
    // NOP
label_2917d8:
    // 0x2917d8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2917d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2917dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2917DCu;
    {
        const bool branch_taken_0x2917dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2917dc) {
            ctx->pc = 0x291790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291790;
        }
    }
    ctx->pc = 0x2917E4u;
    // 0x2917e4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2917e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2917e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2917e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2917ec: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2917ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2917f0: 0xc040c00  jal         func_103000
    ctx->pc = 0x2917F0u;
    SET_GPR_U32(ctx, 31, 0x2917F8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2917F8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2917F8u) { return; }
    ctx->pc = 0x2917F8u;
label_2917f8:
    // 0x2917f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2917f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2917fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2917fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x291800: 0x244562f0  addiu       $a1, $v0, 0x62F0
    ctx->pc = 0x291800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x291804: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x291804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x291808: 0xc040c00  jal         func_103000
    ctx->pc = 0x291808u;
    SET_GPR_U32(ctx, 31, 0x291810u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x291810u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291810u) { return; }
    ctx->pc = 0x291810u;
label_291810:
    // 0x291810: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x291814: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x291814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x291818: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x291818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x29181c: 0xc040c92  jal         func_103248
    ctx->pc = 0x29181Cu;
    SET_GPR_U32(ctx, 31, 0x291824u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x291824u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291824u) { return; }
    ctx->pc = 0x291824u;
label_291824:
    // 0x291824: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x291824u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x291828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x291828u;
    {
        const bool branch_taken_0x291828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291828) {
            ctx->pc = 0x291860u;
            goto label_291860;
        }
    }
    ctx->pc = 0x291830u;
label_291830:
    // 0x291830: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x291830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x291834: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x291834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x291838: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x291838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29183c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x29183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x291840: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x291840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x291844: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291848: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29184c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29184Cu;
    SET_GPR_U32(ctx, 31, 0x291854u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x291854u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291854u) { return; }
    ctx->pc = 0x291854u;
label_291854:
    // 0x291854: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291858: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x291858u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29185c: 0x0  nop
    ctx->pc = 0x29185cu;
    // NOP
label_291860:
    // 0x291860: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x291864: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x291864u;
    {
        const bool branch_taken_0x291864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291864) {
            ctx->pc = 0x291830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291830;
        }
    }
    ctx->pc = 0x29186Cu;
    // 0x29186c: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x29186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x291870: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x291870u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291874: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x291874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_291878:
    // 0x291878: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29187c: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x29187cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291880: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x291880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x291884: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x291884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291888: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x291888u;
    {
        const bool branch_taken_0x291888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291888) {
            ctx->pc = 0x291534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291534;
        }
    }
    ctx->pc = 0x291890u;
label_291890:
    // 0x291890: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291894: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x291894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291898: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29189c: 0xc4202a60  lwc1        $f0, 0x2A60($at)
    ctx->pc = 0x29189cu;
    { uint32_t bits = FAST_READ32(0x622A60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2918a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2918a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2918a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918a8: 0xe4202a60  swc1        $f0, 0x2A60($at)
    ctx->pc = 0x2918a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A60u, _value); } while (0); }
    // 0x2918ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2918b0: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x2918b4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2918b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918bc: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x2918bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x2918c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2918c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2918c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2918c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2918c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2918c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2918cc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2918ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2918d0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2918d0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2918d8: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x2918d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x2918dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2918dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2918e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2918e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2918e4: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x2918E4u;
    {
        const bool branch_taken_0x2918e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2918e4) {
            ctx->pc = 0x291EB8u;
            goto label_291eb8;
        }
    }
    ctx->pc = 0x2918ECu;
label_2918ec:
    // 0x2918ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2918f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2918f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2918f4: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x2918f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x2918f8: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x2918f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x2918fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2918fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x291900: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x291900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x291904: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x291904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x291908: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x291908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29190c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x29190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291910: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291910u;
    SET_GPR_U32(ctx, 31, 0x291918u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291910u, 0x291918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291918u;
label_291918:
    // 0x291918: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29191c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x29191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x291920: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x291920u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291924: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x291924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291928: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291928u;
    SET_GPR_U32(ctx, 31, 0x291930u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291928u, 0x291930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291930u;
label_291930:
    // 0x291930: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x291930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x291934: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x291934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x291938: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29193c: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x29193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291940: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x291944: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291948: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29194c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x291950: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291954: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x291954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291958: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291958u;
    SET_GPR_U32(ctx, 31, 0x291960u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291958u, 0x291960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291960u;
label_291960:
    // 0x291960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291964: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x291968: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x291968u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29196c: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x29196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291970: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291970u;
    SET_GPR_U32(ctx, 31, 0x291978u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291970u, 0x291978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291978u;
label_291978:
    // 0x291978: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29197c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x291980: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291984: 0x2e23025  or          $a2, $s7, $v0
    ctx->pc = 0x291984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291988: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x291988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x29198c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x29198cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x291990: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x291994: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x291994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x291998: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29199c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x29199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919a0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919A0u;
    SET_GPR_U32(ctx, 31, 0x2919A8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919A0u, 0x2919A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919A8u;
label_2919a8:
    // 0x2919a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2919a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2919ac: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2919acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2919b0: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x2919b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2919b4: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x2919b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919B8u;
    SET_GPR_U32(ctx, 31, 0x2919C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919B8u, 0x2919C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C0u;
label_2919c0:
    // 0x2919c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2919c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2919c4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2919c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2919c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2919c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2919cc: 0x2e23025  or          $a2, $s7, $v0
    ctx->pc = 0x2919ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x2919d0: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x2919d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2919d4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2919d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2919d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2919d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2919dc: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x2919dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x2919e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2919e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2919e4: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x2919e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2919e8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2919E8u;
    SET_GPR_U32(ctx, 31, 0x2919F0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2919E8u, 0x2919F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919F0u;
label_2919f0:
    // 0x2919f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2919f4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2919f8: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x2919f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2919fc: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x2919fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291a00: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x291A00u;
    SET_GPR_U32(ctx, 31, 0x291A08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x291A00u, 0x291A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A08u;
label_291a08:
    // 0x291a08: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x291a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x291a0c: 0x24827900  addiu       $v0, $a0, 0x7900
    ctx->pc = 0x291a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x291a10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291a14: 0x2e21825  or          $v1, $s7, $v0
    ctx->pc = 0x291a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x291a18: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x291a1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x291a24: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x291a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a2c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x291a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x291a30: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x291a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x291a34: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x291a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x291a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x291a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x291a3c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a40: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291a44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a48: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a4c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a50: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291a54: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a58: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x291a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x291a5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291a64: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x291a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x291a68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a6c: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x291a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a70: 0x94620034  lhu         $v0, 0x34($v1)
    ctx->pc = 0x291a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x291a74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a7c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291a80: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291a84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291a88: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x291a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291a8c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x291a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x291a90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x291a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291a94: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x291a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x291a98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291a9c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291aa0: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291aa4: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x291aa4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291aa8: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x291aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x291aac: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ab0: 0x94430036  lhu         $v1, 0x36($v0)
    ctx->pc = 0x291ab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291ab4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291ab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291abc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291ac0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x291ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291ac4: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x291ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x291ac8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291acc: 0x8fb60208  lw          $s6, 0x208($sp)
    ctx->pc = 0x291accu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ad0: 0x96c20034  lhu         $v0, 0x34($s6)
    ctx->pc = 0x291ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x291ad4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291ad8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291adc: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ae0: 0x94420036  lhu         $v0, 0x36($v0)
    ctx->pc = 0x291ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291ae4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291ae8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291aec: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x291af0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291af4: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x291af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x291af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291afc: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b00: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x291b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x291b04: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x291b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x291b08: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291b10: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x291b10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x291b14: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291B14u;
    SET_GPR_U32(ctx, 31, 0x291B1Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291B14u, 0x291B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B1Cu;
label_291b1c:
    // 0x291b1c: 0x26430044  addiu       $v1, $s2, 0x44
    ctx->pc = 0x291b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x291b20: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x291b20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291b24: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291b28: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x291b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x291b2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x291b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291b34: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x291B34u;
    {
        const bool branch_taken_0x291b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291b34) {
            ctx->pc = 0x291C88u;
            goto label_291c88;
        }
    }
    ctx->pc = 0x291B3Cu;
    // 0x291b3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291b40: 0x8c222a70  lw          $v0, 0x2A70($at)
    ctx->pc = 0x291b40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A70u));
    // 0x291b44: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291b48: 0x1603001f  bne         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x291B48u;
    {
        const bool branch_taken_0x291b48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x291b48) {
            ctx->pc = 0x291BC8u;
            goto label_291bc8;
        }
    }
    ctx->pc = 0x291B50u;
    // 0x291b50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291b54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291b58: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291b5c: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x291b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291b60: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291b64: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x291b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x291b68: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291b68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291b6c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291b70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291b74: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291b74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291b78: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291B78u;
    SET_GPR_U32(ctx, 31, 0x291B80u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291B78u, 0x291B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B80u;
label_291b80:
    // 0x291b80: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291b84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291b84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291b88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291b8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291b90: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291b94: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x291b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291b98: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291b9c: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x291b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x291ba0: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x291ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ba4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x291ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291ba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291bac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291bacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291bb0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291BB0u;
    SET_GPR_U32(ctx, 31, 0x291BB8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291BB0u, 0x291BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BB8u;
label_291bb8:
    // 0x291bb8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291bbc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291bbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291bc0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x291BC0u;
    {
        const bool branch_taken_0x291bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291bc0) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291BC8u;
label_291bc8:
    // 0x291bc8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291bcc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291bd0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291bd4: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x291bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291bd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291bdc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291be0: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x291be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291be4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x291be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x291be8: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x291be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291bec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x291bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291bf4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291bf8: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291bfc: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291c00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291c04: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x291c04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291c08: 0x0  nop
    ctx->pc = 0x291c08u;
    // NOP
    // 0x291c0c: 0x0  nop
    ctx->pc = 0x291c0cu;
    // NOP
    // 0x291c10: 0x1012  mflo        $v0
    ctx->pc = 0x291c10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x291c14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x291c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291c18: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x291c18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x291c1c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x291c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x291c20: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291c24: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291c24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291c28: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291c2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c30: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291c30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291c34: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291C34u;
    SET_GPR_U32(ctx, 31, 0x291C3Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291C34u, 0x291C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C3Cu;
label_291c3c:
    // 0x291c3c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291c40: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291c40u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291c44: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291c48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291c4c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291c50: 0x34431048  ori         $v1, $v0, 0x1048
    ctx->pc = 0x291c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291c54: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x291c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x291c58: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291c5c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291c60: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291c64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c68: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x291c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x291c6c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291c70: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291C70u;
    SET_GPR_U32(ctx, 31, 0x291C78u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291C70u, 0x291C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C78u;
label_291c78:
    // 0x291c78: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x291c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291c7c: 0x71008e28  paddub      $s1, $t0, $zero
    ctx->pc = 0x291c7cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x291c80: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x291C80u;
    {
        const bool branch_taken_0x291c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c80) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291C88u;
label_291c88:
    // 0x291c88: 0x8fa901f8  lw          $t1, 0x1F8($sp)
    ctx->pc = 0x291c88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291c8c: 0x912a0014  lbu         $t2, 0x14($t1)
    ctx->pc = 0x291c8cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x291c90: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x291c94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x291c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291c98: 0x14640054  bne         $v1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x291C98u;
    {
        const bool branch_taken_0x291c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x291c98) {
            ctx->pc = 0x291DECu;
            goto label_291dec;
        }
    }
    ctx->pc = 0x291CA0u;
    // 0x291ca0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291ca4: 0x8c252a68  lw          $a1, 0x2A68($at)
    ctx->pc = 0x291ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x622A68u));
    // 0x291ca8: 0x1605001f  bne         $s0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x291CA8u;
    {
        const bool branch_taken_0x291ca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x291ca8) {
            ctx->pc = 0x291D28u;
            goto label_291d28;
        }
    }
    ctx->pc = 0x291CB0u;
    // 0x291cb0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x291cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x291cb4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x291cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x291cb8: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x291cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x291cbc: 0x35071043  ori         $a3, $t0, 0x1043
    ctx->pc = 0x291cbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4163);
    // 0x291cc0: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x291cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x291cc4: 0x24090044  addiu       $t1, $zero, 0x44
    ctx->pc = 0x291cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x291cc8: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x291cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x291ccc: 0x8faa0208  lw          $t2, 0x208($sp)
    ctx->pc = 0x291cccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291cd0: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x291cd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x291cd4: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x291cd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x291cd8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291cd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291cdc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291CDCu;
    SET_GPR_U32(ctx, 31, 0x291CE4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291CDCu, 0x291CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CE4u;
label_291ce4:
    // 0x291ce4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291ce8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291ce8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291cec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291cf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291cf4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x291cf8: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x291cfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291d00: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x291d00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x291d04: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291d08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291d0c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291d0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291d10: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291D10u;
    SET_GPR_U32(ctx, 31, 0x291D18u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291D10u, 0x291D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D18u;
label_291d18:
    // 0x291d18: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291d1c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291d1cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291d20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x291D20u;
    {
        const bool branch_taken_0x291d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d20) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291D28u;
label_291d28:
    // 0x291d28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x291d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x291d2c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x291d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x291d30: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291d34: 0x34451043  ori         $a1, $v0, 0x1043
    ctx->pc = 0x291d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x291d38: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x291d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x291d3c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291d40: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291d48: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x291d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291d4c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x291d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x291d50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x291d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291d54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291d58: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291d5c: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291d60: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x291d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291d64: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x291d64u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291d68: 0x0  nop
    ctx->pc = 0x291d68u;
    // NOP
    // 0x291d6c: 0x0  nop
    ctx->pc = 0x291d6cu;
    // NOP
    // 0x291d70: 0x2812  mflo        $a1
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x291d74: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x291d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x291d78: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x291d78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x291d7c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x291d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x291d80: 0x34440064  ori         $a0, $v0, 0x64
    ctx->pc = 0x291d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291d84: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x291d84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x291d88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291d8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x291d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291d90: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x291d90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x291d94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291d94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291d98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291D98u;
    SET_GPR_U32(ctx, 31, 0x291DA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291D98u, 0x291DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DA0u;
label_291da0:
    // 0x291da0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x291da0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291da4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291da8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291da8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291dac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x291dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x291db0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x291db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x291db4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x291db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x291db8: 0x34c51048  ori         $a1, $a2, 0x1048
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4168);
    // 0x291dbc: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x291dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x291dc0: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291dc4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291dc8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291dd0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291dd4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291DD4u;
    SET_GPR_U32(ctx, 31, 0x291DDCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291DD4u, 0x291DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291DDCu;
label_291ddc:
    // 0x291ddc: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x291ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291de0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x291de0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291de4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x291DE4u;
    {
        const bool branch_taken_0x291de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291de4) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291DECu;
label_291dec:
    // 0x291dec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x291decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x291df0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x291df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x291df4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x291df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x291df8: 0x34a61043  ori         $a2, $a1, 0x1043
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4163);
    // 0x291dfc: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x291dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x291e00: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291e04: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291e08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291e0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x291e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291e10: 0x2a040  sll         $s4, $v0, 1
    ctx->pc = 0x291e10u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x291e14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x291e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x291e18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x291e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x291e1c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291e20: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x291e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291e24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291e28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x291e28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x291e2c: 0x0  nop
    ctx->pc = 0x291e2cu;
    // NOP
    // 0x291e30: 0x0  nop
    ctx->pc = 0x291e30u;
    // NOP
    // 0x291e34: 0x1012  mflo        $v0
    ctx->pc = 0x291e34u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x291e38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291e3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291e3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291e44: 0x34420064  ori         $v0, $v0, 0x64
    ctx->pc = 0x291e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    // 0x291e48: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291e48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291e4c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291e54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291e54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291e5c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291E5Cu;
    SET_GPR_U32(ctx, 31, 0x291E64u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291E5Cu, 0x291E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291E64u;
label_291e64:
    // 0x291e64: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291e68: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291e68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291e70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291e74: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291e78: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x291e7c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291e80: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x291e84: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291e84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291e88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291e8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291e90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x291e90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291e94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291e94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291e98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291E98u;
    SET_GPR_U32(ctx, 31, 0x291EA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291E98u, 0x291EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291EA0u;
label_291ea0:
    // 0x291ea0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291ea4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291ea4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_291ea8:
    // 0x291ea8: 0x2662ffc0  addiu       $v0, $s3, -0x40
    ctx->pc = 0x291ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x291eac: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x291eacu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291eb0: 0x2617ffff  addiu       $s7, $s0, -0x1
    ctx->pc = 0x291eb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x291eb4: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x291eb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_291eb8:
    // 0x291eb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x291eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x291ebc: 0x8c222a68  lw          $v0, 0x2A68($at)
    ctx->pc = 0x291ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A68u));
    // 0x291ec0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x291ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291ec4: 0x1020fe89  beqz        $at, . + 4 + (-0x177 << 2)
    ctx->pc = 0x291EC4u;
    {
        const bool branch_taken_0x291ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ec4) {
            ctx->pc = 0x2918ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2918ec;
        }
    }
    ctx->pc = 0x291ECCu;
    // 0x291ecc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291ed0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291ed4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291ed8: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x291edc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291ee0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x291ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x291ee4: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x291ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x291ee8: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291eec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x291eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291ef0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x291ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x291ef4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291ef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291ef8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291EF8u;
    SET_GPR_U32(ctx, 31, 0x291F00u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291EF8u, 0x291F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F00u;
label_291f00:
    // 0x291f00: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291f04: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291f08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291f0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291f10: 0x3c170400  lui         $s7, 0x400
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1024 << 16));
    // 0x291f14: 0x36e21009  ori         $v0, $s7, 0x1009
    ctx->pc = 0x291f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4105);
    // 0x291f18: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291f1c: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f20: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x291f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x291f24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291f28: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x291f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x291f2c: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x291f30: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f34: 0x94430034  lhu         $v1, 0x34($v0)
    ctx->pc = 0x291f34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x291f38: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291f3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291f40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291f44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291f48: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x291f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x291f4c: 0xc2b825  or          $s7, $a2, $v0
    ctx->pc = 0x291f4cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x291f50: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f54: 0x94420032  lhu         $v0, 0x32($v0)
    ctx->pc = 0x291f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x291f58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x291f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x291f5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x291f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x291f60: 0x573025  or          $a2, $v0, $s7
    ctx->pc = 0x291f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x291f64: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f68: 0x94430036  lhu         $v1, 0x36($v0)
    ctx->pc = 0x291f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x291f6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x291f70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x291f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291f74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291f78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x291f78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x291f7c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x291f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x291f80: 0x46b825  or          $s7, $v0, $a2
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x291f84: 0xfe370008  sd          $s7, 0x8($s1)
    ctx->pc = 0x291f84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 23));
    // 0x291f88: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291f8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291f90: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291f90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291f94: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291F94u;
    SET_GPR_U32(ctx, 31, 0x291F9Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291F94u, 0x291F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291F9Cu;
label_291f9c:
    // 0x291f9c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291fa0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291fa0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291fa4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x291fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x291fa8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x291fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x291fac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x291facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x291fb0: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x291fb4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x291fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x291fb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x291fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x291fbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x291fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x291fc0: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x291fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x291fc4: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291fc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291fcc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x291fd0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x291FD0u;
    SET_GPR_U32(ctx, 31, 0x291FD8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x291FD0u, 0x291FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FD8u;
label_291fd8:
    // 0x291fd8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x291fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x291fdc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x291fdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x291fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x291fe4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x291fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x291fe8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x291fec: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x291fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x291ff0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x291ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x291ff4: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x291ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x291ff8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x291ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291ffc: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x291ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x292000: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x292000u;
    SET_GPR_U32(ctx, 31, 0x292008u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x292000u, 0x292008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292008u;
label_292008:
    // 0x292008: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x29200c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29200cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x292010: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x292010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292014: 0x8c232a58  lw          $v1, 0x2A58($at)
    ctx->pc = 0x292014u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622A58u));
    // 0x292018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29201c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29201Cu;
    {
        const bool branch_taken_0x29201c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29201c) {
            ctx->pc = 0x29202Cu;
            goto label_29202c;
        }
    }
    ctx->pc = 0x292024u;
    // 0x292024: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x292024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292028: 0xac202a50  sw          $zero, 0x2A50($at)
    ctx->pc = 0x292028u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A50u, _value); } while (0);
label_29202c:
    // 0x29202c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x29202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x292030: 0x8c222a58  lw          $v0, 0x2A58($at)
    ctx->pc = 0x292030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622A58u));
    // 0x292034: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x292034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x292038: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x292038u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29203c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29203cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292040: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x292040u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292044: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x292044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292048: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29204c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29204cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292058: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x29205c: 0x3e00008  jr          $ra
    ctx->pc = 0x29205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292064u;
}
