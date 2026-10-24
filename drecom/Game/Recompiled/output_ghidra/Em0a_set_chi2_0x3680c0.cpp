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

// Function: Em0a_set_chi2
// Address: 0x3680c0 - 0x368230
void Em0a_set_chi2_0x3680c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_set_chi2_0x3680c0");
#endif

    switch (ctx->pc) {
        case 0x368114u: goto label_368114;
        case 0x368120u: goto label_368120;
        case 0x368130u: goto label_368130;
        case 0x36815cu: goto label_36815c;
        case 0x3681ccu: goto label_3681cc;
        case 0x36821cu: goto label_36821c;
        default: break;
    }

    ctx->pc = 0x3680c0u;

    // 0x3680c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3680c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3680c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3680c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3680c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3680c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3680cc: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3680ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3680d0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3680d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x3680d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3680d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3680d8: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x3680d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x3680dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3680dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3680e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x3680e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3680e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3680e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3680e8: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x3680e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x3680ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3680ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3680f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3680f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3680f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3680f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3680f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3680f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3680fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3680fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368100: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x368100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368104: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x368104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x368108: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x368108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x36810c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x36810Cu;
    SET_GPR_U32(ctx, 31, 0x368114u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x36810Cu, 0x368114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368114u;
label_368114:
    // 0x368114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x368114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368118: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x368118u;
    SET_GPR_U32(ctx, 31, 0x368120u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x368118u, 0x368120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368120u;
label_368120:
    // 0x368120: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x368120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368124: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x368124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x368128: 0xc0455e6  jal         func_115798
    ctx->pc = 0x368128u;
    SET_GPR_U32(ctx, 31, 0x368130u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x368128u, 0x368130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368130u;
label_368130:
    // 0x368130: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x368130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x368134: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x368134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368138: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x368138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36813c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x36813cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368140: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x368144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368148: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x368148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36814c: 0x24a51200  addiu       $a1, $a1, 0x1200
    ctx->pc = 0x36814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4608));
    // 0x368150: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x368150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x368154: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x368154u;
    SET_GPR_U32(ctx, 31, 0x36815Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x368154u, 0x36815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36815Cu;
label_36815c:
    // 0x36815c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x368160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368164: 0x0  nop
    ctx->pc = 0x368164u;
    // NOP
    // 0x368168: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x368168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36816c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x36816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368170: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x368170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x368174: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x368174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x368178: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x368178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36817c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36817Cu;
    {
        const bool branch_taken_0x36817c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36817c) {
            ctx->pc = 0x3681D4u;
            goto label_3681d4;
        }
    }
    ctx->pc = 0x368184u;
    // 0x368184: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x368184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36818c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368190: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x368190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x368194: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x368194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x368198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x368198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36819c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3681a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3681a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3681a4: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x3681a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3681a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3681a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3681ac: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3681acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3681b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3681b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3681b4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3681b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3681b8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3681b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3681bc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3681bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3681c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3681c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3681c4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3681C4u;
    SET_GPR_U32(ctx, 31, 0x3681CCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3681C4u, 0x3681CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681CCu;
label_3681cc:
    // 0x3681cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3681CCu;
    {
        const bool branch_taken_0x3681cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3681cc) {
            ctx->pc = 0x36821Cu;
            goto label_36821c;
        }
    }
    ctx->pc = 0x3681D4u;
label_3681d4:
    // 0x3681d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3681d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3681d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3681d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3681dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3681dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3681e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3681e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3681e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3681e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3681e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3681ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3681ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3681f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3681f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3681f4: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x3681f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x3681f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3681fc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3681fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x368200: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x368200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x368204: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x368204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368208: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x368208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36820c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x368210: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x368210u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x368214: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x368214u;
    SET_GPR_U32(ctx, 31, 0x36821Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x368214u, 0x36821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36821Cu;
label_36821c:
    // 0x36821c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x36821cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368224: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x368224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x368228: 0x3e00008  jr          $ra
    ctx->pc = 0x368228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368230u;
}
