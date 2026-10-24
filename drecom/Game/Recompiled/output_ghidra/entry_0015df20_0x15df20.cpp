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

// Function: entry_0015df20
// Address: 0x15df20 - 0x15df30
void entry_0015df20_0x15df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015df20_0x15df20");
#endif

    ctx->pc = 0x15df20u;

    // 0x15df20: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15df24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15df24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15df28: 0x0  nop
    ctx->pc = 0x15df28u;
    // NOP
    // 0x15df2c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x15df30u;
}
