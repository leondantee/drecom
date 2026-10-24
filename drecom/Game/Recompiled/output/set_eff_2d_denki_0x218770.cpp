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

// Function: set_eff_2d_denki
// Address: 0x218770 - 0x218bd4
void set_eff_2d_denki_0x218770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_2d_denki_0x218770");
#endif

    switch (ctx->pc) {
        case 0x2187ccu: goto label_2187cc;
        case 0x218908u: goto label_218908;
        case 0x2189a4u: goto label_2189a4;
        case 0x218ae4u: goto label_218ae4;
        default: break;
    }

    ctx->pc = 0x218770u;

    // 0x218770: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x218770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x218774: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x218774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x218778: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x218778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21877c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x218780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x218784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x218784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x218788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21878c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21878cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218794: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x218794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x218798: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x218798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x21879c: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x21879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x2187a0: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x2187a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2187a4: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x2187a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x2187a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2187ac: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2187ACu;
    {
        const bool branch_taken_0x2187ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2187ac) {
            ctx->pc = 0x218964u;
            goto label_218964;
        }
    }
    ctx->pc = 0x2187B4u;
    // 0x2187b4: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x2187b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2187b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2187bc: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2187bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2187c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2187c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2187c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2187C4u;
    SET_GPR_U32(ctx, 31, 0x2187CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2187C4u, 0x2187CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187CCu;
label_2187cc:
    // 0x2187cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2187ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2187d0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2187d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2187d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2187d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2187d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2187dc: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2187dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2187e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2187e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2187e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2187e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2187e8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2187e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2187ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2187ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2187f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2187f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2187f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2187f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2187f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2187fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2187fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218804: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21880c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21880cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218810: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218814: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21881c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x218820: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x218820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x218824: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21882c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21882cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218838: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21883c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x21883cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218840: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218844: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218848: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21884c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21884cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218858: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21885c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21885cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218860: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218864: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21886c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218870: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x218870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x218874: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x218874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x218878: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x218878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21887c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218880: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x218880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21888c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21888cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x218890: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x218890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x218894: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21889c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21889cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188a0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2188a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2188a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188ac: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2188acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188b8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2188b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188c4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2188c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188d0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2188d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188dc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2188dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188e8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2188e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2188f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2188f4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2188f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2188f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2188f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2188fc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2188fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218900: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218900u;
    SET_GPR_U32(ctx, 31, 0x218908u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218900u, 0x218908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218908u;
label_218908:
    // 0x218908: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21890c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21890cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218910: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218914: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218914u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218918: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21891c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218920: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218920u;
    {
        const bool branch_taken_0x218920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218920) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218928u;
    // 0x218928: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x218928u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21892c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21892Cu;
    {
        const bool branch_taken_0x21892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21892c) {
            ctx->pc = 0x218950u;
            goto label_218950;
        }
    }
    ctx->pc = 0x218934u;
label_218934:
    // 0x218934: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218938: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21893c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218940: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218944: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x218944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218948: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x218948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21894c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x21894cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_218950:
    // 0x218950: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218954: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x218954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218958: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x218958u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21895c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x21895Cu;
    {
        const bool branch_taken_0x21895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21895c) {
            ctx->pc = 0x218B48u;
            goto label_218b48;
        }
    }
    ctx->pc = 0x218964u;
label_218964:
    // 0x218964: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x218964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x218968: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21896c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21896cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x218970: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x218974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218978: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x218978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21897c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x218980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x218980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x218984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x218984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x218988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21898c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21898cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218990: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x218990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x218994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x218994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218998: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x218998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21899c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21899Cu;
    SET_GPR_U32(ctx, 31, 0x2189A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21899Cu, 0x2189A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2189A4u;
label_2189a4:
    // 0x2189a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2189a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2189ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2189b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2189b4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2189b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2189b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2189b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2189bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2189bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2189c0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2189c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2189c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2189c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2189c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2189c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2189cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2189ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2189d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2189d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2189d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2189d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2189dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2189dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2189e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2189e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2189e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2189e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2189e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2189ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2189ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2189f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2189f4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2189f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2189f8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2189fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218a00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a04: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x218a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218a08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218a10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a14: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x218a14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218a20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218a24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a30: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218a34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a38: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218a3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218a40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218a48: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x218a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x218a4c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x218a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x218a50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x218a54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218a58: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x218a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x218a5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218a64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x218a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x218a68: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x218a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x218a6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x218a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218a70: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a74: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a78: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x218a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x218a7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a80: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a84: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218a88: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a8c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218a90: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x218a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218a98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218a9c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218aa0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x218aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x218aa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218aa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218aac: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ab0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ab4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ab8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218abc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ac0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ac4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x218ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ac8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218acc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218accu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218ad0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x218ad4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ad8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218adc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218ADCu;
    SET_GPR_U32(ctx, 31, 0x218AE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218ADCu, 0x218AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218AE4u;
label_218ae4:
    // 0x218ae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218ae8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218af0: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218af4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218af8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218afc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218AFCu;
    {
        const bool branch_taken_0x218afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218afc) {
            ctx->pc = 0x218B10u;
            goto label_218b10;
        }
    }
    ctx->pc = 0x218B04u;
    // 0x218b04: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x218b04u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218b08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x218B08u;
    {
        const bool branch_taken_0x218b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218b08) {
            ctx->pc = 0x218B38u;
            goto label_218b38;
        }
    }
    ctx->pc = 0x218B10u;
label_218b10:
    // 0x218b10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218b14: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b18: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x218b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x218b1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x218b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x218b20: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x218b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x218b24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218b28: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b2c: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x218b2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x218b30: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x218b30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x218b34: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x218b34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_218b38:
    // 0x218b38: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218b3c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x218b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218b40: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x218b40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x218b44: 0x0  nop
    ctx->pc = 0x218b44u;
    // NOP
label_218b48:
    // 0x218b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218b50: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x218B50u;
    {
        const bool branch_taken_0x218b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x218b50) {
            ctx->pc = 0x218BA8u;
            goto label_218ba8;
        }
    }
    ctx->pc = 0x218B58u;
    // 0x218b58: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x218b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b60: 0x0  nop
    ctx->pc = 0x218b60u;
    // NOP
    // 0x218b64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218b68: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x218b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x218b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b70: 0x0  nop
    ctx->pc = 0x218b70u;
    // NOP
    // 0x218b74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x218b78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x218b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x218b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b80: 0x0  nop
    ctx->pc = 0x218b80u;
    // NOP
    // 0x218b84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218b88: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x218b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x218b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b90: 0x0  nop
    ctx->pc = 0x218b90u;
    // NOP
    // 0x218b94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218b98: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x218b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218b9c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218ba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x218ba4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x218ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_218ba8:
    // 0x218ba8: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x218ba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218bac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218bb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218bb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x218bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218bb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x218bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218bc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x218bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x218bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x218BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218BD4u;
}
