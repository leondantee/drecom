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

// Function: entry_00194d30
// Address: 0x194d30 - 0x194d78
void entry_00194d30_0x194d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d30_0x194d30");
#endif

    ctx->pc = 0x194d30u;

    // 0x194d30: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d34: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x194d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d3c: 0x0  nop
    ctx->pc = 0x194d3cu;
    // NOP
    // 0x194d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d44: 0x0  nop
    ctx->pc = 0x194d44u;
    // NOP
    // 0x194d48: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x194D48u;
    {
        const bool branch_taken_0x194d48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d48) {
            ctx->pc = 0x194D78u;
            return;
        }
    }
    ctx->pc = 0x194D50u;
    // 0x194d50: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d54: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x194d58: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d60: 0x0  nop
    ctx->pc = 0x194d60u;
    // NOP
    // 0x194d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d68: 0x0  nop
    ctx->pc = 0x194d68u;
    // NOP
    // 0x194d6c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x194D6Cu;
    {
        const bool branch_taken_0x194d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d6c) {
            ctx->pc = 0x194D80u;
            return;
        }
    }
    ctx->pc = 0x194D74u;
    // 0x194d74: 0x0  nop
    ctx->pc = 0x194d74u;
    // NOP
    ctx->pc = 0x194d78u;
}
