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

// Function: entry_00252268
// Address: 0x252268 - 0x252278
void entry_00252268_0x252268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252268_0x252268");
#endif

    ctx->pc = 0x252268u;

    // 0x252268: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x252268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25226c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x25226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252274: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x252274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x252278u;
}
