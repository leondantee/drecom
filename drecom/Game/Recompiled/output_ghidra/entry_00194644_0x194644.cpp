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

// Function: entry_00194644
// Address: 0x194644 - 0x194668
void entry_00194644_0x194644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194644_0x194644");
#endif

    ctx->pc = 0x194644u;

    // 0x194644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194648: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x19464c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19464Cu;
    {
        const bool branch_taken_0x19464c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19464c) {
            ctx->pc = 0x194668u;
            return;
        }
    }
    ctx->pc = 0x194654u;
    // 0x194654: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x194658: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x19465c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x19465cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x194660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x194660u;
    {
        const bool branch_taken_0x194660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194660) {
            ctx->pc = 0x194674u;
            return;
        }
    }
    ctx->pc = 0x194668u;
}
