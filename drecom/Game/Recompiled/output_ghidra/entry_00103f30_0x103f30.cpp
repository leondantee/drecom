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

// Function: entry_00103f30
// Address: 0x103f30 - 0x103f60
void entry_00103f30_0x103f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103f30_0x103f30");
#endif

    ctx->pc = 0x103f30u;

    // 0x103f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f34: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x103F34u;
    {
        const bool branch_taken_0x103f34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x103F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F34u;
        // 0x103f38: 0x25e241f8  addiu       $v0, $t7, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f34) {
            ctx->pc = 0x103F60u;
            return;
        }
    }
    ctx->pc = 0x103F3Cu;
    // 0x103f3c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x103f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x103f40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x103F40u;
    {
        const bool branch_taken_0x103f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F40u;
        // 0x103f44: 0x25e241f8  addiu       $v0, $t7, 0x41F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f40) {
            ctx->pc = 0x103F60u;
            return;
        }
    }
    ctx->pc = 0x103F48u;
    // 0x103f48: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x103f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103f4c: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x103f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x103f50: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x103f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103f54: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x103f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x103F58u;
    {
        const bool branch_taken_0x103f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F58u;
        // 0x103f5c: 0xac730134  sw          $s3, 0x134($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f58) {
            ctx->pc = 0x103F74u;
            return;
        }
    }
    ctx->pc = 0x103F60u;
}
