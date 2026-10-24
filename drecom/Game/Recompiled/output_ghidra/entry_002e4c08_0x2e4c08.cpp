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

// Function: entry_002e4c08
// Address: 0x2e4c08 - 0x2e4c20
void entry_002e4c08_0x2e4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4c08_0x2e4c08");
#endif

    ctx->pc = 0x2e4c08u;

    // 0x2e4c08: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c0c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2e4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2e4c10: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4c14: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2e4c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2e4c18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e4c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e4c1c: 0x0  nop
    ctx->pc = 0x2e4c1cu;
    // NOP
    ctx->pc = 0x2e4c20u;
}
