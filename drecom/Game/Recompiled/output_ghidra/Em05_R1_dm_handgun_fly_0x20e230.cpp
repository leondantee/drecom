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

// Function: Em05_R1_dm_handgun_fly
// Address: 0x20e230 - 0x20e67c
void Em05_R1_dm_handgun_fly_0x20e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_dm_handgun_fly_0x20e230");
#endif

    switch (ctx->pc) {
        case 0x20e264u: goto label_20e264;
        case 0x20e300u: goto label_20e300;
        case 0x20e388u: goto label_20e388;
        case 0x20e3b0u: goto label_20e3b0;
        case 0x20e3d8u: goto label_20e3d8;
        case 0x20e3e8u: goto label_20e3e8;
        case 0x20e3f8u: goto label_20e3f8;
        case 0x20e404u: goto label_20e404;
        case 0x20e44cu: goto label_20e44c;
        case 0x20e4b8u: goto label_20e4b8;
        case 0x20e4d8u: goto label_20e4d8;
        case 0x20e4fcu: goto label_20e4fc;
        case 0x20e540u: goto label_20e540;
        case 0x20e558u: goto label_20e558;
        case 0x20e564u: goto label_20e564;
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e604u: goto label_20e604;
        case 0x20e614u: goto label_20e614;
        case 0x20e620u: goto label_20e620;
        default: break;
    }

    ctx->pc = 0x20e230u;

    // 0x20e230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20e234: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x20e234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e23c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x20e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x20e240: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20e240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e244: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x20e244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x20e248: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x20e24c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20e24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20e250: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e254: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x20e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x20e258: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x20e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20e25c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20E25Cu;
    SET_GPR_U32(ctx, 31, 0x20E264u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20E25Cu, 0x20E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E264u;
label_20e264:
    // 0x20e264: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e268: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x20e26c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x20e26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x20e270: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e274: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20e274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e278: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20e278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20e27c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20e280: 0x108300d9  beq         $a0, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x20E280u;
    {
        const bool branch_taken_0x20e280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e280) {
            ctx->pc = 0x20E5E8u;
            goto label_20e5e8;
        }
    }
    ctx->pc = 0x20E288u;
    // 0x20e288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e28c: 0x108300ca  beq         $a0, $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x20E28Cu;
    {
        const bool branch_taken_0x20e28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e28c) {
            ctx->pc = 0x20E5B8u;
            goto label_20e5b8;
        }
    }
    ctx->pc = 0x20E294u;
    // 0x20e294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e298: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x20E298u;
    {
        const bool branch_taken_0x20e298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e298) {
            ctx->pc = 0x20E360u;
            goto label_20e360;
        }
    }
    ctx->pc = 0x20E2A0u;
    // 0x20e2a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E2A0u;
    {
        const bool branch_taken_0x20e2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e2a0) {
            ctx->pc = 0x20E2B0u;
            goto label_20e2b0;
        }
    }
    ctx->pc = 0x20E2A8u;
    // 0x20e2a8: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x20E2A8u;
    {
        const bool branch_taken_0x20e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e2a8) {
            ctx->pc = 0x20E668u;
            goto label_20e668;
        }
    }
    ctx->pc = 0x20E2B0u;
label_20e2b0:
    // 0x20e2b0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2b8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2bc: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20e2c0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2cc: 0xac4300f4  sw          $v1, 0xF4($v0)
    ctx->pc = 0x20e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 3));
    // 0x20e2d0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2d8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20e2dc: 0xac4300f8  sw          $v1, 0xF8($v0)
    ctx->pc = 0x20e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 3));
    // 0x20e2e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e2e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e2ec: 0x24066418  addiu       $a2, $zero, 0x6418
    ctx->pc = 0x20e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25624));
    // 0x20e2f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e2f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e2f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E2F8u;
    SET_GPR_U32(ctx, 31, 0x20E300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E2F8u, 0x20E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E300u;
label_20e300:
    // 0x20e300: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e304: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20e304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e308: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e30c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20e30cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20e310: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e314: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x20e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x20e318: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x20e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20e31c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e320: 0xac821340  sw          $v0, 0x1340($a0)
    ctx->pc = 0x20e320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 2));
    // 0x20e324: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e328: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x20e328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x20e32c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x20e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x20e330: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x20e330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x20e334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e338: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e33c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x20e340: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20e344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e348: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e34c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x20e350: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e354: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e35c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20e360:
    // 0x20e360: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e364: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e36c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20e370: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20E370u;
    {
        const bool branch_taken_0x20e370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e370) {
            ctx->pc = 0x20E3E8u;
            goto label_20e3e8;
        }
    }
    ctx->pc = 0x20E378u;
    // 0x20e378: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e37c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e380: 0xc0ba6b8  jal         func_2E9AE0
    ctx->pc = 0x20E380u;
    SET_GPR_U32(ctx, 31, 0x20E388u);
    ctx->pc = 0x2E9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9AE0u, 0x20E380u, 0x20E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E388u;
