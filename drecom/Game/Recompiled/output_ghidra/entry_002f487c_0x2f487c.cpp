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

// Function: entry_002f487c
// Address: 0x2f487c - 0x2f492c
void entry_002f487c_0x2f487c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f487c_0x2f487c");
#endif

    switch (ctx->pc) {
        case 0x2f4918u: goto label_2f4918;
        default: break;
    }

    ctx->pc = 0x2f487cu;

    // 0x2f487c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4880: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4880u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4884: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f4888: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f488c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f488cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4890: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4894: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4894u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4898: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f4898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f489c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f48a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f48a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f48a4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f48a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f48a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f48a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f48ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f48acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f48b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48b4: 0x0  nop
    ctx->pc = 0x2f48b4u;
    // NOP
    // 0x2f48b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f48bc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f48bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f48c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f48c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f48c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f48c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f48c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48cc: 0x0  nop
    ctx->pc = 0x2f48ccu;
    // NOP
    // 0x2f48d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f48d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f48d4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f48d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f48dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f48dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f48e0: 0x0  nop
    ctx->pc = 0x2f48e0u;
    // NOP
    // 0x2f48e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f48e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f48e8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f48e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f48ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f48f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f48f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f48f4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f48f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f48f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f48fc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f48fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4900: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4900u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4904: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f4904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f4908: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f490c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4910: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4910u;
    SET_GPR_U32(ctx, 31, 0x2F4918u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4910u, 0x2F4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4918u;
label_2f4918:
    // 0x2f4918: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f4918u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f491c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4920: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f4920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f4924: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F492Cu;
}
