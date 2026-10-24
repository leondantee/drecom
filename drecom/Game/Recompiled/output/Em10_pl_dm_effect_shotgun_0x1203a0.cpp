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

// Function: Em10_pl_dm_effect_shotgun
// Address: 0x1203a0 - 0x12045c
void Em10_pl_dm_effect_shotgun_0x1203a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_pl_dm_effect_shotgun_0x1203a0");
#endif

    switch (ctx->pc) {
        case 0x1203d0u: goto label_1203d0;
        case 0x1203dcu: goto label_1203dc;
        case 0x1203ecu: goto label_1203ec;
        case 0x1203fcu: goto label_1203fc;
        case 0x120448u: goto label_120448;
        default: break;
    }

    ctx->pc = 0x1203a0u;

    // 0x1203a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1203a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1203a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1203a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1203a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1203a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1203ac: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1203acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1203b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1203b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1203b4: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1203b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1203b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1203bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1203bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1203c0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1203c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1203c4: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1203c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1203c8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1203C8u;
    SET_GPR_U32(ctx, 31, 0x1203D0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1203C8u, 0x1203D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203D0u;
label_1203d0:
    // 0x1203d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1203d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1203d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1203D4u;
    SET_GPR_U32(ctx, 31, 0x1203DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1203D4u, 0x1203DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203DCu;
label_1203dc:
    // 0x1203dc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1203dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1203e0: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x1203e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1203e4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1203E4u;
    SET_GPR_U32(ctx, 31, 0x1203ECu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1203E4u, 0x1203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203ECu;
label_1203ec:
    // 0x1203ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1203ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1203f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1203f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1203f4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1203F4u;
    SET_GPR_U32(ctx, 31, 0x1203FCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1203F4u, 0x1203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203FCu;
label_1203fc:
    // 0x1203fc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1203fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x120400: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x120400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120404: 0xc6001204  lwc1        $f0, 0x1204($s0)
    ctx->pc = 0x120404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120408: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x120408u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12040c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x120410: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x120410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120414: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x120414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120418: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x120418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12041c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x120420: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120424: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x120424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x120428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12042c: 0x34440606  ori         $a0, $v0, 0x606
    ctx->pc = 0x12042cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1542);
    // 0x120430: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x120430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120434: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x120434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x120438: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x120438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x12043c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12043cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120440: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x120440u;
    SET_GPR_U32(ctx, 31, 0x120448u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x120440u, 0x120448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120448u;
label_120448:
    // 0x120448: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x120448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12044c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120450: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x120450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x120454: 0x3e00008  jr          $ra
    ctx->pc = 0x120454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12045Cu;
}
