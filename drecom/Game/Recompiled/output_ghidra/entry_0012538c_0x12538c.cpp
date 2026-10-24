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

// Function: entry_0012538c
// Address: 0x12538c - 0x1253b4
void entry_0012538c_0x12538c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012538c_0x12538c");
#endif

    ctx->pc = 0x12538cu;

    // 0x12538c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125390: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125394: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12539c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1253a0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1253a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1253a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1253a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1253a8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1253a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1253ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1253acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1253b0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1253b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    ctx->pc = 0x1253b4u;
}
