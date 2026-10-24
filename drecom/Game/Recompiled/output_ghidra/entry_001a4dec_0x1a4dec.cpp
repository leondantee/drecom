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

// Function: entry_001a4dec
// Address: 0x1a4dec - 0x1a4e0c
void entry_001a4dec_0x1a4dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4dec_0x1a4dec");
#endif

    ctx->pc = 0x1a4decu;

    // 0x1a4dec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4df0: 0x80630304  lb          $v1, 0x304($v1)
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 772)));
    // 0x1a4df4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4df8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4df8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dfc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DFCu;
    {
        const bool branch_taken_0x1a4dfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4dfc) {
            ctx->pc = 0x1A4E0Cu;
            return;
        }
    }
    ctx->pc = 0x1A4E04u;
    // 0x1a4e04: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e08: 0xa0600304  sb          $zero, 0x304($v1)
    ctx->pc = 0x1a4e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4e0cu;
}
