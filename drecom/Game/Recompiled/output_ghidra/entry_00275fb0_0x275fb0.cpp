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

// Function: entry_00275fb0
// Address: 0x275fb0 - 0x275fc0
void entry_00275fb0_0x275fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275fb0_0x275fb0");
#endif

    ctx->pc = 0x275fb0u;

    // 0x275fb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x275fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x275fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275fb8: 0x0  nop
    ctx->pc = 0x275fb8u;
    // NOP
    // 0x275fbc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x275fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->pc = 0x275fc0u;
}
