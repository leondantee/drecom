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

// Function: entry_0018cdcc
// Address: 0x18cdcc - 0x18cde4
void entry_0018cdcc_0x18cdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cdcc_0x18cdcc");
#endif

    ctx->pc = 0x18cdccu;

    // 0x18cdcc: 0x8e020b18  lw          $v0, 0xB18($s0)
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x18cdd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CDD0u;
    {
        const bool branch_taken_0x18cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cdd0) {
            ctx->pc = 0x18CDE4u;
            return;
        }
    }
    ctx->pc = 0x18CDD8u;
    // 0x18cdd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cddc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18CDDCu;
    {
        const bool branch_taken_0x18cddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cddc) {
            ctx->pc = 0x18CE20u;
            return;
        }
    }
    ctx->pc = 0x18CDE4u;
}
