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

// Function: entry_0028eb20
// Address: 0x28eb20 - 0x28eb60
void entry_0028eb20_0x28eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eb20_0x28eb20");
#endif

    ctx->pc = 0x28eb20u;

    // 0x28eb20: 0x3c133f80  lui         $s3, 0x3F80
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16256 << 16));
    // 0x28eb24: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28eb24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28eb28: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eb2c: 0xc4202248  lwc1        $f0, 0x2248($at)
    ctx->pc = 0x28eb2cu;
    { uint32_t bits = FAST_READ32(0x622248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28eb30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28eb30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28eb34: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28eb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28eb38: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28eb3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28eb3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb40: 0x0  nop
    ctx->pc = 0x28eb40u;
    // NOP
    // 0x28eb44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28eb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28eb48: 0x0  nop
    ctx->pc = 0x28eb48u;
    // NOP
    // 0x28eb4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB4Cu;
    {
        const bool branch_taken_0x28eb4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28eb4c) {
            ctx->pc = 0x28EB60u;
            return;
        }
    }
    ctx->pc = 0x28EB54u;
    // 0x28eb54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28eb54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eb58: 0x0  nop
    ctx->pc = 0x28eb58u;
    // NOP
    // 0x28eb5c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28eb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    ctx->pc = 0x28eb60u;
}
