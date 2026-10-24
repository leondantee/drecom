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

// Function: caseD_0
// Address: 0x1d01c0 - 0x1d0240
void caseD_0_0x1d01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1d01c0");
#endif

    switch (ctx->pc) {
        case 0x1d01e0u: goto label_1d01e0;
        default: break;
    }

    ctx->pc = 0x1d01c0u;

    // 0x1d01c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d01c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d01c8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1d01cc: 0x24061e8c  addiu       $a2, $zero, 0x1E8C
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7820));
    // 0x1d01d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d01d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d01d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1d01d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d01d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1D01D8u;
    SET_GPR_U32(ctx, 31, 0x1D01E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1D01D8u, 0x1D01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01E0u;
label_1d01e0:
    // 0x1d01e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d01e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d01e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d01e8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1d01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1d01ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d01f0: 0xac601b6c  sw          $zero, 0x1B6C($v1)
    ctx->pc = 0x1d01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 0));
    // 0x1d01f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d01f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d01f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d01fc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1d01fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1d0200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0204: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0208: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1d0208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1d020c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0210: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1d0210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0214: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d0214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1d0218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d021c: 0x0  nop
    ctx->pc = 0x1d021cu;
    // NOP
    // 0x1d0220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0224: 0x0  nop
    ctx->pc = 0x1d0224u;
    // NOP
    // 0x1d0228: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0228u;
    {
        const bool branch_taken_0x1d0228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0228) {
            ctx->pc = 0x1D0240u;
            return;
        }
    }
    ctx->pc = 0x1D0230u;
    // 0x1d0230: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x1d0230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x1d0234: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d0234u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0238: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d023c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1d023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1d0240u;
}
