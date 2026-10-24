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

// Function: entry_0016aaf4
// Address: 0x16aaf4 - 0x16ab00
void entry_0016aaf4_0x16aaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aaf4_0x16aaf4");
#endif

    ctx->pc = 0x16aaf4u;

    // 0x16aaf4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aaf8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16aafc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x16aafcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16ab00u;
}
