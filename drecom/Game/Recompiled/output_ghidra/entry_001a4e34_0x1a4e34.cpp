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

// Function: entry_001a4e34
// Address: 0x1a4e34 - 0x1a4e54
void entry_001a4e34_0x1a4e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4e34_0x1a4e34");
#endif

    ctx->pc = 0x1a4e34u;

    // 0x1a4e34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e38: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4e3c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4e40: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4e40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4e44: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E44u;
    {
        const bool branch_taken_0x1a4e44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4e44) {
            ctx->pc = 0x1A4E54u;
            return;
        }
    }
    ctx->pc = 0x1A4E4Cu;
    // 0x1a4e4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4e50: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4e54u;
}
