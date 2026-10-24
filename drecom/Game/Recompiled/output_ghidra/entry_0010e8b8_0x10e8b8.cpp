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

// Function: entry_0010e8b8
// Address: 0x10e8b8 - 0x10e8dc
void entry_0010e8b8_0x10e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e8b8_0x10e8b8");
#endif

    switch (ctx->pc) {
        case 0x10e8ccu: goto label_10e8cc;
        default: break;
    }

    ctx->pc = 0x10e8b8u;

    // 0x10e8b8: 0x8e2245c4  lw          $v0, 0x45C4($s1)
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17860)));
    // 0x10e8bc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x10E8BCu;
    {
        const bool branch_taken_0x10e8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e8bc) {
            ctx->pc = 0x10E8B0u;
            return;
        }
    }
    ctx->pc = 0x10E8C4u;
    // 0x10e8c4: 0xc085766  jal         func_215D98
    ctx->pc = 0x10E8C4u;
    SET_GPR_U32(ctx, 31, 0x10E8CCu);
    ctx->pc = 0x10E8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E8C4u;
    // 0x10e8c8: 0x26043e80  addiu       $a0, $s0, 0x3E80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x10E8CCu;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E8CCu) { return; }
    ctx->pc = 0x10E8CCu;
label_10e8cc:
    // 0x10e8cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10E8CCu;
    {
        const bool branch_taken_0x10e8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8CCu;
        // 0x10e8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8cc) {
            ctx->pc = 0x10E8B0u;
            return;
        }
    }
    ctx->pc = 0x10E8D4u;
    // 0x10e8d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10E8D4u;
    {
        const bool branch_taken_0x10e8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8D4u;
        // 0x10e8d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8d4) {
            ctx->pc = 0x10E908u;
            return;
        }
    }
    ctx->pc = 0x10E8DCu;
}
