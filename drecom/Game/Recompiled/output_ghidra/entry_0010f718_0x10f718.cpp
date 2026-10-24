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

// Function: entry_0010f718
// Address: 0x10f718 - 0x10f740
void entry_0010f718_0x10f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f718_0x10f718");
#endif

    switch (ctx->pc) {
        case 0x10f724u: goto label_10f724;
        default: break;
    }

    ctx->pc = 0x10f718u;

    // 0x10f718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f71c: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10F71Cu;
    SET_GPR_U32(ctx, 31, 0x10F724u);
    ctx->pc = 0x10F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F71Cu;
    // 0x10f720: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10F724u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F724u) { return; }
    ctx->pc = 0x10F724u;
label_10f724:
    // 0x10f724: 0x8e2245d4  lw          $v0, 0x45D4($s1)
    ctx->pc = 0x10f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17876)));
    // 0x10f728: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10F728u;
    {
        const bool branch_taken_0x10f728 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F728u;
        // 0x10f72c: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f728) {
            ctx->pc = 0x10F7DCu;
            return;
        }
    }
    ctx->pc = 0x10F730u;
    // 0x10f730: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x10f730u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x10f734: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10F734u;
    {
        const bool branch_taken_0x10f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F734u;
        // 0x10f738: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f734) {
            ctx->pc = 0x10F764u;
            return;
        }
    }
    ctx->pc = 0x10F73Cu;
    // 0x10f73c: 0x0  nop
    ctx->pc = 0x10f73cu;
    // NOP
    ctx->pc = 0x10f740u;
}
