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

// Function: entry_0036d9b0
// Address: 0x36d9b0 - 0x36da78
void entry_0036d9b0_0x36d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d9b0_0x36d9b0");
#endif

    switch (ctx->pc) {
        case 0x36d9bcu: goto label_36d9bc;
        case 0x36d9e0u: goto label_36d9e0;
        case 0x36d9f4u: goto label_36d9f4;
        case 0x36da08u: goto label_36da08;
        case 0x36da14u: goto label_36da14;
        case 0x36da50u: goto label_36da50;
        case 0x36da70u: goto label_36da70;
        default: break;
    }

    ctx->pc = 0x36d9b0u;

    // 0x36d9b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d9b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36D9B4u;
    SET_GPR_U32(ctx, 31, 0x36D9BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36D9B4u, 0x36D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9BCu;
label_36d9bc:
    // 0x36d9bc: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x36d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x36d9c0: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x36d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x36d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d9c8: 0x0  nop
    ctx->pc = 0x36d9c8u;
    // NOP
    // 0x36d9cc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36d9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36d9d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36d9d4: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d9d8: 0xc067844  jal         func_19E110
    ctx->pc = 0x36D9D8u;
    SET_GPR_U32(ctx, 31, 0x36D9E0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36D9D8u, 0x36D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9E0u;
label_36d9e0:
    // 0x36d9e0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36d9e8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d9ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36D9ECu;
    SET_GPR_U32(ctx, 31, 0x36D9F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36D9F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D9F4u) { return; }
    ctx->pc = 0x36D9F4u;
label_36d9f4:
    // 0x36d9f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9fc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36d9fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36da00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DA00u;
    SET_GPR_U32(ctx, 31, 0x36DA08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DA00u, 0x36DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA08u;
label_36da08:
    // 0x36da08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da0c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DA0Cu;
    SET_GPR_U32(ctx, 31, 0x36DA14u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DA0Cu, 0x36DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA14u;
label_36da14:
    // 0x36da14: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x36da14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x36da18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36da18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36da1c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36da20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36da20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36da24: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36da24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36da28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36da28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36da2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da30: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36da30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36da34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36da34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36da38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da3c: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36da3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36da40: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36da40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da44: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36da44u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da48: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DA48u;
    SET_GPR_U32(ctx, 31, 0x36DA50u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DA48u, 0x36DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA50u;
label_36da50:
    // 0x36da50: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36da50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36da54: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36da58: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36da5c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36da60: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36da60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36da64: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36da64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da68: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DA68u;
    SET_GPR_U32(ctx, 31, 0x36DA70u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DA68u, 0x36DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA70u;
label_36da70:
    // 0x36da70: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x36DA70u;
    {
        const bool branch_taken_0x36da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da70) {
            ctx->pc = 0x36DC18u;
            return;
        }
    }
    ctx->pc = 0x36DA78u;
}
