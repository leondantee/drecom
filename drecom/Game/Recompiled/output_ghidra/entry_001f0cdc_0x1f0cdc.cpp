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

// Function: entry_001f0cdc
// Address: 0x1f0cdc - 0x1f0d2c
void entry_001f0cdc_0x1f0cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0cdc_0x1f0cdc");
#endif

    ctx->pc = 0x1f0cdcu;

    // 0x1f0cdc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0ce0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f0ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0ce4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f0ce8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0cec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0cf0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0cf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0cf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0cf8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0cfc: 0x0  nop
    ctx->pc = 0x1f0cfcu;
    // NOP
    // 0x1f0d00: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1F0D00u;
    {
        const bool branch_taken_0x1f0d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0d00) {
            ctx->pc = 0x1F0DC4u;
            return;
        }
    }
    ctx->pc = 0x1F0D08u;
    // 0x1f0d08: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d0c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0d10: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0d18: 0x0  nop
    ctx->pc = 0x1f0d18u;
    // NOP
    // 0x1f0d1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d20: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1f0d24: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0DC4u;
            return;
        }
    }
    ctx->pc = 0x1F0D2Cu;
}
