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

// Function: entry_0021c61c
// Address: 0x21c61c - 0x21c63c
void entry_0021c61c_0x21c61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c61c_0x21c61c");
#endif

    ctx->pc = 0x21c61cu;

    // 0x21c61c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x21c61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c620: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21c620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21c624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c628: 0x0  nop
    ctx->pc = 0x21c628u;
    // NOP
    // 0x21c62c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c630: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x21c630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c634: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21C634u;
    {
        const bool branch_taken_0x21c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c634) {
            ctx->pc = 0x21C698u;
            return;
        }
    }
    ctx->pc = 0x21C63Cu;
}
