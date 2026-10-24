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

// Function: Line_at_ck
// Address: 0x1b2380 - 0x1b2d2c
void Line_at_ck_0x1b2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Line_at_ck_0x1b2380");
#endif

    switch (ctx->pc) {
        case 0x1b23fcu: goto label_1b23fc;
        case 0x1b2410u: goto label_1b2410;
        case 0x1b2460u: goto label_1b2460;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b2498u: goto label_1b2498;
        case 0x1b24a8u: goto label_1b24a8;
        case 0x1b24b8u: goto label_1b24b8;
        case 0x1b24ccu: goto label_1b24cc;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b24f0u: goto label_1b24f0;
        case 0x1b2520u: goto label_1b2520;
        case 0x1b2548u: goto label_1b2548;
        case 0x1b256cu: goto label_1b256c;
        case 0x1b257cu: goto label_1b257c;
        case 0x1b2594u: goto label_1b2594;
        case 0x1b25a0u: goto label_1b25a0;
        case 0x1b25b0u: goto label_1b25b0;
        case 0x1b25f8u: goto label_1b25f8;
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2664u: goto label_1b2664;
        case 0x1b268cu: goto label_1b268c;
        case 0x1b27ecu: goto label_1b27ec;
        case 0x1b28ccu: goto label_1b28cc;
        case 0x1b291cu: goto label_1b291c;
        case 0x1b292cu: goto label_1b292c;
        case 0x1b29c8u: goto label_1b29c8;
        case 0x1b29d4u: goto label_1b29d4;
        case 0x1b29f8u: goto label_1b29f8;
        case 0x1b2a20u: goto label_1b2a20;
        case 0x1b2a60u: goto label_1b2a60;
        case 0x1b2a8cu: goto label_1b2a8c;
        case 0x1b2a9cu: goto label_1b2a9c;
        case 0x1b2af8u: goto label_1b2af8;
        default: break;
    }

    ctx->pc = 0x1b2380u;

    // 0x1b2380: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1b2384: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b2388: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b238c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b2390: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b2390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b2394: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b2394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b2398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b2398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b239c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b23a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b23a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b23a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b23a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b23a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b23a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b23ac: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x1b23acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x1b23b0: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x1b23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x1b23b4: 0xafa60158  sw          $a2, 0x158($sp)
    ctx->pc = 0x1b23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 6));
    // 0x1b23b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b23b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b23bc: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b23c0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1b23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1b23c4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b23c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b23c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b23cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b23ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b23d0: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1b23d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1b23d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b23d8: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x1b23d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b23dc: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1b23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1b23e0: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x1b23e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b23e4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b23e8: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x1b23e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1b23ec: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1b23ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b23f0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1b23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b23f4: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B23F4u;
    SET_GPR_U32(ctx, 31, 0x1B23FCu);
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B23F4u, 0x1B23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23FCu;
label_1b23fc:
    // 0x1b23fc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x1b23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    // 0x1b2400: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2404: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1b2404u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1b2408: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2408u;
    {
        const bool branch_taken_0x1b2408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2408) {
            ctx->pc = 0x1B2430u;
            goto label_1b2430;
        }
    }
    ctx->pc = 0x1B2410u;
