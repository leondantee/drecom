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

// Function: Em08_pos_hosei
// Address: 0x3748d0 - 0x374ae8
void Em08_pos_hosei_0x3748d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_pos_hosei_0x3748d0");
#endif

    switch (ctx->pc) {
        case 0x374908u: goto label_374908;
        case 0x374920u: goto label_374920;
        case 0x374944u: goto label_374944;
        case 0x37496cu: goto label_37496c;
        case 0x374980u: goto label_374980;
        case 0x3749c8u: goto label_3749c8;
        case 0x374a40u: goto label_374a40;
        case 0x374a60u: goto label_374a60;
        case 0x374ab4u: goto label_374ab4;
        case 0x374ad4u: goto label_374ad4;
        default: break;
    }

    ctx->pc = 0x3748d0u;

    // 0x3748d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3748d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3748d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3748d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3748d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3748d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3748dc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x3748dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x3748e0: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x3748e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x3748e4: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x3748e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3748e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3748e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3748ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3748ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3748f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3748F0u;
    {
        const bool branch_taken_0x3748f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3748f0) {
            ctx->pc = 0x374910u;
            goto label_374910;
        }
    }
    ctx->pc = 0x3748F8u;
    // 0x3748f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3748f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3748fc: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x3748fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x374900: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x374900u;
    SET_GPR_U32(ctx, 31, 0x374908u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x374900u, 0x374908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374908u;
label_374908:
    // 0x374908: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x374908u;
    {
        const bool branch_taken_0x374908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374908) {
            ctx->pc = 0x374920u;
            goto label_374920;
        }
    }
    ctx->pc = 0x374910u;
label_374910:
    // 0x374910: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374914: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x374914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x374918: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x374918u;
    SET_GPR_U32(ctx, 31, 0x374920u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x374918u, 0x374920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374920u;
label_374920:
    // 0x374920: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x374920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x374924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x374928: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x374928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37492c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37492Cu;
    {
        const bool branch_taken_0x37492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37492c) {
            ctx->pc = 0x374944u;
            goto label_374944;
        }
    }
    ctx->pc = 0x374934u;
    // 0x374934: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x374934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374938: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x374938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x37493c: 0xc05a400  jal         func_169000
    ctx->pc = 0x37493Cu;
    SET_GPR_U32(ctx, 31, 0x374944u);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x37493Cu, 0x374944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374944u;
label_374944:
    // 0x374944: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x374944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x374948: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37494c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x374950: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x374950u;
    {
        const bool branch_taken_0x374950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374950) {
            ctx->pc = 0x3749F0u;
            goto label_3749f0;
        }
    }
    ctx->pc = 0x374958u;
    // 0x374958: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37495c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374960: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x374960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x374964: 0xc040c9e  jal         func_103278
    ctx->pc = 0x374964u;
    SET_GPR_U32(ctx, 31, 0x37496Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x37496Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37496Cu) { return; }
    ctx->pc = 0x37496Cu;
label_37496c:
    // 0x37496c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x37496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374970: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x374970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374974: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x374974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x374978: 0xc040c9e  jal         func_103278
    ctx->pc = 0x374978u;
    SET_GPR_U32(ctx, 31, 0x374980u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x374980u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374980u) { return; }
    ctx->pc = 0x374980u;
label_374980:
    // 0x374980: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x374980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374984: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x374984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x374988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37498c: 0x0  nop
    ctx->pc = 0x37498cu;
    // NOP
    // 0x374990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x374990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x374994: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374998: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x374998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37499c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3749a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3749a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749a4: 0x0  nop
    ctx->pc = 0x3749a4u;
    // NOP
    // 0x3749a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3749a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3749ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3749acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3749b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3749b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3749b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3749b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3749b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3749b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3749bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3749bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3749c0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3749C0u;
    SET_GPR_U32(ctx, 31, 0x3749C8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3749C0u, 0x3749C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749C8u;
label_3749c8:
    // 0x3749c8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3749c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3749cc: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x3749ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x3749d0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x3749d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x3749d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3749d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749d8: 0x0  nop
    ctx->pc = 0x3749d8u;
    // NOP
    // 0x3749dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3749dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3749e0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3749E0u;
    {
        const bool branch_taken_0x3749e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3749e0) {
            ctx->pc = 0x3749F0u;
            goto label_3749f0;
        }
    }
    ctx->pc = 0x3749E8u;
    // 0x3749e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3749e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3749ec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3749ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3749f0:
    // 0x3749f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3749f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3749f4: 0x0  nop
    ctx->pc = 0x3749f4u;
    // NOP
    // 0x3749f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3749f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3749fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3749fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a00: 0x0  nop
    ctx->pc = 0x374a00u;
    // NOP
    // 0x374a04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374a08: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a10: 0x0  nop
    ctx->pc = 0x374a10u;
    // NOP
    // 0x374a14: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x374a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x374a18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a20: 0x0  nop
    ctx->pc = 0x374a20u;
    // NOP
    // 0x374a24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x374a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x374a28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374a2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x374a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a30: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x374a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374a34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a38: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x374A38u;
    SET_GPR_U32(ctx, 31, 0x374A40u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x374A40u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374A40u) { return; }
    ctx->pc = 0x374A40u;
label_374a40:
    // 0x374a40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374a44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x374a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374a48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x374a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x374a4c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x374a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x374a50: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374a54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x374a54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374a58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x374A58u;
    SET_GPR_U32(ctx, 31, 0x374A60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x374A58u, 0x374A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A60u;
label_374a60:
    // 0x374a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a64: 0x0  nop
    ctx->pc = 0x374a64u;
    // NOP
    // 0x374a68: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x374a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x374a6c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a74: 0x0  nop
    ctx->pc = 0x374a74u;
    // NOP
    // 0x374a78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x374a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x374a7c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x374a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x374a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a84: 0x0  nop
    ctx->pc = 0x374a84u;
    // NOP
    // 0x374a88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x374a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x374a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374a94: 0x0  nop
    ctx->pc = 0x374a94u;
    // NOP
    // 0x374a98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x374a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x374a9c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374aa0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x374aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374aa4: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x374aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374aa8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374aac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x374AACu;
    SET_GPR_U32(ctx, 31, 0x374AB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x374AB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374AB4u) { return; }
    ctx->pc = 0x374AB4u;
label_374ab4:
    // 0x374ab4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x374ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x374ab8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x374ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374abc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x374abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x374ac0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x374ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x374ac4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x374ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374ac8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x374ac8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374acc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x374ACCu;
    SET_GPR_U32(ctx, 31, 0x374AD4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x374ACCu, 0x374AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AD4u;
label_374ad4:
    // 0x374ad4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x374ad4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374adc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x374adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x374ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x374AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374AE8u;
}
