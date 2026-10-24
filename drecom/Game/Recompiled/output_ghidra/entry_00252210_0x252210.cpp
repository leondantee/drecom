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

// Function: entry_00252210
// Address: 0x252210 - 0x252220
void entry_00252210_0x252210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252210_0x252210");
#endif

    ctx->pc = 0x252210u;

    // 0x252210: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x252210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252214: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25221c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x25221cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x252220u;
}
