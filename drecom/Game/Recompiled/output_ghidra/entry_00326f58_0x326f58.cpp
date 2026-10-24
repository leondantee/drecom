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

// Function: entry_00326f58
// Address: 0x326f58 - 0x326f70
void entry_00326f58_0x326f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326f58_0x326f58");
#endif

    ctx->pc = 0x326f58u;

    // 0x326f58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326f5c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x326f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x326f60: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x326f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x326f64: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x326f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x326f68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x326F68u;
    {
        const bool branch_taken_0x326f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f68) {
            ctx->pc = 0x326FA0u;
            return;
        }
    }
    ctx->pc = 0x326F70u;
}
