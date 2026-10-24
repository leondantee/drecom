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

// Function: Em06_R1_dm_handgun
// Address: 0x19b190 - 0x19b368
void Em06_R1_dm_handgun_0x19b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_dm_handgun_0x19b190");
#endif

    switch (ctx->pc) {
        case 0x19b208u: goto label_19b208;
        case 0x19b230u: goto label_19b230;
        case 0x19b284u: goto label_19b284;
        case 0x19b298u: goto label_19b298;
        case 0x19b2b0u: goto label_19b2b0;
        case 0x19b2d0u: goto label_19b2d0;
        case 0x19b2dcu: goto label_19b2dc;
        case 0x19b2ecu: goto label_19b2ec;
        case 0x19b2f8u: goto label_19b2f8;
        default: break;
    }

    ctx->pc = 0x19b190u;

    // 0x19b190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b194: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19b198: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19b198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19b19c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19b1a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b1a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19b1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19b1a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b1ac: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x19B1ACu;
    {
        const bool branch_taken_0x19b1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b1ac) {
            ctx->pc = 0x19B248u;
            goto label_19b248;
        }
    }
    ctx->pc = 0x19B1B4u;
    // 0x19b1b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B1B4u;
    {
        const bool branch_taken_0x19b1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1b4) {
            ctx->pc = 0x19B1C4u;
            goto label_19b1c4;
        }
    }
    ctx->pc = 0x19B1BCu;
    // 0x19b1bc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x19B1BCu;
    {
        const bool branch_taken_0x19b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1bc) {
            ctx->pc = 0x19B358u;
            goto label_19b358;
        }
    }
    ctx->pc = 0x19B1C4u;
label_19b1c4:
    // 0x19b1c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1c8: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19b1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19b1cc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19b1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19b1d0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19b1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b1d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1d8: 0x8c421340  lw          $v0, 0x1340($v0)
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4928)));
    // 0x19b1dc: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x19b1dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19b1e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19B1E0u;
    {
        const bool branch_taken_0x19b1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b1e0) {
            ctx->pc = 0x19B210u;
            goto label_19b210;
        }
    }
    ctx->pc = 0x19B1E8u;
    // 0x19b1e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b1f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b1f4: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x19b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
    // 0x19b1f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b1fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b200: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B200u;
    SET_GPR_U32(ctx, 31, 0x19B208u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B200u, 0x19B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B208u;
label_19b208:
    // 0x19b208: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19B208u;
    {
        const bool branch_taken_0x19b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b208) {
            ctx->pc = 0x19B230u;
            goto label_19b230;
        }
    }
    ctx->pc = 0x19B210u;
label_19b210:
    // 0x19b210: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b214: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b218: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b21c: 0x24061e10  addiu       $a2, $zero, 0x1E10
    ctx->pc = 0x19b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7696));
    // 0x19b220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b224: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b228: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B228u;
    SET_GPR_U32(ctx, 31, 0x19B230u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B228u, 0x19B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B230u;
label_19b230:
    // 0x19b230: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b234: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b234u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b23c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b240: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b244: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_19b248:
    // 0x19b248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b24c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19b24cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19b250: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19b250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b254: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19b254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19b258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b25c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B25Cu;
    {
        const bool branch_taken_0x19b25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b25c) {
            ctx->pc = 0x19B2A0u;
            goto label_19b2a0;
        }
    }
    ctx->pc = 0x19B264u;
    // 0x19b264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b268: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b26c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b270: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19b274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B274u;
    {
        const bool branch_taken_0x19b274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b274) {
            ctx->pc = 0x19B298u;
            goto label_19b298;
        }
    }
    ctx->pc = 0x19B27Cu;
    // 0x19b27c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x19B27Cu;
    SET_GPR_U32(ctx, 31, 0x19B284u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x19B27Cu, 0x19B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B284u;
label_19b284:
    // 0x19b284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b288: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x19b288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19b28c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b290: 0xc0ba2f0  jal         func_2E8BC0
    ctx->pc = 0x19B290u;
    SET_GPR_U32(ctx, 31, 0x19B298u);
    ctx->pc = 0x2E8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BC0u, 0x19B290u, 0x19B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B298u;
label_19b298:
    // 0x19b298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b29c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b29cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_19b2a0:
    // 0x19b2a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b2a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b2a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B2A8u;
    SET_GPR_U32(ctx, 31, 0x19B2B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B2A8u, 0x19B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2B0u;
label_19b2b0:
    // 0x19b2b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2bc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b2c0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b2c4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b2c8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B2C8u;
    SET_GPR_U32(ctx, 31, 0x19B2D0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B2D0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B2D0u) { return; }
    ctx->pc = 0x19B2D0u;
label_19b2d0:
    // 0x19b2d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2d4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B2D4u;
    SET_GPR_U32(ctx, 31, 0x19B2DCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B2D4u, 0x19B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2DCu;
label_19b2dc:
    // 0x19b2dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b2e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B2E4u;
    SET_GPR_U32(ctx, 31, 0x19B2ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B2E4u, 0x19B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2ECu;
label_19b2ec:
    // 0x19b2ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2f0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B2F0u;
    SET_GPR_U32(ctx, 31, 0x19B2F8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B2F0u, 0x19B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B2F8u;
label_19b2f8:
    // 0x19b2f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b2fc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19b2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19b300: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b304: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19b304u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b30c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b30cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b310: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19B310u;
    {
        const bool branch_taken_0x19b310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b310) {
            ctx->pc = 0x19B358u;
            goto label_19b358;
        }
    }
    ctx->pc = 0x19B318u;
    // 0x19b318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b31c: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x19b31cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x19b320: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x19b320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x19b324: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x19b324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b330: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19b330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b338: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b33c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19b33cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19b340: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b344: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19b344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b34c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19b34cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b354: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19b354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19b358:
    // 0x19b358: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19b358u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19b35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19b360: 0x3e00008  jr          $ra
    ctx->pc = 0x19B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B368u;
}
