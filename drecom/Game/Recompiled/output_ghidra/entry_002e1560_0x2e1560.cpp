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

// Function: entry_002e1560
// Address: 0x2e1560 - 0x2e1570
void entry_002e1560_0x2e1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1560_0x2e1560");
#endif

    ctx->pc = 0x2e1560u;

    // 0x2e1560: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e1564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1568: 0x0  nop
    ctx->pc = 0x2e1568u;
    // NOP
    // 0x2e156c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x2e1570u;
}
