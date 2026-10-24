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

// Function: entry_002524cc
// Address: 0x2524cc - 0x2524dc
void entry_002524cc_0x2524cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002524cc_0x2524cc");
#endif

    ctx->pc = 0x2524ccu;

    // 0x2524cc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2524ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2524d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2524d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2524d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2524d8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2524d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->pc = 0x2524dcu;
}
