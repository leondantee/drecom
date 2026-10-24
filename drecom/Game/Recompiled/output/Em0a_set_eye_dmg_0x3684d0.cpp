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

// Function: Em0a_set_eye_dmg
// Address: 0x3684d0 - 0x3685d8
void Em0a_set_eye_dmg_0x3684d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_set_eye_dmg_0x3684d0");
#endif

    switch (ctx->pc) {
        case 0x368524u: goto label_368524;
        case 0x368530u: goto label_368530;
        case 0x368540u: goto label_368540;
        case 0x36856cu: goto label_36856c;
        case 0x3685c4u: goto label_3685c4;
        default: break;
    }

    ctx->pc = 0x3684d0u;

    // 0x3684d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3684d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3684d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3684d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3684d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3684d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3684dc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3684dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3684e0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3684e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x3684e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3684e8: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x3684e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x3684ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3684ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3684f0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x3684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3684f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3684f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3684f8: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x3684f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x3684fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3684fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368500: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x368500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368504: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x368504u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x368508: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x368508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36850c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x36850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368510: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x368510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368514: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x368514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x368518: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x368518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x36851c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36851Cu;
    SET_GPR_U32(ctx, 31, 0x368524u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36851Cu, 0x368524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368524u;
label_368524:
    // 0x368524: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x368524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368528: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x368528u;
    SET_GPR_U32(ctx, 31, 0x368530u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x368528u, 0x368530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368530u;
label_368530:
    // 0x368530: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x368530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368534: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x368534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x368538: 0xc0455e6  jal         func_115798
    ctx->pc = 0x368538u;
    SET_GPR_U32(ctx, 31, 0x368540u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x368538u, 0x368540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368540u;
label_368540:
    // 0x368540: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x368540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x368544: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x368544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368548: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x368548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36854c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x36854cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368550: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x368554: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368558: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x368558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36855c: 0x24a51200  addiu       $a1, $a1, 0x1200
    ctx->pc = 0x36855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    // 0x368560: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x368560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x368564: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x368564u;
    SET_GPR_U32(ctx, 31, 0x36856Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x368564u, 0x36856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36856Cu;
label_36856c:
    // 0x36856c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x368570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368574: 0x0  nop
    ctx->pc = 0x368574u;
    // NOP
    // 0x368578: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x368578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36857c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x36857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368580: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368584: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368588: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36858c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368590: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x368594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x368594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x368598: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x368598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36859c: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x36859cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x3685a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3685a4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3685a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3685a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3685a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3685ac: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3685acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3685b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3685b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3685b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3685b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3685b8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3685b8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3685bc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3685BCu;
    SET_GPR_U32(ctx, 31, 0x3685C4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3685BCu, 0x3685C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685C4u;
label_3685c4:
    // 0x3685c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3685c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3685c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3685c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3685cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3685ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3685d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3685D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3685D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3685D8u;
}
