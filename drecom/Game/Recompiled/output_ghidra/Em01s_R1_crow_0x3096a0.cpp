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

// Function: Em01s_R1_crow
// Address: 0x3096a0 - 0x309b1c
void Em01s_R1_crow_0x3096a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_crow_0x3096a0");
#endif

    switch (ctx->pc) {
        case 0x309700u: goto label_309700;
        case 0x309738u: goto label_309738;
        case 0x309744u: goto label_309744;
        case 0x309754u: goto label_309754;
        case 0x309760u: goto label_309760;
        case 0x309830u: goto label_309830;
        case 0x30983cu: goto label_30983c;
        case 0x30985cu: goto label_30985c;
        case 0x30987cu: goto label_30987c;
        default: break;
    }

    ctx->pc = 0x3096a0u;

    // 0x3096a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3096a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3096a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3096a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3096a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3096a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3096ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3096acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3096b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3096b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3096b4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3096b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x3096b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3096b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3096bc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3096bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3096c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3096c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3096c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3096c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3096c8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3096C8u;
    {
        const bool branch_taken_0x3096c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3096c8) {
            ctx->pc = 0x309718u;
            goto label_309718;
        }
    }
    ctx->pc = 0x3096D0u;
    // 0x3096d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3096D0u;
    {
        const bool branch_taken_0x3096d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3096d0) {
            ctx->pc = 0x3096E0u;
            goto label_3096e0;
        }
    }
    ctx->pc = 0x3096D8u;
    // 0x3096d8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3096D8u;
    {
        const bool branch_taken_0x3096d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3096d8) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x3096E0u;
