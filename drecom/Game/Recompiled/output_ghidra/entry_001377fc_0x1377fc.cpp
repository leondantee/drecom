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

// Function: entry_001377fc
// Address: 0x1377fc - 0x137804
void entry_001377fc_0x1377fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001377fc_0x1377fc");
#endif

    ctx->pc = 0x1377fcu;

    // 0x1377fc: 0x8c236828  lw          $v1, 0x6828($at)
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 26664)));
    // 0x137800: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x137800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    ctx->pc = 0x137804u;
}
