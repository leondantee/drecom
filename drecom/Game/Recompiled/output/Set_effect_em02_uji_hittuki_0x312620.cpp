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

// Function: Set_effect_em02_uji_hittuki
// Address: 0x312620 - 0x3127b4
void Set_effect_em02_uji_hittuki_0x312620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_hittuki_0x312620");
#endif

    switch (ctx->pc) {
        case 0x312694u: goto label_312694;
        case 0x3126b4u: goto label_3126b4;
        case 0x3126d4u: goto label_3126d4;
        case 0x312700u: goto label_312700;
        case 0x312714u: goto label_312714;
        case 0x31274cu: goto label_31274c;
        case 0x312784u: goto label_312784;
        default: break;
    }

    ctx->pc = 0x312620u;

    // 0x312620: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x312620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x312624: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x312624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x312628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31262c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x31262cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x312630: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x312630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x312634: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x312634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x312638: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x312638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x31263c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x31263cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x312640: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x312640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x312644: 0xa3a90088  sb          $t1, 0x88($sp)
    ctx->pc = 0x312644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 9));
    // 0x312648: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x312648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31264c: 0x24429b00  addiu       $v0, $v0, -0x6500
    ctx->pc = 0x31264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941440));
    // 0x312650: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x312650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x312654: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x312654u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399B00u));
    // 0x312658: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x312658u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x31265c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x312660: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x312664: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x312664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312668: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x312668u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399B10u));
    // 0x31266c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x31266cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x312670: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x312670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x312674: 0x24429b20  addiu       $v0, $v0, -0x64E0
    ctx->pc = 0x312674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941472));
    // 0x312678: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x312678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31267c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x31267cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399B20u));
    // 0x312680: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x312680u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x312684: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x312684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312688: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x312688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31268c: 0xc067648  jal         func_19D920
    ctx->pc = 0x31268Cu;
    SET_GPR_U32(ctx, 31, 0x312694u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31268Cu, 0x312694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312694u;
label_312694:
    // 0x312694: 0x3c024046  lui         $v0, 0x4046
    ctx->pc = 0x312694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16454 << 16));
    // 0x312698: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x312698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x31269c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31269cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3126a0: 0x0  nop
    ctx->pc = 0x3126a0u;
    // NOP
    // 0x3126a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3126a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3126a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3126a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3126ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x3126ACu;
    SET_GPR_U32(ctx, 31, 0x3126B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3126ACu, 0x3126B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126B4u;
label_3126b4:
    // 0x3126b4: 0x3c024046  lui         $v0, 0x4046
    ctx->pc = 0x3126b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16454 << 16));
    // 0x3126b8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3126b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3126bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3126bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3126c0: 0x0  nop
    ctx->pc = 0x3126c0u;
    // NOP
    // 0x3126c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3126c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3126c8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3126c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3126cc: 0xc067648  jal         func_19D920
    ctx->pc = 0x3126CCu;
    SET_GPR_U32(ctx, 31, 0x3126D4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3126CCu, 0x3126D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3126D4u;
label_3126d4:
    // 0x3126d4: 0x3c024046  lui         $v0, 0x4046
    ctx->pc = 0x3126d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16454 << 16));
    // 0x3126d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x3126d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x3126dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3126dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3126e0: 0x0  nop
    ctx->pc = 0x3126e0u;
    // NOP
    // 0x3126e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3126e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3126e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3126e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3126ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3126ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3126f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3126f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3126f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3126f8: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x3126F8u;
    SET_GPR_U32(ctx, 31, 0x312700u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x3126F8u, 0x312700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312700u;
label_312700:
    // 0x312700: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x312700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312704: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x312708: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x312708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31270c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31270Cu;
    SET_GPR_U32(ctx, 31, 0x312714u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31270Cu, 0x312714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312714u;
label_312714:
    // 0x312714: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x312714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x312718: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x312718u;
    {
        const bool branch_taken_0x312718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312718) {
            ctx->pc = 0x312758u;
            goto label_312758;
        }
    }
    ctx->pc = 0x312720u;
    // 0x312720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312724: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x312724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x312728: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x312728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31272c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x31272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312730: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x312730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x312734: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x312734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312738: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x312738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x31273c: 0x24481bf0  addiu       $t0, $v0, 0x1BF0
    ctx->pc = 0x31273cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7152));
    // 0x312740: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x312740u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x312744: 0xc0c474c  jal         func_311D30
    ctx->pc = 0x312744u;
    SET_GPR_U32(ctx, 31, 0x31274Cu);
    ctx->pc = 0x311D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311D30u, 0x312744u, 0x31274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31274Cu;
label_31274c:
    // 0x31274c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31274cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312750: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x312750u;
    {
        const bool branch_taken_0x312750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312750) {
            ctx->pc = 0x312788u;
            goto label_312788;
        }
    }
    ctx->pc = 0x312758u;
label_312758:
    // 0x312758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31275c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31275cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x312760: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x312760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312764: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x312764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312768: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x312768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31276c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x31276cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312770: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x312770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x312774: 0x24481bf0  addiu       $t0, $v0, 0x1BF0
    ctx->pc = 0x312774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7152));
    // 0x312778: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x312778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31277c: 0xc0c47d0  jal         func_311F40
    ctx->pc = 0x31277Cu;
    SET_GPR_U32(ctx, 31, 0x312784u);
    ctx->pc = 0x311F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F40u, 0x31277Cu, 0x312784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312784u;
label_312784:
    // 0x312784: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312784u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_312788:
    // 0x312788: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x312788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31278c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x31278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x312790: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312790u;
    {
        const bool branch_taken_0x312790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x312790) {
            ctx->pc = 0x3127A0u;
            goto label_3127a0;
        }
    }
    ctx->pc = 0x312798u;
    // 0x312798: 0x93a30088  lbu         $v1, 0x88($sp)
    ctx->pc = 0x312798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31279c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x31279cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
label_3127a0:
    // 0x3127a0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3127a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3127a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3127a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3127a8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3127a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3127ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3127ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3127B4u;
}
