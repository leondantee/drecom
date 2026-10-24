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

// Function: entry_0015bbf4
// Address: 0x15bbf4 - 0x15bc08
void entry_0015bbf4_0x15bbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bbf4_0x15bbf4");
#endif

    ctx->pc = 0x15bbf4u;

    // 0x15bbf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bbf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbf8: 0x0  nop
    ctx->pc = 0x15bbf8u;
    // NOP
    // 0x15bbfc: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bc00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15BC00u;
    {
        const bool branch_taken_0x15bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc00) {
            ctx->pc = 0x15BC5Cu;
            return;
        }
    }
    ctx->pc = 0x15BC08u;
}
