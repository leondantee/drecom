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

// Function: entry_001252fc
// Address: 0x1252fc - 0x12532c
void entry_001252fc_0x1252fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001252fc_0x1252fc");
#endif

    ctx->pc = 0x1252fcu;

    // 0x1252fc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1252fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125304: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12530c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125310: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125314: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125318: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12531c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12531cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125320: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125324: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x125324u;
    {
        const bool branch_taken_0x125324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125324) {
            ctx->pc = 0x1253B4u;
            return;
        }
    }
    ctx->pc = 0x12532Cu;
}
