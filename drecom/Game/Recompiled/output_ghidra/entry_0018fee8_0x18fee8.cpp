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

// Function: entry_0018fee8
// Address: 0x18fee8 - 0x18ff2c
void entry_0018fee8_0x18fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fee8_0x18fee8");
#endif

    ctx->pc = 0x18fee8u;

    // 0x18fee8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x18fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18feec: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x18fef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fef4: 0x0  nop
    ctx->pc = 0x18fef4u;
    // NOP
    // 0x18fef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18fef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fefc: 0x0  nop
    ctx->pc = 0x18fefcu;
    // NOP
    // 0x18ff00: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18FF00u;
    {
        const bool branch_taken_0x18ff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff00) {
            ctx->pc = 0x18FF2Cu;
            return;
        }
    }
    ctx->pc = 0x18FF08u;
    // 0x18ff08: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x18ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff0c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x18ff10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18ff14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff18: 0x0  nop
    ctx->pc = 0x18ff18u;
    // NOP
    // 0x18ff1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ff1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff20: 0x0  nop
    ctx->pc = 0x18ff20u;
    // NOP
    // 0x18ff24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF24u;
    {
        const bool branch_taken_0x18ff24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff24) {
            ctx->pc = 0x18FF38u;
            return;
        }
    }
    ctx->pc = 0x18FF2Cu;
}
