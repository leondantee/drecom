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

// Function: entry_0023b734
// Address: 0x23b734 - 0x23b7c8
void entry_0023b734_0x23b734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b734_0x23b734");
#endif

    switch (ctx->pc) {
        case 0x23b784u: goto label_23b784;
        case 0x23b794u: goto label_23b794;
        case 0x23b7a4u: goto label_23b7a4;
        default: break;
    }

    ctx->pc = 0x23b734u;

    // 0x23b734: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b738: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23b738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b73c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x23b740: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b748: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23b74c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x23b74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b750: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23b750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x23b754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23b754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23b758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23b758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23b75c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b760: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b764: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b768: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x23b76c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23b770: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b774: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b778: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b778u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b77c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B77Cu;
    SET_GPR_U32(ctx, 31, 0x23B784u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B77Cu, 0x23B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B784u;
label_23b784:
    // 0x23b784: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23b788: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x23b78c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B78Cu;
    SET_GPR_U32(ctx, 31, 0x23B794u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B78Cu, 0x23B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B794u;
label_23b794:
    // 0x23b794: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x23b798: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23b798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23b79c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B79Cu;
    SET_GPR_U32(ctx, 31, 0x23B7A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B79Cu, 0x23B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7A4u;
label_23b7a4:
    // 0x23b7a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23b7ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23b7b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23b7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b7b4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23b7b8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23b7bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b7c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B7C0u;
    SET_GPR_U32(ctx, 31, 0x23B7C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B7C0u, 0x23B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7C8u;
}
