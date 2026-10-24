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

// Function: entry_00136af8
// Address: 0x136af8 - 0x136b10
void entry_00136af8_0x136af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136af8_0x136af8");
#endif

    ctx->pc = 0x136af8u;

    // 0x136af8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x136af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x136afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b00: 0x0  nop
    ctx->pc = 0x136b00u;
    // NOP
    // 0x136b04: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136b08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136B50u;
            return;
        }
    }
    ctx->pc = 0x136B10u;
}
