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

// Function: Search_zone
// Address: 0x33c6c0 - 0x33cc90
void Search_zone_0x33c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_zone_0x33c6c0");
#endif

    switch (ctx->pc) {
        case 0x33c714u: goto label_33c714;
        case 0x33c71cu: goto label_33c71c;
        case 0x33c7a0u: goto label_33c7a0;
        case 0x33c7e0u: goto label_33c7e0;
        case 0x33c804u: goto label_33c804;
        case 0x33c998u: goto label_33c998;
        case 0x33ca00u: goto label_33ca00;
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca64u: goto label_33ca64;
        case 0x33cc30u: goto label_33cc30;
        default: break;
    }

    ctx->pc = 0x33c6c0u;

    // 0x33c6c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x33c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x33c6c4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x33c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x33c6c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33c6cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33c6d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33c6d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33c6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c6dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c6e0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33c6e4: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33c6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33c6e8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x33c6e8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c6ec: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33c6ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c6f0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33c6f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c6f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33c6f8: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c6f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c6fc: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c6fcu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c700: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c704: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c708: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x33c708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33c70c: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x33C70Cu;
    {
        const bool branch_taken_0x33c70c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c70c) {
            ctx->pc = 0x33C768u;
            goto label_33c768;
        }
    }
    ctx->pc = 0x33C714u;
label_33c714:
    // 0x33c714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33C714u;
    SET_GPR_U32(ctx, 31, 0x33C71Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33C714u, 0x33C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C71Cu;
label_33c71c:
    // 0x33c71c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33c71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33c720: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c728: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33c728u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33c72c: 0x0  nop
    ctx->pc = 0x33c72cu;
    // NOP
    // 0x33c730: 0x0  nop
    ctx->pc = 0x33c730u;
    // NOP
    // 0x33c734: 0x1010  mfhi        $v0
    ctx->pc = 0x33c734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c738: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c73c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c73cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c740: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c740u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c744: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c744u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c748: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x33c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x33c74c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33c74cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33c750: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c754: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c758: 0x1062ffee  beq         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33C758u;
    {
        const bool branch_taken_0x33c758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c758) {
            ctx->pc = 0x33C714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c714;
        }
    }
    ctx->pc = 0x33C760u;
    // 0x33c760: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x33C760u;
    {
        const bool branch_taken_0x33c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c760) {
            ctx->pc = 0x33CC5Cu;
            goto label_33cc5c;
        }
    }
    ctx->pc = 0x33C768u;
label_33c768:
    // 0x33c768: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c76c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c770: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33c774: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x33C774u;
    {
        const bool branch_taken_0x33c774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33c774) {
            ctx->pc = 0x33C9CCu;
            goto label_33c9cc;
        }
    }
    ctx->pc = 0x33C77Cu;
    // 0x33c77c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33c780: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x33c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x33c784: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c784u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x33c788: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c78c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c790: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33c790u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c794: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33c794u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c798: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x33C798u;
    {
        const bool branch_taken_0x33c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c798) {
            ctx->pc = 0x33C970u;
            goto label_33c970;
        }
    }
    ctx->pc = 0x33C7A0u;
label_33c7a0:
    // 0x33c7a0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c7a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c7a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c7a8: 0x1222006f  beq         $s1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x33C7A8u;
    {
        const bool branch_taken_0x33c7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c7a8) {
            ctx->pc = 0x33C968u;
            goto label_33c968;
        }
    }
    ctx->pc = 0x33C7B0u;
    // 0x33c7b0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33c7b4: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c7bc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c7c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c7c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c7c4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7c8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c7cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33c7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c7d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x33c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c7d8: 0xc040c80  jal         func_103200
    ctx->pc = 0x33C7D8u;
    SET_GPR_U32(ctx, 31, 0x33C7E0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33C7E0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33C7E0u) { return; }
    ctx->pc = 0x33C7E0u;
label_33c7e0:
    // 0x33c7e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x33c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c7e4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x33c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c7e8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33c7e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33c7ec: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c7f0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c7f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33c7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33c7f8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33c7f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33c7fc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x33C7FCu;
    SET_GPR_U32(ctx, 31, 0x33C804u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33C7FCu, 0x33C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C804u;
label_33c804:
    // 0x33c804: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x33c804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x33c808: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x33c808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c80c: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x33c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x33c810: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x33c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x33c814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c818: 0x0  nop
    ctx->pc = 0x33c818u;
    // NOP
    // 0x33c81c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c820: 0x0  nop
    ctx->pc = 0x33c820u;
    // NOP
    // 0x33c824: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x33C824u;
    {
        const bool branch_taken_0x33c824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c824) {
            ctx->pc = 0x33C968u;
            goto label_33c968;
        }
    }
    ctx->pc = 0x33C82Cu;
    // 0x33c82c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33c830: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c838: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c83c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c83cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c840: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c844: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c844u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c848: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33c848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33c84c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c854: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33c854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33c858: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33c858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33c85c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c860: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33C860u;
    {
        const bool branch_taken_0x33c860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c860) {
            ctx->pc = 0x33C8DCu;
            goto label_33c8dc;
        }
    }
    ctx->pc = 0x33C868u;
    // 0x33c868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c86c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C86Cu;
    {
        const bool branch_taken_0x33c86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c86c) {
            ctx->pc = 0x33C87Cu;
            goto label_33c87c;
        }
    }
    ctx->pc = 0x33C874u;
    // 0x33c874: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x33C874u;
    {
        const bool branch_taken_0x33c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c874) {
            ctx->pc = 0x33C938u;
            goto label_33c938;
        }
    }
    ctx->pc = 0x33C87Cu;
