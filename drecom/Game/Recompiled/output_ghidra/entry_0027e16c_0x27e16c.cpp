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

// Function: entry_0027e16c
// Address: 0x27e16c - 0x27e1d0
void entry_0027e16c_0x27e16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e16c_0x27e16c");
#endif

    switch (ctx->pc) {
        case 0x27e1ccu: goto label_27e1cc;
        default: break;
    }

    ctx->pc = 0x27e16cu;

    // 0x27e16c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27e16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e170: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x27e174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27e174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e178: 0x0  nop
    ctx->pc = 0x27e178u;
    // NOP
    // 0x27e17c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27e17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27e180: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27e184: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e188: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27e18c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x27e190: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x27e190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27e194: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x27e198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27e198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27e19c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x27e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27e1a0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27e1a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27e1a4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27e1a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27e1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27e1ac: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27e1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27e1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27e1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e1b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e1b8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x27e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e1bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27e1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e1c0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x27e1c0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27e1c4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x27E1C4u;
    SET_GPR_U32(ctx, 31, 0x27E1CCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x27E1C4u, 0x27E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E1CCu;
label_27e1cc:
    // 0x27e1cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27e1d0u;
}
