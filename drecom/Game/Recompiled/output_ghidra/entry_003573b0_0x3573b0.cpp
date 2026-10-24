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

// Function: entry_003573b0
// Address: 0x3573b0 - 0x3574ac
void entry_003573b0_0x3573b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003573b0_0x3573b0");
#endif

    switch (ctx->pc) {
        case 0x357474u: goto label_357474;
        case 0x357480u: goto label_357480;
        default: break;
    }

    ctx->pc = 0x3573b0u;

    // 0x3573b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3573b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3573b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3573b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3573b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3573b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3573bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3573bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3573c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3573c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3573c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3573c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3573c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3573c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3573cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3573ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3573d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x3573d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3573d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3573d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3573d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3573d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3573dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3573dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3573e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3573e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3573e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3573e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3573e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3573e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3573ec: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3573ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3573f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3573f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3573f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3573f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3573f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3573f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3573fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3573fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357400: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357404: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357408: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35740c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x35740cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357410: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x357410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357414: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x357418: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35741c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357420: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35742c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x35742cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x357430: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x357430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x357434: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357438: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35743c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x357440: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x357440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357448: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x357448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35744c: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x35744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x357450: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x357450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x357454: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x357454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x357458: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x357458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35745c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x357460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x357460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x357464: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x357464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x357468: 0x24043100  addiu       $a0, $zero, 0x3100
    ctx->pc = 0x357468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12544));
    // 0x35746c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x35746Cu;
    SET_GPR_U32(ctx, 31, 0x357474u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x35746Cu, 0x357474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357474u;
label_357474:
    // 0x357474: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357478: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x357478u;
    SET_GPR_U32(ctx, 31, 0x357480u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x357478u, 0x357480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357480u;
label_357480:
    // 0x357480: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357480u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357484: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x357484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x357488: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x357488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x35748c: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35748Cu;
    {
        const bool branch_taken_0x35748c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x35748c) {
            ctx->pc = 0x3574ACu;
            return;
        }
    }
    ctx->pc = 0x357494u;
    // 0x357494: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x357494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357498: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x357498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x35749c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x35749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3574a0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x3574a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x3574a4: 0x93a30088  lbu         $v1, 0x88($sp)
    ctx->pc = 0x3574a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3574a8: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x3574a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3574acu;
}
