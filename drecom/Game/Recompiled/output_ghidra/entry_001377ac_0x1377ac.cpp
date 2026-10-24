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

// Function: entry_001377ac
// Address: 0x1377ac - 0x1377f8
void entry_001377ac_0x1377ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001377ac_0x1377ac");
#endif

    ctx->pc = 0x1377acu;

    // 0x1377ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377b4: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1377b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1377b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1377b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1377bc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377c0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1377c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1377c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377c8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377cc: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1377ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1377d0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1377d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1377d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1377d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1377d8: 0x0  nop
    ctx->pc = 0x1377d8u;
    // NOP
    // 0x1377dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1377dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1377e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1377e4: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6828u));
    // 0x1377e8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1377e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1377ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1377ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1377f0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1377f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1377f4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x1377f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1377f8u;
}
