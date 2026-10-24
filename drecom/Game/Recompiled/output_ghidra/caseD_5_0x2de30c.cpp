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

// Function: caseD_5
// Address: 0x2de30c - 0x2de3c4
void caseD_5_0x2de30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2de30c");
#endif

    switch (ctx->pc) {
        case 0x2de31cu: goto label_2de31c;
        case 0x2de328u: goto label_2de328;
        case 0x2de338u: goto label_2de338;
        case 0x2de344u: goto label_2de344;
        case 0x2de368u: goto label_2de368;
        case 0x2de3acu: goto label_2de3ac;
        case 0x2de3bcu: goto label_2de3bc;
        default: break;
    }

    ctx->pc = 0x2de30cu;

    // 0x2de30c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de310: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de314: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DE314u;
    SET_GPR_U32(ctx, 31, 0x2DE31Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DE314u, 0x2DE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE31Cu;
label_2de31c:
    // 0x2de31c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de320: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DE320u;
    SET_GPR_U32(ctx, 31, 0x2DE328u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DE320u, 0x2DE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE328u;
label_2de328:
    // 0x2de328: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de32c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2de32cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2de330: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DE330u;
    SET_GPR_U32(ctx, 31, 0x2DE338u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DE330u, 0x2DE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE338u;
label_2de338:
    // 0x2de338: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de33c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE33Cu;
    SET_GPR_U32(ctx, 31, 0x2DE344u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE33Cu, 0x2DE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE344u;
label_2de344:
    // 0x2de344: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de348: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x2de348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x2de34c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2de34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2de350: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2de350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2de354: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2DE354u;
    {
        const bool branch_taken_0x2de354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de354) {
            ctx->pc = 0x2DE420u;
            return;
        }
    }
    ctx->pc = 0x2DE35Cu;
    // 0x2de35c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de360: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DE360u;
    SET_GPR_U32(ctx, 31, 0x2DE368u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DE360u, 0x2DE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE368u;
label_2de368:
    // 0x2de368: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de36c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2de36cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2de370: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE370u;
    {
        const bool branch_taken_0x2de370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de370) {
            ctx->pc = 0x2DE3C4u;
            return;
        }
    }
    ctx->pc = 0x2DE378u;
    // 0x2de378: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2de378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2de37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de380: 0x0  nop
    ctx->pc = 0x2de380u;
    // NOP
    // 0x2de384: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2de388: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de38c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de390: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2de394: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2de398: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de39c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2de3a0: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
    // 0x2de3a4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DE3A4u;
    SET_GPR_U32(ctx, 31, 0x2DE3ACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE3A4u, 0x2DE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3ACu;
label_2de3ac:
    // 0x2de3ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE3ACu;
    {
        const bool branch_taken_0x2de3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de3ac) {
            ctx->pc = 0x2DE3C4u;
            return;
        }
    }
    ctx->pc = 0x2DE3B4u;
    // 0x2de3b4: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DE3B4u;
    SET_GPR_U32(ctx, 31, 0x2DE3BCu);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE3B4u, 0x2DE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE3BCu;
label_2de3bc:
    // 0x2de3bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de3c0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2de3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2de3c4u;
}