label_20e388:
    // 0x20e388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e38c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e390: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20e394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E398u;
    {
        const bool branch_taken_0x20e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e398) {
            ctx->pc = 0x20E3B0u;
            goto label_20e3b0;
        }
    }
    ctx->pc = 0x20E3A0u;
    // 0x20e3a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3a4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20e3a8: 0xc0bad88  jal         func_2EB620
    ctx->pc = 0x20E3A8u;
    SET_GPR_U32(ctx, 31, 0x20E3B0u);
    ctx->pc = 0x2EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB620u, 0x20E3A8u, 0x20E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3B0u;
label_20e3b0:
    // 0x20e3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e3b4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e3b8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x20e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20e3bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20e3c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e3c4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x20e3c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x20e3c8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20e3cc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20e3d0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20E3D0u;
    SET_GPR_U32(ctx, 31, 0x20E3D8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20E3D0u, 0x20E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3D8u;
label_20e3d8:
    // 0x20e3d8: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20e3dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20e3e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20E3E0u;
    SET_GPR_U32(ctx, 31, 0x20E3E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20E3E0u, 0x20E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3E8u;
label_20e3e8:
    // 0x20e3e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e3f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E3F0u;
    SET_GPR_U32(ctx, 31, 0x20E3F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E3F0u, 0x20E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E3F8u;
label_20e3f8:
    // 0x20e3f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e3fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E3FCu;
    SET_GPR_U32(ctx, 31, 0x20E404u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E3FCu, 0x20E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E404u;
label_20e404:
    // 0x20e404: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e408: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x20e408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e40c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e410: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x20e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e414: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e414u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20e418: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20e418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x20e41c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e420: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x20e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e424: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e428: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x20e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20e42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20e42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20e430: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x20e430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x20e434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e438: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e43c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e440: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e444: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20E444u;
    SET_GPR_U32(ctx, 31, 0x20E44Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20E444u, 0x20E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E44Cu;
label_20e44c:
    // 0x20e44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e450: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x20e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20e454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e458: 0x0  nop
    ctx->pc = 0x20e458u;
    // NOP
    // 0x20e45c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x20E45Cu;
    {
        const bool branch_taken_0x20e45c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20e45c) {
            ctx->pc = 0x20E504u;
            goto label_20e504;
        }
    }
    ctx->pc = 0x20E464u;
    // 0x20e464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e468: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20e468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20e46c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20E46Cu;
    {
        const bool branch_taken_0x20e46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e46c) {
            ctx->pc = 0x20E4E4u;
            goto label_20e4e4;
        }
    }
    ctx->pc = 0x20E474u;
    // 0x20e474: 0x24020520  addiu       $v0, $zero, 0x520
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x20e478: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x20e478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20e47c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e480: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e484: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e488: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20e488u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20e48c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e490: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20e490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20e494: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20e494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20e498: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20e498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20e49c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20e4a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e4a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4ac: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20e4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20e4b0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20E4B0u;
    SET_GPR_U32(ctx, 31, 0x20E4B8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20E4B8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20E4B8u) { return; }
    ctx->pc = 0x20E4B8u;
label_20e4b8:
    // 0x20e4b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20e4bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20e4c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20e4c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20e4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20e4c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20e4cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20e4ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e4d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20E4D0u;
    SET_GPR_U32(ctx, 31, 0x20E4D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20E4D0u, 0x20E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4D8u;
label_20e4d8:
    // 0x20e4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e4dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4e0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x20e4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_20e4e4:
    // 0x20e4e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e4e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20e4ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20e4f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20e4f4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x20E4F4u;
    SET_GPR_U32(ctx, 31, 0x20E4FCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x20E4F4u, 0x20E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E4FCu;
label_20e4fc:
    // 0x20e4fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e500: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x20e500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_20e504:
    // 0x20e504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e508: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e50c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e510: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20e514: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E514u;
    {
        const bool branch_taken_0x20e514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e514) {
            ctx->pc = 0x20E548u;
            goto label_20e548;
        }
    }
    ctx->pc = 0x20E51Cu;
    // 0x20e51c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e520: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e524: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x20e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x20e528: 0x34427207  ori         $v0, $v0, 0x7207
    ctx->pc = 0x20e528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29191);
    // 0x20e52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e530: 0x0  nop
    ctx->pc = 0x20e530u;
    // NOP
    // 0x20e534: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x20e534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e538: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20E538u;
    SET_GPR_U32(ctx, 31, 0x20E540u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20E538u, 0x20E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E540u;
label_20e540:
    // 0x20e540: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e544: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20e544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_20e548:
    // 0x20e548: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e54c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e550: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E550u;
    SET_GPR_U32(ctx, 31, 0x20E558u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E550u, 0x20E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E558u;
label_20e558:
    // 0x20e558: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e55c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E55Cu;
    SET_GPR_U32(ctx, 31, 0x20E564u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E55Cu, 0x20E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E564u;
label_20e564:
    // 0x20e564: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e568: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e56c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e570: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e574: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e578: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e57c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x20E57Cu;
    {
        const bool branch_taken_0x20e57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e57c) {
            ctx->pc = 0x20E668u;
            goto label_20e668;
        }
    }
    ctx->pc = 0x20E584u;
    // 0x20e584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e588: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x20e588u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e58c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x20e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x20e590: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20e594: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e59c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x20e59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x20e5a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5a4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e5a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e5ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e5acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e5b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x20E5B0u;
    {
        const bool branch_taken_0x20e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5b0) {
            ctx->pc = 0x20E668u;
            goto label_20e668;
        }
    }
    ctx->pc = 0x20E5B8u;
label_20e5b8:
    // 0x20e5b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5c0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20e5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20e5c4: 0x24066428  addiu       $a2, $zero, 0x6428
    ctx->pc = 0x20e5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25640));
    // 0x20e5c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e5cc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20e5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20e5d0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20E5D0u;
    SET_GPR_U32(ctx, 31, 0x20E5D8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20E5D0u, 0x20E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5D8u;
label_20e5d8:
    // 0x20e5d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20e5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20e5e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e5e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20e5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20e5e8:
    // 0x20e5e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20e5ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e5f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20E5F0u;
    SET_GPR_U32(ctx, 31, 0x20E5F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20E5F0u, 0x20E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5F8u;
label_20e5f8:
    // 0x20e5f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5fc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20E5FCu;
    SET_GPR_U32(ctx, 31, 0x20E604u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20E5FCu, 0x20E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E604u;
label_20e604:
    // 0x20e604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e608: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e60c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E60Cu;
    SET_GPR_U32(ctx, 31, 0x20E614u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E60Cu, 0x20E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E614u;
label_20e614:
    // 0x20e614: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e618: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E618u;
    SET_GPR_U32(ctx, 31, 0x20E620u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E618u, 0x20E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E620u;
label_20e620:
    // 0x20e620: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e624: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e628: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20E628u;
    {
        const bool branch_taken_0x20e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e628) {
            ctx->pc = 0x20E668u;
            goto label_20e668;
        }
    }
    ctx->pc = 0x20E630u;
    // 0x20e630: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e634: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20e634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e640: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20e640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e644: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e648: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e64c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20e650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e654: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20e654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e658: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e65c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20e65cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20e660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e664: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20e664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20e668:
    // 0x20e668: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x20e668u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e670: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x20e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20e674: 0x3e00008  jr          $ra
    ctx->pc = 0x20E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E67Cu;
}
