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

// Function: entry_002530ec
// Address: 0x2530ec - 0x2530fc
void entry_002530ec_0x2530ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002530ec_0x2530ec");
#endif

    ctx->pc = 0x2530ecu;

    // 0x2530ec: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2530ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2530f0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2530f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2530f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2530f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2530f8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2530f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x2530fcu;
}