label_1b2410:
    // 0x1b2410: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2414: 0x3443bc20  ori         $v1, $v0, 0xBC20
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b241c: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b241cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2420: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2424: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b242c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b242cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b2430:
    // 0x1b2430: 0x72e01e28  paddub      $v1, $s7, $zero
    ctx->pc = 0x1b2430u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1b2434: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b2438: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1b2438u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b243c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B243Cu;
    {
        const bool branch_taken_0x1b243c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b243c) {
            ctx->pc = 0x1B2410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2410;
        }
    }
    ctx->pc = 0x1B2444u;
    // 0x1b2444: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2448: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b244c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b2450: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b2454: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2458: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2458u;
    SET_GPR_U32(ctx, 31, 0x1B2460u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2458u, 0x1B2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2460u;
label_1b2460:
    // 0x1b2460: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1b2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2464: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2468: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b246c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1b246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2470: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2478: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2478u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b247c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B247Cu;
    SET_GPR_U32(ctx, 31, 0x1B2484u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B247Cu, 0x1B2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2484u;
label_1b2484:
    // 0x1b2484: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2488: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1b2488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b248c: 0xc7ad0110  lwc1        $f13, 0x110($sp)
    ctx->pc = 0x1b248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2490: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B2490u;
    SET_GPR_U32(ctx, 31, 0x1B2498u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B2490u, 0x1B2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2498u;
label_1b2498:
    // 0x1b2498: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1b2498u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1b249c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24a0: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x1B24A0u;
    SET_GPR_U32(ctx, 31, 0x1B24A8u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x1B24A0u, 0x1B24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24A8u;
label_1b24a8:
    // 0x1b24a8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1b24a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b24ac: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1b24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b24b0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B24B0u;
    SET_GPR_U32(ctx, 31, 0x1B24B8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B24B0u, 0x1B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24B8u;
label_1b24b8:
    // 0x1b24b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b24c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b24c4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1B24C4u;
    SET_GPR_U32(ctx, 31, 0x1B24CCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1B24CCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24CCu) { return; }
    ctx->pc = 0x1B24CCu;
label_1b24cc:
    // 0x1b24cc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b24d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b24d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b24d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B24D8u;
    SET_GPR_U32(ctx, 31, 0x1B24E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B24E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24E0u) { return; }
    ctx->pc = 0x1B24E0u;
label_1b24e0:
    // 0x1b24e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b24e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24e8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1B24E8u;
    SET_GPR_U32(ctx, 31, 0x1B24F0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1B24F0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24F0u) { return; }
    ctx->pc = 0x1B24F0u;
label_1b24f0:
    // 0x1b24f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b24f4: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x1b24f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1b24f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b24fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1b24fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1b2500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2500u;
    {
        const bool branch_taken_0x1b2500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2500) {
            ctx->pc = 0x1B2528u;
            goto label_1b2528;
        }
    }
    ctx->pc = 0x1B2508u;
    // 0x1b2508: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1b250c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2510: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2514: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2518: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2518u;
    SET_GPR_U32(ctx, 31, 0x1B2520u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2520u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2520u) { return; }
    ctx->pc = 0x1B2520u;
label_1b2520:
    // 0x1b2520: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2520u;
    {
        const bool branch_taken_0x1b2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2520) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B2528u;
label_1b2528:
    // 0x1b2528: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b252c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2530: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2534: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2538: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b2538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b253c: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x1b253cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x1b2540: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B2540u, 0x1B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1b2548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x1b254c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2550: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2550u;
    {
        const bool branch_taken_0x1b2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2550) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B2558u;
    // 0x1b2558: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b255c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2560: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2564: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2564u;
    SET_GPR_U32(ctx, 31, 0x1B256Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B256Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B256Cu) { return; }
    ctx->pc = 0x1B256Cu;
label_1b256c:
    // 0x1b256c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x1b256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1b2570: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b2570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2574: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2574u;
    SET_GPR_U32(ctx, 31, 0x1B257Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B257Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B257Cu) { return; }
    ctx->pc = 0x1B257Cu;
label_1b257c:
    // 0x1b257c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2580: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2584: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2588: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b2588u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b258c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B258Cu;
    SET_GPR_U32(ctx, 31, 0x1B2594u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B258Cu, 0x1B2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2594u;
label_1b2594:
    // 0x1b2594: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2598: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B2598u;
    SET_GPR_U32(ctx, 31, 0x1B25A0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B2598u, 0x1B25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25A0u;
label_1b25a0:
    // 0x1b25a0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1b25a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1b25a4: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1b25a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b25a8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1B25A8u;
    {
        const bool branch_taken_0x1b25a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a8) {
            ctx->pc = 0x1B28A8u;
            goto label_1b28a8;
        }
    }
    ctx->pc = 0x1B25B0u;
label_1b25b0:
    // 0x1b25b0: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1b25b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b25b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b25bc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b25c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b25c4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1b25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1b25c8: 0x8e421228  lw          $v0, 0x1228($s2)
    ctx->pc = 0x1b25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4648)));
    // 0x1b25cc: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b25ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b25d0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b25d4: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b25d8: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b25dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b25dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b25e0: 0x0  nop
    ctx->pc = 0x1b25e0u;
    // NOP
    // 0x1b25e4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b25e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b25e8: 0x8e56121c  lw          $s6, 0x121C($s2)
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
    // 0x1b25ec: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b25ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b25f0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B25F0u;
    {
        const bool branch_taken_0x1b25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25f0) {
            ctx->pc = 0x1B27A8u;
            goto label_1b27a8;
        }
    }
    ctx->pc = 0x1B25F8u;
label_1b25f8:
    // 0x1b25f8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b25fc: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
    ctx->pc = 0x1B25FCu;
    {
        const bool branch_taken_0x1b25fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25fc) {
            ctx->pc = 0x1B27C0u;
            goto label_1b27c0;
        }
    }
    ctx->pc = 0x1B2604u;
    // 0x1b2604: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1b2608: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b260c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2610: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B2610u;
    {
        const bool branch_taken_0x1b2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2610) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2618u;
    // 0x1b2618: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1b261c: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b261cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b2620: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b2620u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2624: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b2624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b262c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1b262cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1b2630: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1b2634: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b2638: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1b263c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2640: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2644: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b2644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2648: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B2648u;
    SET_GPR_U32(ctx, 31, 0x1B2650u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2650u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2650u) { return; }
    ctx->pc = 0x1B2650u;
