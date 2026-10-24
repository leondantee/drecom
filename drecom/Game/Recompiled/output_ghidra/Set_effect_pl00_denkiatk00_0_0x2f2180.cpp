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

// Function: Set_effect_pl00_denkiatk00_0
// Address: 0x2f2180 - 0x2f2464
void Set_effect_pl00_denkiatk00_0_0x2f2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_pl00_denkiatk00_0_0x2f2180");
#endif

    switch (ctx->pc) {
        case 0x2f234cu: goto label_2f234c;
        default: break;
    }

    ctx->pc = 0x2f2180u;

    // 0x2f2180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f2180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f2184: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x2f2184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x2f2188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f2188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f218c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f2190: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f2190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f2194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f219c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2f219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2f21a0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2f21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2f21a4: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2f21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x2f21a8: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2f21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2f21ac: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2f21acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x2f21b0: 0xafa90090  sw          $t1, 0x90($sp)
    ctx->pc = 0x2f21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 9));
    // 0x2f21b4: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x2f21b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2f21b8: 0xe7ad00a0  swc1        $f13, 0xA0($sp)
    ctx->pc = 0x2f21b8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2f21bc: 0xe7ae00a8  swc1        $f14, 0xA8($sp)
    ctx->pc = 0x2f21bcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2f21c0: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x2f21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x2f21c4: 0xa3ab00b8  sb          $t3, 0xB8($sp)
    ctx->pc = 0x2f21c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f21c8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f21c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f21cc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f21ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f21d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f21d4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F21D4u;
    {
        const bool branch_taken_0x2f21d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f21d4) {
            ctx->pc = 0x2F2204u;
            goto label_2f2204;
        }
    }
    ctx->pc = 0x2F21DCu;
    // 0x2f21dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f21e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F21E0u;
    {
        const bool branch_taken_0x2f21e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f21e0) {
            ctx->pc = 0x2F21F4u;
            goto label_2f21f4;
        }
    }
    ctx->pc = 0x2F21E8u;
    // 0x2f21e8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f21e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f21ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F21ECu;
    {
        const bool branch_taken_0x2f21ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21ec) {
            ctx->pc = 0x2F2228u;
            goto label_2f2228;
        }
    }
    ctx->pc = 0x2F21F4u;
label_2f21f4:
    // 0x2f21f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f21f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F21FCu;
    {
        const bool branch_taken_0x2f21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21fc) {
            ctx->pc = 0x2F2228u;
            goto label_2f2228;
        }
    }
    ctx->pc = 0x2F2204u;
label_2f2204:
    // 0x2f2204: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f2204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2208: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f220c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F220Cu;
    {
        const bool branch_taken_0x2f220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f220c) {
            ctx->pc = 0x2F2220u;
            goto label_2f2220;
        }
    }
    ctx->pc = 0x2F2214u;
    // 0x2f2214: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2f2214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2218u;
    {
        const bool branch_taken_0x2f2218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2218) {
            ctx->pc = 0x2F2228u;
            goto label_2f2228;
        }
    }
    ctx->pc = 0x2F2220u;
label_2f2220:
    // 0x2f2220: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2224: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2228:
    // 0x2f2228: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2f2228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f222c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f2230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2230u;
    {
        const bool branch_taken_0x2f2230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2230) {
            ctx->pc = 0x2F2244u;
            goto label_2f2244;
        }
    }
    ctx->pc = 0x2F2238u;
    // 0x2f2238: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2f2238u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f223c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F223Cu;
    {
        const bool branch_taken_0x2f223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f223c) {
            ctx->pc = 0x2F2248u;
            goto label_2f2248;
        }
    }
    ctx->pc = 0x2F2244u;
label_2f2244:
    // 0x2f2244: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2f2244u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2f2248:
    // 0x2f2248: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2f2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2f224c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f224cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2250: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f2250u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f2254: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f2254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2f2258: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f225c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f225cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f2260: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2f2260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2f2264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f2268: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2f2268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2f226c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f226cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f2270: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2f2270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2f2274: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2f2274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2f2278: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f227c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f227cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2280: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f2280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f2284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2288: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2f2288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f228c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2f228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f2290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2294: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f2294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f2298: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f2298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f229c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f22a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f22a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f22a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f22a8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f22a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f22ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f22b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f22b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f22b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f22b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f22b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f22b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f22bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f22bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f22c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f22c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f22c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f22c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f22c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2f22c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f22cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2f22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f22d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f22d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f22d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f22d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f22d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f22d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f22dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f22e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f22e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f22e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f22e8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2f22e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f22ec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2f22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f22f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f22f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f22f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f22f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f22f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f22f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f22fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f22fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f2300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2304: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f2304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f2308: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2f2308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2f230c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2f230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f2314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2318: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f231c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2f231cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2f2320: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2f2320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x2f2324: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f2324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f2328: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f232c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f2330: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2334: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f2334u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f2338: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2f2338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f233c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2f233cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f2340: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2f2340u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2f2344: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2F2344u;
    SET_GPR_U32(ctx, 31, 0x2F234Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2F2344u, 0x2F234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F234Cu;
label_2f234c:
    // 0x2f234c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f234cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f2350: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f2350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f2354: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f2354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f2358: 0x12030039  beq         $s0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F2358u;
    {
        const bool branch_taken_0x2f2358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f2358) {
            ctx->pc = 0x2F2440u;
            goto label_2f2440;
        }
    }
    ctx->pc = 0x2F2360u;
    // 0x2f2360: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2f2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f2364: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x2f2364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f236c: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x2f236cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f2370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f2374: 0xa20302aa  sb          $v1, 0x2AA($s0)
    ctx->pc = 0x2f2374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2378: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f2378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f237c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f237cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2380: 0x0  nop
    ctx->pc = 0x2f2380u;
    // NOP
    // 0x2f2384: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f2384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f2388: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f2388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f238c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f238cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2390: 0x0  nop
    ctx->pc = 0x2f2390u;
    // NOP
    // 0x2f2394: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f2394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f2398: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f2398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f239c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f239cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f23a0: 0x0  nop
    ctx->pc = 0x2f23a0u;
    // NOP
    // 0x2f23a4: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f23a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f23ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f23acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f23b0: 0x0  nop
    ctx->pc = 0x2f23b0u;
    // NOP
    // 0x2f23b4: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f23b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f23b8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f23b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23bc: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f23bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2f23c0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2f23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2f23c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f23c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f23c8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2f23c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f23ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f23d0: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2f23d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2f23d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2f23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23d8: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2f23d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2f23dc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2f23dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23e0: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2f23e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2f23e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f23e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f23e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f23ec: 0x0  nop
    ctx->pc = 0x2f23ecu;
    // NOP
    // 0x2f23f0: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x2f23f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x2f23f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2f23f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f23f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2f23f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23fc: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2f23fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2f2400: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f2404: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2408: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2f2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2f240c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f2410: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f2410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2414: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2f2414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2f2418: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f2418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f241c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f241cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2420: 0x0  nop
    ctx->pc = 0x2f2420u;
    // NOP
    // 0x2f2424: 0xe600028c  swc1        $f0, 0x28C($s0)
    ctx->pc = 0x2f2424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
    // 0x2f2428: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2f2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f242c: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f242cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2f2430: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2f2430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f2434: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2f2434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f2438: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2f2438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f243c: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2f243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_2f2440:
    // 0x2f2440: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x2f2440u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f2444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f2448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f244c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f244cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f2450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2458: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f2458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f245c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F245Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2464u;
}
