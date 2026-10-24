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

// Function: entry_00252bd4
// Address: 0x252bd4 - 0x252be4
void entry_00252bd4_0x252bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252bd4_0x252bd4");
#endif

    ctx->pc = 0x252bd4u;

    // 0x252bd4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x252bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252bd8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x252bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252be0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x252be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x252be4u;
}
