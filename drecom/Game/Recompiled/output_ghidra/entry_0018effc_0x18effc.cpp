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

// Function: entry_0018effc
// Address: 0x18effc - 0x18f010
void entry_0018effc_0x18effc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018effc_0x18effc");
#endif

    ctx->pc = 0x18effcu;

    // 0x18effc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f000: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f004: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x18f004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x18f008: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18F008u;
    {
        const bool branch_taken_0x18f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f008) {
            ctx->pc = 0x18F054u;
            return;
        }
    }
    ctx->pc = 0x18F010u;
}
