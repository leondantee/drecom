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

// Function: entry_003111c4
// Address: 0x3111c4 - 0x3111d8
void entry_003111c4_0x3111c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003111c4_0x3111c4");
#endif

    ctx->pc = 0x3111c4u;

    // 0x3111c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3111c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3111c8: 0x0  nop
    ctx->pc = 0x3111c8u;
    // NOP
    // 0x3111cc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3111ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3111d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3111D0u;
    {
        const bool branch_taken_0x3111d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3111d0) {
            ctx->pc = 0x31120Cu;
            return;
        }
    }
    ctx->pc = 0x3111D8u;
}
