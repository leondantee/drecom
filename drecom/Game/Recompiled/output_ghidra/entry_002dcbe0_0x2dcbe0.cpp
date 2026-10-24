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

// Function: entry_002dcbe0
// Address: 0x2dcbe0 - 0x2dcc18
void entry_002dcbe0_0x2dcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcbe0_0x2dcbe0");
#endif

    ctx->pc = 0x2dcbe0u;

    // 0x2dcbe0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2dcbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcbe4: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x2dcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x2dcbe8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcbec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcbf0: 0x0  nop
    ctx->pc = 0x2dcbf0u;
    // NOP
    // 0x2dcbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcbf8: 0x0  nop
    ctx->pc = 0x2dcbf8u;
    // NOP
    // 0x2dcbfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCBFCu;
    {
        const bool branch_taken_0x2dcbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcbfc) {
            ctx->pc = 0x2DCC18u;
            return;
        }
    }
    ctx->pc = 0x2DCC04u;
    // 0x2dcc04: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x2dcc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x2dcc08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc10: 0x0  nop
    ctx->pc = 0x2dcc10u;
    // NOP
    // 0x2dcc14: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2dcc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x2dcc18u;
}
