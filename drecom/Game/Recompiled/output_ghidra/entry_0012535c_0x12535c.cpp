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

// Function: entry_0012535c
// Address: 0x12535c - 0x12538c
void entry_0012535c_0x12535c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012535c_0x12535c");
#endif

    ctx->pc = 0x12535cu;

    // 0x12535c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125364: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12536c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12536cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125370: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125374: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125378: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12537c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12537cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x125380: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x125384u;
    {
        const bool branch_taken_0x125384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125384) {
            ctx->pc = 0x1253B4u;
            return;
        }
    }
    ctx->pc = 0x12538Cu;
}
