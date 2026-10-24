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

// Function: entry_00270c64
// Address: 0x270c64 - 0x270d0c
void entry_00270c64_0x270c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270c64_0x270c64");
#endif

    switch (ctx->pc) {
        case 0x270c74u: goto label_270c74;
        case 0x270c84u: goto label_270c84;
        case 0x270c90u: goto label_270c90;
        default: break;
    }

    ctx->pc = 0x270c64u;

    // 0x270c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270C6Cu;
    SET_GPR_U32(ctx, 31, 0x270C74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270C6Cu, 0x270C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C74u;
label_270c74:
    // 0x270c74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c78: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x270c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x270c7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x270C7Cu;
    SET_GPR_U32(ctx, 31, 0x270C84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x270C7Cu, 0x270C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C84u;
label_270c84:
    // 0x270c84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x270C88u;
    SET_GPR_U32(ctx, 31, 0x270C90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x270C88u, 0x270C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C90u;
label_270c90:
    // 0x270c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c94: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270c9c: 0x0  nop
    ctx->pc = 0x270c9cu;
    // NOP
    // 0x270ca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270ca4: 0x0  nop
    ctx->pc = 0x270ca4u;
    // NOP
    // 0x270ca8: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x270CA8u;
    {
        const bool branch_taken_0x270ca8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270ca8) {
            ctx->pc = 0x270D0Cu;
            return;
        }
    }
    ctx->pc = 0x270CB0u;
    // 0x270cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cb4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cbc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x270cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x270cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270cc4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x270cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x270cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ccc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x270cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270cd4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x270cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270cd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x270cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x270cdc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x270ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270ce4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x270ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270cec: 0x0  nop
    ctx->pc = 0x270cecu;
    // NOP
    // 0x270cf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x270cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270cf4: 0x0  nop
    ctx->pc = 0x270cf4u;
    // NOP
    // 0x270cf8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x270CF8u;
    {
        const bool branch_taken_0x270cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270cf8) {
            ctx->pc = 0x270D0Cu;
            return;
        }
    }
    ctx->pc = 0x270D00u;
    // 0x270d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270d04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270d08: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x270d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x270d0cu;
}
