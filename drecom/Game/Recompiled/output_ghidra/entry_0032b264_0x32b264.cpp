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

// Function: entry_0032b264
// Address: 0x32b264 - 0x32b2cc
void entry_0032b264_0x32b264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b264_0x32b264");
#endif

    ctx->pc = 0x32b264u;

    // 0x32b264: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32b264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32b268: 0xc421b340  lwc1        $f1, -0x4CC0($at)
    ctx->pc = 0x32b268u;
    { uint32_t bits = FAST_READ32(0x85B340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b26c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32b26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b270: 0x0  nop
    ctx->pc = 0x32b270u;
    // NOP
    // 0x32b274: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b278: 0x0  nop
    ctx->pc = 0x32b278u;
    // NOP
    // 0x32b27c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x32B27Cu;
    {
        const bool branch_taken_0x32b27c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b27c) {
            ctx->pc = 0x32B2CCu;
            return;
        }
    }
    ctx->pc = 0x32B284u;
    // 0x32b284: 0x8e0328bc  lw          $v1, 0x28BC($s0)
    ctx->pc = 0x32b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10428)));
    // 0x32b288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b28c: 0x0  nop
    ctx->pc = 0x32b28cu;
    // NOP
    // 0x32b290: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32b290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b294: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x32b294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x32b298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b29c: 0x0  nop
    ctx->pc = 0x32b29cu;
    // NOP
    // 0x32b2a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b2a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b2a4: 0x0  nop
    ctx->pc = 0x32b2a4u;
    // NOP
    // 0x32b2a8: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x32B2A8u;
    {
        const bool branch_taken_0x32b2a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b2a8) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32B2B0u;
    // 0x32b2b0: 0xa20028b9  sb          $zero, 0x28B9($s0)
    ctx->pc = 0x32b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b2b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b2b8: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32b2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b2bc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32b2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x32b2c0: 0xae0328c4  sw          $v1, 0x28C4($s0)
    ctx->pc = 0x32b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 3));
    // 0x32b2c4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32B2C4u;
    {
        const bool branch_taken_0x32b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b2c4) {
            ctx->pc = 0x32B374u;
            return;
        }
    }
    ctx->pc = 0x32B2CCu;
}
