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

// Function: entry_0018f294
// Address: 0x18f294 - 0x18f2e4
void entry_0018f294_0x18f294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f294_0x18f294");
#endif

    ctx->pc = 0x18f294u;

    // 0x18f294: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f298: 0x94820118  lhu         $v0, 0x118($a0)
    ctx->pc = 0x18f298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x18f29c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18f2a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f2a4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F2A4u;
    {
        const bool branch_taken_0x18f2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f2a4) {
            ctx->pc = 0x18F2F0u;
            return;
        }
    }
    ctx->pc = 0x18F2ACu;
    // 0x18f2ac: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x18f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x18f2b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x18f2b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f2b4: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x18f2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2bc: 0x0  nop
    ctx->pc = 0x18f2bcu;
    // NOP
    // 0x18f2c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18F2C0u;
    {
        const bool branch_taken_0x18f2c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f2c0) {
            ctx->pc = 0x18F2E4u;
            return;
        }
    }
    ctx->pc = 0x18F2C8u;
    // 0x18f2c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18f2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18f2cc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x18f2ccu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f2d0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x18f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f2d8: 0x0  nop
    ctx->pc = 0x18f2d8u;
    // NOP
    // 0x18f2dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F2DCu;
    {
        const bool branch_taken_0x18f2dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f2dc) {
            ctx->pc = 0x18F2F0u;
            return;
        }
    }
    ctx->pc = 0x18F2E4u;
}
