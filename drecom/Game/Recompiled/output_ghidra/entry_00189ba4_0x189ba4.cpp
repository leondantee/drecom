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

// Function: entry_00189ba4
// Address: 0x189ba4 - 0x189bb8
void entry_00189ba4_0x189ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ba4_0x189ba4");
#endif

    ctx->pc = 0x189ba4u;

    // 0x189ba4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189ba8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189bac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x189BB0u;
    {
        const bool branch_taken_0x189bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189bb0) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189BB8u;
}
