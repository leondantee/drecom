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

// Function: entry_00136b28
// Address: 0x136b28 - 0x136b40
void entry_00136b28_0x136b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136b28_0x136b28");
#endif

    ctx->pc = 0x136b28u;

    // 0x136b28: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x136b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x136b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x136b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136b30: 0x0  nop
    ctx->pc = 0x136b30u;
    // NOP
    // 0x136b34: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x136b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x136b38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x136B38u;
    {
        const bool branch_taken_0x136b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b38) {
            ctx->pc = 0x136B50u;
            return;
        }
    }
    ctx->pc = 0x136B40u;
}
