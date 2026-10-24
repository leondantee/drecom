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

// Function: entry_0015e190
// Address: 0x15e190 - 0x15e1a0
void entry_0015e190_0x15e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e190_0x15e190");
#endif

    ctx->pc = 0x15e190u;

    // 0x15e190: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15e190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15e194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e198: 0x0  nop
    ctx->pc = 0x15e198u;
    // NOP
    // 0x15e19c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15e19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x15e1a0u;
}
