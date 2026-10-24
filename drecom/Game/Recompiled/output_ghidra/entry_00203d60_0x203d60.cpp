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

// Function: entry_00203d60
// Address: 0x203d60 - 0x203d6c
void entry_00203d60_0x203d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d60_0x203d60");
#endif

    ctx->pc = 0x203d60u;

    // 0x203d60: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x203d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x203d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x203d68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x203d6cu;
}
