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

// Function: entry_0024f398
// Address: 0x24f398 - 0x24f54c
void entry_0024f398_0x24f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f398_0x24f398");
#endif

    switch (ctx->pc) {
        case 0x24f490u: goto label_24f490;
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f504u: goto label_24f504;
        case 0x24f540u: goto label_24f540;
        default: break;
    }

    ctx->pc = 0x24f398u;

    // 0x24f398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f39c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f3a0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24f3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f3ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3b0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f3b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f3bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f3c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f3c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f3c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f3cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3d4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f3d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f3e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f3e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f3ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f3f0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3f8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f3fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f400: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f404: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f408: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f410: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f414: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f418: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f41c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f420: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f424: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f428: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f42c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f430: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f438: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f43c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f440: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f44c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f45c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f464: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f468: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f46c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f474: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f480: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f484: 0x24040701  addiu       $a0, $zero, 0x701
    ctx->pc = 0x24f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x24f488: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F488u;
    SET_GPR_U32(ctx, 31, 0x24F490u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F488u, 0x24F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F490u;
label_24f490:
    // 0x24f490: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f490u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f494: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f498: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f49c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f4a0: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f4a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f4ac: 0xa2020270  sb          $v0, 0x270($s0)
    ctx->pc = 0x24f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f4b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f4b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f4b4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F4B4u;
    SET_GPR_U32(ctx, 31, 0x24F4BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F4B4u, 0x24F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4BCu;
label_24f4bc:
    // 0x24f4bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f4cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f4d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f4d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f4d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f4dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f4e0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f4e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f4e4: 0x24041604  addiu       $a0, $zero, 0x1604
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5636));
    // 0x24f4e8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f4ec: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f4f0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F4F0u;
    SET_GPR_U32(ctx, 31, 0x24F4F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F4F0u, 0x24F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4F8u;
label_24f4f8:
    // 0x24f4f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f4f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f4fc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F4FCu;
    SET_GPR_U32(ctx, 31, 0x24F504u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F4FCu, 0x24F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F504u;
label_24f504:
    // 0x24f504: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f508: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f510: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f514: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f518: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f51c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f520: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f524: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f528: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f52c: 0x24042800  addiu       $a0, $zero, 0x2800
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x24f530: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f534: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f538: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F538u;
    SET_GPR_U32(ctx, 31, 0x24F540u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F538u, 0x24F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F540u;
label_24f540:
    // 0x24f540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f544: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F544u;
    SET_GPR_U32(ctx, 31, 0x24F54Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F544u, 0x24F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F54Cu;
}
