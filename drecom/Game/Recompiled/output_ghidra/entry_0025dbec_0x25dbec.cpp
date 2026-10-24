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

// Function: entry_0025dbec
// Address: 0x25dbec - 0x25dc0c
void entry_0025dbec_0x25dbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dbec_0x25dbec");
#endif

    ctx->pc = 0x25dbecu;

    // 0x25dbec: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dbf0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25dbf4: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dbf8: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dbfc: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc00: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dc04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25DC04u;
    {
        const bool branch_taken_0x25dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc04) {
            ctx->pc = 0x25DC80u;
            return;
        }
    }
    ctx->pc = 0x25DC0Cu;
}
