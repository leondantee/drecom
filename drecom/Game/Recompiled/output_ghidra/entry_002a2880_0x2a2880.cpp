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

// Function: entry_002a2880
// Address: 0x2a2880 - 0x2a2954
void entry_002a2880_0x2a2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2880_0x2a2880");
#endif

    switch (ctx->pc) {
        case 0x2a2890u: goto label_2a2890;
        case 0x2a28b8u: goto label_2a28b8;
        case 0x2a28e4u: goto label_2a28e4;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a2928u: goto label_2a2928;
        default: break;
    }

    ctx->pc = 0x2a2880u;

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
            return;
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
}
