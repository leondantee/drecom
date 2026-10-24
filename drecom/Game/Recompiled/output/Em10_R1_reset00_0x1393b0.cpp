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

// Function: Em10_R1_reset00
// Address: 0x1393b0 - 0x13960c
void Em10_R1_reset00_0x1393b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_reset00_0x1393b0");
#endif

    switch (ctx->pc) {
        case 0x13941cu: goto label_13941c;
        case 0x139480u: goto label_139480;
        case 0x139518u: goto label_139518;
        case 0x139558u: goto label_139558;
        case 0x139570u: goto label_139570;
        case 0x13957cu: goto label_13957c;
        case 0x139594u: goto label_139594;
        case 0x1395a4u: goto label_1395a4;
        case 0x1395b0u: goto label_1395b0;
        default: break;
    }

    ctx->pc = 0x1393b0u;

    // 0x1393b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1393b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1393b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1393b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1393b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1393bc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1393bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1393c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1393c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1393c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1393c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1393c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1393cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1393ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1393d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1393d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1393d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1393d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1393d8: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1393D8u;
    {
        const bool branch_taken_0x1393d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1393d8) {
            ctx->pc = 0x139584u;
            goto label_139584;
        }
    }
    ctx->pc = 0x1393E0u;
    // 0x1393e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1393e4: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1393E4u;
    {
        const bool branch_taken_0x1393e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1393e4) {
            ctx->pc = 0x13946Cu;
            goto label_13946c;
        }
    }
    ctx->pc = 0x1393ECu;
    // 0x1393ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1393ECu;
    {
        const bool branch_taken_0x1393ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393ec) {
            ctx->pc = 0x1393FCu;
            goto label_1393fc;
        }
    }
    ctx->pc = 0x1393F4u;
    // 0x1393f4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1393F4u;
    {
        const bool branch_taken_0x1393f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393f4) {
            ctx->pc = 0x1395F8u;
            goto label_1395f8;
        }
    }
    ctx->pc = 0x1393FCu;
label_1393fc:
    // 0x1393fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1393fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139400: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139408: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x13940c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x139410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139414u;
    SET_GPR_U32(ctx, 31, 0x13941Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139414u, 0x13941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13941Cu;
label_13941c:
    // 0x13941c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x139420: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139424: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x139424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x139428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13942c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139430: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x139430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x139434: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x139434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x139438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13943c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139440: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x139440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x139444: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x139448: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x139448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13944c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x13944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x139450: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x139454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139458: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x139458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13945c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x139460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x139464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x139468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_13946c:
    // 0x13946c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139470: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x139470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139474: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x139474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139478: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x139478u;
    SET_GPR_U32(ctx, 31, 0x139480u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x139478u, 0x139480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139480u;
label_139480:
    // 0x139480: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x139480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x139484: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139488: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x139488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13948c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139490: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x139490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x139494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x139498: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13949c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x13949cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394a0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1394a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394a8: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1394acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1394b0: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1394b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394b8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1394b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1394bc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1394bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1394c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1394c4: 0x0  nop
    ctx->pc = 0x1394c4u;
    // NOP
    // 0x1394c8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1394C8u;
    {
        const bool branch_taken_0x1394c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1394c8) {
            ctx->pc = 0x139528u;
            goto label_139528;
        }
    }
    ctx->pc = 0x1394D0u;
    // 0x1394d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1394d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1394d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394d8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1394d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1394dc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1394dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1394e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394e4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1394e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1394e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1394e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1394ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1394f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1394f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1394f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1394f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1394f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1394fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1394fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x139500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x139504: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x139504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x139508: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x139508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13950c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13950cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x139510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x139510u;
    SET_GPR_U32(ctx, 31, 0x139518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x139510u, 0x139518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139518u;
label_139518:
    // 0x139518: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x139518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13951c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139520: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x139520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x139524: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x139524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_139528:
    // 0x139528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13952c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x139530: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x139530u;
    {
        const bool branch_taken_0x139530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139530) {
            ctx->pc = 0x139560u;
            goto label_139560;
        }
    }
    ctx->pc = 0x139538u;
    // 0x139538: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13953c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x139544: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x139544u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x139548: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13954c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139550: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x139550u;
    SET_GPR_U32(ctx, 31, 0x139558u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x139550u, 0x139558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139558u;
label_139558:
    // 0x139558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139558u;
    {
        const bool branch_taken_0x139558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139558) {
            ctx->pc = 0x139570u;
            goto label_139570;
        }
    }
    ctx->pc = 0x139560u;
label_139560:
    // 0x139560: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139564: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x139564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x139568: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x139568u;
    SET_GPR_U32(ctx, 31, 0x139570u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x139568u, 0x139570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139570u;
label_139570:
    // 0x139570: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139574: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139574u;
    SET_GPR_U32(ctx, 31, 0x13957Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139574u, 0x13957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13957Cu;
label_13957c:
    // 0x13957c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13957Cu;
    {
        const bool branch_taken_0x13957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13957c) {
            ctx->pc = 0x1395F8u;
            goto label_1395f8;
        }
    }
    ctx->pc = 0x139584u;
label_139584:
    // 0x139584: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13958c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13958Cu;
    SET_GPR_U32(ctx, 31, 0x139594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13958Cu, 0x139594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139594u;
label_139594:
    // 0x139594: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x139598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13959c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13959Cu;
    SET_GPR_U32(ctx, 31, 0x1395A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13959Cu, 0x1395A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395A4u;
label_1395a4:
    // 0x1395a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395a8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1395A8u;
    SET_GPR_U32(ctx, 31, 0x1395B0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1395A8u, 0x1395B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395B0u;
label_1395b0:
    // 0x1395b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395b4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1395b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1395b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1395B8u;
    {
        const bool branch_taken_0x1395b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395b8) {
            ctx->pc = 0x1395F8u;
            goto label_1395f8;
        }
    }
    ctx->pc = 0x1395C0u;
    // 0x1395c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1395c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1395c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1395c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1395cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1395ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1395d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1395d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1395d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1395dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1395e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1395ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1395ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1395f0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1395F0u;
    {
        const bool branch_taken_0x1395f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1395f0) {
            ctx->pc = 0x1395F8u;
            goto label_1395f8;
        }
    }
    ctx->pc = 0x1395F8u;
label_1395f8:
    // 0x1395f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1395f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1395fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1395fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139600: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x139604: 0x3e00008  jr          $ra
    ctx->pc = 0x139604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13960Cu;
}
