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

// Function: entry_00119138
// Address: 0x119138 - 0x119150
void entry_00119138_0x119138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119138_0x119138");
#endif

    ctx->pc = 0x119138u;

    // 0x119138: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x119138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11913c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11913Cu;
    {
        const bool branch_taken_0x11913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11913Cu;
        // 0x119140: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11913c) {
            ctx->pc = 0x119150u;
            return;
        }
    }
    ctx->pc = 0x119144u;
    // 0x119144: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x119148: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x11914c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x11914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x119150u;
}
