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

// Function: Em0a_pl_dm_effect
// Address: 0x3683d0 - 0x3684c8
void Em0a_pl_dm_effect_0x3683d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_pl_dm_effect_0x3683d0");
#endif

    switch (ctx->pc) {
        case 0x368428u: goto label_368428;
        case 0x368434u: goto label_368434;
        case 0x368444u: goto label_368444;
        case 0x368454u: goto label_368454;
        case 0x3684b0u: goto label_3684b0;
        default: break;
    }

    ctx->pc = 0x3683d0u;

    // 0x3683d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3683d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3683d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3683d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3683d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3683d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3683dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3683dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3683e0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3683e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x3683e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3683e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3683e8: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x3683e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3683ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3683ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3683f0: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x3683f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x3683f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3683f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3683f8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x3683f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3683fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3683fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x368400: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x368400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x368404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368408: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x368408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36840c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x36840cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x368410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x368414: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x368414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x368418: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x368418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36841c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x36841cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x368420: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x368420u;
    SET_GPR_U32(ctx, 31, 0x368428u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x368420u, 0x368428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368428u;
label_368428:
    // 0x368428: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x368428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36842c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36842Cu;
    SET_GPR_U32(ctx, 31, 0x368434u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36842Cu, 0x368434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368434u;
label_368434:
    // 0x368434: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x368434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368438: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x368438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36843c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x36843Cu;
    SET_GPR_U32(ctx, 31, 0x368444u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x36843Cu, 0x368444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368444u;
label_368444:
    // 0x368444: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x368444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x368448: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x368448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36844c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36844Cu;
    SET_GPR_U32(ctx, 31, 0x368454u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36844Cu, 0x368454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368454u;
label_368454:
    // 0x368454: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x368454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x368458: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x368458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x36845c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368460: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x368460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368464: 0xc6001204  lwc1        $f0, 0x1204($s0)
    ctx->pc = 0x368464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x368468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x36846c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x36846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x368470: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x368470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x368474: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36847c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368484: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36848c: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x36848cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x368490: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x368490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x368494: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x368494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x368498: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x368498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36849c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x36849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3684a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3684a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3684a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3684a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3684a8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3684A8u;
    SET_GPR_U32(ctx, 31, 0x3684B0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3684A8u, 0x3684B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684B0u;
label_3684b0:
    // 0x3684b0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3684b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3684b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3684b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3684b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3684b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3684bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3684bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3684c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3684C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3684C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3684C8u;
}
