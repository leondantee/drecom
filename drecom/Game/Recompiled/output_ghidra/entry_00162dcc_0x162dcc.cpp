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

// Function: entry_00162dcc
// Address: 0x162dcc - 0x162e00
void entry_00162dcc_0x162dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162dcc_0x162dcc");
#endif

    ctx->pc = 0x162dccu;

    // 0x162dcc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x162dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162dd0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ddc: 0x0  nop
    ctx->pc = 0x162ddcu;
    // NOP
    // 0x162de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162de4: 0x0  nop
    ctx->pc = 0x162de4u;
    // NOP
    // 0x162de8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162DE8u;
    {
        const bool branch_taken_0x162de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162de8) {
            ctx->pc = 0x162E00u;
            return;
        }
    }
    ctx->pc = 0x162DF0u;
    // 0x162df0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x162df4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x162df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x162df8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x162df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162dfc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x162dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x162e00u;
}
