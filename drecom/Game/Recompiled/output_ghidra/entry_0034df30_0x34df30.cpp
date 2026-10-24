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

// Function: entry_0034df30
// Address: 0x34df30 - 0x34df60
void entry_0034df30_0x34df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034df30_0x34df30");
#endif

    ctx->pc = 0x34df30u;

    // 0x34df30: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x34df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34df34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df38: 0x0  nop
    ctx->pc = 0x34df38u;
    // NOP
    // 0x34df3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34df3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df40: 0x0  nop
    ctx->pc = 0x34df40u;
    // NOP
    // 0x34df44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF44u;
    {
        const bool branch_taken_0x34df44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df44) {
            ctx->pc = 0x34DF60u;
            return;
        }
    }
    ctx->pc = 0x34DF4Cu;
    // 0x34df4c: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x34df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x34df50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x34df50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34df54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x34df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34df58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34df5c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x34df5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->pc = 0x34df60u;
}
