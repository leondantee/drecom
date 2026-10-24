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

// Function: entry_00185efc
// Address: 0x185efc - 0x185f88
void entry_00185efc_0x185efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185efc_0x185efc");
#endif

    ctx->pc = 0x185efcu;

    // 0x185efc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f00: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185f00u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f04: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f08: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f08u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x185f0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f10: 0x0  nop
    ctx->pc = 0x185f10u;
    // NOP
    // 0x185f14: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x185F14u;
    {
        const bool branch_taken_0x185f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f14) {
            ctx->pc = 0x18601Cu;
            return;
        }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f20: 0xc4210324  lwc1        $f1, 0x324($at)
    ctx->pc = 0x185f20u;
    { uint32_t bits = FAST_READ32(0x480324u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f28: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f28u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f30: 0x0  nop
    ctx->pc = 0x185f30u;
    // NOP
    // 0x185f34: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185FA4u;
            return;
        }
    }
    ctx->pc = 0x185F3Cu;
    // 0x185f3c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f40: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185f40u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f44: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f48: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f48u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185f4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185f50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f54: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185f54u;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
    // 0x185f60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f60) {
            ctx->pc = 0x185F88u;
            return;
        }
    }
    ctx->pc = 0x185F68u;
    // 0x185f68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f6c: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185f6cu;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185f70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185f74: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185f74u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185f7c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x185f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x185f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x185F80u;
    {
        const bool branch_taken_0x185f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f80) {
            ctx->pc = 0x185F94u;
            return;
        }
    }
    ctx->pc = 0x185F88u;
}
