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

// Function: entry_0010e948
// Address: 0x10e948 - 0x10e960
void entry_0010e948_0x10e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e948_0x10e948");
#endif

    switch (ctx->pc) {
        case 0x10e950u: goto label_10e950;
        default: break;
    }

    ctx->pc = 0x10e948u;

label_10e948:
    // 0x10e948: 0xc085766  jal         func_215D98
    ctx->pc = 0x10E948u;
    SET_GPR_U32(ctx, 31, 0x10E950u);
    ctx->pc = 0x10E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E948u;
    // 0x10e94c: 0x26044fe0  addiu       $a0, $s0, 0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x10E950u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E950u) { return; }
    ctx->pc = 0x10E950u;
label_10e950:
    // 0x10e950: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x10E950u;
    {
        const bool branch_taken_0x10e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E950u;
        // 0x10e954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e950) {
            ctx->pc = 0x10E948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e948;
        }
    }
    ctx->pc = 0x10E958u;
    // 0x10e958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E958u;
    {
        const bool branch_taken_0x10e958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E958u;
        // 0x10e95c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e958) {
            ctx->pc = 0x10E970u;
            return;
        }
    }
    ctx->pc = 0x10E960u;
}