label_3096e0:
    // 0x3096e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3096e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3096e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3096e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3096e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3096e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3096ec: 0x24061e40  addiu       $a2, $zero, 0x1E40
    ctx->pc = 0x3096ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7744));
    // 0x3096f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3096f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3096f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3096f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3096f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3096F8u;
    SET_GPR_U32(ctx, 31, 0x309700u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3096F8u, 0x309700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309700u;
label_309700:
    // 0x309700: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x309700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309704: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x309704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309708: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30970c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30970cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309714: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x309714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_309718:
    // 0x309718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30971c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30971cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x309720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309724: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x309724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x309728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30972c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30972cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309730: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x309730u;
    SET_GPR_U32(ctx, 31, 0x309738u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x309730u, 0x309738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309738u;
label_309738:
    // 0x309738: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30973c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30973Cu;
    SET_GPR_U32(ctx, 31, 0x309744u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30973Cu, 0x309744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309744u;
label_309744:
    // 0x309744: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309748: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309748u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30974c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30974Cu;
    SET_GPR_U32(ctx, 31, 0x309754u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30974Cu, 0x309754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309754u;
label_309754:
    // 0x309754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x309754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309758: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309758u;
    SET_GPR_U32(ctx, 31, 0x309760u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309758u, 0x309760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309760u;
label_309760:
    // 0x309760: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309764: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x309768: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x309768u;
    {
        const bool branch_taken_0x309768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309768) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x309770u;
    // 0x309770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309778: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30977c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309780: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30978c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30978cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309798: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30979c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30979cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3097a0:
    // 0x3097a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3097a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3097a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3097a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3097a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3097a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3097ac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3097acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3097b0: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x3097B0u;
    {
        const bool branch_taken_0x3097b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097b0) {
            ctx->pc = 0x309B00u;
            goto label_309b00;
        }
    }
    ctx->pc = 0x3097B8u;
    // 0x3097b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3097b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3097bc: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3097bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3097c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3097c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3097c4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3097c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3097c8: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x3097C8u;
    {
        const bool branch_taken_0x3097c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097c8) {
            ctx->pc = 0x309998u;
            goto label_309998;
        }
    }
    ctx->pc = 0x3097D0u;
    // 0x3097d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3097d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3097d4: 0x24429710  addiu       $v0, $v0, -0x68F0
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
    // 0x3097d8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3097d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3097dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3097dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399710u));
    // 0x3097e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3097e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3097e4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3097e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3097e8: 0x24429720  addiu       $v0, $v0, -0x68E0
    ctx->pc = 0x3097e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940448));
    // 0x3097ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3097ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3097f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3097f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399720u));
    // 0x3097f4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3097f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3097f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3097f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3097fc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3097fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x309800: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x309800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x309804: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x309804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309808: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x309808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30980c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30980cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x309810: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x309810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x309814: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309818: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x309818u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30981c: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x30981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x309820: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309824: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x309824u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309828: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x309828u;
    SET_GPR_U32(ctx, 31, 0x309830u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x309828u, 0x309830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309830u;
label_309830:
    // 0x309830: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x309830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x309834: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x309834u;
    SET_GPR_U32(ctx, 31, 0x30983Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x309834u, 0x30983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30983Cu;
label_30983c:
    // 0x30983c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309840: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x309840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x309844: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x309844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x309848: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x309848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30984c: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30984cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x309850: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x309850u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x309854: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x309854u;
    {
        const bool branch_taken_0x309854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309854) {
            ctx->pc = 0x309978u;
            goto label_309978;
        }
    }
    ctx->pc = 0x30985Cu;
label_30985c:
    // 0x30985c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30985cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x309860: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x309860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x309864: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x309864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x309868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30986c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309870: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x309870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309874: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x309874u;
    SET_GPR_U32(ctx, 31, 0x30987Cu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x309874u, 0x30987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30987Cu;
label_30987c:
    // 0x30987c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x309880: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x309880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x309884: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x309884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x309888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30988c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309890: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x309890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x309894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309898: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x309898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30989c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x30989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3098a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3098a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3098a4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3098a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3098a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3098ac: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3098acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3098b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3098b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3098b4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3098b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3098b8: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x3098b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x3098bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3098c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3098c4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3098c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3098ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3098d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3098d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3098d4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3098d8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098dc: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3098dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3098e0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3098e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3098e4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3098e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3098e8: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x3098e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x3098ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3098ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3098f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3098f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3098f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3098f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3098f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3098fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3098fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x309900: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x309900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x309904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x309904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x309908: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30990c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309910: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x309914: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x309914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x309918: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x309918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30991c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x30991cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x309920: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309924: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x309924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x309928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x309928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30992c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x30992cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x309930: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309934: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x309934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x309938: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30993c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30993cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309944: 0x0  nop
    ctx->pc = 0x309944u;
    // NOP
    // 0x309948: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x309948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30994c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309954: 0x0  nop
    ctx->pc = 0x309954u;
    // NOP
    // 0x309958: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x309958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30995c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30995cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309960: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309968: 0x0  nop
    ctx->pc = 0x309968u;
    // NOP
    // 0x30996c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x309970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x309974: 0x0  nop
    ctx->pc = 0x309974u;
    // NOP
label_309978:
    // 0x309978: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x309978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30997c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x30997Cu;
    {
        const bool branch_taken_0x30997c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30997c) {
            ctx->pc = 0x30985Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30985c;
        }
    }
    ctx->pc = 0x309984u;
    // 0x309984: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x309984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309988: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x309988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30998c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x30998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x309990: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x309990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x309994: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x309994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_309998:
    // 0x309998: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30999c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x30999cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3099a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3099a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3099a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3099a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3099a8: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3099A8u;
    {
        const bool branch_taken_0x3099a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3099a8) {
            ctx->pc = 0x309B00u;
            goto label_309b00;
        }
    }
    ctx->pc = 0x3099B0u;
    // 0x3099b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3099b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3099b4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3099b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3099b8: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x3099b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x3099bc: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3099bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3099c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3099c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3099c4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3099c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3099c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3099c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3099cc: 0x0  nop
    ctx->pc = 0x3099ccu;
    // NOP
    // 0x3099d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3099d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3099d4: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3099d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3099d8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x3099d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3099dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3099dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3099e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3099e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3099e4: 0x0  nop
    ctx->pc = 0x3099e4u;
    // NOP
    // 0x3099e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3099e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3099ec: 0x0  nop
    ctx->pc = 0x3099ecu;
    // NOP
    // 0x3099f0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3099F0u;
    {
        const bool branch_taken_0x3099f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3099f0) {
            ctx->pc = 0x309A04u;
            goto label_309a04;
        }
    }
    ctx->pc = 0x3099F8u;
    // 0x3099f8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3099f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3099fc: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x3099fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309a00: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_309a04:
    // 0x309a04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309a08: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x309a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309a0c: 0x24703390  addiu       $s0, $v1, 0x3390
    ctx->pc = 0x309a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x309a10: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a14: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x309a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309a18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a20: 0x0  nop
    ctx->pc = 0x309a20u;
    // NOP
    // 0x309a24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309a28: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x309a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309a2c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a38: 0x0  nop
    ctx->pc = 0x309a38u;
    // NOP
    // 0x309a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a40: 0x0  nop
    ctx->pc = 0x309a40u;
    // NOP
    // 0x309a44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309A44u;
    {
        const bool branch_taken_0x309a44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a44) {
            ctx->pc = 0x309A58u;
            goto label_309a58;
        }
    }
    ctx->pc = 0x309A4Cu;
    // 0x309a4c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309a50: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x309a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309a54: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309a54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_309a58:
    // 0x309a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309a5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x309a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309a60: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x309a64: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a68: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x309a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309a6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a74: 0x0  nop
    ctx->pc = 0x309a74u;
    // NOP
    // 0x309a78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309a7c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x309a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309a80: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a8c: 0x0  nop
    ctx->pc = 0x309a8cu;
    // NOP
    // 0x309a90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a94: 0x0  nop
    ctx->pc = 0x309a94u;
    // NOP
    // 0x309a98: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309A98u;
    {
        const bool branch_taken_0x309a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a98) {
            ctx->pc = 0x309AACu;
            goto label_309aac;
        }
    }
    ctx->pc = 0x309AA0u;
    // 0x309aa0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309aa4: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x309aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309aa8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_309aac:
    // 0x309aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309ab0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x309ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309ab4: 0x24703070  addiu       $s0, $v1, 0x3070
    ctx->pc = 0x309ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x309ab8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309abc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x309abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309ac0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ac8: 0x0  nop
    ctx->pc = 0x309ac8u;
    // NOP
    // 0x309acc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309ad0: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x309ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309ad4: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309ad8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ae0: 0x0  nop
    ctx->pc = 0x309ae0u;
    // NOP
    // 0x309ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ae8: 0x0  nop
    ctx->pc = 0x309ae8u;
    // NOP
    // 0x309aec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309AECu;
    {
        const bool branch_taken_0x309aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309aec) {
            ctx->pc = 0x309B00u;
            goto label_309b00;
        }
    }
    ctx->pc = 0x309AF4u;
    // 0x309af4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309af8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x309af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309afc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_309b00:
    // 0x309b00: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x309b00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309b04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x309b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x309b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x309b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309b10: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x309b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x309b14: 0x3e00008  jr          $ra
    ctx->pc = 0x309B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309B1Cu;
}
