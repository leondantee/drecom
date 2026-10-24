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

// Function: entry_00146190
// Address: 0x146190 - 0x1461d4
void entry_00146190_0x146190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146190_0x146190");
#endif

    switch (ctx->pc) {
        case 0x1461a0u: goto label_1461a0;
        default: break;
    }

    ctx->pc = 0x146190u;

    // 0x146190: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146194: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146194u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146198: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146198u;
    SET_GPR_U32(ctx, 31, 0x1461A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146198u, 0x1461A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461A0u;
label_1461a0:
    // 0x1461a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461a4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1461a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1461a8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1461ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1461acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1461b0: 0x0  nop
    ctx->pc = 0x1461b0u;
    // NOP
    // 0x1461b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1461b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1461b8: 0x0  nop
    ctx->pc = 0x1461b8u;
    // NOP
    // 0x1461bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1461BCu;
    {
        const bool branch_taken_0x1461bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1461bc) {
            ctx->pc = 0x1461D4u;
            return;
        }
    }
    ctx->pc = 0x1461C4u;
    // 0x1461c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461c8: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1461c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1461cc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1461d0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1461d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x1461d4u;
}
