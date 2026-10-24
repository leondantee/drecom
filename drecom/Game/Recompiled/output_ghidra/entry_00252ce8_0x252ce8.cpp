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

// Function: entry_00252ce8
// Address: 0x252ce8 - 0x252d04
void entry_00252ce8_0x252ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252ce8_0x252ce8");
#endif

    ctx->pc = 0x252ce8u;

    // 0x252ce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252cec: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252cf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252cf4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252cf8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252cfc: 0x100001b3  b           . + 4 + (0x1B3 << 2)
    ctx->pc = 0x252CFCu;
    {
        const bool branch_taken_0x252cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252cfc) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252D04u;
}