label_33c87c:
    // 0x33c87c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c880: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c884: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x33c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c888: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c88c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33c88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c890: 0x0  nop
    ctx->pc = 0x33c890u;
    // NOP
    // 0x33c894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C894u;
    {
        const bool branch_taken_0x33c894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c894) {
            ctx->pc = 0x33C8A0u;
            goto label_33c8a0;
        }
    }
    ctx->pc = 0x33C89Cu;
    // 0x33c89c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c8a0:
    // 0x33c8a0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33c8a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33c8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33c8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c8ac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33c8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33c8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33c8b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c8b8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c8bc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33c8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c8c4: 0x0  nop
    ctx->pc = 0x33c8c4u;
    // NOP
    // 0x33c8c8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x33C8C8u;
    {
        const bool branch_taken_0x33c8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c8c8) {
            ctx->pc = 0x33C938u;
            goto label_33c938;
        }
    }
    ctx->pc = 0x33C8D0u;
    // 0x33c8d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c8d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33C8D4u;
    {
        const bool branch_taken_0x33c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c8d4) {
            ctx->pc = 0x33C938u;
            goto label_33c938;
        }
    }
    ctx->pc = 0x33C8DCu;
label_33c8dc:
    // 0x33c8dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c8e0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c8e4: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x33c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c8e8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33c8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c8ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33c8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c8f0: 0x0  nop
    ctx->pc = 0x33c8f0u;
    // NOP
    // 0x33c8f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C8F4u;
    {
        const bool branch_taken_0x33c8f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c8f4) {
            ctx->pc = 0x33C900u;
            goto label_33c900;
        }
    }
    ctx->pc = 0x33C8FCu;
    // 0x33c8fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c8fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c900:
    // 0x33c900: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x33c900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c904: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33c908: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33c908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33c90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33c90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c910: 0x0  nop
    ctx->pc = 0x33c910u;
    // NOP
    // 0x33c914: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33c914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33c918: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x33c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x33c91c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x33c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x33c920: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x33c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c924: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c928: 0x0  nop
    ctx->pc = 0x33c928u;
    // NOP
    // 0x33c92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C92Cu;
    {
        const bool branch_taken_0x33c92c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c92c) {
            ctx->pc = 0x33C938u;
            goto label_33c938;
        }
    }
    ctx->pc = 0x33C934u;
    // 0x33c934: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c938:
    // 0x33c938: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C938u;
    {
        const bool branch_taken_0x33c938 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c938) {
            ctx->pc = 0x33C94Cu;
            goto label_33c94c;
        }
    }
    ctx->pc = 0x33C940u;
    // 0x33c940: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33c940u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C944u;
    {
        const bool branch_taken_0x33c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c944) {
            ctx->pc = 0x33C968u;
            goto label_33c968;
        }
    }
    ctx->pc = 0x33C94Cu;
label_33c94c:
    // 0x33c94c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33c94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c950: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x33c950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x33c954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c958: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c958u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c95c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c95cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33C960u;
    {
        const bool branch_taken_0x33c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c960) {
            ctx->pc = 0x33C988u;
            goto label_33c988;
        }
    }
    ctx->pc = 0x33C968u;
label_33c968:
    // 0x33c968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33c968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33c96c: 0x0  nop
    ctx->pc = 0x33c96cu;
    // NOP
label_33c970:
    // 0x33c970: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c978: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33c978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33c97c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x33C97Cu;
    {
        const bool branch_taken_0x33c97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c97c) {
            ctx->pc = 0x33C7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c7a0;
        }
    }
    ctx->pc = 0x33C984u;
    // 0x33c984: 0x0  nop
    ctx->pc = 0x33c984u;
    // NOP
