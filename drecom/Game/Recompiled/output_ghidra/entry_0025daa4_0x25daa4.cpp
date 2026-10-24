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

// Function: entry_0025daa4
// Address: 0x25daa4 - 0x25dac4
void entry_0025daa4_0x25daa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025daa4_0x25daa4");
#endif

    ctx->pc = 0x25daa4u;

    // 0x25daa4: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25daa8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25daac: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dab0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dab4: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dab8: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dabc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25DABCu;
    {
        const bool branch_taken_0x25dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dabc) {
            ctx->pc = 0x25DB38u;
            return;
        }
    }
    ctx->pc = 0x25DAC4u;
}
