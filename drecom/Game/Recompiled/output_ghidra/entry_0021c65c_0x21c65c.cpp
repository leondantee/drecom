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

// Function: entry_0021c65c
// Address: 0x21c65c - 0x21c67c
void entry_0021c65c_0x21c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c65c_0x21c65c");
#endif

    ctx->pc = 0x21c65cu;

    // 0x21c65c: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x21c65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21c660: 0x3c0343e1  lui         $v1, 0x43E1
    ctx->pc = 0x21c660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17377 << 16));
    // 0x21c664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c668: 0x0  nop
    ctx->pc = 0x21c668u;
    // NOP
    // 0x21c66c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c670: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x21c670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c674: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C674u;
    {
        const bool branch_taken_0x21c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c674) {
            ctx->pc = 0x21C698u;
            return;
        }
    }
    ctx->pc = 0x21C67Cu;
}
