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

// Function: entry_00299148
// Address: 0x299148 - 0x299150
void entry_00299148_0x299148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299148_0x299148");
#endif

    ctx->pc = 0x299148u;

    // 0x299148: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x299148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x29914c: 0xe4c001d4  swc1        $f0, 0x1D4($a2)
    ctx->pc = 0x29914cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 468), bits); }
    ctx->pc = 0x299150u;
}
