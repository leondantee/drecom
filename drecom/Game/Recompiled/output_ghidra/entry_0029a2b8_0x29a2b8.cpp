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

// Function: entry_0029a2b8
// Address: 0x29a2b8 - 0x29a300
void entry_0029a2b8_0x29a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a2b8_0x29a2b8");
#endif

    ctx->pc = 0x29a2b8u;

    // 0x29a2b8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2bc: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x29a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x29a2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a2c4: 0x0  nop
    ctx->pc = 0x29a2c4u;
    // NOP
    // 0x29a2c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29a2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2cc: 0x0  nop
    ctx->pc = 0x29a2ccu;
    // NOP
    // 0x29a2d0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x29A2D0u;
    {
        const bool branch_taken_0x29a2d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2d0) {
            ctx->pc = 0x29A300u;
            return;
        }
    }
    ctx->pc = 0x29A2D8u;
    // 0x29a2d8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x29a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a2dc: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x29a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x29a2e0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29a2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29a2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a2e8: 0x0  nop
    ctx->pc = 0x29a2e8u;
    // NOP
    // 0x29a2ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29a2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a2f0: 0x0  nop
    ctx->pc = 0x29a2f0u;
    // NOP
    // 0x29a2f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x29A2F4u;
    {
        const bool branch_taken_0x29a2f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a2f4) {
            ctx->pc = 0x29A308u;
            return;
        }
    }
    ctx->pc = 0x29A2FCu;
    // 0x29a2fc: 0x0  nop
    ctx->pc = 0x29a2fcu;
    // NOP
    ctx->pc = 0x29a300u;
}
