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

// Function: entry_0024f1f8
// Address: 0x24f1f8 - 0x24f398
void entry_0024f1f8_0x24f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024f1f8_0x24f1f8");
#endif

    switch (ctx->pc) {
        case 0x24f2dcu: goto label_24f2dc;
        case 0x24f300u: goto label_24f300;
        case 0x24f33cu: goto label_24f33c;
        case 0x24f348u: goto label_24f348;
        case 0x24f384u: goto label_24f384;
        case 0x24f390u: goto label_24f390;
        default: break;
    }

    ctx->pc = 0x24f1f8u;

    // 0x24f1f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f1fc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f200: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f204: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f20c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f210: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f214: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f218: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f21c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f220: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f224: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f228: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f22c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f230: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f23c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f240: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f244: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f24c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f254: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f25c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f260: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f268: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f26c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f270: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f278: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f27c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f284: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f288: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f28c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f294: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f298: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f29c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f2a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f2a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f2ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f2b0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f2b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f2b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f2bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f2c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f2c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f2c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f2cc: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f2d0: 0x24040701  addiu       $a0, $zero, 0x701
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x24f2d4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F2D4u;
    SET_GPR_U32(ctx, 31, 0x24F2DCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F2D4u, 0x24F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2DCu;
label_24f2dc:
    // 0x24f2dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f2dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f2e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f2e4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f2e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f2e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f2ec: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f2f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f2f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f2f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f2f8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F2F8u;
    SET_GPR_U32(ctx, 31, 0x24F300u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F2F8u, 0x24F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F300u;
label_24f300:
    // 0x24f300: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f304: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f30c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f310: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f314: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f318: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f31c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f324: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f328: 0x24041604  addiu       $a0, $zero, 0x1604
    ctx->pc = 0x24f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5636));
    // 0x24f32c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f330: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f334: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F334u;
    SET_GPR_U32(ctx, 31, 0x24F33Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F334u, 0x24F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F33Cu;
label_24f33c:
    // 0x24f33c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f340: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F340u;
    SET_GPR_U32(ctx, 31, 0x24F348u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F340u, 0x24F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F348u;
label_24f348:
    // 0x24f348: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f34c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f350: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f354: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f358: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f35c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f360: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f364: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f36c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f370: 0x24042800  addiu       $a0, $zero, 0x2800
    ctx->pc = 0x24f370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x24f374: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f378: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f37c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F37Cu;
    SET_GPR_U32(ctx, 31, 0x24F384u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F37Cu, 0x24F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F384u;
label_24f384:
    // 0x24f384: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f388: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F388u;
    SET_GPR_U32(ctx, 31, 0x24F390u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F388u, 0x24F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F390u;
label_24f390:
    // 0x24f390: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24F390u;
    {
        const bool branch_taken_0x24f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f390) {
            ctx->pc = 0x24F54Cu;
            return;
        }
    }
    ctx->pc = 0x24F398u;
}
