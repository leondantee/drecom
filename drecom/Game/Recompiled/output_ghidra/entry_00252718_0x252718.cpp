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

// Function: entry_00252718
// Address: 0x252718 - 0x252728
void entry_00252718_0x252718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252718_0x252718");
#endif

    ctx->pc = 0x252718u;

    // 0x252718: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x252718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25271c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x25271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252724: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x252724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x252728u;
}
