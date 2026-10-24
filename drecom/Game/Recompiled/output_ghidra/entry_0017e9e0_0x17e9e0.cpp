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

// Function: entry_0017e9e0
// Address: 0x17e9e0 - 0x17ea04
void entry_0017e9e0_0x17e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e9e0_0x17e9e0");
#endif

    ctx->pc = 0x17e9e0u;

    // 0x17e9e0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17e9e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E9E4u;
    {
        const bool branch_taken_0x17e9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9e4) {
            ctx->pc = 0x17E9C0u;
            return;
        }
    }
    ctx->pc = 0x17E9ECu;
    // 0x17e9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e9f4: 0x0  nop
    ctx->pc = 0x17e9f4u;
    // NOP
    // 0x17e9f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e9fc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17E9FCu;
    {
        const bool branch_taken_0x17e9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9fc) {
            ctx->pc = 0x17EB68u;
            return;
        }
    }
    ctx->pc = 0x17EA04u;
}
