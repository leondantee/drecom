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

// Function: entry_002d6e7c
// Address: 0x2d6e7c - 0x2d6e9c
void entry_002d6e7c_0x2d6e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6e7c_0x2d6e7c");
#endif

    ctx->pc = 0x2d6e7cu;

    // 0x2d6e7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e80: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6e84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6e88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6e8c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6e90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d6e98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x2d6e9cu;
}
