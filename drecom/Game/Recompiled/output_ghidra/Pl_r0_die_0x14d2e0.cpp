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

// Function: Pl_r0_die
// Address: 0x14d2e0 - 0x14d488
void Pl_r0_die_0x14d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_die_0x14d2e0");
#endif

    switch (ctx->pc) {
        case 0x14d34cu: goto label_14d34c;
        case 0x14d378u: goto label_14d378;
        case 0x14d384u: goto label_14d384;
        case 0x14d398u: goto label_14d398;
        case 0x14d3a4u: goto label_14d3a4;
        case 0x14d3f4u: goto label_14d3f4;
        case 0x14d420u: goto label_14d420;
        case 0x14d434u: goto label_14d434;
        case 0x14d440u: goto label_14d440;
        default: break;
    }

    ctx->pc = 0x14d2e0u;

    // 0x14d2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14d2e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14d2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14d2e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14d2ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d2f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14d2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d2f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14d2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d2f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d2fc: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x14D2FCu;
    {
        const bool branch_taken_0x14d2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d2fc) {
            ctx->pc = 0x14D410u;
            goto label_14d410;
        }
    }
    ctx->pc = 0x14D304u;
    // 0x14d304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d308: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x14D308u;
    {
        const bool branch_taken_0x14d308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d308) {
            ctx->pc = 0x14D3CCu;
            goto label_14d3cc;
        }
    }
    ctx->pc = 0x14D310u;
    // 0x14d310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d314: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14D314u;
    {
        const bool branch_taken_0x14d314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d314) {
            ctx->pc = 0x14D368u;
            goto label_14d368;
        }
    }
    ctx->pc = 0x14D31Cu;
    // 0x14d31c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D31Cu;
    {
        const bool branch_taken_0x14d31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d31c) {
            ctx->pc = 0x14D32Cu;
            goto label_14d32c;
        }
    }
    ctx->pc = 0x14D324u;
    // 0x14d324: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14D324u;
    {
        const bool branch_taken_0x14d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d324) {
            ctx->pc = 0x14D478u;
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D32Cu;
label_14d32c:
    // 0x14d32c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d330: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14d338: 0x2406005f  addiu       $a2, $zero, 0x5F
    ctx->pc = 0x14d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x14d33c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D344u;
    SET_GPR_U32(ctx, 31, 0x14D34Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D344u, 0x14D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D34Cu;
label_14d34c:
    // 0x14d34c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d350: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d354: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14d354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d358: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d35c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d364: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d368:
    // 0x14d368: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d36c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d36cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d370: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D370u;
    SET_GPR_U32(ctx, 31, 0x14D378u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D370u, 0x14D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D378u;
label_14d378:
    // 0x14d378: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d37c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D37Cu;
    SET_GPR_U32(ctx, 31, 0x14D384u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D37Cu, 0x14D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D384u;
label_14d384:
    // 0x14d384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d38c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d390: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D390u;
    SET_GPR_U32(ctx, 31, 0x14D398u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D390u, 0x14D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D398u;
label_14d398:
    // 0x14d398: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d39c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D39Cu;
    SET_GPR_U32(ctx, 31, 0x14D3A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D39Cu, 0x14D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3A4u;
label_14d3a4:
    // 0x14d3a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d3ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x14D3ACu;
    {
        const bool branch_taken_0x14d3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3ac) {
            ctx->pc = 0x14D478u;
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D3B4u;
    // 0x14d3b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14d3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14d3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14d3c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14d3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d3c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14D3C4u;
    {
        const bool branch_taken_0x14d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d3c4) {
            ctx->pc = 0x14D478u;
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D3CCu;
label_14d3cc:
    // 0x14d3cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3d0: 0xac401390  sw          $zero, 0x1390($v0)
    ctx->pc = 0x14d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 0));
    // 0x14d3d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14d3e0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14d3e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d3e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d3ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D3ECu;
    SET_GPR_U32(ctx, 31, 0x14D3F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D3ECu, 0x14D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3F4u;
label_14d3f4:
    // 0x14d3f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14d3f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d3fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14d400: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d404: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d40c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d40cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d410:
    // 0x14d410: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D418u;
    SET_GPR_U32(ctx, 31, 0x14D420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D418u, 0x14D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D420u;
label_14d420:
    // 0x14d420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d424: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d42c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D42Cu;
    SET_GPR_U32(ctx, 31, 0x14D434u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D42Cu, 0x14D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D434u;
label_14d434:
    // 0x14d434: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d434u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d438: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D438u;
    SET_GPR_U32(ctx, 31, 0x14D440u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D438u, 0x14D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D440u;
label_14d440:
    // 0x14d440: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d444: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x14d448: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d44c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x14d44cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14d450: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d454: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x14d454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x14d458: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D458u;
    {
        const bool branch_taken_0x14d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d458) {
            ctx->pc = 0x14D478u;
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D460u;
    // 0x14d460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14d464: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x14d464u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14d468: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x14d468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x14d46c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x14d46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14d470: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14d474: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x14d474u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
label_14d478:
    // 0x14d478: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14d478u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d47c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14d47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14d480: 0x3e00008  jr          $ra
    ctx->pc = 0x14D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D488u;
}
