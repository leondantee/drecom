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

// Function: entry_00172800
// Address: 0x172800 - 0x172810
void entry_00172800_0x172800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172800_0x172800");
#endif

    ctx->pc = 0x172800u;

    // 0x172800: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x172800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x172804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172808: 0x0  nop
    ctx->pc = 0x172808u;
    // NOP
    // 0x17280c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x172810u;
}