label_1b2650:
    // 0x1b2650: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2654: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b2654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2658: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b265c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B265Cu;
    SET_GPR_U32(ctx, 31, 0x1B2664u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2664u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2664u) { return; }
    ctx->pc = 0x1B2664u;
label_1b2664:
    // 0x1b2664: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1b2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b266c: 0x0  nop
    ctx->pc = 0x1b266cu;
    // NOP
    // 0x1b2670: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2674: 0x0  nop
    ctx->pc = 0x1b2674u;
    // NOP
    // 0x1b2678: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x1B2678u;
    {
        const bool branch_taken_0x1b2678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2678) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2680u;
    // 0x1b2680: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2684: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B2684u;
    SET_GPR_U32(ctx, 31, 0x1B268Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B2684u, 0x1B268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B268Cu;
label_1b268c:
    // 0x1b268c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2690: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2694: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2698: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1b2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b269c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1b269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b26a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b26a4: 0x0  nop
    ctx->pc = 0x1b26a4u;
    // NOP
    // 0x1b26a8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1B26A8u;
    {
        const bool branch_taken_0x1b26a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b26a8) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B26B0u;
    // 0x1b26b0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b26b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b26b8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b26bc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1b26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b26c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b26c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b26c8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b26c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b26cc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1b26d0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26d4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b26d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b26dc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b26dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b26e0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b26e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b26e8: 0x0  nop
    ctx->pc = 0x1b26e8u;
    // NOP
    // 0x1b26ec: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x1B26ECu;
    {
        const bool branch_taken_0x1b26ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b26ec) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B26F4u;
    // 0x1b26f4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26f8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b26fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2700: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2704: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b2704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2708: 0x0  nop
    ctx->pc = 0x1b2708u;
    // NOP
    // 0x1b270c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1B270Cu;
    {
        const bool branch_taken_0x1b270c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b270c) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2714u;
    // 0x1b2714: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2718: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b271c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b271cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2720: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1b2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b2724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2728: 0x0  nop
    ctx->pc = 0x1b2728u;
    // NOP
    // 0x1b272c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1B272Cu;
    {
        const bool branch_taken_0x1b272c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b272c) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2734u;
    // 0x1b2734: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b2734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2738: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b273c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b273cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b2740: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1b2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2748: 0x0  nop
    ctx->pc = 0x1b2748u;
    // NOP
    // 0x1b274c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1B274Cu;
    {
        const bool branch_taken_0x1b274c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b274c) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2754u;
    // 0x1b2754: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b2754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b2758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b275c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b2760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2760u;
    {
        const bool branch_taken_0x1b2760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2760) {
            ctx->pc = 0x1B277Cu;
            goto label_1b277c;
        }
    }
    ctx->pc = 0x1B2768u;
    // 0x1b2768: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1b2768u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b276c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2770: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b2774: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2774u;
    {
        const bool branch_taken_0x1b2774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2774) {
            ctx->pc = 0x1B27C0u;
            goto label_1b27c0;
        }
    }
    ctx->pc = 0x1B277Cu;
