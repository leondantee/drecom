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

// Function: Em06_R1_dm_handgun_fly
// Address: 0x19b370 - 0x19b7d8
void Em06_R1_dm_handgun_fly_0x19b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_dm_handgun_fly_0x19b370");
#endif

    switch (ctx->pc) {
        case 0x19b3a0u: goto label_19b3a0;
        case 0x19b40cu: goto label_19b40c;
        case 0x19b49cu: goto label_19b49c;
        case 0x19b51cu: goto label_19b51c;
        case 0x19b554u: goto label_19b554;
        case 0x19b564u: goto label_19b564;
        case 0x19b574u: goto label_19b574;
        case 0x19b594u: goto label_19b594;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5e8u: goto label_19b5e8;
        case 0x19b634u: goto label_19b634;
        case 0x19b678u: goto label_19b678;
        case 0x19b690u: goto label_19b690;
        case 0x19b69cu: goto label_19b69c;
        case 0x19b710u: goto label_19b710;
        case 0x19b730u: goto label_19b730;
        case 0x19b750u: goto label_19b750;
        case 0x19b75cu: goto label_19b75c;
        case 0x19b76cu: goto label_19b76c;
        case 0x19b778u: goto label_19b778;
        default: break;
    }

    ctx->pc = 0x19b370u;

    // 0x19b370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b374: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19b378: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x19b37c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x19b380: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19b384: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19b384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19b388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19b388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19b38c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b390: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19b394: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19b398: 0xc058f50  jal         func_163D40
    ctx->pc = 0x19B398u;
    SET_GPR_U32(ctx, 31, 0x19B3A0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x19B398u, 0x19B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B3A0u;
label_19b3a0:
    // 0x19b3a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3a4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x19b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x19b3a8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x19b3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x19b3ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19b3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b3b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19b3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19b3b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b3bc: 0x108300d8  beq         $a0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x19B3BCu;
    {
        const bool branch_taken_0x19b3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b3bc) {
            ctx->pc = 0x19B720u;
            goto label_19b720;
        }
    }
    ctx->pc = 0x19B3C4u;
    // 0x19b3c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b3c8: 0x108300c9  beq         $a0, $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x19B3C8u;
    {
        const bool branch_taken_0x19b3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b3c8) {
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B3D0u;
    // 0x19b3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b3d4: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x19B3D4u;
    {
        const bool branch_taken_0x19b3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b3d4) {
            ctx->pc = 0x19B46Cu;
            goto label_19b46c;
        }
    }
    ctx->pc = 0x19B3DCu;
    // 0x19b3dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B3DCu;
    {
        const bool branch_taken_0x19b3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3dc) {
            ctx->pc = 0x19B3ECu;
            goto label_19b3ec;
        }
    }
    ctx->pc = 0x19B3E4u;
    // 0x19b3e4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x19B3E4u;
    {
        const bool branch_taken_0x19b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b3e4) {
            ctx->pc = 0x19B7C8u;
            goto label_19b7c8;
        }
    }
    ctx->pc = 0x19B3ECu;
