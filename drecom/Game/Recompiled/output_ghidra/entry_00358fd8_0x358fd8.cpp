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

// Function: entry_00358fd8
// Address: 0x358fd8 - 0x358ff4
void entry_00358fd8_0x358fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358fd8_0x358fd8");
#endif

    ctx->pc = 0x358fd8u;

    // 0x358fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358fe0: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x358fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x358fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x358fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358fe8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x358fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x358fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x358FECu;
    {
        const bool branch_taken_0x358fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358fec) {
            ctx->pc = 0x359020u;
            return;
        }
    }
    ctx->pc = 0x358FF4u;
}
