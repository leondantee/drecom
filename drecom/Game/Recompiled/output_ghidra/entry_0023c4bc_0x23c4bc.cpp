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

// Function: entry_0023c4bc
// Address: 0x23c4bc - 0x23c4f8
void entry_0023c4bc_0x23c4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c4bc_0x23c4bc");
#endif

    ctx->pc = 0x23c4bcu;

    // 0x23c4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c4c4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x23c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c4c8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x23c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x23c4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c4d0: 0x0  nop
    ctx->pc = 0x23c4d0u;
    // NOP
    // 0x23c4d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c4d8: 0x0  nop
    ctx->pc = 0x23c4d8u;
    // NOP
    // 0x23c4dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23C4DCu;
    {
        const bool branch_taken_0x23c4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c4dc) {
            ctx->pc = 0x23C4F8u;
            return;
        }
    }
    ctx->pc = 0x23C4E4u;
    // 0x23c4e4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x23c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x23c4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c4f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c4f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23c4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x23c4f8u;
}
