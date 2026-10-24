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

// Function: caseD_3
// Address: 0x14ab8c - 0x14abf8
void caseD_3_0x14ab8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x14ab8c");
#endif

    switch (ctx->pc) {
        case 0x14ab9cu: goto label_14ab9c;
        default: break;
    }

    ctx->pc = 0x14ab8cu;

    // 0x14ab8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ab90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ab94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14AB94u;
    SET_GPR_U32(ctx, 31, 0x14AB9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14AB94u, 0x14AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB9Cu;
label_14ab9c:
    // 0x14ab9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aba0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14aba4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aba8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x14aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14abac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14abacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14abb0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x14abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x14abb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14abb8: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x14abb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14abbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14abc0: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14abc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14abc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14abc8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x14abcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14abd0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x14abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14abd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14abd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14abd8: 0x0  nop
    ctx->pc = 0x14abd8u;
    // NOP
    // 0x14abdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14abdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14abe0: 0x0  nop
    ctx->pc = 0x14abe0u;
    // NOP
    // 0x14abe4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14ABE4u;
    {
        const bool branch_taken_0x14abe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14abe4) {
            ctx->pc = 0x14ABF8u;
            return;
        }
    }
    ctx->pc = 0x14ABECu;
    // 0x14abec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14abecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14abf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14abf4: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x14abf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x14abf8u;
}
