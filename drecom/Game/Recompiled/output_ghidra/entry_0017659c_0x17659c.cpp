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

// Function: entry_0017659c
// Address: 0x17659c - 0x1765cc
void entry_0017659c_0x17659c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017659c_0x17659c");
#endif

    ctx->pc = 0x17659cu;

    // 0x17659c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x17659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1765a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1765a8: 0x0  nop
    ctx->pc = 0x1765a8u;
    // NOP
    // 0x1765ac: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1765ACu;
    {
        const bool branch_taken_0x1765ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1765ac) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1765b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1765bc: 0x10943c  dsll32      $s2, $s0, 16
    ctx->pc = 0x1765bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1765c0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1765c0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1765c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1765C4u;
    {
        const bool branch_taken_0x1765c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765c4) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x1765CCu;
}
