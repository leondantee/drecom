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

// Function: entry_00172a74
// Address: 0x172a74 - 0x172a84
void entry_00172a74_0x172a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a74_0x172a74");
#endif

    ctx->pc = 0x172a74u;

    // 0x172a74: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x172a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a7c: 0x0  nop
    ctx->pc = 0x172a7cu;
    // NOP
    // 0x172a80: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x172a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->pc = 0x172a84u;
}
