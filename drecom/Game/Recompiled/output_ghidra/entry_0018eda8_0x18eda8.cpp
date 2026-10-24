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

// Function: entry_0018eda8
// Address: 0x18eda8 - 0x18edbc
void entry_0018eda8_0x18eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eda8_0x18eda8");
#endif

    ctx->pc = 0x18eda8u;

    // 0x18eda8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edac: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edb0: 0xac4002a8  sw          $zero, 0x2A8($v0)
    ctx->pc = 0x18edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 0));
    // 0x18edb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EDB4u;
    {
        const bool branch_taken_0x18edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18edb4) {
            ctx->pc = 0x18EE00u;
            return;
        }
    }
    ctx->pc = 0x18EDBCu;
}
