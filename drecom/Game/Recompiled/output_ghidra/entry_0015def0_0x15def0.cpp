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

// Function: entry_0015def0
// Address: 0x15def0 - 0x15df08
void entry_0015def0_0x15def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015def0_0x15def0");
#endif

    ctx->pc = 0x15def0u;

    // 0x15def0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x15def4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15def8: 0x0  nop
    ctx->pc = 0x15def8u;
    // NOP
    // 0x15defc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15df00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DF00u;
    {
        const bool branch_taken_0x15df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df00) {
            ctx->pc = 0x15DF30u;
            return;
        }
    }
    ctx->pc = 0x15DF08u;
}
