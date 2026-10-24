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

// Function: entry_001c6f34
// Address: 0x1c6f34 - 0x1c6f60
void entry_001c6f34_0x1c6f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f34_0x1c6f34");
#endif

    ctx->pc = 0x1c6f34u;

    // 0x1c6f34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f38: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c6f3c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1c6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1c6f40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c6f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c6f44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6F44u;
    {
        const bool branch_taken_0x1c6f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f44) {
            ctx->pc = 0x1C6F60u;
            return;
        }
    }
    ctx->pc = 0x1C6F4Cu;
    // 0x1c6f4c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c6f50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f54: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c6f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6f58: 0x10000502  b           . + 4 + (0x502 << 2)
    ctx->pc = 0x1C6F58u;
    {
        const bool branch_taken_0x1c6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f58) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F60u;
}
