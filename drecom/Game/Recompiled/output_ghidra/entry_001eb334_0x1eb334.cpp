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

// Function: entry_001eb334
// Address: 0x1eb334 - 0x1eb460
void entry_001eb334_0x1eb334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb334_0x1eb334");
#endif

    switch (ctx->pc) {
        case 0x1eb384u: goto label_1eb384;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb3b0u: goto label_1eb3b0;
        default: break;
    }

    ctx->pc = 0x1eb334u;

    // 0x1eb334: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb338: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1eb338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eb33c: 0x249002d0  addiu       $s0, $a0, 0x2D0
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x1eb340: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x1eb340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1eb344: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x1eb344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
    // 0x1eb348: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb34c: 0xdc480008  ld          $t0, 0x8($v0)
    ctx->pc = 0x1eb34cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb350: 0xffa80110  sd          $t0, 0x110($sp)
    ctx->pc = 0x1eb350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 8));
    // 0x1eb354: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1eb354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb358: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x1eb358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb35c: 0x91221308  lbu         $v0, 0x1308($t1)
    ctx->pc = 0x1eb35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4872)));
    // 0x1eb360: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x1eb360u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb364: 0x31430080  andi        $v1, $t2, 0x80
    ctx->pc = 0x1eb364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)128);
    // 0x1eb368: 0x2505024c  addiu       $a1, $t0, 0x24C
    ctx->pc = 0x1eb368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 588));
    // 0x1eb36c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eb36cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb370: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x1eb370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1eb374: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1eb374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb378: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1eb378u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb37c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x1EB37Cu;
    SET_GPR_U32(ctx, 31, 0x1EB384u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x1EB37Cu, 0x1EB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB384u;
label_1eb384:
    // 0x1eb384: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb388: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1eb388u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eb38c: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1eb390: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1eb390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1eb394: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1eb394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eb398: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1eb398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1eb39c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1eb39cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb3a0: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x1EB3A0u;
    SET_GPR_U32(ctx, 31, 0x1EB3A8u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x1EB3A0u, 0x1EB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3A8u;
label_1eb3a8:
    // 0x1eb3a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EB3A8u;
    SET_GPR_U32(ctx, 31, 0x1EB3B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EB3A8u, 0x1EB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB3B0u;
label_1eb3b0:
    // 0x1eb3b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb3b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb3b4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1eb3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb3b8: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1eb3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1eb3bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1eb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1eb3c0: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1eb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1eb3c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb3c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eb3cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1eb3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1eb3d0: 0x24033001  addiu       $v1, $zero, 0x3001
    ctx->pc = 0x1eb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1eb3d4: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x1eb3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
    // 0x1eb3d8: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1eb3dc: 0xfe2201b0  sd          $v0, 0x1B0($s1)
    ctx->pc = 0x1eb3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 2));
    // 0x1eb3e0: 0x34048900  ori         $a0, $zero, 0x8900
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x1eb3e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1eb3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1eb3e8: 0x24027800  addiu       $v0, $zero, 0x7800
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1eb3ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1eb3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1eb3f0: 0xfe2400f0  sd          $a0, 0xF0($s1)
    ctx->pc = 0x1eb3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 240), GPR_U64(ctx, 4));
    // 0x1eb3f4: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x1eb3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1eb3f8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x1eb3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x1eb3fc: 0x34c707ff  ori         $a3, $a2, 0x7FF
    ctx->pc = 0x1eb3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2047);
    // 0x1eb400: 0xfe270070  sd          $a3, 0x70($s1)
    ctx->pc = 0x1eb400u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 7));
    // 0x1eb404: 0x34088900  ori         $t0, $zero, 0x8900
    ctx->pc = 0x1eb404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x1eb408: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1eb408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb40c: 0x24037800  addiu       $v1, $zero, 0x7800
    ctx->pc = 0x1eb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1eb410: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1eb410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb414: 0xfe220240  sd          $v0, 0x240($s1)
    ctx->pc = 0x1eb414u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 2));
    // 0x1eb418: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x1eb418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1eb41c: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1eb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1eb420: 0x344307ff  ori         $v1, $v0, 0x7FF
    ctx->pc = 0x1eb420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2047);
    // 0x1eb424: 0xfe2301c0  sd          $v1, 0x1C0($s1)
    ctx->pc = 0x1eb424u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 3));
    // 0x1eb428: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb42c: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x1eb42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb434: 0x305e0080  andi        $fp, $v0, 0x80
    ctx->pc = 0x1eb434u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1eb438: 0x17c0003e  bnez        $fp, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB438u;
    {
        const bool branch_taken_0x1eb438 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb438) {
            ctx->pc = 0x1EB534u;
            return;
        }
    }
    ctx->pc = 0x1EB440u;
    // 0x1eb440: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eb444: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x1eb444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1eb448: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB448u;
    {
        const bool branch_taken_0x1eb448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb448) {
            ctx->pc = 0x1EB460u;
            return;
        }
    }
    ctx->pc = 0x1EB450u;
    // 0x1eb450: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb454: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb458: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB458u;
    SET_GPR_U32(ctx, 31, 0x1EB460u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB458u, 0x1EB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB460u;
}
