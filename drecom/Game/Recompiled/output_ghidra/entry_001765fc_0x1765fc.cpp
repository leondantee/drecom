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

// Function: entry_001765fc
// Address: 0x1765fc - 0x176628
void entry_001765fc_0x1765fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765fc_0x1765fc");
#endif

    ctx->pc = 0x1765fcu;

    // 0x1765fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176600: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176608: 0x0  nop
    ctx->pc = 0x176608u;
    // NOP
    // 0x17660c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17660Cu;
    {
        const bool branch_taken_0x17660c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17660c) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x176614u;
    // 0x176614: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176618: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x17661c: 0x10ac3c  dsll32      $s5, $s0, 16
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176620: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x176620u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x176624: 0x0  nop
    ctx->pc = 0x176624u;
    // NOP
    ctx->pc = 0x176628u;
}
