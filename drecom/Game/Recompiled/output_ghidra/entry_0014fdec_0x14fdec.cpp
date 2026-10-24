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

// Function: entry_0014fdec
// Address: 0x14fdec - 0x14fe28
void entry_0014fdec_0x14fdec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fdec_0x14fdec");
#endif

    ctx->pc = 0x14fdecu;

    // 0x14fdec: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdf0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x14fdf4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fdfc: 0x0  nop
    ctx->pc = 0x14fdfcu;
    // NOP
    // 0x14fe00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fe00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fe04: 0x0  nop
    ctx->pc = 0x14fe04u;
    // NOP
    // 0x14fe08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x14FE08u;
    {
        const bool branch_taken_0x14fe08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fe08) {
            ctx->pc = 0x14FE28u;
            return;
        }
    }
    ctx->pc = 0x14FE10u;
    // 0x14fe10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x14fe14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fe18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fe1c: 0x0  nop
    ctx->pc = 0x14fe1cu;
    // NOP
    // 0x14fe20: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fe24: 0x0  nop
    ctx->pc = 0x14fe24u;
    // NOP
    ctx->pc = 0x14fe28u;
}
