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

// Function: entry_00199380
// Address: 0x199380 - 0x199390
void entry_00199380_0x199380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199380_0x199380");
#endif

    ctx->pc = 0x199380u;

    // 0x199380: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x199384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x199384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199388: 0x0  nop
    ctx->pc = 0x199388u;
    // NOP
    // 0x19938c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19938cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x199390u;
}
