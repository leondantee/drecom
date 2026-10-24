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

// Function: Em0f_R1_turn
// Address: 0x30d380 - 0x30d61c
void Em0f_R1_turn_0x30d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_turn_0x30d380");
#endif

    switch (ctx->pc) {
        case 0x30d3d8u: goto label_30d3d8;
        case 0x30d484u: goto label_30d484;
        case 0x30d4acu: goto label_30d4ac;
        case 0x30d4d4u: goto label_30d4d4;
        case 0x30d504u: goto label_30d504;
        case 0x30d510u: goto label_30d510;
        case 0x30d520u: goto label_30d520;
        case 0x30d52cu: goto label_30d52c;
        default: break;
    }

    ctx->pc = 0x30d380u;

    // 0x30d380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d384: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30d384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30d388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d38c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30d390: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d394: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30d394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d398: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30d398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30d39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d3a0: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x30D3A0u;
    {
        const bool branch_taken_0x30d3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d3a0) {
            ctx->pc = 0x30D4E4u;
            goto label_30d4e4;
        }
    }
    ctx->pc = 0x30D3A8u;
    // 0x30d3a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D3A8u;
    {
        const bool branch_taken_0x30d3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3a8) {
            ctx->pc = 0x30D3B8u;
            goto label_30d3b8;
        }
    }
    ctx->pc = 0x30D3B0u;
    // 0x30d3b0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x30D3B0u;
    {
        const bool branch_taken_0x30d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3b0) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D3B8u;
label_30d3b8:
    // 0x30d3b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d3c8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d3cc: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30d3d0: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30D3D0u;
    SET_GPR_U32(ctx, 31, 0x30D3D8u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30D3D0u, 0x30D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D3D8u;
label_30d3d8:
    // 0x30d3d8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30d3d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30d3dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d3e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3e4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d3e8: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x30d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x30d3ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D3ECu;
    {
        const bool branch_taken_0x30d3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d3ec) {
            ctx->pc = 0x30D3FCu;
            goto label_30d3fc;
        }
    }
    ctx->pc = 0x30D3F4u;
    // 0x30d3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d3f8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30d3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30d3fc:
    // 0x30d3fc: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x30d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30d400: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D400u;
    {
        const bool branch_taken_0x30d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d400) {
            ctx->pc = 0x30D420u;
            goto label_30d420;
        }
    }
    ctx->pc = 0x30D408u;
    // 0x30d408: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30d40c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D40Cu;
    {
        const bool branch_taken_0x30d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d40c) {
            ctx->pc = 0x30D420u;
            goto label_30d420;
        }
    }
    ctx->pc = 0x30D414u;
    // 0x30d414: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d418: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d41c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d41cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30d420:
    // 0x30d420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d424: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30d428: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x30d428u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d42c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d430: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30d430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30d434: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30d434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30d438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30d43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d440: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30D440u;
    {
        const bool branch_taken_0x30d440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d440) {
            ctx->pc = 0x30D4B4u;
            goto label_30d4b4;
        }
    }
    ctx->pc = 0x30D448u;
    // 0x30d448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d44c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D44Cu;
    {
        const bool branch_taken_0x30d44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d44c) {
            ctx->pc = 0x30D48Cu;
            goto label_30d48c;
        }
    }
    ctx->pc = 0x30D454u;
    // 0x30d454: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D454u;
    {
        const bool branch_taken_0x30d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d454) {
            ctx->pc = 0x30D464u;
            goto label_30d464;
        }
    }
    ctx->pc = 0x30D45Cu;
    // 0x30d45c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30D45Cu;
    {
        const bool branch_taken_0x30d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d45c) {
            ctx->pc = 0x30D4D4u;
            goto label_30d4d4;
        }
    }
    ctx->pc = 0x30D464u;
label_30d464:
    // 0x30d464: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d46c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d470: 0x24061403  addiu       $a2, $zero, 0x1403
    ctx->pc = 0x30d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5123));
    // 0x30d474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d478: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d47c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D47Cu;
    SET_GPR_U32(ctx, 31, 0x30D484u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D47Cu, 0x30D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D484u;
label_30d484:
    // 0x30d484: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D484u;
    {
        const bool branch_taken_0x30d484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d484) {
            ctx->pc = 0x30D4D4u;
            goto label_30d4d4;
        }
    }
    ctx->pc = 0x30D48Cu;
