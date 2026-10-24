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

// Function: entry_00189f84
// Address: 0x189f84 - 0x189f9c
void entry_00189f84_0x189f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f84_0x189f84");
#endif

    ctx->pc = 0x189f84u;

    // 0x189f84: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x189f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f88: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f8c: 0xe44100c8  swc1        $f1, 0xC8($v0)
    ctx->pc = 0x189f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x189f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f94: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189f98: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x189f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    ctx->pc = 0x189f9cu;
}