label_1b277c:
    // 0x1b277c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1b277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2780: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2788: 0x0  nop
    ctx->pc = 0x1b2788u;
    // NOP
    // 0x1b278c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B278Cu;
    {
        const bool branch_taken_0x1b278c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b278c) {
            ctx->pc = 0x1B27A0u;
            goto label_1b27a0;
        }
    }
    ctx->pc = 0x1B2794u;
    // 0x1b2794: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1b2794u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b2798: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b279c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b279cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1b27a0:
    // 0x1b27a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b27a4: 0x0  nop
    ctx->pc = 0x1b27a4u;
    // NOP
label_1b27a8:
    // 0x1b27a8: 0x92421219  lbu         $v0, 0x1219($s2)
    ctx->pc = 0x1b27a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4633)));
    // 0x1b27ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b27acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b27b0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b27b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b27b4: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x1B27B4u;
    {
        const bool branch_taken_0x1b27b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b27b4) {
            ctx->pc = 0x1B25F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b25f8;
        }
    }
    ctx->pc = 0x1B27BCu;
    // 0x1b27bc: 0x0  nop
    ctx->pc = 0x1b27bcu;
    // NOP
label_1b27c0:
    // 0x1b27c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b27c4: 0x13c20036  beq         $fp, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1B27C4u;
    {
        const bool branch_taken_0x1b27c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b27c4) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B27CCu;
    // 0x1b27cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b27ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b27d0: 0x0  nop
    ctx->pc = 0x1b27d0u;
    // NOP
    // 0x1b27d4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1b27d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1b27d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b27dc: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b27e0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1b27e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b27e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B27E4u;
    {
        const bool branch_taken_0x1b27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b27e4) {
            ctx->pc = 0x1B2848u;
            goto label_1b2848;
        }
    }
    ctx->pc = 0x1B27ECu;
label_1b27ec:
    // 0x1b27ec: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b27f0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b27f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b27f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b27f8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b27f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b27fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b27fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2800: 0x0  nop
    ctx->pc = 0x1b2800u;
    // NOP
    // 0x1b2804: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2818u;
            goto label_1b2818;
        }
    }
    ctx->pc = 0x1B280Cu;
    // 0x1b280c: 0xafb50134  sw          $s5, 0x134($sp)
    ctx->pc = 0x1b280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 21));
    // 0x1b2810: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2810u;
    {
        const bool branch_taken_0x1b2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2810) {
            ctx->pc = 0x1B2858u;
            goto label_1b2858;
        }
    }
    ctx->pc = 0x1B2818u;
label_1b2818:
    // 0x1b2818: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x1b2818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b281c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2820: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2824: 0x0  nop
    ctx->pc = 0x1b2824u;
    // NOP
    // 0x1b2828: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2828u;
    {
        const bool branch_taken_0x1b2828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2828) {
            ctx->pc = 0x1B2840u;
            goto label_1b2840;
        }
    }
    ctx->pc = 0x1B2830u;
    // 0x1b2830: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2834: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1b2834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1b2838: 0xafb50134  sw          $s5, 0x134($sp)
    ctx->pc = 0x1b2838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 21));
    // 0x1b283c: 0x0  nop
    ctx->pc = 0x1b283cu;
    // NOP
