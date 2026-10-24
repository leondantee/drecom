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

// Function: entry_0010732c
// Address: 0x10732c - 0x107344
void entry_0010732c_0x10732c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010732c_0x10732c");
#endif

    ctx->pc = 0x10732cu;

    // 0x10732c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10732Cu;
    {
        const bool branch_taken_0x10732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10732Cu;
        // 0x107330: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10732c) {
            ctx->pc = 0x107344u;
            return;
        }
    }
    ctx->pc = 0x107334u;
    // 0x107334: 0x8e02449c  lw          $v0, 0x449C($s0)
    ctx->pc = 0x107334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17564)));
    // 0x107338: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x107338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10733c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10733Cu;
    {
        const bool branch_taken_0x10733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10733Cu;
        // 0x107340: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10733c) {
            ctx->pc = 0x10736Cu;
            return;
        }
    }
    ctx->pc = 0x107344u;
}
