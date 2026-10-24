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

// Function: Em02_R1_mv0a
// Address: 0x2a22a0 - 0x2a2ba4
void Em02_R1_mv0a_0x2a22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv0a_0x2a22a0");
#endif

    switch (ctx->pc) {
        case 0x2a233cu: goto label_2a233c;
        case 0x2a2380u: goto label_2a2380;
        case 0x2a239cu: goto label_2a239c;
        case 0x2a23b4u: goto label_2a23b4;
        case 0x2a23f8u: goto label_2a23f8;
        case 0x2a2414u: goto label_2a2414;
        case 0x2a2464u: goto label_2a2464;
        case 0x2a2474u: goto label_2a2474;
        case 0x2a2484u: goto label_2a2484;
        case 0x2a24acu: goto label_2a24ac;
        case 0x2a2504u: goto label_2a2504;
        case 0x2a253cu: goto label_2a253c;
        case 0x2a2554u: goto label_2a2554;
        case 0x2a2564u: goto label_2a2564;
        case 0x2a2604u: goto label_2a2604;
        case 0x2a2630u: goto label_2a2630;
        case 0x2a264cu: goto label_2a264c;
        case 0x2a2668u: goto label_2a2668;
        case 0x2a2678u: goto label_2a2678;
        case 0x2a2690u: goto label_2a2690;
        case 0x2a269cu: goto label_2a269c;
        case 0x2a26f4u: goto label_2a26f4;
        case 0x2a2700u: goto label_2a2700;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a2754u: goto label_2a2754;
        case 0x2a27f4u: goto label_2a27f4;
        case 0x2a2820u: goto label_2a2820;
        case 0x2a283cu: goto label_2a283c;
        case 0x2a2858u: goto label_2a2858;
        case 0x2a2868u: goto label_2a2868;
        case 0x2a2880u: goto label_2a2880;
        case 0x2a2890u: goto label_2a2890;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a2928u: goto label_2a2928;
        case 0x2a2954u: goto label_2a2954;
        case 0x2a2968u: goto label_2a2968;
        case 0x2a297cu: goto label_2a297c;
        case 0x2a29e8u: goto label_2a29e8;
        case 0x2a2a4cu: goto label_2a2a4c;
        case 0x2a2ab8u: goto label_2a2ab8;
        case 0x2a2b20u: goto label_2a2b20;
        default: break;
    }

    ctx->pc = 0x2a22a0u;

    // 0x2a22a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a22a4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2a22a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2a22a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a22a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a22ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a22acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a22b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a22b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a22b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a22b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a22b8: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2a22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x2a22bc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a22bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a22c0: 0x8c7202d0  lw          $s2, 0x2D0($v1)
    ctx->pc = 0x2a22c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a22c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2a22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2a22c8: 0x2490dbc0  addiu       $s0, $a0, -0x2440
    ctx->pc = 0x2a22c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x2a22cc: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a22ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a22d0: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2a22d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2a22d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a22d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a22d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a22dc: 0x10830168  beq         $a0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x2A22DCu;
    {
        const bool branch_taken_0x2a22dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a22dc) {
            ctx->pc = 0x2A2880u;
            goto label_2a2880;
        }
    }
    ctx->pc = 0x2A22E4u;
    // 0x2a22e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a22e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a22e8: 0x10830137  beq         $a0, $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x2A22E8u;
    {
        const bool branch_taken_0x2a22e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a22e8) {
            ctx->pc = 0x2A27C8u;
            goto label_2a27c8;
        }
    }
    ctx->pc = 0x2A22F0u;
    // 0x2a22f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a22f4: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A22F4u;
    {
        const bool branch_taken_0x2a22f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a22f4) {
            ctx->pc = 0x2A2354u;
            goto label_2a2354;
        }
    }
    ctx->pc = 0x2A22FCu;
    // 0x2a22fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A22FCu;
    {
        const bool branch_taken_0x2a22fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a22fc) {
            ctx->pc = 0x2A230Cu;
            goto label_2a230c;
        }
    }
    ctx->pc = 0x2A2304u;
    // 0x2a2304: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x2A2304u;
    {
        const bool branch_taken_0x2a2304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2304) {
            ctx->pc = 0x2A2B84u;
            goto label_2a2b84;
        }
    }
    ctx->pc = 0x2A230Cu;
