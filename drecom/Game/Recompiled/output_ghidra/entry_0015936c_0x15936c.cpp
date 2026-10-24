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

// Function: entry_0015936c
// Address: 0x15936c - 0x1593a0
void entry_0015936c_0x15936c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015936c_0x15936c");
#endif

    ctx->pc = 0x15936cu;

    // 0x15936c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159370: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159374: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159378: 0x0  nop
    ctx->pc = 0x159378u;
    // NOP
    // 0x15937c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15937Cu;
    {
        const bool branch_taken_0x15937c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15937c) {
            ctx->pc = 0x1593A0u;
            return;
        }
    }
    ctx->pc = 0x159384u;
    // 0x159384: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159388: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15938c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15938cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159390: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159394: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159398: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15939c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x1593a0u;
}
