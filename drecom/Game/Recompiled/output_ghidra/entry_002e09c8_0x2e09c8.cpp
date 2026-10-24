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

// Function: entry_002e09c8
// Address: 0x2e09c8 - 0x2e09d8
void entry_002e09c8_0x2e09c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e09c8_0x2e09c8");
#endif

    ctx->pc = 0x2e09c8u;

    // 0x2e09c8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2e09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x2e09cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e09ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e09d0: 0x0  nop
    ctx->pc = 0x2e09d0u;
    // NOP
    // 0x2e09d4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x2e09d8u;
}
