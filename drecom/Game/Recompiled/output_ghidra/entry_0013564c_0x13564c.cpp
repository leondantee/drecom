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

// Function: entry_0013564c
// Address: 0x13564c - 0x135660
void entry_0013564c_0x13564c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013564c_0x13564c");
#endif

    ctx->pc = 0x13564cu;

    // 0x13564c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x13564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135650: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x135650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x135654: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x135654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x135658: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13565c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x13565cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x135660u;
}
