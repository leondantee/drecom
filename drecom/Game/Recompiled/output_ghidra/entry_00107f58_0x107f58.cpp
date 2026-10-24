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

// Function: entry_00107f58
// Address: 0x107f58 - 0x107f6c
void entry_00107f58_0x107f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f58_0x107f58");
#endif

    ctx->pc = 0x107f58u;

    // 0x107f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F5Cu;
    {
        const bool branch_taken_0x107f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F5Cu;
        // 0x107f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f5c) {
            ctx->pc = 0x107F6Cu;
            return;
        }
    }
    ctx->pc = 0x107F64u;
    // 0x107f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107f68: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x107f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    ctx->pc = 0x107f6cu;
}
