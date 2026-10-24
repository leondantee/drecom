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

// Function: entry_00215aa8
// Address: 0x215aa8 - 0x215ac0
void entry_00215aa8_0x215aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215aa8_0x215aa8");
#endif

    switch (ctx->pc) {
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab8u: goto label_215ab8;
        default: break;
    }

    ctx->pc = 0x215aa8u;

    // 0x215aa8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x215AA8u;
    SET_GPR_U32(ctx, 31, 0x215AB0u);
    ctx->pc = 0x215AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AA8u;
    // 0x215aac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x215AB0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215AB0u) { return; }
    ctx->pc = 0x215AB0u;
label_215ab0:
    // 0x215ab0: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215AB0u;
    SET_GPR_U32(ctx, 31, 0x215AB8u);
    ctx->pc = 0x215AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AB0u;
    // 0x215ab4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215AB8u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215AB8u) { return; }
    ctx->pc = 0x215AB8u;
label_215ab8:
    // 0x215ab8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x215AB8u;
    {
        const bool branch_taken_0x215ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AB8u;
        // 0x215abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ab8) {
            ctx->pc = 0x215AFCu;
            return;
        }
    }
    ctx->pc = 0x215AC0u;
}
