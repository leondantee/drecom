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

// Function: entry_00209030
// Address: 0x209030 - 0x209070
void entry_00209030_0x209030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209030_0x209030");
#endif

    ctx->pc = 0x209030u;

    // 0x209030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209034: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x209034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209038: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x20903c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209040: 0x0  nop
    ctx->pc = 0x209040u;
    // NOP
    // 0x209044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209048: 0x0  nop
    ctx->pc = 0x209048u;
    // NOP
    // 0x20904c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20904Cu;
    {
        const bool branch_taken_0x20904c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20904c) {
            ctx->pc = 0x209070u;
            return;
        }
    }
    ctx->pc = 0x209054u;
    // 0x209054: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x209054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209058: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x209058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20905c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x20905cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x209060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209064: 0x0  nop
    ctx->pc = 0x209064u;
    // NOP
    // 0x209068: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20906c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x20906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x209070u;
}
