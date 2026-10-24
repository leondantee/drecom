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

// Function: Em18_R1_escape_L
// Address: 0x2df220 - 0x2df3ac
void Em18_R1_escape_L_0x2df220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_escape_L_0x2df220");
#endif

    switch (ctx->pc) {
        case 0x2df280u: goto label_2df280;
        case 0x2df2a4u: goto label_2df2a4;
        case 0x2df2b4u: goto label_2df2b4;
        case 0x2df2d4u: goto label_2df2d4;
        case 0x2df2e0u: goto label_2df2e0;
        case 0x2df2f0u: goto label_2df2f0;
        case 0x2df2fcu: goto label_2df2fc;
        default: break;
    }

    ctx->pc = 0x2df220u;

    // 0x2df220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2df224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2df228: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2df228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2df22c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df230: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2df230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df234: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2df234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2df238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df23c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2DF23Cu;
    {
        const bool branch_taken_0x2df23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2df23c) {
            ctx->pc = 0x2DF2C4u;
            goto label_2df2c4;
        }
    }
    ctx->pc = 0x2DF244u;
    // 0x2df244: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF244u;
    {
        const bool branch_taken_0x2df244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df244) {
            ctx->pc = 0x2DF254u;
            goto label_2df254;
        }
    }
    ctx->pc = 0x2DF24Cu;
    // 0x2df24c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2DF24Cu;
    {
        const bool branch_taken_0x2df24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df24c) {
            ctx->pc = 0x2DF39Cu;
            goto label_2df39c;
        }
    }
    ctx->pc = 0x2DF254u;
label_2df254:
    // 0x2df254: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2df254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2df258: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df25c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df260: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df268: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df26c: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x2df26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
    // 0x2df270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF278u;
    SET_GPR_U32(ctx, 31, 0x2DF280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF278u, 0x2DF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF280u;
label_2df280:
    // 0x2df280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2df280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2df284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2df288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df28c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DF28Cu;
    {
        const bool branch_taken_0x2df28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2df28c) {
            ctx->pc = 0x2DF2B4u;
            goto label_2df2b4;
        }
    }
    ctx->pc = 0x2DF294u;
    // 0x2df294: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2df298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df29c: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2DF29Cu;
    SET_GPR_U32(ctx, 31, 0x2DF2A4u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2DF29Cu, 0x2DF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2A4u;
label_2df2a4:
    // 0x2df2a4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df2ac: 0xc0b8910  jal         func_2E2440
    ctx->pc = 0x2DF2ACu;
    SET_GPR_U32(ctx, 31, 0x2DF2B4u);
    ctx->pc = 0x2E2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2440u, 0x2DF2ACu, 0x2DF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2B4u;
label_2df2b4:
    // 0x2df2b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df2bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df2c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2df2c4:
    // 0x2df2c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df2c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df2cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF2CCu;
    SET_GPR_U32(ctx, 31, 0x2DF2D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF2CCu, 0x2DF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2D4u;
label_2df2d4:
    // 0x2df2d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DF2D8u;
    SET_GPR_U32(ctx, 31, 0x2DF2E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DF2D8u, 0x2DF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2E0u;
label_2df2e0:
    // 0x2df2e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df2e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df2e8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF2E8u;
    SET_GPR_U32(ctx, 31, 0x2DF2F0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF2E8u, 0x2DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2F0u;
label_2df2f0:
    // 0x2df2f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df2f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF2F4u;
    SET_GPR_U32(ctx, 31, 0x2DF2FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF2F4u, 0x2DF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2FCu;
label_2df2fc:
    // 0x2df2fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df300: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2df300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2df304: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2df304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2df308: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2df308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2df30c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF30Cu;
    {
        const bool branch_taken_0x2df30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df30c) {
            ctx->pc = 0x2DF34Cu;
            goto label_2df34c;
        }
    }
    ctx->pc = 0x2DF314u;
    // 0x2df314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df31c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df320: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df330: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df344: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF344u;
    {
        const bool branch_taken_0x2df344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df344) {
            ctx->pc = 0x2DF39Cu;
            goto label_2df39c;
        }
    }
    ctx->pc = 0x2DF34Cu;
label_2df34c:
    // 0x2df34c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df354: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF354u;
    {
        const bool branch_taken_0x2df354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df354) {
            ctx->pc = 0x2DF39Cu;
            goto label_2df39c;
        }
    }
    ctx->pc = 0x2DF35Cu;
    // 0x2df35c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df360: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2df360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df368: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df36c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df370: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2df370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df378: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df37c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df380: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df388: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df390: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df394: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF394u;
    {
        const bool branch_taken_0x2df394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df394) {
            ctx->pc = 0x2DF39Cu;
            goto label_2df39c;
        }
    }
    ctx->pc = 0x2DF39Cu;
label_2df39c:
    // 0x2df39c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2df39cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df3a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2df3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2df3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF3ACu;
}
