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

// Function: entry_0010d4f0
// Address: 0x10d4f0 - 0x10d518
void entry_0010d4f0_0x10d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d4f0_0x10d4f0");
#endif

    switch (ctx->pc) {
        case 0x10d4f8u: goto label_10d4f8;
        case 0x10d504u: goto label_10d504;
        default: break;
    }

    ctx->pc = 0x10d4f0u;

    // 0x10d4f0: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x10D4F0u;
    SET_GPR_U32(ctx, 31, 0x10D4F8u);
    ctx->pc = 0x10D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4F0u;
    // 0x10d4f4: 0x8c4445b8  lw          $a0, 0x45B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x10D4F8u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D4F8u) { return; }
    ctx->pc = 0x10D4F8u;
label_10d4f8:
    // 0x10d4f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10d4fc: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x10D4FCu;
    SET_GPR_U32(ctx, 31, 0x10D504u);
    ctx->pc = 0x10D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4FCu;
    // 0x10d500: 0x8c6445bc  lw          $a0, 0x45BC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x10D504u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D504u) { return; }
    ctx->pc = 0x10D504u;
label_10d504:
    // 0x10d504: 0x8e0445c0  lw          $a0, 0x45C0($s0)
    ctx->pc = 0x10d504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17856)));
    // 0x10d508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d510: 0x8084a8c  j           func_212A30
    ctx->pc = 0x10D510u;
    ctx->pc = 0x10D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D510u;
    // 0x10d514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    DeleteSema_0x212a30(rdram, ctx, runtime); return;
    ctx->pc = 0x10D518u;
}
