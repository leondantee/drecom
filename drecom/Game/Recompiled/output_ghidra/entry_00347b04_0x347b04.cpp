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

// Function: entry_00347b04
// Address: 0x347b04 - 0x347b14
void entry_00347b04_0x347b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347b04_0x347b04");
#endif

    ctx->pc = 0x347b04u;

    // 0x347b04: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347b08: 0x2464a280  addiu       $a0, $v1, -0x5D80
    ctx->pc = 0x347b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x347b0c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x347b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347b10: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x347b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    ctx->pc = 0x347b14u;
}
