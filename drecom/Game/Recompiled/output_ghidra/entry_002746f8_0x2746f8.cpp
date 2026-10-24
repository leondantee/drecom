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

// Function: entry_002746f8
// Address: 0x2746f8 - 0x274708
void entry_002746f8_0x2746f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002746f8_0x2746f8");
#endif

    ctx->pc = 0x2746f8u;

    // 0x2746f8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x2746fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2746fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274700: 0x0  nop
    ctx->pc = 0x274700u;
    // NOP
    // 0x274704: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x274704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x274708u;
}