label_33c988:
    // 0x33c988: 0x168000b4  bnez        $s4, . + 4 + (0xB4 << 2)
    ctx->pc = 0x33C988u;
    {
        const bool branch_taken_0x33c988 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c988) {
            ctx->pc = 0x33CC5Cu;
            goto label_33cc5c;
        }
    }
    ctx->pc = 0x33C990u;
    // 0x33c990: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33C990u;
    SET_GPR_U32(ctx, 31, 0x33C998u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33C990u, 0x33C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C998u;
label_33c998:
    // 0x33c998: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33c998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33c99c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c9a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c9a4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33c9a4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33c9a8: 0x0  nop
    ctx->pc = 0x33c9a8u;
    // NOP
    // 0x33c9ac: 0x0  nop
    ctx->pc = 0x33c9acu;
    // NOP
    // 0x33c9b0: 0x1010  mfhi        $v0
    ctx->pc = 0x33c9b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c9b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c9b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c9bc: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33c9bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c9c0: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33c9c0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33c9c4: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x33C9C4u;
    {
        const bool branch_taken_0x33c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9c4) {
            ctx->pc = 0x33CC5Cu;
            goto label_33cc5c;
        }
    }
    ctx->pc = 0x33C9CCu;
label_33c9cc:
    // 0x33c9cc: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33c9ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33c9d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33c9d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c9d8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c9e0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c9e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c9e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c9e8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c9ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c9f0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33c9f0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c9f4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33c9f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c9f8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x33C9F8u;
    {
        const bool branch_taken_0x33c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c9f8) {
            ctx->pc = 0x33CC08u;
            goto label_33cc08;
        }
    }
    ctx->pc = 0x33CA00u;
label_33ca00:
    // 0x33ca00: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33ca00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33ca04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ca08: 0x1222007d  beq         $s1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x33CA08u;
    {
        const bool branch_taken_0x33ca08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ca08) {
            ctx->pc = 0x33CC00u;
            goto label_33cc00;
        }
    }
    ctx->pc = 0x33CA10u;
    // 0x33ca10: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33ca14: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33ca18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ca1c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33ca20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33ca20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ca24: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33ca2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca30: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca34: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x33ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33ca38: 0xc040c80  jal         func_103200
    ctx->pc = 0x33CA38u;
    SET_GPR_U32(ctx, 31, 0x33CA40u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33CA40u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33CA40u) { return; }
    ctx->pc = 0x33CA40u;
label_33ca40:
    // 0x33ca40: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x33ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x33ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ca48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33ca48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ca4c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca50: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ca54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ca54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ca58: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33ca58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33ca5c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x33CA5Cu;
    SET_GPR_U32(ctx, 31, 0x33CA64u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33CA5Cu, 0x33CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA64u;
label_33ca64:
    // 0x33ca64: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x33ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x33ca68: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x33ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca6c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33ca70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33ca74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ca78: 0x0  nop
    ctx->pc = 0x33ca78u;
    // NOP
    // 0x33ca7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ca7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ca80: 0x0  nop
    ctx->pc = 0x33ca80u;
    // NOP
    // 0x33ca84: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x33CA84u;
    {
        const bool branch_taken_0x33ca84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ca84) {
            ctx->pc = 0x33CC00u;
            goto label_33cc00;
        }
    }
    ctx->pc = 0x33CA8Cu;
    // 0x33ca8c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33ca90: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33ca94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ca98: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33ca9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33ca9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33caa0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33caa4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33caa8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33caac: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cab4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33cab8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33cabc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cac0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33CAC0u;
    {
        const bool branch_taken_0x33cac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cac0) {
            ctx->pc = 0x33CB58u;
            goto label_33cb58;
        }
    }
    ctx->pc = 0x33CAC8u;
    // 0x33cac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cacc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CACCu;
    {
        const bool branch_taken_0x33cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cacc) {
            ctx->pc = 0x33CADCu;
            goto label_33cadc;
        }
    }
    ctx->pc = 0x33CAD4u;
    // 0x33cad4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x33CAD4u;
    {
        const bool branch_taken_0x33cad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cad4) {
            ctx->pc = 0x33CBD0u;
            goto label_33cbd0;
        }
    }
    ctx->pc = 0x33CADCu;
label_33cadc:
    // 0x33cadc: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cae0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cae4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cae8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33caec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33caf0: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x33caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33caf4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33caf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33caf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cafc: 0x0  nop
    ctx->pc = 0x33cafcu;
    // NOP
    // 0x33cb00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33CB00u;
    {
        const bool branch_taken_0x33cb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb00) {
            ctx->pc = 0x33CB10u;
            goto label_33cb10;
        }
    }
    ctx->pc = 0x33CB08u;
    // 0x33cb08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb0c: 0x0  nop
    ctx->pc = 0x33cb0cu;
    // NOP
