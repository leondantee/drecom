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

// Function: entry_0026dcb0
// Address: 0x26dcb0 - 0x26dcd8
void entry_0026dcb0_0x26dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dcb0_0x26dcb0");
#endif

    ctx->pc = 0x26dcb0u;

    // 0x26dcb0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcb4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dcb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26dcb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dcbc: 0x0  nop
    ctx->pc = 0x26dcbcu;
    // NOP
    // 0x26dcc0: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x26DCC0u;
    {
        const bool branch_taken_0x26dcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcc0) {
            ctx->pc = 0x26DDBCu;
            return;
        }
    }
    ctx->pc = 0x26DCC8u;
    // 0x26dcc8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dccc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26dcd0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26DCD0u;
    {
        const bool branch_taken_0x26dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dcd0) {
            ctx->pc = 0x26DDBCu;
            return;
        }
    }
    ctx->pc = 0x26DCD8u;
}
