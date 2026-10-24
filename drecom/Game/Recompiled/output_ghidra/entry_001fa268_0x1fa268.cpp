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

// Function: entry_001fa268
// Address: 0x1fa268 - 0x1fa28c
void entry_001fa268_0x1fa268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa268_0x1fa268");
#endif

    ctx->pc = 0x1fa268u;

    // 0x1fa268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa26c: 0x0  nop
    ctx->pc = 0x1fa26cu;
    // NOP
    // 0x1fa270: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x1fa270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1fa274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa278: 0x0  nop
    ctx->pc = 0x1fa278u;
    // NOP
    // 0x1fa27c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1fa27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1fa280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa284: 0x0  nop
    ctx->pc = 0x1fa284u;
    // NOP
    // 0x1fa288: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1fa288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x1fa28cu;
}
