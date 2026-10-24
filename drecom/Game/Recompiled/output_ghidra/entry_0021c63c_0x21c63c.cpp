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

// Function: entry_0021c63c
// Address: 0x21c63c - 0x21c65c
void entry_0021c63c_0x21c63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c63c_0x21c63c");
#endif

    ctx->pc = 0x21c63cu;

    // 0x21c63c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x21c63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21c640: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x21c640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x21c644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c648: 0x0  nop
    ctx->pc = 0x21c648u;
    // NOP
    // 0x21c64c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x21c64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x21c650: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x21c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21c654: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21C654u;
    {
        const bool branch_taken_0x21c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c654) {
            ctx->pc = 0x21C698u;
            return;
        }
    }
    ctx->pc = 0x21C65Cu;
}
