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

// Function: Em01_missile_move
// Address: 0x3012d0 - 0x3018f8
void Em01_missile_move_0x3012d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_missile_move_0x3012d0");
#endif

    switch (ctx->pc) {
        case 0x301348u: goto label_301348;
        case 0x3013d8u: goto label_3013d8;
        case 0x3013fcu: goto label_3013fc;
        case 0x301474u: goto label_301474;
        case 0x301480u: goto label_301480;
        case 0x3014f4u: goto label_3014f4;
        case 0x301500u: goto label_301500;
        case 0x301548u: goto label_301548;
        case 0x301564u: goto label_301564;
        case 0x301590u: goto label_301590;
        case 0x30159cu: goto label_30159c;
        case 0x3015ccu: goto label_3015cc;
        case 0x3015e8u: goto label_3015e8;
        case 0x301680u: goto label_301680;
        case 0x30172cu: goto label_30172c;
        case 0x30174cu: goto label_30174c;
        case 0x301774u: goto label_301774;
        case 0x3017dcu: goto label_3017dc;
        case 0x3017f0u: goto label_3017f0;
        case 0x301804u: goto label_301804;
        case 0x301814u: goto label_301814;
        case 0x301824u: goto label_301824;
        case 0x301834u: goto label_301834;
        case 0x301864u: goto label_301864;
        case 0x301880u: goto label_301880;
        case 0x301890u: goto label_301890;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018b0u: goto label_3018b0;
        default: break;
    }

    ctx->pc = 0x3012d0u;

    // 0x3012d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3012d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3012d4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x3012d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x3012d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3012d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3012dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3012dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3012e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3012e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3012e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3012e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3012e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3012e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3012ec: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x3012ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x3012f0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x3012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3012f4: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x3012f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x3012f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3012f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3012fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3012fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x301300: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x301300u;
    {
        const bool branch_taken_0x301300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301300) {
            ctx->pc = 0x301324u;
            goto label_301324;
        }
    }
    ctx->pc = 0x301308u;
    // 0x301308: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x30130c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x301310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301314: 0x0  nop
    ctx->pc = 0x301314u;
    // NOP
    // 0x301318: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x301318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x30131c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30131Cu;
    {
        const bool branch_taken_0x30131c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30131c) {
            ctx->pc = 0x301334u;
            goto label_301334;
        }
    }
    ctx->pc = 0x301324u;
label_301324:
    // 0x301324: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x301324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x301328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30132c: 0x0  nop
    ctx->pc = 0x30132cu;
    // NOP
    // 0x301330: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x301330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_301334:
    // 0x301334: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x301334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301338: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x301338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x30133c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x30133cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301340: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x301340u;
    {
        const bool branch_taken_0x301340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301340) {
            ctx->pc = 0x3018C8u;
            goto label_3018c8;
        }
    }
    ctx->pc = 0x301348u;
