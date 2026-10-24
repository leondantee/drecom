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

// Function: Em0f_atk_hit_eff
// Address: 0x311510 - 0x311698
void Em0f_atk_hit_eff_0x311510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_atk_hit_eff_0x311510");
#endif

    switch (ctx->pc) {
        case 0x31158cu: goto label_31158c;
        case 0x311598u: goto label_311598;
        case 0x3115d4u: goto label_3115d4;
        case 0x3115f0u: goto label_3115f0;
        case 0x31160cu: goto label_31160c;
        case 0x311670u: goto label_311670;
        default: break;
    }

    ctx->pc = 0x311510u;

    // 0x311510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x311510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x311514: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x311514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x311518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31151c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x31151cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x311520: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x311520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x311524: 0x24429ae0  addiu       $v0, $v0, -0x6520
    ctx->pc = 0x311524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941408));
    // 0x311528: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x311528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31152c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31152cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399AE0u));
    // 0x311530: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x311530u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x311534: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x311534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x311538: 0x24429af0  addiu       $v0, $v0, -0x6510
    ctx->pc = 0x311538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941424));
    // 0x31153c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x31153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311540: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x311540u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399AF0u));
    // 0x311544: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x311544u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x311548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x311548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31154c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311550: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x311550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x311554: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x311554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x311558: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x311558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31155c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x311560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x311560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x311564: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x311564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x311568: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x311568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x31156c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x31156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x311570: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x311570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x311574: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x311574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x311578: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x311578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31157c: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x31157cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x311580: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x311580u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311584: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x311584u;
    SET_GPR_U32(ctx, 31, 0x31158Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x311584u, 0x31158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31158Cu;
label_31158c:
    // 0x31158c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31158cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311590: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x311590u;
    {
        const bool branch_taken_0x311590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311590) {
            ctx->pc = 0x311678u;
            goto label_311678;
        }
    }
    ctx->pc = 0x311598u;
label_311598:
    // 0x311598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31159c: 0x0  nop
    ctx->pc = 0x31159cu;
    // NOP
    // 0x3115a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3115a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3115a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3115a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115a8: 0x0  nop
    ctx->pc = 0x3115a8u;
    // NOP
    // 0x3115ac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3115acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3115b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3115b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115b4: 0x0  nop
    ctx->pc = 0x3115b4u;
    // NOP
    // 0x3115b8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3115b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3115bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3115bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3115c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3115c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3115c4: 0x0  nop
    ctx->pc = 0x3115c4u;
    // NOP
    // 0x3115c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3115c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3115cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3115CCu;
    SET_GPR_U32(ctx, 31, 0x3115D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3115CCu, 0x3115D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115D4u;
label_3115d4:
    // 0x3115d4: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x3115d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3115d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3115dc: 0x0  nop
    ctx->pc = 0x3115dcu;
    // NOP
    // 0x3115e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3115e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3115e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3115e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3115e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3115E8u;
    SET_GPR_U32(ctx, 31, 0x3115F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3115E8u, 0x3115F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3115F0u;
label_3115f0:
    // 0x3115f0: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x3115f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x3115f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3115f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3115f8: 0x0  nop
    ctx->pc = 0x3115f8u;
    // NOP
    // 0x3115fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3115fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311600: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x311600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x311604: 0xc06765c  jal         func_19D970
    ctx->pc = 0x311604u;
    SET_GPR_U32(ctx, 31, 0x31160Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x311604u, 0x31160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31160Cu;
label_31160c:
    // 0x31160c: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x31160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x311610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311614: 0x0  nop
    ctx->pc = 0x311614u;
    // NOP
    // 0x311618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31161c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31161cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x311620: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x311620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x311624: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x311624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x311628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31162c: 0x0  nop
    ctx->pc = 0x31162cu;
    // NOP
    // 0x311630: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x311630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x311634: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x311634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x311638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x311638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31163c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x31163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311640: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x311640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x311644: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x311644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x311648: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31164c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x311650: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x311650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x311654: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311658: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x311658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x31165c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31165cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311660: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x311660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x311664: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x311664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x311668: 0xc086584  jal         func_219610
    ctx->pc = 0x311668u;
    SET_GPR_U32(ctx, 31, 0x311670u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x311668u, 0x311670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311670u;
label_311670:
    // 0x311670: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x311674: 0x0  nop
    ctx->pc = 0x311674u;
    // NOP
label_311678:
    // 0x311678: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x311678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31167c: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x31167Cu;
    {
        const bool branch_taken_0x31167c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31167c) {
            ctx->pc = 0x311598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311598;
        }
    }
    ctx->pc = 0x311684u;
    // 0x311684: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x311684u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31168c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31168cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x311690: 0x3e00008  jr          $ra
    ctx->pc = 0x311690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311698u;
}
