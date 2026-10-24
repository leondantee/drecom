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

// Function: caseD_0
// Address: 0x2da5b4 - 0x2da5c8
void caseD_0_0x2da5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2da5b4");
#endif

    ctx->pc = 0x2da5b4u;

    // 0x2da5b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da5b8: 0x0  nop
    ctx->pc = 0x2da5b8u;
    // NOP
    // 0x2da5bc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2da5c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2DA5C0u;
    {
        const bool branch_taken_0x2da5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5c0) {
            ctx->pc = 0x2DA6E8u;
            return;
        }
    }
    ctx->pc = 0x2DA5C8u;
}
