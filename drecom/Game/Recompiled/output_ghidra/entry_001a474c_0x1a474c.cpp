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

// Function: entry_001a474c
// Address: 0x1a474c - 0x1a475c
void entry_001a474c_0x1a474c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a474c_0x1a474c");
#endif

    ctx->pc = 0x1a474cu;

    // 0x1a474c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4750: 0xac6002fc  sw          $zero, 0x2FC($v1)
    ctx->pc = 0x1a4750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 0));
    // 0x1a4754: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4758: 0xac600300  sw          $zero, 0x300($v1)
    ctx->pc = 0x1a4758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 768), GPR_U32(ctx, 0));
    ctx->pc = 0x1a475cu;
}
