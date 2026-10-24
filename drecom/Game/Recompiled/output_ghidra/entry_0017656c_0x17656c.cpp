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

// Function: entry_0017656c
// Address: 0x17656c - 0x17659c
void entry_0017656c_0x17656c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017656c_0x17656c");
#endif

    ctx->pc = 0x17656cu;

    // 0x17656c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176570: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176578: 0x0  nop
    ctx->pc = 0x176578u;
    // NOP
    // 0x17657c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x176584u;
    // 0x176584: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176588: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x176588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x17658c: 0x10a43c  dsll32      $s4, $s0, 16
    ctx->pc = 0x17658cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176590: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176590u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x176594: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x176594u;
    {
        const bool branch_taken_0x176594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176594) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x17659Cu;
}
