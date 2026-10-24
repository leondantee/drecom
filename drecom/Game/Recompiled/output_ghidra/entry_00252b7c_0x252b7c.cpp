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

// Function: entry_00252b7c
// Address: 0x252b7c - 0x252b8c
void entry_00252b7c_0x252b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252b7c_0x252b7c");
#endif

    ctx->pc = 0x252b7cu;

    // 0x252b7c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b80: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b88: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x252b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x252b8cu;
}
