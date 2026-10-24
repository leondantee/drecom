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

// Function: entry_001595ac
// Address: 0x1595ac - 0x1595e0
void entry_001595ac_0x1595ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001595ac_0x1595ac");
#endif

    ctx->pc = 0x1595acu;

    // 0x1595ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1595acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1595b0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1595b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1595b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1595b8: 0x0  nop
    ctx->pc = 0x1595b8u;
    // NOP
    // 0x1595bc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1595BCu;
    {
        const bool branch_taken_0x1595bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1595bc) {
            ctx->pc = 0x1595E0u;
            return;
        }
    }
    ctx->pc = 0x1595C4u;
    // 0x1595c4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1595c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1595c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1595cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1595ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1595d0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1595d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1595d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1595d8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1595d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1595dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1595dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x1595e0u;
}
