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

// Function: entry_001a47cc
// Address: 0x1a47cc - 0x1a47dc
void entry_001a47cc_0x1a47cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47cc_0x1a47cc");
#endif

    ctx->pc = 0x1a47ccu;

    // 0x1a47cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47d0: 0xac6002fc  sw          $zero, 0x2FC($v1)
    ctx->pc = 0x1a47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 0));
    // 0x1a47d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47d8: 0xac600300  sw          $zero, 0x300($v1)
    ctx->pc = 0x1a47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 768), GPR_U32(ctx, 0));
    ctx->pc = 0x1a47dcu;
}
