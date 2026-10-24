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

// Function: Em10_R1_attack_throw
// Address: 0x12e1e0 - 0x12e3ec
void Em10_R1_attack_throw_0x12e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_attack_throw_0x12e1e0");
#endif

    switch (ctx->pc) {
        case 0x12e268u: goto label_12e268;
        case 0x12e290u: goto label_12e290;
        case 0x12e328u: goto label_12e328;
        case 0x12e354u: goto label_12e354;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e378u: goto label_12e378;
        case 0x12e388u: goto label_12e388;
        case 0x12e394u: goto label_12e394;
        default: break;
    }

    ctx->pc = 0x12e1e0u;

    // 0x12e1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12e1e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12e1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12e1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e1ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12e1f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e1f4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12e1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12e1f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e1fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12e1fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12e200: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12e200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12e204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e208: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x12E208u;
    {
        const bool branch_taken_0x12e208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e208) {
            ctx->pc = 0x12E2A0u;
            goto label_12e2a0;
        }
    }
    ctx->pc = 0x12E210u;
    // 0x12e210: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E210u;
    {
        const bool branch_taken_0x12e210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e210) {
            ctx->pc = 0x12E220u;
            goto label_12e220;
        }
    }
    ctx->pc = 0x12E218u;
    // 0x12e218: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12E218u;
    {
        const bool branch_taken_0x12e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e218) {
            ctx->pc = 0x12E3D8u;
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12E220u;
label_12e220:
    // 0x12e220: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12e224: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12e228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12e22c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12e230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e234: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12e234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12e238: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12e23c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e240: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12E240u;
    {
        const bool branch_taken_0x12e240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e240) {
            ctx->pc = 0x12E270u;
            goto label_12e270;
        }
    }
    ctx->pc = 0x12E248u;
    // 0x12e248: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e24c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e250: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e254: 0x24063c42  addiu       $a2, $zero, 0x3C42
    ctx->pc = 0x12e254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15426));
    // 0x12e258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e25c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e260: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E260u;
    SET_GPR_U32(ctx, 31, 0x12E268u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E260u, 0x12E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E268u;
label_12e268:
    // 0x12e268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12E268u;
    {
        const bool branch_taken_0x12e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e268) {
            ctx->pc = 0x12E290u;
            goto label_12e290;
        }
    }
    ctx->pc = 0x12E270u;
label_12e270:
    // 0x12e270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e274: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e278: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e27c: 0x24063c48  addiu       $a2, $zero, 0x3C48
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15432));
    // 0x12e280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e288: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E288u;
    SET_GPR_U32(ctx, 31, 0x12E290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E288u, 0x12E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E290u;
label_12e290:
    // 0x12e290: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e294: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12e294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12e298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e29c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12e29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12e2a0:
    // 0x12e2a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e2a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e2ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12e2b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2B0u;
    {
        const bool branch_taken_0x12e2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2b0) {
            ctx->pc = 0x12E2CCu;
            goto label_12e2cc;
        }
    }
    ctx->pc = 0x12E2B8u;
    // 0x12e2b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e2c0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x12e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x12e2c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12e2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12e2c8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_12e2cc:
    // 0x12e2cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e2d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e2d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12e2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2DCu;
    {
        const bool branch_taken_0x12e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e2dc) {
            ctx->pc = 0x12E2F8u;
            goto label_12e2f8;
        }
    }
    ctx->pc = 0x12E2E4u;
    // 0x12e2e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e2ec: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12e2f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x12e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12e2f4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x12e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_12e2f8:
    // 0x12e2f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e2fc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12e308: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12E308u;
    {
        const bool branch_taken_0x12e308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e308) {
            ctx->pc = 0x12E35Cu;
            goto label_12e35c;
        }
    }
    ctx->pc = 0x12E310u;
    // 0x12e310: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e314: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12e318: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12e31c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12e320: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12E320u;
    SET_GPR_U32(ctx, 31, 0x12E328u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12E320u, 0x12E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E328u;
label_12e328:
    // 0x12e328: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e32c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12e330: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x12e334: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12e338: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12e338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12e33c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e344: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12e344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12e348: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12e34c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12E34Cu;
    SET_GPR_U32(ctx, 31, 0x12E354u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12E34Cu, 0x12E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E354u;
label_12e354:
    // 0x12e354: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e358: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12e358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12e35c:
    // 0x12e35c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e370: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12E370u;
    SET_GPR_U32(ctx, 31, 0x12E378u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12E370u, 0x12E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E378u;
label_12e378:
    // 0x12e378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12e37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e380: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12E380u;
    SET_GPR_U32(ctx, 31, 0x12E388u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12E380u, 0x12E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E388u;
label_12e388:
    // 0x12e388: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e38c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12E38Cu;
    SET_GPR_U32(ctx, 31, 0x12E394u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12E38Cu, 0x12E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E394u;
label_12e394:
    // 0x12e394: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e398: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12e398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12e39c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x12E39Cu;
    {
        const bool branch_taken_0x12e39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e39c) {
            ctx->pc = 0x12E3D8u;
            goto label_12e3d8;
        }
    }
    ctx->pc = 0x12E3A4u;
    // 0x12e3a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e3a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12e3acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e3b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12e3b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12e3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12e3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e3c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e3cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e3d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12e3d4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12e3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
label_12e3d8:
    // 0x12e3d8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12e3d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e3dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e3e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12e3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12e3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E3ECu;
}
