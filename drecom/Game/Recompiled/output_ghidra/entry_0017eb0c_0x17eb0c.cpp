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

// Function: entry_0017eb0c
// Address: 0x17eb0c - 0x17eb24
void entry_0017eb0c_0x17eb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eb0c_0x17eb0c");
#endif

    ctx->pc = 0x17eb0cu;

    // 0x17eb0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17eb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb10: 0x0  nop
    ctx->pc = 0x17eb10u;
    // NOP
    // 0x17eb14: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17eb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17eb18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17eb18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17eb1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17EB1Cu;
    {
        const bool branch_taken_0x17eb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb1c) {
            ctx->pc = 0x17EB48u;
            return;
        }
    }
    ctx->pc = 0x17EB24u;
}