label_301348:
    // 0x301348: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30134c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301350: 0x2432004  sllv        $a0, $v1, $s2
    ctx->pc = 0x301350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x301354: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x301354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x301358: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x301358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30135c: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x30135Cu;
    {
        const bool branch_taken_0x30135c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30135c) {
            ctx->pc = 0x3018C0u;
            goto label_3018c0;
        }
    }
    ctx->pc = 0x301364u;
    // 0x301364: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x301364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301368: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30136c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301378: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x301378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30137c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x301380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x301384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x301384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x301388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x301388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30138c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x30138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301390: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x301390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x301394: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x301394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301398: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x301398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x30139c: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x30139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x3013a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3013a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3013a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3013a8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3013a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3013ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3013b0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x3013b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3013b4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3013b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3013b8: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x3013b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3013bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3013bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3013c0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x3013c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x3013c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3013c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3013c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3013c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3013cc: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3013ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3013d0: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x3013D0u;
    SET_GPR_U32(ctx, 31, 0x3013D8u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x3013D0u, 0x3013D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013D8u;
label_3013d8:
    // 0x3013d8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x3013d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3013dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3013e0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3013e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3013e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3013e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3013e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013ec: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3013ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3013f0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x3013f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3013f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3013F4u;
    SET_GPR_U32(ctx, 31, 0x3013FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3013F4u, 0x3013FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3013FCu;
label_3013fc:
    // 0x3013fc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3013fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301400: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x301400u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x301404: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x301404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x301408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30140c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x30140Cu;
    {
        const bool branch_taken_0x30140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30140c) {
            ctx->pc = 0x3015D0u;
            goto label_3015d0;
        }
    }
    ctx->pc = 0x301414u;
    // 0x301414: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x301414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301418: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30141c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30141Cu;
    {
        const bool branch_taken_0x30141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30141c) {
            ctx->pc = 0x301480u;
            goto label_301480;
        }
    }
    ctx->pc = 0x301424u;
    // 0x301424: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x301424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301428: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30142c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301438: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x301438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30143c: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x30143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301440: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x301440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301448: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x301448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30144c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x301450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x301450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x301454: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x301454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x301458: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30145c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30145cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301460: 0x24042501  addiu       $a0, $zero, 0x2501
    ctx->pc = 0x301460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9473));
    // 0x301464: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301468: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x301468u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30146c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30146Cu;
    SET_GPR_U32(ctx, 31, 0x301474u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30146Cu, 0x301474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301474u;
label_301474:
    // 0x301474: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x301474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x301478: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x301478u;
    SET_GPR_U32(ctx, 31, 0x301480u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x301478u, 0x301480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301480u;
label_301480:
    // 0x301480: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301488: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x301488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x30148c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x301490: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x301490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301494: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x301494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x301498: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x301498u;
    {
        const bool branch_taken_0x301498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301498) {
            ctx->pc = 0x30152Cu;
            goto label_30152c;
        }
    }
    ctx->pc = 0x3014A0u;
    // 0x3014a0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x3014a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x3014a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3014a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3014a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3014ac: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x3014acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x3014b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3014b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3014b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3014b8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3014b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3014bc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3014bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3014c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3014c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3014c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3014c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3014c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3014c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3014cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3014ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3014d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3014d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3014d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3014d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3014d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3014d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3014dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3014dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3014e0: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x3014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x3014e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3014e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3014e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3014e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3014ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3014ECu;
    SET_GPR_U32(ctx, 31, 0x3014F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3014ECu, 0x3014F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014F4u;
label_3014f4:
    // 0x3014f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3014f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3014f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3014F8u;
    SET_GPR_U32(ctx, 31, 0x301500u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3014F8u, 0x301500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301500u;
label_301500:
    // 0x301500: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x301500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x301504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x301508: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x301508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x30150c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x30150cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x301510: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x301510u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x301514: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x301514u;
    {
        const bool branch_taken_0x301514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301514) {
            ctx->pc = 0x3015D0u;
            goto label_3015d0;
        }
    }
    ctx->pc = 0x30151Cu;
    // 0x30151c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301520: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x301520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x301524: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x301524u;
    {
        const bool branch_taken_0x301524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301524) {
            ctx->pc = 0x3015D0u;
            goto label_3015d0;
        }
    }
    ctx->pc = 0x30152Cu;
label_30152c:
    // 0x30152c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301530: 0x244294c0  addiu       $v0, $v0, -0x6B40
    ctx->pc = 0x301530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939840));
    // 0x301534: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x301534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x301538: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x301538u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994C0u));
    // 0x30153c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30153cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x301540: 0xc06765c  jal         func_19D970
    ctx->pc = 0x301540u;
    SET_GPR_U32(ctx, 31, 0x301548u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x301540u, 0x301548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301548u;
label_301548:
    // 0x301548: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x301548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x30154c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301550: 0x0  nop
    ctx->pc = 0x301550u;
    // NOP
    // 0x301554: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301558: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x301558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30155c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x30155Cu;
    SET_GPR_U32(ctx, 31, 0x301564u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x30155Cu, 0x301564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301564u;
label_301564:
    // 0x301564: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x301564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x301568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30156c: 0x0  nop
    ctx->pc = 0x30156cu;
    // NOP
    // 0x301570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x301570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301574: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x301574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x301578: 0x24045100  addiu       $a0, $zero, 0x5100
    ctx->pc = 0x301578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20736));
    // 0x30157c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30157cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x301580: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x301580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x301584: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x301584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301588: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x301588u;
    SET_GPR_U32(ctx, 31, 0x301590u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x301588u, 0x301590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301590u;
label_301590:
    // 0x301590: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x301590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x301594: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x301594u;
    SET_GPR_U32(ctx, 31, 0x30159Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x301594u, 0x30159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30159Cu;
label_30159c:
    // 0x30159c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3015a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3015a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3015a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3015a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3015a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3015a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3015ac: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3015acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3015b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3015b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3015b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3015b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3015b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3015b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3015bc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3015bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3015c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3015c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3015c4: 0xc086488  jal         func_219220
    ctx->pc = 0x3015C4u;
    SET_GPR_U32(ctx, 31, 0x3015CCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x3015C4u, 0x3015CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015CCu;
label_3015cc:
    // 0x3015cc: 0x0  nop
    ctx->pc = 0x3015ccu;
    // NOP
label_3015d0:
    // 0x3015d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3015d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3015d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3015d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3015d8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3015d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3015dc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3015dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x3015e0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3015E0u;
    SET_GPR_U32(ctx, 31, 0x3015E8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3015E0u, 0x3015E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3015E8u;
label_3015e8:
    // 0x3015e8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x3015e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3015ec: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3015ECu;
    {
        const bool branch_taken_0x3015ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3015ec) {
            ctx->pc = 0x301650u;
            goto label_301650;
        }
    }
    ctx->pc = 0x3015F4u;
    // 0x3015f4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3015f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3015f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3015f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3015fc: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x3015fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x301600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x301604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301608: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x301608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30160c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301610: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x301610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x301614: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x301614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301618: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x301618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30161c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30161cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x301620: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x301620u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x301624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x301624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301628: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x301628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x30162c: 0x402027  not         $a0, $v0
    ctx->pc = 0x30162cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x301630: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x301630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301634: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x301634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x301638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30163c: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30163cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x301640: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x301640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x301644: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x301644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x301648: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x301648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30164c: 0x0  nop
    ctx->pc = 0x30164cu;
    // NOP
label_301650:
    // 0x301650: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301654: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x301658: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x301658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30165c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30165cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994D0u));
    // 0x301660: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x301660u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x301664: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x301664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301668: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x301668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30166c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x301670: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x301674: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x301674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x301678: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x301678u;
    SET_GPR_U32(ctx, 31, 0x301680u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x301678u, 0x301680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301680u;
label_301680:
    // 0x301680: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x301680u;
    {
        const bool branch_taken_0x301680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301680) {
            ctx->pc = 0x3018C0u;
            goto label_3018c0;
        }
    }
    ctx->pc = 0x301688u;
    // 0x301688: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30168c: 0x244294e0  addiu       $v0, $v0, -0x6B20
    ctx->pc = 0x30168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939872));
    // 0x301690: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x301690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x301694: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x301694u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3994E0u));
    // 0x301698: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x301698u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30169c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3016a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3016a4: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x3016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x3016a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3016a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3016b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3016b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3016b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3016b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3016b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3016bc: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3016bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016c0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3016c4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3016c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3016c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3016cc: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x3016ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x3016d0: 0x402027  not         $a0, $v0
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3016d4: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x3016d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016d8: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x3016d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3016dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3016dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3016e0: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x3016e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x3016e4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x3016e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3016e8: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x3016e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x3016ec: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x3016ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3016f0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x3016f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x3016f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3016f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3016f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3016f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3016fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3016fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x301700: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x301700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x301704: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x301708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30170c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x301710: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x301710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x301714: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x301714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x301718: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x301718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30171c: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x30171cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301720: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x301720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301724: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x301724u;
    SET_GPR_U32(ctx, 31, 0x30172Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x301724u, 0x30172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30172Cu;
label_30172c:
    // 0x30172c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x30172cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x301730: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x301734: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x301734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x301738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30173c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x301740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x301740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301744: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x301744u;
    SET_GPR_U32(ctx, 31, 0x30174Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x301744u, 0x30174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30174Cu;
label_30174c:
    // 0x30174c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30174cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301750: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x301750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x301754: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x301754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x301758: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x301758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x30175c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301760: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x301760u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301764: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x301764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x301768: 0xc42dedb8  lwc1        $f13, -0x1248($at)
    ctx->pc = 0x301768u;
    { uint32_t bits = FAST_READ32(0x3EEDB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30176c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x30176Cu;
    SET_GPR_U32(ctx, 31, 0x301774u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x30176Cu, 0x301774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301774u;
label_301774:
    // 0x301774: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x301774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x301778: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x301778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30177c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30177cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301780: 0x0  nop
    ctx->pc = 0x301780u;
    // NOP
    // 0x301784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301788: 0x0  nop
    ctx->pc = 0x301788u;
    // NOP
    // 0x30178c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30178Cu;
    {
        const bool branch_taken_0x30178c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30178c) {
            ctx->pc = 0x3017A0u;
            goto label_3017a0;
        }
    }
    ctx->pc = 0x301794u;
    // 0x301794: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x301794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301798: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x301798u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30179c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x30179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3017a0:
    // 0x3017a0: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x3017a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3017a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3017a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3017a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3017a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3017ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3017acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3017b0: 0x0  nop
    ctx->pc = 0x3017b0u;
    // NOP
    // 0x3017b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3017b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3017b8: 0x0  nop
    ctx->pc = 0x3017b8u;
    // NOP
    // 0x3017bc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x3017BCu;
    {
        const bool branch_taken_0x3017bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3017bc) {
            ctx->pc = 0x30184Cu;
            goto label_30184c;
        }
    }
    ctx->pc = 0x3017C4u;
    // 0x3017c4: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x3017c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x3017c8: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x3017c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x3017cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3017d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3017d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017d4: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x3017D4u;
    SET_GPR_U32(ctx, 31, 0x3017DCu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x3017D4u, 0x3017DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017DCu;
label_3017dc:
    // 0x3017dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3017e0: 0x344229f3  ori         $v0, $v0, 0x29F3
    ctx->pc = 0x3017e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10739);
    // 0x3017e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3017e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3017e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3017E8u;
    SET_GPR_U32(ctx, 31, 0x3017F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3017E8u, 0x3017F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017F0u;
label_3017f0:
    // 0x3017f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3017f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3017f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3017f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3017f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3017fc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x3017FCu;
    SET_GPR_U32(ctx, 31, 0x301804u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x301804u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301804u) { return; }
    ctx->pc = 0x301804u;
label_301804:
    // 0x301804: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301808: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x301808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x30180c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30180Cu;
    SET_GPR_U32(ctx, 31, 0x301814u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301814u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301814u) { return; }
    ctx->pc = 0x301814u;
label_301814:
    // 0x301814: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x301814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301818: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x301818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30181c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30181Cu;
    SET_GPR_U32(ctx, 31, 0x301824u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301824u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301824u) { return; }
    ctx->pc = 0x301824u;
label_301824:
    // 0x301824: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x301824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x301828: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x301828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30182c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30182Cu;
    SET_GPR_U32(ctx, 31, 0x301834u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301834u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301834u) { return; }
    ctx->pc = 0x301834u;
label_301834:
    // 0x301834: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x301834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x301838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30183c: 0x0  nop
    ctx->pc = 0x30183cu;
    // NOP
    // 0x301840: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x301840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x301844: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x301844u;
    {
        const bool branch_taken_0x301844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301844) {
            ctx->pc = 0x3018C0u;
            goto label_3018c0;
        }
    }
    ctx->pc = 0x30184Cu;
label_30184c:
    // 0x30184c: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x301850: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x301850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x301854: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x301854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301858: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x301858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30185c: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30185Cu;
    SET_GPR_U32(ctx, 31, 0x301864u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30185Cu, 0x301864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301864u;
label_301864:
    // 0x301864: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x301864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x301868: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x301868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30186c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30186cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301870: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x301870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301874: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x301874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301878: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x301878u;
    SET_GPR_U32(ctx, 31, 0x301880u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x301880u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301880u) { return; }
    ctx->pc = 0x301880u;
label_301880:
    // 0x301880: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x301880u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x301884: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x301884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x301888: 0xc040c9e  jal         func_103278
    ctx->pc = 0x301888u;
    SET_GPR_U32(ctx, 31, 0x301890u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x301890u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x301890u) { return; }
    ctx->pc = 0x301890u;
label_301890:
    // 0x301890: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x301890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x301894: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x301894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x301898: 0xc040c9e  jal         func_103278
    ctx->pc = 0x301898u;
    SET_GPR_U32(ctx, 31, 0x3018A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3018A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3018A0u) { return; }
    ctx->pc = 0x3018A0u;
label_3018a0:
    // 0x3018a0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3018a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3018a4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3018a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3018a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3018A8u;
    SET_GPR_U32(ctx, 31, 0x3018B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3018B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3018B0u) { return; }
    ctx->pc = 0x3018B0u;
label_3018b0:
    // 0x3018b0: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x3018b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x3018b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3018b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3018b8: 0x0  nop
    ctx->pc = 0x3018b8u;
    // NOP
    // 0x3018bc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3018bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3018c0:
    // 0x3018c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3018c4: 0x0  nop
    ctx->pc = 0x3018c4u;
    // NOP
label_3018c8:
    // 0x3018c8: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x3018c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3018cc: 0x1460fe9e  bnez        $v1, . + 4 + (-0x162 << 2)
    ctx->pc = 0x3018CCu;
    {
        const bool branch_taken_0x3018cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3018cc) {
            ctx->pc = 0x301348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301348;
        }
    }
    ctx->pc = 0x3018D4u;
    // 0x3018d4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x3018d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3018d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3018d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3018dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3018dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3018e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3018e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3018e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3018e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3018e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3018e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3018ec: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x3018ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3018f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3018F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3018F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3018F8u;
}
