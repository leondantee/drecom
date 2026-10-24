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

// Function: entry_0025259c
// Address: 0x25259c - 0x2525cc
void entry_0025259c_0x25259c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025259c_0x25259c");
#endif

    ctx->pc = 0x25259cu;

    // 0x25259c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525a0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2525a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2525a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525a8: 0x0  nop
    ctx->pc = 0x2525a8u;
    // NOP
    // 0x2525ac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2525ACu;
    {
        const bool branch_taken_0x2525ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525ac) {
            ctx->pc = 0x2525CCu;
            return;
        }
    }
    ctx->pc = 0x2525B4u;
    // 0x2525b4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2525b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2525b8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2525b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2525bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2525bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2525c0: 0x0  nop
    ctx->pc = 0x2525c0u;
    // NOP
    // 0x2525c4: 0x45000096  bc1f        . + 4 + (0x96 << 2)
    ctx->pc = 0x2525C4u;
    {
        const bool branch_taken_0x2525c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2525c4) {
            ctx->pc = 0x252820u;
            return;
        }
    }
    ctx->pc = 0x2525CCu;
}
