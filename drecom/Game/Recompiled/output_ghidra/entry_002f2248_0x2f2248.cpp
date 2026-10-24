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

// Function: entry_002f2248
// Address: 0x2f2248 - 0x2f2440
void entry_002f2248_0x2f2248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2248_0x2f2248");
#endif

    switch (ctx->pc) {
        case 0x2f234cu: goto label_2f234c;
        default: break;
    }

    ctx->pc = 0x2f2248u;

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
            return;
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
    ctx->pc = 0x2f2440u;
}
