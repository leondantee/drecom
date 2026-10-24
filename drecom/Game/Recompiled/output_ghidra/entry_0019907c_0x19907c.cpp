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

// Function: entry_0019907c
// Address: 0x19907c - 0x199094
void entry_0019907c_0x19907c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019907c_0x19907c");
#endif

    ctx->pc = 0x19907cu;

    // 0x19907c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199080: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x199080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199088: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19908c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19908cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x199090: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x199094u;
}
