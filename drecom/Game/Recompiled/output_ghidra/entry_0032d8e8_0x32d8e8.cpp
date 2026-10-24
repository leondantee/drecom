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

// Function: entry_0032d8e8
// Address: 0x32d8e8 - 0x32d8fc
void entry_0032d8e8_0x32d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d8e8_0x32d8e8");
#endif

    ctx->pc = 0x32d8e8u;

    // 0x32d8e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d8e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d8ec: 0x0  nop
    ctx->pc = 0x32d8ecu;
    // NOP
    // 0x32d8f0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x32d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x32d8f4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x32D8F4u;
    {
        const bool branch_taken_0x32d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8f4) {
            ctx->pc = 0x32DA30u;
            return;
        }
    }
    ctx->pc = 0x32D8FCu;
}