label_1b2840:
    // 0x1b2840: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b2840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b2844: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b2848:
    // 0x1b2848: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x1b2848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b284c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B284Cu;
    {
        const bool branch_taken_0x1b284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b284c) {
            ctx->pc = 0x1B27ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b27ec;
        }
    }
    ctx->pc = 0x1B2854u;
    // 0x1b2854: 0x0  nop
    ctx->pc = 0x1b2854u;
    // NOP
label_1b2858:
    // 0x1b2858: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1b2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x1b285c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1b285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b2860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2864: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2868: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b286c: 0x2aa10005  slti        $at, $s5, 0x5
    ctx->pc = 0x1b286cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b2870: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2870u;
    {
        const bool branch_taken_0x1b2870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2870) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B2878u;
    // 0x1b2878: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b287c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2880: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2884: 0x0  nop
    ctx->pc = 0x1b2884u;
    // NOP
    // 0x1b2888: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2888u;
    {
        const bool branch_taken_0x1b2888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2888) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B2890u;
    // 0x1b2890: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2894: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b2898: 0xae1e0004  sw          $fp, 0x4($s0)
    ctx->pc = 0x1b2898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 30));
    // 0x1b289c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1b289cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1b28a0:
    // 0x1b28a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1b28a4: 0x0  nop
    ctx->pc = 0x1b28a4u;
    // NOP
label_1b28a8:
    // 0x1b28a8: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x1b28ac: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1b28acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b28b0: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x1B28B0u;
    {
        const bool branch_taken_0x1b28b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28b0) {
            ctx->pc = 0x1B25B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b25b0;
        }
    }
    ctx->pc = 0x1B28B8u;
    // 0x1b28b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b28bc: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b28c0: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1b28c0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b28c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B28C4u;
    {
        const bool branch_taken_0x1b28c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28c4) {
            ctx->pc = 0x1B28F8u;
            goto label_1b28f8;
        }
    }
    ctx->pc = 0x1B28CCu;
label_1b28cc:
    // 0x1b28cc: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b28d0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b28d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b28d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b28d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b28d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b28d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b28dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b28dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b28e0: 0x0  nop
    ctx->pc = 0x1b28e0u;
    // NOP
    // 0x1b28e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B28E4u;
    {
        const bool branch_taken_0x1b28e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b28e4) {
            ctx->pc = 0x1B2908u;
            goto label_1b2908;
        }
    }
    ctx->pc = 0x1B28ECu;
    // 0x1b28ec: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b28ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b28f0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1b28f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1b28f4: 0x0  nop
    ctx->pc = 0x1b28f4u;
    // NOP
label_1b28f8:
    // 0x1b28f8: 0x2ae20005  slti        $v0, $s7, 0x5
    ctx->pc = 0x1b28f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b28fc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B28FCu;
    {
        const bool branch_taken_0x1b28fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28fc) {
            ctx->pc = 0x1B28CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b28cc;
        }
    }
    ctx->pc = 0x1B2904u;
    // 0x1b2904: 0x0  nop
    ctx->pc = 0x1b2904u;
    // NOP
label_1b2908:
    // 0x1b2908: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b290c: 0x2450b8d0  addiu       $s0, $v0, -0x4730
    ctx->pc = 0x1b290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2910: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2910u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2914: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2914u;
    {
        const bool branch_taken_0x1b2914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2914) {
            ctx->pc = 0x1B29A8u;
            goto label_1b29a8;
        }
    }
    ctx->pc = 0x1B291Cu;
label_1b291c:
    // 0x1b291c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1b291cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b2920: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2924: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2924u;
    {
        const bool branch_taken_0x1b2924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2924) {
            ctx->pc = 0x1B2990u;
            goto label_1b2990;
        }
    }
    ctx->pc = 0x1B292Cu;
