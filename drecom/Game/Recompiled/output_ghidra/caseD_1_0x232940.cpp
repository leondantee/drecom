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

// Function: caseD_1
// Address: 0x232940 - 0x2329b8
void caseD_1_0x232940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x232940");
#endif

    switch (ctx->pc) {
        case 0x232950u: goto label_232950;
        default: break;
    }

    ctx->pc = 0x232940u;

    // 0x232940: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232944: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232944u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232948: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x232948u;
    SET_GPR_U32(ctx, 31, 0x232950u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232948u, 0x232950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232950u;
label_232950:
    // 0x232950: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x232954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232958: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23295c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x23295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x232960: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232964: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x232964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23296c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232974: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x232974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x232978: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23297c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x23297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232980: 0x3c02c32a  lui         $v0, 0xC32A
    ctx->pc = 0x232980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49962 << 16));
    // 0x232984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232988: 0x0  nop
    ctx->pc = 0x232988u;
    // NOP
    // 0x23298c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23298cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232990: 0x0  nop
    ctx->pc = 0x232990u;
    // NOP
    // 0x232994: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x232994u;
    {
        const bool branch_taken_0x232994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232994) {
            ctx->pc = 0x2329B8u;
            return;
        }
    }
    ctx->pc = 0x23299Cu;
    // 0x23299c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2329a0: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x2329a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2329a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2329a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2329a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2329a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2329ac: 0x0  nop
    ctx->pc = 0x2329acu;
    // NOP
    // 0x2329b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2329b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2329b4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x2329b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x2329b8u;
}
