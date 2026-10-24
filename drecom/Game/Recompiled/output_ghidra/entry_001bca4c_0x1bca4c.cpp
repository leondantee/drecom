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

// Function: entry_001bca4c
// Address: 0x1bca4c - 0x1bcac0
void entry_001bca4c_0x1bca4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bca4c_0x1bca4c");
#endif

    switch (ctx->pc) {
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca8cu: goto label_1bca8c;
        default: break;
    }

    ctx->pc = 0x1bca4cu;

    // 0x1bca4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca50: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bca50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bca54: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bca58: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bca5c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bca60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bca68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BCA68u;
    SET_GPR_U32(ctx, 31, 0x1BCA70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BCA68u, 0x1BCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA70u;
label_1bca70:
    // 0x1bca70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bca70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bca74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bca7c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bca80: 0xc48d1380  lwc1        $f13, 0x1380($a0)
    ctx->pc = 0x1bca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bca84: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BCA84u;
    SET_GPR_U32(ctx, 31, 0x1BCA8Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BCA84u, 0x1BCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA8Cu;
label_1bca8c:
    // 0x1bca8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bca90: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bca98: 0x0  nop
    ctx->pc = 0x1bca98u;
    // NOP
    // 0x1bca9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bca9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcaa0: 0x0  nop
    ctx->pc = 0x1bcaa0u;
    // NOP
    // 0x1bcaa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCAA4u;
    {
        const bool branch_taken_0x1bcaa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcaa4) {
            ctx->pc = 0x1BCAC0u;
            return;
        }
    }
    ctx->pc = 0x1BCAACu;
    // 0x1bcaac: 0x3c10bf80  lui         $s0, 0xBF80
    ctx->pc = 0x1bcaacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49024 << 16));
    // 0x1bcab0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1bcab0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcab4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bcab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bcabc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bcabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1bcac0u;
}