label_1b292c:
    // 0x1b292c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b292cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b2930: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2934: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2938: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b293c: 0x0  nop
    ctx->pc = 0x1b293cu;
    // NOP
    // 0x1b2940: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2940u;
    {
        const bool branch_taken_0x1b2940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2940) {
            ctx->pc = 0x1B2988u;
            goto label_1b2988;
        }
    }
    ctx->pc = 0x1B2948u;
    // 0x1b2948: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b294c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2950: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2954: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b2958: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b295c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b2960: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2964: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1b2964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1b2968: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b296c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b296cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b2970: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b2974: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1b2974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1b2978: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b297c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b2980: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b2980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b2984: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x1b2984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_1b2988:
    // 0x1b2988: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b298c: 0x0  nop
    ctx->pc = 0x1b298cu;
    // NOP
label_1b2990:
    // 0x1b2990: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2994: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B2994u;
    {
        const bool branch_taken_0x1b2994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2994) {
            ctx->pc = 0x1B292Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b292c;
        }
    }
    ctx->pc = 0x1B299Cu;
    // 0x1b299c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1b299cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b29a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b29a4: 0x0  nop
    ctx->pc = 0x1b29a4u;
    // NOP
label_1b29a8:
    // 0x1b29a8: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1b29ac: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b29acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b29b0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1B29B0u;
    {
        const bool branch_taken_0x1b29b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29b0) {
            ctx->pc = 0x1B291Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b291c;
        }
    }
    ctx->pc = 0x1B29B8u;
    // 0x1b29b8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b29b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29bc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29c0: 0xc040c24  jal         func_103090
    ctx->pc = 0x1B29C0u;
    SET_GPR_U32(ctx, 31, 0x1B29C8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1B29C8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B29C8u) { return; }
    ctx->pc = 0x1B29C8u;
label_1b29c8:
    // 0x1b29c8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b29c8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b29cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B29CCu;
    {
        const bool branch_taken_0x1b29cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b29cc) {
            ctx->pc = 0x1B2A28u;
            goto label_1b2a28;
        }
    }
    ctx->pc = 0x1B29D4u;
label_1b29d4:
    // 0x1b29d4: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b29d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b29dc: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b29e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b29e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b29e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b29f0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B29F0u;
    SET_GPR_U32(ctx, 31, 0x1B29F8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B29F8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B29F8u) { return; }
    ctx->pc = 0x1B29F8u;
label_1b29f8:
    // 0x1b29f8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b29fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2a00: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2a04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2a08: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2a0c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2a10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a14: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b2a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2a18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2A18u;
    SET_GPR_U32(ctx, 31, 0x1B2A20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2A18u, 0x1B2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A20u;
label_1b2a20:
    // 0x1b2a20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2a24: 0x0  nop
    ctx->pc = 0x1b2a24u;
    // NOP
label_1b2a28:
    // 0x1b2a28: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x1b2a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2a2c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B2A2Cu;
    {
        const bool branch_taken_0x1b2a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a2c) {
            ctx->pc = 0x1B29D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b29d4;
        }
    }
    ctx->pc = 0x1B2A34u;
    // 0x1b2a34: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2A34u;
    {
        const bool branch_taken_0x1b2a34 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a34) {
            ctx->pc = 0x1B2A54u;
            goto label_1b2a54;
        }
    }
    ctx->pc = 0x1B2A3Cu;
    // 0x1b2a3c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x1b2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b2a40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A40u;
    {
        const bool branch_taken_0x1b2a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a40) {
            ctx->pc = 0x1B2A54u;
            goto label_1b2a54;
        }
    }
    ctx->pc = 0x1B2A48u;
    // 0x1b2a48: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b2a4c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1B2A4Cu;
    {
        const bool branch_taken_0x1b2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a4c) {
            ctx->pc = 0x1B2CF8u;
            goto label_1b2cf8;
        }
    }
    ctx->pc = 0x1B2A54u;
label_1b2a54:
    // 0x1b2a54: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2a54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2a58: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B2A58u;
    {
        const bool branch_taken_0x1b2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a58) {
            ctx->pc = 0x1B2CE8u;
            goto label_1b2ce8;
        }
    }
    ctx->pc = 0x1B2A60u;
