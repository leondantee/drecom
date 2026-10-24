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

// Function: entry_00373374
// Address: 0x373374 - 0x373390
void entry_00373374_0x373374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373374_0x373374");
#endif

    ctx->pc = 0x373374u;

    // 0x373374: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x373374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373378: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x373378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x37337c: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x37337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373380: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x373380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x373384: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x373384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373388: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x373388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x37338c: 0x0  nop
    ctx->pc = 0x37338cu;
    // NOP
    ctx->pc = 0x373390u;
}
