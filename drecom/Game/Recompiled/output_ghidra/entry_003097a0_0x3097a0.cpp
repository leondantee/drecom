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

// Function: entry_003097a0
// Address: 0x3097a0 - 0x30985c
void entry_003097a0_0x3097a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003097a0_0x3097a0");
#endif

    switch (ctx->pc) {
        case 0x309830u: goto label_309830;
        case 0x30983cu: goto label_30983c;
        default: break;
    }

    ctx->pc = 0x3097a0u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x30985Cu;
}