label_1b2a60:
    // 0x1b2a60: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2a64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2a68: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2a70: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2a74: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2a78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b2a7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a80: 0x26460120  addiu       $a2, $s2, 0x120
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x1b2a84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2A84u;
    SET_GPR_U32(ctx, 31, 0x1B2A8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2A84u, 0x1B2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A8Cu;
label_1b2a8c:
    // 0x1b2a8c: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1b2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2a90: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1b2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2a94: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B2A94u;
    SET_GPR_U32(ctx, 31, 0x1B2A9Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B2A94u, 0x1B2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A9Cu;
label_1b2a9c:
    // 0x1b2a9c: 0xe64011f8  swc1        $f0, 0x11F8($s2)
    ctx->pc = 0x1b2a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4600), bits); }
    // 0x1b2aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2aa4: 0xa24211ee  sb          $v0, 0x11EE($s2)
    ctx->pc = 0x1b2aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2aa8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b2aac: 0xae421210  sw          $v0, 0x1210($s2)
    ctx->pc = 0x1b2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4624), GPR_U32(ctx, 2));
    // 0x1b2ab0: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2ab4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2ab8: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ac0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2ac4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b2ac8: 0xa64211f4  sh          $v0, 0x11F4($s2)
    ctx->pc = 0x1b2ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2acc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2ad0: 0x90420015  lbu         $v0, 0x15($v0)
    ctx->pc = 0x1b2ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
    // 0x1b2ad4: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2ad8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b2adc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2ae0: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ae8: 0x26441200  addiu       $a0, $s2, 0x1200
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4608));
    // 0x1b2aec: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2af0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2AF0u;
    SET_GPR_U32(ctx, 31, 0x1B2AF8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2AF8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2AF8u) { return; }
    ctx->pc = 0x1B2AF8u;
label_1b2af8:
    // 0x1b2af8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1b2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1b2afc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b2b08: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2B08u;
    {
        const bool branch_taken_0x1b2b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b08) {
            ctx->pc = 0x1B2C44u;
            goto label_1b2c44;
        }
    }
    ctx->pc = 0x1B2B10u;
    // 0x1b2b10: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b2b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b2b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b2b1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2B1Cu;
    {
        const bool branch_taken_0x1b2b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b1c) {
            ctx->pc = 0x1B2B64u;
            goto label_1b2b64;
        }
    }
    ctx->pc = 0x1B2B24u;
    // 0x1b2b24: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x1b2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b2b28: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2b28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2b2c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b30: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b2b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2b34: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2b38: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b3c: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b44: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b2b48: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b2b4c: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b2b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b54: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b2b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b58: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2b58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2b5c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B2B5Cu;
    {
        const bool branch_taken_0x1b2b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b5c) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2B64u;
label_1b2b64:
    // 0x1b2b64: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1b2b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2b68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2b70: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b2b74: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b2b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b2b78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1b2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b7c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2b80: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b2b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2b84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2b88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2b8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2b94: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1b2b98: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2b9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b2b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ba0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1b2ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b2ba4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b2ba8: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2bac: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2bb0: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b2bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b2bb4: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2bb8: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1b2bbc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b2bc0: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2bc4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2bc8: 0x90460012  lbu         $a2, 0x12($v0)
    ctx->pc = 0x1b2bc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b2bcc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1b2bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b2bd0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b2bd4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1b2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1b2bd8: 0x24638540  addiu       $v1, $v1, -0x7AC0
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935872));
    // 0x1b2bdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2be0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b2be0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2be4: 0xa64311f6  sh          $v1, 0x11F6($s2)
    ctx->pc = 0x1b2be4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b2be8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b2be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b2bec: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b2bf0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b2bf4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B2BF4u;
    {
        const bool branch_taken_0x1b2bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2bf4) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2BFCu;
    // 0x1b2bfc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b2c00: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b2c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b2c04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b2c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c0c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2C0Cu;
    {
        const bool branch_taken_0x1b2c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2c0c) {
            ctx->pc = 0x1B2C34u;
            goto label_1b2c34;
        }
    }
    ctx->pc = 0x1B2C14u;
    // 0x1b2c14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2C14u;
    {
        const bool branch_taken_0x1b2c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c14) {
            ctx->pc = 0x1B2C24u;
            goto label_1b2c24;
        }
    }
    ctx->pc = 0x1B2C1Cu;
    // 0x1b2c1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2C24u;
