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

// Function: entry_0023baf4
// Address: 0x23baf4 - 0x23bb34
void entry_0023baf4_0x23baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023baf4_0x23baf4");
#endif

    ctx->pc = 0x23baf4u;

    // 0x23baf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23baf8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bafc: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x23bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x23bb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb04: 0x0  nop
    ctx->pc = 0x23bb04u;
    // NOP
    // 0x23bb08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bb0c: 0x0  nop
    ctx->pc = 0x23bb0cu;
    // NOP
    // 0x23bb10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BB10u;
    {
        const bool branch_taken_0x23bb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bb10) {
            ctx->pc = 0x23BB34u;
            return;
        }
    }
    ctx->pc = 0x23BB18u;
    // 0x23bb18: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x23bb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb28: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23bb2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23BB2Cu;
    {
        const bool branch_taken_0x23bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb2c) {
            ctx->pc = 0x23BB44u;
            return;
        }
    }
    ctx->pc = 0x23BB34u;
}
