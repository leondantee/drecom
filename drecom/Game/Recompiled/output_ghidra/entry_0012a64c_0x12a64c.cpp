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

// Function: entry_0012a64c
// Address: 0x12a64c - 0x12a664
void entry_0012a64c_0x12a64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a64c_0x12a64c");
#endif

    ctx->pc = 0x12a64cu;

    // 0x12a64c: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x12a64cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12a650: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A650u;
    {
        const bool branch_taken_0x12a650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a650) {
            ctx->pc = 0x12A664u;
            return;
        }
    }
    ctx->pc = 0x12A658u;
    // 0x12a658: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x12a658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12a65c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a660: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x12a660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12a664u;
}