label_1b2c24:
    // 0x1b2c24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b2c28: 0xa24311f0  sb          $v1, 0x11F0($s2)
    ctx->pc = 0x1b2c28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b2c2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B2C2Cu;
    {
        const bool branch_taken_0x1b2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c2c) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2C34u;
label_1b2c34:
    // 0x1b2c34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2c38: 0xa24211f0  sb          $v0, 0x11F0($s2)
    ctx->pc = 0x1b2c38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2c3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1B2C3Cu;
    {
        const bool branch_taken_0x1b2c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c3c) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2C44u;
label_1b2c44:
    // 0x1b2c44: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x1b2c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2c48: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b2c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b2c4c: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1b2c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b2c50: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2C50u;
    {
        const bool branch_taken_0x1b2c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c50) {
            ctx->pc = 0x1B2C88u;
            goto label_1b2c88;
        }
    }
    ctx->pc = 0x1B2C58u;
    // 0x1b2c58: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c5c: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x1b2c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2c60: 0xa24411ef  sb          $a0, 0x11EF($s2)
    ctx->pc = 0x1b2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b2c64: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c68: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b2c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2c6c: 0xa64411f2  sh          $a0, 0x11F2($s2)
    ctx->pc = 0x1b2c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b2c70: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c74: 0x90a20012  lbu         $v0, 0x12($a1)
    ctx->pc = 0x1b2c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1b2c78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2c7c: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2c80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2C80u;
    {
        const bool branch_taken_0x1b2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c80) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2C88u;
label_1b2c88:
    // 0x1b2c88: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x1b2c88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2c8c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b2c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b2c90: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1b2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1b2c94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2C94u;
    {
        const bool branch_taken_0x1b2c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c94) {
            ctx->pc = 0x1B2CC0u;
            goto label_1b2cc0;
        }
    }
    ctx->pc = 0x1B2C9Cu;
    // 0x1b2c9c: 0x240403e9  addiu       $a0, $zero, 0x3E9
    ctx->pc = 0x1b2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b2ca0: 0xa64411f2  sh          $a0, 0x11F2($s2)
    ctx->pc = 0x1b2ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b2ca4: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2ca8: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x1b2ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b2cac: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2cb0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b2cb4: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2cb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2CB8u;
    {
        const bool branch_taken_0x1b2cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cb8) {
            ctx->pc = 0x1B2CE0u;
            goto label_1b2ce0;
        }
    }
    ctx->pc = 0x1B2CC0u;
label_1b2cc0:
    // 0x1b2cc0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2cc4: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1b2cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2cc8: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2ccc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2cd0: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x1b2cd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2cd4: 0xa64211f2  sh          $v0, 0x11F2($s2)
    ctx->pc = 0x1b2cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2cd8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b2cdc: 0xa64411f6  sh          $a0, 0x11F6($s2)
    ctx->pc = 0x1b2cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 4));
label_1b2ce0:
    // 0x1b2ce0: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x1b2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2ce4: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1b2ce4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1b2ce8:
    // 0x1b2ce8: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x1b2ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1b2cec: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x1B2CECu;
    {
        const bool branch_taken_0x1b2cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cec) {
            ctx->pc = 0x1B2A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2a60;
        }
    }
    ctx->pc = 0x1B2CF4u;
    // 0x1b2cf4: 0x72e01628  paddub      $v0, $s7, $zero
    ctx->pc = 0x1b2cf4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
label_1b2cf8:
    // 0x1b2cf8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b2cf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2cfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b2cfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2d00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b2d00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2d04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b2d04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2d08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b2d08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2d0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b2d0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2d10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b2d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d20: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1b2d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2D2Cu;
}
