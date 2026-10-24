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

// Function: entry_0034675c
// Address: 0x34675c - 0x34680c
void entry_0034675c_0x34675c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034675c_0x34675c");
#endif

    switch (ctx->pc) {
        case 0x3467a8u: goto label_3467a8;
        case 0x3467bcu: goto label_3467bc;
        case 0x3467d4u: goto label_3467d4;
        case 0x3467e8u: goto label_3467e8;
        default: break;
    }

    ctx->pc = 0x34675cu;

    // 0x34675c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x34675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346764: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x346764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x346768: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34676c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x346770: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x346770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x346774: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x346774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x346778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x346778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x34677c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x346780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x346780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x346784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x346784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x346788: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x346788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34678c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346790: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x346790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346794: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x346794u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346798: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x346798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34679c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34679cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3467a0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3467A0u;
    SET_GPR_U32(ctx, 31, 0x3467A8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3467A0u, 0x3467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467A8u;
label_3467a8:
    // 0x3467a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3467ac: 0x3c10000a  lui         $s0, 0xA
    ctx->pc = 0x3467acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)10 << 16));
    // 0x3467b0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3467b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3467b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467B4u;
    SET_GPR_U32(ctx, 31, 0x3467BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467B4u, 0x3467BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467BCu;
label_3467bc:
    // 0x3467bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467c0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3467c4: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3467c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3467c8: 0x3465000f  ori         $a1, $v1, 0xF
    ctx->pc = 0x3467c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x3467cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467CCu;
    SET_GPR_U32(ctx, 31, 0x3467D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467CCu, 0x3467D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467D4u;
label_3467d4:
    // 0x3467d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467d8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x3467d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x3467dc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x3467dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x3467e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467E0u;
    SET_GPR_U32(ctx, 31, 0x3467E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467E0u, 0x3467E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467E8u;
label_3467e8:
    // 0x3467e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3467ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3467f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3467f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3467f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3467f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3467f8: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x3467f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3467fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3467fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x346800: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x346800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x346804: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x346804u;
    {
        const bool branch_taken_0x346804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346804) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x34680Cu;
}