label_19b3ec:
    // 0x19b3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b3f8: 0x24066418  addiu       $a2, $zero, 0x6418
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25624));
    // 0x19b3fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b400: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b404: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B404u;
    SET_GPR_U32(ctx, 31, 0x19B40Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B404u, 0x19B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b410: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b418: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19b418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b41c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b420: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x19b424: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19b428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19b42c: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x19b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
    // 0x19b430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b434: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19b434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19b438: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19b438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19b43c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b444: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b448: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19b448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19b44c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19b450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b458: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19b458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x19b45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_19b46c:
    // 0x19b46c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b470: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b47c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19B47Cu;
    {
        const bool branch_taken_0x19b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b47c) {
            ctx->pc = 0x19B4F4u;
            goto label_19b4f4;
        }
    }
    ctx->pc = 0x19B484u;
    // 0x19b484: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b488: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b48c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b490: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b494: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B494u;
    SET_GPR_U32(ctx, 31, 0x19B49Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B494u, 0x19B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B49Cu;
label_19b49c:
    // 0x19b49c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x19b4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b4a4: 0x0  nop
    ctx->pc = 0x19b4a4u;
    // NOP
    // 0x19b4a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b4ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b4b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19b4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b4b8: 0x0  nop
    ctx->pc = 0x19b4b8u;
    // NOP
    // 0x19b4bc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19B4BCu;
    {
        const bool branch_taken_0x19b4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b4bc) {
            ctx->pc = 0x19B4F4u;
            goto label_19b4f4;
        }
    }
    ctx->pc = 0x19B4C4u;
    // 0x19b4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b4c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19b4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b4d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b4d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4d8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x19b4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b4dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4e0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x19b4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4e8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x19b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_19b4f4:
    // 0x19b4f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b4fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b500: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19b504: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B504u;
    {
        const bool branch_taken_0x19b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b504) {
            ctx->pc = 0x19B564u;
            goto label_19b564;
        }
    }
    ctx->pc = 0x19B50Cu;
    // 0x19b50c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b510: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19b514: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x19B514u;
    SET_GPR_U32(ctx, 31, 0x19B51Cu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x19B514u, 0x19B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B51Cu;
label_19b51c:
    // 0x19b51c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b520: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19b520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b524: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x19b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x19b528: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19b52c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b530: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19b530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b534: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x19b538: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19b53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b540: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x19b540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x19b544: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19b548: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19b54c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19B54Cu;
    SET_GPR_U32(ctx, 31, 0x19B554u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19B54Cu, 0x19B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B554u;
label_19b554:
    // 0x19b554: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19b558: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19b558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19b55c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19B55Cu;
    SET_GPR_U32(ctx, 31, 0x19B564u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19B55Cu, 0x19B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B564u;
label_19b564:
    // 0x19b564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b56c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B56Cu;
    SET_GPR_U32(ctx, 31, 0x19B574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B56Cu, 0x19B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B574u;
label_19b574:
    // 0x19b574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b578: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b57c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b580: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b584: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b588: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b58c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B58Cu;
    SET_GPR_U32(ctx, 31, 0x19B594u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B594u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B594u) { return; }
    ctx->pc = 0x19B594u;
label_19b594:
    // 0x19b594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b598: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B598u;
    SET_GPR_U32(ctx, 31, 0x19B5A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B598u, 0x19B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5A0u;
label_19b5a0:
    // 0x19b5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5a4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19b5b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19b5b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19b5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19b5b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5bc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5c4: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b5c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19b5c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19b5cc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19b5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19b5d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5d4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b5d8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b5dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b5e0: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B5E0u;
    SET_GPR_U32(ctx, 31, 0x19B5E8u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B5E0u, 0x19B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B5E8u;
label_19b5e8:
    // 0x19b5e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b5ec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b5f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b5f4: 0x0  nop
    ctx->pc = 0x19b5f4u;
    // NOP
    // 0x19b5f8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x19B5F8u;
    {
        const bool branch_taken_0x19b5f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b5f8) {
            ctx->pc = 0x19B63Cu;
            goto label_19b63c;
        }
    }
    ctx->pc = 0x19B600u;
    // 0x19b600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b604: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19b604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19b608: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B608u;
    {
        const bool branch_taken_0x19b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b608) {
            ctx->pc = 0x19B61Cu;
            goto label_19b61c;
        }
    }
    ctx->pc = 0x19B610u;
    // 0x19b610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b618: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19b618u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_19b61c:
    // 0x19b61c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b620: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b624: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b628: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b62c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B62Cu;
    SET_GPR_U32(ctx, 31, 0x19B634u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B62Cu, 0x19B634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B634u;
label_19b634:
    // 0x19b634: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b638: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19b638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19b63c:
    // 0x19b63c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b640: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b648: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x19b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x19b64c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19B64Cu;
    {
        const bool branch_taken_0x19b64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b64c) {
            ctx->pc = 0x19B680u;
            goto label_19b680;
        }
    }
    ctx->pc = 0x19B654u;
    // 0x19b654: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b658: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b65c: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x19b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x19b660: 0x34427207  ori         $v0, $v0, 0x7207
    ctx->pc = 0x19b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29191);
    // 0x19b664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b668: 0x0  nop
    ctx->pc = 0x19b668u;
    // NOP
    // 0x19b66c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x19b66cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19b670: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19B670u;
    SET_GPR_U32(ctx, 31, 0x19B678u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19B670u, 0x19B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B678u;
label_19b678:
    // 0x19b678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b67c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19b67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_19b680:
    // 0x19b680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b688: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B688u, 0x19B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B690u;
label_19b690:
    // 0x19b690: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b694: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B694u;
    SET_GPR_U32(ctx, 31, 0x19B69Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B694u, 0x19B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B69Cu;
label_19b69c:
    // 0x19b69c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6a0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19b6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19b6a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b6a8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19b6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b6ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b6b4: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x19B6B4u;
    {
        const bool branch_taken_0x19b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6b4) {
            ctx->pc = 0x19B7C8u;
            goto label_19b7c8;
        }
    }
    ctx->pc = 0x19B6BCu;
    // 0x19b6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b6c0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b6c4: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x19b6c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19b6cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19b6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19b6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b6d4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x19b6d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x19b6d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6dc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19b6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19b6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b6e4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19b6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b6e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19B6E8u;
    {
        const bool branch_taken_0x19b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6e8) {
            ctx->pc = 0x19B7C8u;
            goto label_19b7c8;
        }
    }
    ctx->pc = 0x19B6F0u;
label_19b6f0:
    // 0x19b6f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b6fc: 0x24066428  addiu       $a2, $zero, 0x6428
    ctx->pc = 0x19b6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25640));
    // 0x19b700: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b704: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b708: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B708u;
    SET_GPR_U32(ctx, 31, 0x19B710u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B708u, 0x19B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B710u;
label_19b710:
    // 0x19b710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b714: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b71c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_19b720:
    // 0x19b720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b724: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b724u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b728: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B728u;
    SET_GPR_U32(ctx, 31, 0x19B730u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B728u, 0x19B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B730u;
label_19b730:
    // 0x19b730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b734: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b73c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b740: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b744: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b748: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B748u;
    SET_GPR_U32(ctx, 31, 0x19B750u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B750u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B750u) { return; }
    ctx->pc = 0x19B750u;
label_19b750:
    // 0x19b750: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b754: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B754u;
    SET_GPR_U32(ctx, 31, 0x19B75Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B754u, 0x19B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B75Cu;
label_19b75c:
    // 0x19b75c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b760: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b764: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B764u;
    SET_GPR_U32(ctx, 31, 0x19B76Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B764u, 0x19B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B76Cu;
label_19b76c:
    // 0x19b76c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b770: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B770u;
    SET_GPR_U32(ctx, 31, 0x19B778u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B770u, 0x19B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B778u;
label_19b778:
    // 0x19b778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b77c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b780: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B780u;
    {
        const bool branch_taken_0x19b780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b780) {
            ctx->pc = 0x19B7C8u;
            goto label_19b7c8;
        }
    }
    ctx->pc = 0x19B788u;
    // 0x19b788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b78c: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x19b78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x19b790: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x19b790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19b794: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x19b794u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b79c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b7a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b7a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b7acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b7b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b7b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b7c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19b7c8:
    // 0x19b7c8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19b7c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19b7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19b7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B7D8u;
}