label_30d48c:
    // 0x30d48c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d490: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d494: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d498: 0x24061404  addiu       $a2, $zero, 0x1404
    ctx->pc = 0x30d498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5124));
    // 0x30d49c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d4a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d4a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D4A4u;
    SET_GPR_U32(ctx, 31, 0x30D4ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D4A4u, 0x30D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4ACu;
label_30d4ac:
    // 0x30d4ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30D4ACu;
    {
        const bool branch_taken_0x30d4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d4ac) {
            ctx->pc = 0x30D4D4u;
            goto label_30d4d4;
        }
    }
    ctx->pc = 0x30D4B4u;
label_30d4b4:
    // 0x30d4b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d4c0: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x30d4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x30d4c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d4c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d4cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D4CCu;
    SET_GPR_U32(ctx, 31, 0x30D4D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D4CCu, 0x30D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D4D4u;
label_30d4d4:
    // 0x30d4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4d8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d4e0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30d4e4:
    // 0x30d4e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4e8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30d4e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30d4ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d4f0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30d4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30d4f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d4f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d4f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d4fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D4FCu;
    SET_GPR_U32(ctx, 31, 0x30D504u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D4FCu, 0x30D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D504u;
label_30d504:
    // 0x30d504: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d508: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D508u;
    SET_GPR_U32(ctx, 31, 0x30D510u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D508u, 0x30D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D510u;
label_30d510:
    // 0x30d510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d518: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D518u;
    SET_GPR_U32(ctx, 31, 0x30D520u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D518u, 0x30D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D520u;
label_30d520:
    // 0x30d520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d524: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D524u;
    SET_GPR_U32(ctx, 31, 0x30D52Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D524u, 0x30D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D52Cu;
label_30d52c:
    // 0x30d52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d530: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d534: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x30D534u;
    {
        const bool branch_taken_0x30d534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d534) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D53Cu;
    // 0x30d53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d544: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d54c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d550: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d554: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d558: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d55c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d560: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d56c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d570: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d574: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x30d574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d578: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d57c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30d57cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30d580: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30d580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d584: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d584u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30d588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d58c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x30D58Cu;
    {
        const bool branch_taken_0x30d58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d58c) {
            ctx->pc = 0x30D5F0u;
            goto label_30d5f0;
        }
    }
    ctx->pc = 0x30D594u;
    // 0x30d594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d598: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30D598u;
    {
        const bool branch_taken_0x30d598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d598) {
            ctx->pc = 0x30D5D0u;
            goto label_30d5d0;
        }
    }
    ctx->pc = 0x30D5A0u;
    // 0x30d5a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D5A0u;
    {
        const bool branch_taken_0x30d5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5a0) {
            ctx->pc = 0x30D5B0u;
            goto label_30d5b0;
        }
    }
    ctx->pc = 0x30D5A8u;
    // 0x30d5a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30D5A8u;
    {
        const bool branch_taken_0x30d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5a8) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D5B0u;
label_30d5b0:
    // 0x30d5b0: 0x3c033f3b  lui         $v1, 0x3F3B
    ctx->pc = 0x30d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16187 << 16));
    // 0x30d5b4: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x30d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x30d5b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d5bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d5c0: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x30d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30d5c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30d5c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30D5C8u;
    {
        const bool branch_taken_0x30d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5c8) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D5D0u;
label_30d5d0:
    // 0x30d5d0: 0x3c03bf3b  lui         $v1, 0xBF3B
    ctx->pc = 0x30d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48955 << 16));
    // 0x30d5d4: 0x3463a866  ori         $v1, $v1, 0xA866
    ctx->pc = 0x30d5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43110);
    // 0x30d5d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d5e0: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x30d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30d5e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x30d5e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30D5E8u;
    {
        const bool branch_taken_0x30d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5e8) {
            ctx->pc = 0x30D608u;
            goto label_30d608;
        }
    }
    ctx->pc = 0x30D5F0u;
label_30d5f0:
    // 0x30d5f0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x30d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x30d5f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x30d5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x30d5f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30d5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30d5fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d600: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x30d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30d604: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30d604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_30d608:
    // 0x30d608: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30d608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d60c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d610: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30d614: 0x3e00008  jr          $ra
    ctx->pc = 0x30D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D61Cu;
}
