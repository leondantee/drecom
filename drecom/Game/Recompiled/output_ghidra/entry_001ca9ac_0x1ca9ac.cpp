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

// Function: entry_001ca9ac
// Address: 0x1ca9ac - 0x1ca9fc
void entry_001ca9ac_0x1ca9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9ac_0x1ca9ac");
#endif

    ctx->pc = 0x1ca9acu;

    // 0x1ca9ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9b0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca9b8: 0x0  nop
    ctx->pc = 0x1ca9b8u;
    // NOP
    // 0x1ca9bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca9c0: 0x0  nop
    ctx->pc = 0x1ca9c0u;
    // NOP
    // 0x1ca9c4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1CA9C4u;
    {
        const bool branch_taken_0x1ca9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca9c4) {
            ctx->pc = 0x1CA9FCu;
            return;
        }
    }
    ctx->pc = 0x1CA9CCu;
    // 0x1ca9cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9d0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca9e0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1ca9e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9e8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1ca9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9f0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca9f8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    ctx->pc = 0x1ca9fcu;
}
