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

// Function: entry_00172f9c
// Address: 0x172f9c - 0x172fd0
void entry_00172f9c_0x172f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f9c_0x172f9c");
#endif

    ctx->pc = 0x172f9cu;

    // 0x172f9c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x172f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fa0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x172fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x172fa4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172fac: 0x0  nop
    ctx->pc = 0x172facu;
    // NOP
    // 0x172fb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172fb4: 0x0  nop
    ctx->pc = 0x172fb4u;
    // NOP
    // 0x172fb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172FB8u;
    {
        const bool branch_taken_0x172fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172fb8) {
            ctx->pc = 0x172FD0u;
            return;
        }
    }
    ctx->pc = 0x172FC0u;
    // 0x172fc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x172fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172fc4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x172fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x172fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172FC8u;
    {
        const bool branch_taken_0x172fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172fc8) {
            ctx->pc = 0x172FDCu;
            return;
        }
    }
    ctx->pc = 0x172FD0u;
}