label_2a230c:
    // 0x2a230c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2310: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2314: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x2a2314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2318: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a231c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a231cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2320: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a2320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a2324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a2324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a2328: 0x24060f22  addiu       $a2, $zero, 0xF22
    ctx->pc = 0x2a2328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3874));
    // 0x2a232c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a232cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a2330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a2334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A2334u;
    SET_GPR_U32(ctx, 31, 0x2A233Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A2334u, 0x2A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A233Cu;
label_2a233c:
    // 0x2a233c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a233cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2340: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a2340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2a2344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2348: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a234c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2a234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2350: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2a2350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_2a2354:
    // 0x2a2354: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2358: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a235c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a2360: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x2a2360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a2364: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a2364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2368: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a236c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2370: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2374: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2378: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2378u;
    SET_GPR_U32(ctx, 31, 0x2A2380u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2378u, 0x2A2380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2380u;
label_2a2380:
    // 0x2a2380: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2384: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2388: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a2388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a238c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2390: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2390u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2394: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2394u;
    SET_GPR_U32(ctx, 31, 0x2A239Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2394u, 0x2A239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A239Cu;
label_2a239c:
    // 0x2a239c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a23a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a23a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a23a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a23ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A23ACu;
    SET_GPR_U32(ctx, 31, 0x2A23B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A23ACu, 0x2A23B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23B4u;
label_2a23b4:
    // 0x2a23b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23b8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2a23b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2a23bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a23bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a23c0: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x2a23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2a23c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A23C4u;
    {
        const bool branch_taken_0x2a23c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a23c4) {
            ctx->pc = 0x2A2458u;
            goto label_2a2458;
        }
    }
    ctx->pc = 0x2A23CCu;
    // 0x2a23cc: 0x3c053e86  lui         $a1, 0x3E86
    ctx->pc = 0x2a23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16006 << 16));
    // 0x2a23d0: 0x34a20a92  ori         $v0, $a1, 0xA92
    ctx->pc = 0x2a23d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2a23d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a23d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a23d8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a23d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23dc: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2a23dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a23e0: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a23e4: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x2a23e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a23e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a23e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a23ec: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a23f0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A23F0u;
    SET_GPR_U32(ctx, 31, 0x2A23F8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A23F0u, 0x2A23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A23F8u;
label_2a23f8:
    // 0x2a23f8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a23fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a23fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2400: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2404: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2408: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2408u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a240c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A240Cu;
    SET_GPR_U32(ctx, 31, 0x2A2414u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A240Cu, 0x2A2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2414u;
label_2a2414:
    // 0x2a2414: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2418: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a2418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a241c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2420: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2424: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a2424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2428: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a242c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2a242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2430: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2434: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a2434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2a2438: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a243c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2440: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2a2444: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2a2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2a2448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a244c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2a244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2454: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2a2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2a2458:
    // 0x2a2458: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a245c: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A245Cu;
    SET_GPR_U32(ctx, 31, 0x2A2464u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A245Cu, 0x2A2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2464u;
label_2a2464:
    // 0x2a2464: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2468: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a246c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A246Cu;
    SET_GPR_U32(ctx, 31, 0x2A2474u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A246Cu, 0x2A2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2474u;
label_2a2474:
    // 0x2a2474: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2474u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2478: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a247c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A247Cu;
    SET_GPR_U32(ctx, 31, 0x2A2484u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A247Cu, 0x2A2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2484u;
label_2a2484:
    // 0x2a2484: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2488: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x2a2488u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a248c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2a248cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a2490: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a2490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2494: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2A2494u;
    {
        const bool branch_taken_0x2a2494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2494) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A249Cu;
    // 0x2a249c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24a0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a24a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a24a4: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x2A24A4u;
    SET_GPR_U32(ctx, 31, 0x2A24ACu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x2A24A4u, 0x2A24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24ACu;
label_2a24ac:
    // 0x2a24ac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2a24acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a24b0: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x2a24b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2a24b4: 0x14e000a9  bnez        $a3, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2A24B4u;
    {
        const bool branch_taken_0x2a24b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a24b4) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A24BCu;
    // 0x2a24bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a24c0: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2a24c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2a24c4: 0x146000a5  bnez        $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A24C4u;
    {
        const bool branch_taken_0x2a24c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a24c4) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A24CCu;
    // 0x2a24cc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24d0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2a24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a24d4: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x2a24d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a24d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a24dc: 0x0  nop
    ctx->pc = 0x2a24dcu;
    // NOP
    // 0x2a24e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a24e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a24e4: 0x0  nop
    ctx->pc = 0x2a24e4u;
    // NOP
    // 0x2a24e8: 0x4500009c  bc1f        . + 4 + (0x9C << 2)
    ctx->pc = 0x2A24E8u;
    {
        const bool branch_taken_0x2a24e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a24e8) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A24F0u;
    // 0x2a24f0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a24f4: 0x2465dbc0  addiu       $a1, $v1, -0x2440
    ctx->pc = 0x2a24f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2a24f8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a24fc: 0xc05cd90  jal         func_173640
    ctx->pc = 0x2A24FCu;
    SET_GPR_U32(ctx, 31, 0x2A2504u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x2A24FCu, 0x2A2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2504u;
label_2a2504:
    // 0x2a2504: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2504u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2508: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2A2508u;
    {
        const bool branch_taken_0x2a2508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2508) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A2510u;
    // 0x2a2510: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2514: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2518: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x2a251c: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x2a251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x2a2520: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a2520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2524: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a2528: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a2528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a252c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a252cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a2530: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a2530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a2534: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A2534u;
    SET_GPR_U32(ctx, 31, 0x2A253Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A2534u, 0x2A253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A253Cu;
label_2a253c:
    // 0x2a253c: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A253Cu;
    {
        const bool branch_taken_0x2a253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a253c) {
            ctx->pc = 0x2A275Cu;
            goto label_2a275c;
        }
    }
    ctx->pc = 0x2A2544u;
    // 0x2a2544: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2a2544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2a2548: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a254c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A254Cu;
    SET_GPR_U32(ctx, 31, 0x2A2554u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A254Cu, 0x2A2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2554u;
label_2a2554:
    // 0x2a2554: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x2a2558: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2a255c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A255Cu;
    SET_GPR_U32(ctx, 31, 0x2A2564u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A255Cu, 0x2A2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2564u;
label_2a2564:
    // 0x2a2564: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2568: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2a2568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2a256c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2570: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a2574: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2a2574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2a2578: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x2a2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x2a257c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2580: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2a2580u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2588: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a2588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a258c: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x2a258cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x2a2590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a2594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a2598: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x2a2598u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x2a259c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25a0: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x2a25a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x2a25a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25a8: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x2a25a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x2a25ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a25acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a25b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25b4: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x2a25b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x2a25b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25bc: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x2a25bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x2a25c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25c8: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x2a25c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x2a25cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a25d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a25d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a25d4: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x2a25d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x2a25d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a25dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a25e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a25e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25e8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a25ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a25ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a25f0: 0x24060823  addiu       $a2, $zero, 0x823
    ctx->pc = 0x2a25f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2083));
    // 0x2a25f4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a25f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a25f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a25fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A25FCu;
    SET_GPR_U32(ctx, 31, 0x2A2604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A25FCu, 0x2A2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2604u;
label_2a2604:
    // 0x2a2604: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2608: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a260c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2a2610: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a2610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a2614: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2618: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a261c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2620: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2624: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2628: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2628u;
    SET_GPR_U32(ctx, 31, 0x2A2630u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2628u, 0x2A2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2630u;
label_2a2630:
    // 0x2a2630: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2634: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2638: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a263c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2640: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2640u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2644: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2644u;
    SET_GPR_U32(ctx, 31, 0x2A264Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2644u, 0x2A264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A264Cu;
label_2a264c:
    // 0x2a264c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2650: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2654: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2658: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a265c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2a2660: 0xc096c60  jal         func_25B180
    ctx->pc = 0x2A2660u;
    SET_GPR_U32(ctx, 31, 0x2A2668u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x2A2660u, 0x2A2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2668u;
label_2a2668:
    // 0x2a2668: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x2a2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x2a266c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a2670: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2670u;
    SET_GPR_U32(ctx, 31, 0x2A2678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2678u) { return; }
    ctx->pc = 0x2A2678u;
label_2a2678:
    // 0x2a2678: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a267c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2680: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a2684: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a2684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a2688: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2688u;
    SET_GPR_U32(ctx, 31, 0x2A2690u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2690u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2690u) { return; }
    ctx->pc = 0x2A2690u;
label_2a2690:
    // 0x2a2690: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2694: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A2694u;
    SET_GPR_U32(ctx, 31, 0x2A269Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A2694u, 0x2A269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A269Cu;
label_2a269c:
    // 0x2a269c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a26a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a26a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a26a4: 0x0  nop
    ctx->pc = 0x2a26a4u;
    // NOP
    // 0x2a26a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a26a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a26ac: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2a26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2a26b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a26b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a26b4: 0x0  nop
    ctx->pc = 0x2a26b4u;
    // NOP
    // 0x2a26b8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a26b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a26bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a26c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a26c4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a26c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a26c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a26cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a26d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a26d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a26d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a26d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a26dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a26dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a26e0: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a26e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a26e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a26e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a26e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a26ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A26ECu;
    SET_GPR_U32(ctx, 31, 0x2A26F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A26ECu, 0x2A26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26F4u;
label_2a26f4:
    // 0x2a26f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a26f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a26f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A26F8u;
    SET_GPR_U32(ctx, 31, 0x2A2700u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A26F8u, 0x2A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2700u;
label_2a2700:
    // 0x2a2700: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x2a2700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x2a2704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2708: 0x0  nop
    ctx->pc = 0x2a2708u;
    // NOP
    // 0x2a270c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a2710: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2714: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2718: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a271c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a271cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2724: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2728: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a272c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a2730: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2a2730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2734: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2a2734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2a2738: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2738u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a273c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a273cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2740: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2A2740u;
    SET_GPR_U32(ctx, 31, 0x2A2748u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2A2740u, 0x2A2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2748u;
label_2a2748:
    // 0x2a2748: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2748u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a274c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2A274Cu;
    SET_GPR_U32(ctx, 31, 0x2A2754u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2A274Cu, 0x2A2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2754u;
label_2a2754:
    // 0x2a2754: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2A2754u;
    {
        const bool branch_taken_0x2a2754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2754) {
            ctx->pc = 0x2A2B84u;
            goto label_2a2b84;
        }
    }
    ctx->pc = 0x2A275Cu;
label_2a275c:
    // 0x2a275c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2760: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2764: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x2A2764u;
    {
        const bool branch_taken_0x2a2764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2764) {
            ctx->pc = 0x2A2B84u;
            goto label_2a2b84;
        }
    }
    ctx->pc = 0x2A276Cu;
    // 0x2a276c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a276cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2770: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a2770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2774: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a2778: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2a2778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2a277c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2a277cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2a2780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2784: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2788: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2788u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a278c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a278cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a2790: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2794: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a2794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2798: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a279c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a279cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a27a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a27a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a27a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a27acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a27b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a27b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a27bc: 0xa4640044  sh          $a0, 0x44($v1)
    ctx->pc = 0x2a27bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a27c0: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x2A27C0u;
    {
        const bool branch_taken_0x2a27c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27c0) {
            ctx->pc = 0x2A2B84u;
            goto label_2a2b84;
        }
    }
    ctx->pc = 0x2A27C8u;
label_2a27c8:
    // 0x2a27c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a27cc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a27d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a27d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a27e0: 0x24060823  addiu       $a2, $zero, 0x823
    ctx->pc = 0x2a27e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2083));
    // 0x2a27e4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a27e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a27e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a27e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a27ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A27ECu;
    SET_GPR_U32(ctx, 31, 0x2A27F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A27ECu, 0x2A27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27F4u;
label_2a27f4:
    // 0x2a27f4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27f8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a27f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a27fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2a27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2a2800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a2800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a2804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a2804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a2808: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a280c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a2810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a2810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a2814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a2818: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A2818u;
    SET_GPR_U32(ctx, 31, 0x2A2820u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A2818u, 0x2A2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2820u;
label_2a2820:
    // 0x2a2820: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a2820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a2824: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2828: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a282c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2830: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a2830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a2834: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A2834u;
    SET_GPR_U32(ctx, 31, 0x2A283Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A2834u, 0x2A283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A283Cu;
label_2a283c:
    // 0x2a283c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2840: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a2844: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2848: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a284c: 0x244512b0  addiu       $a1, $v0, 0x12B0
    ctx->pc = 0x2a284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2a2850: 0xc096c60  jal         func_25B180
    ctx->pc = 0x2A2850u;
    SET_GPR_U32(ctx, 31, 0x2A2858u);
    ctx->pc = 0x25B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B180u, 0x2A2850u, 0x2A2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2858u;
label_2a2858:
    // 0x2a2858: 0x260412a0  addiu       $a0, $s0, 0x12A0
    ctx->pc = 0x2a2858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x2a285c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a2860: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2860u;
    SET_GPR_U32(ctx, 31, 0x2A2868u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2868u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2868u) { return; }
    ctx->pc = 0x2A2868u;
label_2a2868:
    // 0x2a2868: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a286c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2870: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a2874: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a2874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a2878: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2A2878u;
    SET_GPR_U32(ctx, 31, 0x2A2880u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2A2880u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A2880u) { return; }
    ctx->pc = 0x2A2880u;
label_2a2880:
    // 0x2a2880: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2888: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A2888u;
    SET_GPR_U32(ctx, 31, 0x2A2890u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A2888u, 0x2A2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2890u;
label_2a2890:
    // 0x2a2890: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a2894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a2894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a2898: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a289c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28a0: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a28a4: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x2a28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x2a28a8: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x2a28ac: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2a28acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a28b0: 0xc05ce04  jal         func_173810
    ctx->pc = 0x2A28B0u;
    SET_GPR_U32(ctx, 31, 0x2A28B8u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x2A28B0u, 0x2A28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28B8u;
label_2a28b8:
    // 0x2a28b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28bc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2a28bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2a28c0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28c8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2a28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2a28cc: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2a28d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2a28d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2a28d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2a28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a28d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2a28d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a28dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2A28DCu;
    SET_GPR_U32(ctx, 31, 0x2A28E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2A28DCu, 0x2A28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28E4u;
label_2a28e4:
    // 0x2a28e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a28e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a28ec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a28f4: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x2a28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x2a28f8: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x2a28f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x2a28fc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a28fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a2900: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A2900u;
    SET_GPR_U32(ctx, 31, 0x2A2908u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A2900u, 0x2A2908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2908u;
label_2a2908:
    // 0x2a2908: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a290c: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x2a290cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2910: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a2910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a2914: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x2a2914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x2a2918: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2a2918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2a291c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a291cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a2920: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A2920u;
    SET_GPR_U32(ctx, 31, 0x2A2928u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A2920u, 0x2A2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2928u;
label_2a2928:
    // 0x2a2928: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2928u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a292c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2930: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x2a2930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x2a2934: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2a2934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2a2938: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A2938u;
    {
        const bool branch_taken_0x2a2938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2938) {
            ctx->pc = 0x2A2954u;
            goto label_2a2954;
        }
    }
    ctx->pc = 0x2A2940u;
    // 0x2a2940: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2944: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2948: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2a2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a294c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2A294Cu;
    SET_GPR_U32(ctx, 31, 0x2A2954u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2A294Cu, 0x2A2954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2954u;
label_2a2954:
    // 0x2a2954: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2958: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a295c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2960: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A2960u;
    SET_GPR_U32(ctx, 31, 0x2A2968u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A2960u, 0x2A2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2968u;
label_2a2968:
    // 0x2a2968: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a2968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a296c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2970: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a2970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a2974: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A2974u;
    SET_GPR_U32(ctx, 31, 0x2A297Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A2974u, 0x2A297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A297Cu;
label_2a297c:
    // 0x2a297c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a297cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2980: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2a2980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2984: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x2a2984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
    // 0x2a2988: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a2988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a298c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2990: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A2990u;
    {
        const bool branch_taken_0x2a2990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2990) {
            ctx->pc = 0x2A2A50u;
            goto label_2a2a50;
        }
    }
    ctx->pc = 0x2A2998u;
    // 0x2a2998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a299c: 0x0  nop
    ctx->pc = 0x2a299cu;
    // NOP
    // 0x2a29a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a29a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a29a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a29a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29a8: 0x0  nop
    ctx->pc = 0x2a29a8u;
    // NOP
    // 0x2a29ac: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a29b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a29b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29b4: 0x0  nop
    ctx->pc = 0x2a29b4u;
    // NOP
    // 0x2a29b8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a29b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a29bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a29c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a29c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29c4: 0x0  nop
    ctx->pc = 0x2a29c4u;
    // NOP
    // 0x2a29c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a29c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a29cc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a29d0: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x2a29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2a29d4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2a29d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a29d8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a29dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a29e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A29E0u;
    SET_GPR_U32(ctx, 31, 0x2A29E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A29E0u, 0x2A29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29E8u;
label_2a29e8:
    // 0x2a29e8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2a29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2a29ec: 0x34440a92  ori         $a0, $v0, 0xA92
    ctx->pc = 0x2a29ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a29f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a29f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a29f4: 0x0  nop
    ctx->pc = 0x2a29f4u;
    // NOP
    // 0x2a29f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a29f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a29fc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2a04: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a2a08: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a0c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2a2a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a2a10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2a14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2a18: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2a2a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2a2a1c: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x2a2a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a2a20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2a24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2a28: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2a2a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2a2a2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2a34: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2a38: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2a3c: 0x24470200  addiu       $a3, $v0, 0x200
    ctx->pc = 0x2a2a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2a2a40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a2a40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2a44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A2A44u;
    SET_GPR_U32(ctx, 31, 0x2A2A4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A2A44u, 0x2A2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A4Cu;
label_2a2a4c:
    // 0x2a2a4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a2a50:
    // 0x2a2a50: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a54: 0x906509db  lbu         $a1, 0x9DB($v1)
    ctx->pc = 0x2a2a54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a2a58: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2a2a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a2a5c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2a2a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2a2a60: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A2A60u;
    {
        const bool branch_taken_0x2a2a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2a60) {
            ctx->pc = 0x2A2B24u;
            goto label_2a2b24;
        }
    }
    ctx->pc = 0x2A2A68u;
    // 0x2a2a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a6c: 0x0  nop
    ctx->pc = 0x2a2a6cu;
    // NOP
    // 0x2a2a70: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a2a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a78: 0x0  nop
    ctx->pc = 0x2a2a78u;
    // NOP
    // 0x2a2a7c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a2a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a84: 0x0  nop
    ctx->pc = 0x2a2a84u;
    // NOP
    // 0x2a2a88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a2a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2a94: 0x0  nop
    ctx->pc = 0x2a2a94u;
    // NOP
    // 0x2a2a98: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a2a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a2a9c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2aa0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a2aa4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a2aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2aa8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2aac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2a2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2a2ab0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A2AB0u;
    SET_GPR_U32(ctx, 31, 0x2A2AB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A2AB0u, 0x2A2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AB8u;
label_2a2ab8:
    // 0x2a2ab8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2a2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2a2abc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2a2abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a2ac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a2ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a2ac4: 0x0  nop
    ctx->pc = 0x2a2ac4u;
    // NOP
    // 0x2a2ac8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a2ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a2acc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2ad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2ad4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a2ad8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2adc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2a2adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a2ae0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a2ae4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2a2ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2ae8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2a2ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2a2aec: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2a2aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a2af0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a2af4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2af8: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x2a2af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x2a2afc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b00: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2a2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2a2b04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2b08: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2b0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a2b0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2b10: 0x246702c0  addiu       $a3, $v1, 0x2C0
    ctx->pc = 0x2a2b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x2a2b14: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a2b14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2b18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A2B18u;
    SET_GPR_U32(ctx, 31, 0x2A2B20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A2B18u, 0x2A2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B20u;
label_2a2b20:
    // 0x2a2b20: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a2b20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a2b24:
    // 0x2a2b24: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a2b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a2b2c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A2B2Cu;
    {
        const bool branch_taken_0x2a2b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2b2c) {
            ctx->pc = 0x2A2B84u;
            goto label_2a2b84;
        }
    }
    ctx->pc = 0x2A2B34u;
    // 0x2a2b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2b38: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a2b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a2b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a2b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2b44: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b48: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2a2b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a2b4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a2b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2b54: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b58: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a2b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2b5c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a2b64: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a2b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a2b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2b6c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b70: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2a2b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2a2b74: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2a2b78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2b7c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a2b80: 0xa4a40044  sh          $a0, 0x44($a1)
    ctx->pc = 0x2a2b80u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 4));
label_2a2b84:
    // 0x2a2b84: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2a2b84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2b98: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a2b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2BA4u;
}
