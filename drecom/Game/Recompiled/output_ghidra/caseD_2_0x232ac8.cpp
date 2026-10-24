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

// Function: caseD_2
// Address: 0x232ac8 - 0x232b28
void caseD_2_0x232ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x232ac8");
#endif

    switch (ctx->pc) {
        case 0x232ad8u: goto label_232ad8;
        default: break;
    }

    ctx->pc = 0x232ac8u;

    // 0x232ac8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232ad0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x232AD0u;
    SET_GPR_U32(ctx, 31, 0x232AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232AD0u, 0x232AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AD8u;
label_232ad8:
    // 0x232ad8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x232adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ae4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x232ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x232ae8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232aec: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x232aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232af0: 0x3c02c32a  lui         $v0, 0xC32A
    ctx->pc = 0x232af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49962 << 16));
    // 0x232af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232af8: 0x0  nop
    ctx->pc = 0x232af8u;
    // NOP
    // 0x232afc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x232afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232b00: 0x0  nop
    ctx->pc = 0x232b00u;
    // NOP
    // 0x232b04: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x232B04u;
    {
        const bool branch_taken_0x232b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232b04) {
            ctx->pc = 0x232B28u;
            return;
        }
    }
    ctx->pc = 0x232B0Cu;
    // 0x232b0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b10: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x232b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232b14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x232b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232b1c: 0x0  nop
    ctx->pc = 0x232b1cu;
    // NOP
    // 0x232b20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232b24: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x232b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x232b28u;
}
