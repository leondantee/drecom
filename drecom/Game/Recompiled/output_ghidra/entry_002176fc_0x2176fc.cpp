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

// Function: entry_002176fc
// Address: 0x2176fc - 0x217714
void entry_002176fc_0x2176fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002176fc_0x2176fc");
#endif

    switch (ctx->pc) {
        case 0x21770cu: goto label_21770c;
        default: break;
    }

    ctx->pc = 0x2176fcu;

    // 0x2176fc: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x217700: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x217700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217704: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x217704u;
    SET_GPR_U32(ctx, 31, 0x21770Cu);
    ctx->pc = 0x217708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217704u;
    // 0x217708: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x21770Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21770Cu) { return; }
    ctx->pc = 0x21770Cu;
label_21770c:
    // 0x21770c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21770Cu;
    {
        const bool branch_taken_0x21770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21770Cu;
        // 0x217710: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21770c) {
            ctx->pc = 0x217720u;
            return;
        }
    }
    ctx->pc = 0x217714u;
}
