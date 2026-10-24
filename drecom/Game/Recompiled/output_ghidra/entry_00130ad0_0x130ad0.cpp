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

// Function: entry_00130ad0
// Address: 0x130ad0 - 0x130b20
void entry_00130ad0_0x130ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130ad0_0x130ad0");
#endif

    switch (ctx->pc) {
        case 0x130af4u: goto label_130af4;
        default: break;
    }

    ctx->pc = 0x130ad0u;

    // 0x130ad0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x130ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ad8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130adc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ae4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130ae8: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130aec: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130AECu;
    SET_GPR_U32(ctx, 31, 0x130AF4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130AECu, 0x130AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AF4u;
label_130af4:
    // 0x130af4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130af8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130b00: 0x0  nop
    ctx->pc = 0x130b00u;
    // NOP
    // 0x130b04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130b08: 0x0  nop
    ctx->pc = 0x130b08u;
    // NOP
    // 0x130b0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130B0Cu;
    {
        const bool branch_taken_0x130b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130b0c) {
            ctx->pc = 0x130B20u;
            return;
        }
    }
    ctx->pc = 0x130B14u;
    // 0x130b14: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x130b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130b18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130b1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x130b20u;
}
