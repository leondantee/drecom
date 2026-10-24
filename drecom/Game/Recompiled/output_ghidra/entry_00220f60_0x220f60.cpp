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

// Function: entry_00220f60
// Address: 0x220f60 - 0x220fbc
void entry_00220f60_0x220f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220f60_0x220f60");
#endif

    switch (ctx->pc) {
        case 0x220fb0u: goto label_220fb0;
        default: break;
    }

    ctx->pc = 0x220f60u;

    // 0x220f60: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f64: 0xc4801200  lwc1        $f0, 0x1200($a0)
    ctx->pc = 0x220f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f68: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x220f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x220f6c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f70: 0xc4a01204  lwc1        $f0, 0x1204($a1)
    ctx->pc = 0x220f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f74: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x220f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x220f78: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x220f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220f7c: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x220f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220f80: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x220f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x220f84: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x220f88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x220f88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x220f8c: 0x0  nop
    ctx->pc = 0x220f8cu;
    // NOP
    // 0x220f90: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x220f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x220f94: 0x2405170e  addiu       $a1, $zero, 0x170E
    ctx->pc = 0x220f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x220f98: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x220f98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x220f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220fa0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x220fa4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x220fa4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220fa8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x220FA8u;
    SET_GPR_U32(ctx, 31, 0x220FB0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x220FA8u, 0x220FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FB0u;
label_220fb0:
    // 0x220fb0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x220fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x220fb4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x220FB4u;
    SET_GPR_U32(ctx, 31, 0x220FBCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x220FB4u, 0x220FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220FBCu;
}
