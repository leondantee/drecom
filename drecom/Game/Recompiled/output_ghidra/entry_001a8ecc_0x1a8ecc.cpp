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

// Function: entry_001a8ecc
// Address: 0x1a8ecc - 0x1a8ee4
void entry_001a8ecc_0x1a8ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ecc_0x1a8ecc");
#endif

    ctx->pc = 0x1a8eccu;

    // 0x1a8ecc: 0xafb5007c  sw          $s5, 0x7C($sp)
    ctx->pc = 0x1a8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 21));
    // 0x1a8ed0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8ed4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1a8ed8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1a8edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A8EDCu;
    {
        const bool branch_taken_0x1a8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8edc) {
            ctx->pc = 0x1A8F10u;
            return;
        }
    }
    ctx->pc = 0x1A8EE4u;
}
