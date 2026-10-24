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

// Function: Reset_em
// Address: 0x16f730 - 0x16f98c
void Reset_em_0x16f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset_em_0x16f730");
#endif

    switch (ctx->pc) {
        case 0x16f784u: goto label_16f784;
        case 0x16f794u: goto label_16f794;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f838u: goto label_16f838;
        case 0x16f870u: goto label_16f870;
        case 0x16f888u: goto label_16f888;
        case 0x16f898u: goto label_16f898;
        case 0x16f914u: goto label_16f914;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f968u: goto label_16f968;
        default: break;
    }

    ctx->pc = 0x16f730u;

    // 0x16f730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16f734: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x16f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x16f738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f73c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f74c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x16f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x16f750: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x16f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16f754: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f758: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16f758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16f75c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f760: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x16f764: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16f764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f76c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x16f770: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16f770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16f774: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f778: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x16f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x16f77c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F77Cu;
    SET_GPR_U32(ctx, 31, 0x16F784u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F77Cu, 0x16F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F784u;
label_16f784:
    // 0x16f784: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f788: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x16f78c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x16F78Cu;
    SET_GPR_U32(ctx, 31, 0x16F794u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x16F78Cu, 0x16F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F794u;
label_16f794:
    // 0x16f794: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x16f794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x16f798: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16f798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16f79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f7a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7a4: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x16f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x16f7a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7ac: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x16f7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f7b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16f7b4: 0x244357c0  addiu       $v1, $v0, 0x57C0
    ctx->pc = 0x16f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22464));
    // 0x16f7b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7bc: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x16f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x16f7c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16f7c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7c8: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x16f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x16f7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f7d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7d4: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x16f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x16f7d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7dc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x16f7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f7e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7e4: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x16f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f7e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7ec: 0xe4401314  swc1        $f0, 0x1314($v0)
    ctx->pc = 0x16f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4884), bits); }
    // 0x16f7f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7f4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x16f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f7f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f7fc: 0xe4401318  swc1        $f0, 0x1318($v0)
    ctx->pc = 0x16f7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4888), bits); }
    // 0x16f800: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x16f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f804: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f808: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x16f808u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x16f80c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f810: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f814: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x16f814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x16f818: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f81c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f820: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x16f824: 0xc095228  jal         func_2548A0
    ctx->pc = 0x16F824u;
    SET_GPR_U32(ctx, 31, 0x16F82Cu);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x16F824u, 0x16F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F82Cu;
label_16f82c:
    // 0x16f82c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f830: 0xc096558  jal         func_259560
    ctx->pc = 0x16F830u;
    SET_GPR_U32(ctx, 31, 0x16F838u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x16F830u, 0x16F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F838u;
label_16f838:
    // 0x16f838: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f83c: 0x24520050  addiu       $s2, $v0, 0x50
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x16f840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f844: 0x8c53005c  lw          $s3, 0x5C($v0)
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x16f848: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x16f848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16f84c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f850: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x16f850u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f854: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x16f854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x16f858: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x16f858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
    // 0x16f85c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x16f85cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16f860: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x16f860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16f864: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x16f864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16f868: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x16F868u;
    SET_GPR_U32(ctx, 31, 0x16F870u);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x16F868u, 0x16F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F870u;
label_16f870:
    // 0x16f870: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x16f870u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f874: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x16f874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16f878: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x16f878u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16f87c: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x16f87cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x16f880: 0xc095408  jal         func_255020
    ctx->pc = 0x16F880u;
    SET_GPR_U32(ctx, 31, 0x16F888u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x16F880u, 0x16F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F888u;
label_16f888:
    // 0x16f888: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x16f888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16f88c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16f88cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16F890u;
    {
        const bool branch_taken_0x16f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f890) {
            ctx->pc = 0x16F8B8u;
            goto label_16f8b8;
        }
    }
    ctx->pc = 0x16F898u;
label_16f898:
    // 0x16f898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f89c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f8a0: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x16f8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f8a4: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x16f8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x16f8a8: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x16f8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x16f8ac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x16f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16f8b0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16f8b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f8b4: 0x0  nop
    ctx->pc = 0x16f8b4u;
    // NOP
label_16f8b8:
    // 0x16f8b8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x16f8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x16f8bc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x16f8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16f8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f8c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x16f8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f8c8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x16F8C8u;
    {
        const bool branch_taken_0x16f8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8c8) {
            ctx->pc = 0x16F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f898;
        }
    }
    ctx->pc = 0x16F8D0u;
    // 0x16f8d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f8d4: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x16f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x16f8d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16f8dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f8e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F8E0u;
    {
        const bool branch_taken_0x16f8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f8e0) {
            ctx->pc = 0x16F900u;
            goto label_16f900;
        }
    }
    ctx->pc = 0x16F8E8u;
    // 0x16f8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16f8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16f8ec: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x16f8f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16f8f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f8f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F8F8u;
    {
        const bool branch_taken_0x16f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f8f8) {
            ctx->pc = 0x16F914u;
            goto label_16f914;
        }
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x16f900u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x16f904: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x16f904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16f908: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x16f90c: 0xc09566c  jal         func_2559B0
    ctx->pc = 0x16F90Cu;
    SET_GPR_U32(ctx, 31, 0x16F914u);
    ctx->pc = 0x2559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2559B0u, 0x16F90Cu, 0x16F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F914u;
label_16f914:
    // 0x16f914: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f918: 0xfc400a08  sd          $zero, 0xA08($v0)
    ctx->pc = 0x16f918u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 2568), GPR_U64(ctx, 0));
    // 0x16f91c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f920: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x16f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x16f924: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x16F924u;
    SET_GPR_U32(ctx, 31, 0x16F92Cu);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x16F924u, 0x16F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f930: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x16f934: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F934u;
    {
        const bool branch_taken_0x16f934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f934) {
            ctx->pc = 0x16F94Cu;
            goto label_16f94c;
        }
    }
    ctx->pc = 0x16F93Cu;
    // 0x16f93c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f940: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16f944: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x16f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x16f948: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x16f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_16f94c:
    // 0x16f94c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x16f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f950: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x16f954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F954u;
    {
        const bool branch_taken_0x16f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f954) {
            ctx->pc = 0x16F968u;
            goto label_16f968;
        }
    }
    ctx->pc = 0x16F95Cu;
    // 0x16f95c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f960: 0xc06bf40  jal         func_1AFD00
    ctx->pc = 0x16F960u;
    SET_GPR_U32(ctx, 31, 0x16F968u);
    ctx->pc = 0x1AFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD00u, 0x16F960u, 0x16F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F968u;
label_16f968:
    // 0x16f968: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x16f968u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f96c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f96cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f970: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f980: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16f984: 0x3e00008  jr          $ra
    ctx->pc = 0x16F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F98Cu;
}
