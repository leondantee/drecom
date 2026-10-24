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

// Function: entry_0010db18
// Address: 0x10db18 - 0x10db38
void entry_0010db18_0x10db18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db18_0x10db18");
#endif

    switch (ctx->pc) {
        case 0x10db20u: goto label_10db20;
        default: break;
    }

    ctx->pc = 0x10db18u;

    // 0x10db18: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10DB18u;
    SET_GPR_U32(ctx, 31, 0x10DB20u);
    ctx->pc = 0x10DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB18u;
    // 0x10db1c: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10DB20u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB20u) { return; }
    ctx->pc = 0x10DB20u;
label_10db20:
    // 0x10db20: 0x8e4245d4  lw          $v0, 0x45D4($s2)
    ctx->pc = 0x10db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17876)));
    // 0x10db24: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10DB24u;
    {
        const bool branch_taken_0x10db24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB24u;
        // 0x10db28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db24) {
            ctx->pc = 0x10DBD0u;
            return;
        }
    }
    ctx->pc = 0x10DB2Cu;
    // 0x10db2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10DB2Cu;
    {
        const bool branch_taken_0x10db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB2Cu;
        // 0x10db30: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db2c) {
            ctx->pc = 0x10DB5Cu;
            return;
        }
    }
    ctx->pc = 0x10DB34u;
    // 0x10db34: 0x0  nop
    ctx->pc = 0x10db34u;
    // NOP
    ctx->pc = 0x10db38u;
}
