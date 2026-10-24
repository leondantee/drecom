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

// Function: entry_0012532c
// Address: 0x12532c - 0x12535c
void entry_0012532c_0x12532c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012532c_0x12532c");
#endif

    ctx->pc = 0x12532cu;

    // 0x12532c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125334: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125338: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12533c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125340: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125344: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125348: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12534c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12534cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125350: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125354: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x125354u;
    {
        const bool branch_taken_0x125354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125354) {
            ctx->pc = 0x1253B4u;
            return;
        }
    }
    ctx->pc = 0x12535Cu;
}
