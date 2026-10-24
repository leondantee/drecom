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

// Function: entry_0025db1c
// Address: 0x25db1c - 0x25db38
void entry_0025db1c_0x25db1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025db1c_0x25db1c");
#endif

    ctx->pc = 0x25db1cu;

    // 0x25db1c: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db20: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25db24: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db28: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25db2c: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db30: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25db34: 0x0  nop
    ctx->pc = 0x25db34u;
    // NOP
    ctx->pc = 0x25db38u;
}
