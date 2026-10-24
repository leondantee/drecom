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

// Function: entry_00185fa4
// Address: 0x185fa4 - 0x185ff0
void entry_00185fa4_0x185fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185fa4_0x185fa4");
#endif

    ctx->pc = 0x185fa4u;

    // 0x185fa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fa8: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185fa8u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fb0: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185fb0u;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x185fb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185fb8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fbc: 0xc4200330  lwc1        $f0, 0x330($at)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = FAST_READ32(0x480330u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185fc4: 0x0  nop
    ctx->pc = 0x185fc4u;
    // NOP
    // 0x185fc8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x185FC8u;
    {
        const bool branch_taken_0x185fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185fc8) {
            ctx->pc = 0x185FF0u;
            return;
        }
    }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fd4: 0xc421032c  lwc1        $f1, 0x32C($at)
    ctx->pc = 0x185fd4u;
    { uint32_t bits = FAST_READ32(0x48032Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185fd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185fdc: 0xc4200328  lwc1        $f0, 0x328($at)
    ctx->pc = 0x185fdcu;
    { uint32_t bits = FAST_READ32(0x480328u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185fe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x185fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185fe4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x185fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x185fe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x185FE8u;
    {
        const bool branch_taken_0x185fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fe8) {
            ctx->pc = 0x185FFCu;
            return;
        }
    }
    ctx->pc = 0x185FF0u;
}
