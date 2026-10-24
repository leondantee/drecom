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

// Function: entry_00357fb0
// Address: 0x357fb0 - 0x35801c
void entry_00357fb0_0x357fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357fb0_0x357fb0");
#endif

    switch (ctx->pc) {
        case 0x357fccu: goto label_357fcc;
        case 0x357fd8u: goto label_357fd8;
        default: break;
    }

    ctx->pc = 0x357fb0u;

    // 0x357fb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x357fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357fb4: 0x24044a00  addiu       $a0, $zero, 0x4A00
    ctx->pc = 0x357fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18944));
    // 0x357fb8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x357fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357fbc: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x357fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x357fc0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x357fc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x357fc4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x357FC4u;
    SET_GPR_U32(ctx, 31, 0x357FCCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x357FC4u, 0x357FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FCCu;
label_357fcc:
    // 0x357fcc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x357fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357fd0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x357FD0u;
    SET_GPR_U32(ctx, 31, 0x357FD8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x357FD0u, 0x357FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357FD8u;
label_357fd8:
    // 0x357fd8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x357fd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x357fdc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x357fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x357fe0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x357fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x357fe4: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x357FE4u;
    {
        const bool branch_taken_0x357fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x357fe4) {
            ctx->pc = 0x35801Cu;
            return;
        }
    }
    ctx->pc = 0x357FECu;
    // 0x357fec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x357fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x357ff0: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x357ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357ff4: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x357ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x357ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x357ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x357ffc: 0x0  nop
    ctx->pc = 0x357ffcu;
    // NOP
    // 0x358000: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x358000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x358004: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x358004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x358008: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x358008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x35800c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x358010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x358010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358014: 0x0  nop
    ctx->pc = 0x358014u;
    // NOP
    // 0x358018: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x358018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    ctx->pc = 0x35801cu;
}
