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

// Function: entry_00261e6c
// Address: 0x261e6c - 0x261e80
void entry_00261e6c_0x261e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261e6c_0x261e6c");
#endif

    ctx->pc = 0x261e6cu;

    // 0x261e6c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e70: 0xc44002d8  lwc1        $f0, 0x2D8($v0)
    ctx->pc = 0x261e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e74: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x261e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x261e78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x261E78u;
    {
        const bool branch_taken_0x261e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e78) {
            ctx->pc = 0x261EE4u;
            return;
        }
    }
    ctx->pc = 0x261E80u;
}
