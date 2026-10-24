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

// Function: entry_0025fd2c
// Address: 0x25fd2c - 0x25fd40
void entry_0025fd2c_0x25fd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fd2c_0x25fd2c");
#endif

    ctx->pc = 0x25fd2cu;

    // 0x25fd2c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fd30: 0xc44002d8  lwc1        $f0, 0x2D8($v0)
    ctx->pc = 0x25fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fd34: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x25fd38: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25FD38u;
    {
        const bool branch_taken_0x25fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd38) {
            ctx->pc = 0x25FDACu;
            return;
        }
    }
    ctx->pc = 0x25FD40u;
}
