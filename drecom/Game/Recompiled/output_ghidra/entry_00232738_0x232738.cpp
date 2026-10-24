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

// Function: entry_00232738
// Address: 0x232738 - 0x2327d0
void entry_00232738_0x232738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232738_0x232738");
#endif

    switch (ctx->pc) {
        case 0x232784u: goto label_232784;
        case 0x232794u: goto label_232794;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327c8u: goto label_2327c8;
        default: break;
    }

    ctx->pc = 0x232738u;

    // 0x232738: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x232738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23273c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x23273cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x232740: 0xe7ac01a4  swc1        $f12, 0x1A4($sp)
    ctx->pc = 0x232740u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x232744: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x232744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x232748: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x232748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x23274c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23274cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x232750: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x232754: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x232758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23275c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x232760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x232764: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x232764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x232768: 0x27b201a0  addiu       $s2, $sp, 0x1A0
    ctx->pc = 0x232768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x23276c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x23276cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x232770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232774: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x232774u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x232778: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x232778u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23277c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23277Cu;
    SET_GPR_U32(ctx, 31, 0x232784u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23277Cu, 0x232784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232784u;
label_232784:
    // 0x232784: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x232788: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23278c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23278Cu;
    SET_GPR_U32(ctx, 31, 0x232794u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23278Cu, 0x232794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232794u;
label_232794:
    // 0x232794: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x232794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x232798: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23279c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23279Cu;
    SET_GPR_U32(ctx, 31, 0x2327A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23279Cu, 0x2327A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327A4u;
label_2327a4:
    // 0x2327a4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x2327a8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2327a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2327ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2327acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2327b0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2327b4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2327b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2327b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2327b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2327bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2327bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2327c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2327C0u;
    SET_GPR_U32(ctx, 31, 0x2327C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2327C0u, 0x2327C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2327C8u;
label_2327c8:
    // 0x2327c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2327C8u;
    {
        const bool branch_taken_0x2327c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2327c8) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x2327D0u;
}
