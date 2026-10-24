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

// Function: entry_001141f8
// Address: 0x1141f8 - 0x114200
void entry_001141f8_0x1141f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001141f8_0x1141f8");
#endif

    ctx->pc = 0x1141f8u;

    // 0x1141f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1141f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1141fc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    ctx->pc = 0x114200u;
}
