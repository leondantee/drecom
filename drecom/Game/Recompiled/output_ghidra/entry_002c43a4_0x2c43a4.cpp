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

// Function: entry_002c43a4
// Address: 0x2c43a4 - 0x2c43ec
void entry_002c43a4_0x2c43a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c43a4_0x2c43a4");
#endif

    ctx->pc = 0x2c43a4u;

    // 0x2c43a4: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x2c43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x2c43a8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x2c43a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x2c43ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c43acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c43b0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c43b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c43b8: 0x0  nop
    ctx->pc = 0x2c43b8u;
    // NOP
    // 0x2c43bc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2C43BCu;
    {
        const bool branch_taken_0x2c43bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c43bc) {
            ctx->pc = 0x2C43ECu;
            return;
        }
    }
    ctx->pc = 0x2C43C4u;
    // 0x2c43c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c43c8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c43cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c43d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c43d4: 0x0  nop
    ctx->pc = 0x2c43d4u;
    // NOP
    // 0x2c43d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C43D8u;
    {
        const bool branch_taken_0x2c43d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c43d8) {
            ctx->pc = 0x2C43ECu;
            return;
        }
    }
    ctx->pc = 0x2C43E0u;
    // 0x2c43e0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43e4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c43e8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c43e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x2c43ecu;
}
