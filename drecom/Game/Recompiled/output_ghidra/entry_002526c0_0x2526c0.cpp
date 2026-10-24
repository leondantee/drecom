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

// Function: entry_002526c0
// Address: 0x2526c0 - 0x2526d0
void entry_002526c0_0x2526c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002526c0_0x2526c0");
#endif

    ctx->pc = 0x2526c0u;

    // 0x2526c0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2526c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526c4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2526c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2526c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2526cc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2526ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->pc = 0x2526d0u;
}
