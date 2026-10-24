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

// Function: entry_001829ec
// Address: 0x1829ec - 0x182a4c
void entry_001829ec_0x1829ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001829ec_0x1829ec");
#endif

    ctx->pc = 0x1829ecu;

    // 0x1829ec: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1829ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1829f0: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x1829f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1829f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1829f8: 0x0  nop
    ctx->pc = 0x1829f8u;
    // NOP
    // 0x1829fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1829fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a00: 0x0  nop
    ctx->pc = 0x182a00u;
    // NOP
    // 0x182a04: 0x4501007e  bc1t        . + 4 + (0x7E << 2)
    ctx->pc = 0x182A04u;
    {
        const bool branch_taken_0x182a04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182a04) {
            ctx->pc = 0x182C00u;
            return;
        }
    }
    ctx->pc = 0x182A0Cu;
    // 0x182a0c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x182a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x182a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a14: 0x0  nop
    ctx->pc = 0x182a14u;
    // NOP
    // 0x182a18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x182a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a1c: 0x0  nop
    ctx->pc = 0x182a1cu;
    // NOP
    // 0x182a20: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x182A20u;
    {
        const bool branch_taken_0x182a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182a20) {
            ctx->pc = 0x182A4Cu;
            return;
        }
    }
    ctx->pc = 0x182A28u;
    // 0x182a28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a2c: 0xc421f240  lwc1        $f1, -0xDC0($at)
    ctx->pc = 0x182a2cu;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182a30: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182a38: 0x0  nop
    ctx->pc = 0x182a38u;
    // NOP
    // 0x182a3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182a40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x182a44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182A44u;
    {
        const bool branch_taken_0x182a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a44) {
            ctx->pc = 0x182A64u;
            return;
        }
    }
    ctx->pc = 0x182A4Cu;
}