label_33cb10:
    // 0x33cb10: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb1c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb24: 0xc4420094  lwc1        $f2, 0x94($v0)
    ctx->pc = 0x33cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cb28: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33cb2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33cb30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cb34: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cb38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33cb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cb3c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33cb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cb40: 0x0  nop
    ctx->pc = 0x33cb40u;
    // NOP
    // 0x33cb44: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x33CB44u;
    {
        const bool branch_taken_0x33cb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb44) {
            ctx->pc = 0x33CBD0u;
            goto label_33cbd0;
        }
    }
    ctx->pc = 0x33CB4Cu;
    // 0x33cb4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33CB50u;
    {
        const bool branch_taken_0x33cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb50) {
            ctx->pc = 0x33CBD0u;
            goto label_33cbd0;
        }
    }
    ctx->pc = 0x33CB58u;
label_33cb58:
    // 0x33cb58: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb64: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb6c: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x33cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cb70: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cb74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33cb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cb78: 0x0  nop
    ctx->pc = 0x33cb78u;
    // NOP
    // 0x33cb7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x33CB7Cu;
    {
        const bool branch_taken_0x33cb7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb7c) {
            ctx->pc = 0x33CB88u;
            goto label_33cb88;
        }
    }
    ctx->pc = 0x33CB84u;
    // 0x33cb84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cb88:
    // 0x33cb88: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb94: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb9c: 0xc4420094  lwc1        $f2, 0x94($v0)
    ctx->pc = 0x33cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cba0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x33cba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cba4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33cba8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33cbac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cbb0: 0x0  nop
    ctx->pc = 0x33cbb0u;
    // NOP
    // 0x33cbb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x33cbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33cbb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x33cbb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cbbc: 0x0  nop
    ctx->pc = 0x33cbbcu;
    // NOP
    // 0x33cbc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33CBC0u;
    {
        const bool branch_taken_0x33cbc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cbc0) {
            ctx->pc = 0x33CBD0u;
            goto label_33cbd0;
        }
    }
    ctx->pc = 0x33CBC8u;
    // 0x33cbc8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbcc: 0x0  nop
    ctx->pc = 0x33cbccu;
    // NOP
label_33cbd0:
    // 0x33cbd0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CBD0u;
    {
        const bool branch_taken_0x33cbd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cbd0) {
            ctx->pc = 0x33CBE4u;
            goto label_33cbe4;
        }
    }
    ctx->pc = 0x33CBD8u;
    // 0x33cbd8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33cbd8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33cbdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CBDCu;
    {
        const bool branch_taken_0x33cbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cbdc) {
            ctx->pc = 0x33CC00u;
            goto label_33cc00;
        }
    }
    ctx->pc = 0x33CBE4u;
label_33cbe4:
    // 0x33cbe4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x33cbe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbe8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x33cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x33cbec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33cbecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33cbf0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33cbf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cbf4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33cbf4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x33cbf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33CBF8u;
    {
        const bool branch_taken_0x33cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cbf8) {
            ctx->pc = 0x33CC20u;
            goto label_33cc20;
        }
    }
    ctx->pc = 0x33CC00u;
label_33cc00:
    // 0x33cc00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33cc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33cc04: 0x0  nop
    ctx->pc = 0x33cc04u;
    // NOP
label_33cc08:
    // 0x33cc08: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cc0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cc10: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33cc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33cc14: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x33CC14u;
    {
        const bool branch_taken_0x33cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cc14) {
            ctx->pc = 0x33CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ca00;
        }
    }
    ctx->pc = 0x33CC1Cu;
    // 0x33cc1c: 0x0  nop
    ctx->pc = 0x33cc1cu;
    // NOP
label_33cc20:
    // 0x33cc20: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x33CC20u;
    {
        const bool branch_taken_0x33cc20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cc20) {
            ctx->pc = 0x33CC5Cu;
            goto label_33cc5c;
        }
    }
    ctx->pc = 0x33CC28u;
    // 0x33cc28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x33CC28u;
    SET_GPR_U32(ctx, 31, 0x33CC30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x33CC28u, 0x33CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC30u;
label_33cc30:
    // 0x33cc30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33cc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33cc34: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cc38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cc3c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x33cc3cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x33cc40: 0x0  nop
    ctx->pc = 0x33cc40u;
    // NOP
    // 0x33cc44: 0x0  nop
    ctx->pc = 0x33cc44u;
    // NOP
    // 0x33cc48: 0x1010  mfhi        $v0
    ctx->pc = 0x33cc48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33cc4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cc50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33cc50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33cc54: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x33cc54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33cc58: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x33cc58u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_33cc5c:
    // 0x33cc5c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x33cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x33cc60: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x33cc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x33cc64: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x33cc64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x33cc68: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x33cc68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33cc6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33cc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33cc70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33cc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33cc74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33cc74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33cc78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33cc78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33cc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33cc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cc84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33cc88: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC90u;
}
