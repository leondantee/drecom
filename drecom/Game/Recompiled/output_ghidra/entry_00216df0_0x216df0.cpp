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

// Function: entry_00216df0
// Address: 0x216df0 - 0x216e14
void entry_00216df0_0x216df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216df0_0x216df0");
#endif

    switch (ctx->pc) {
        case 0x216e04u: goto label_216e04;
        default: break;
    }

    ctx->pc = 0x216df0u;

    // 0x216df0: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x216DF0u;
    {
        const bool branch_taken_0x216df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x216df0) {
            ctx->pc = 0x216DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216DF0u;
            // 0x216df4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E14u;
            return;
        }
    }
    ctx->pc = 0x216DF8u;
    // 0x216df8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x216df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x216dfc: 0xc085766  jal         func_215D98
    ctx->pc = 0x216DFCu;
    SET_GPR_U32(ctx, 31, 0x216E04u);
    ctx->pc = 0x216E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DFCu;
    // 0x216e00: 0x2484ca50  addiu       $a0, $a0, -0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x216E04u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x216E04u) { return; }
    ctx->pc = 0x216E04u;
label_216e04:
    // 0x216e04: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x216E04u;
    {
        const bool branch_taken_0x216e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e04) {
            ctx->pc = 0x216E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E04u;
            // 0x216e08: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F48u;
            return;
        }
    }
    ctx->pc = 0x216E0Cu;
    // 0x216e0c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x216E0Cu;
    {
        const bool branch_taken_0x216e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E0Cu;
        // 0x216e10: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e0c) {
            ctx->pc = 0x216F48u;
            return;
        }
    }
    ctx->pc = 0x216E14u;
}
