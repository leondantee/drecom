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

// Function: entry_00108bc4
// Address: 0x108bc4 - 0x108c14
void entry_00108bc4_0x108bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108bc4_0x108bc4");
#endif

    ctx->pc = 0x108bc4u;

    // 0x108bc4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x108bc8: 0x8d023b28  lw          $v0, 0x3B28($t0)
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383B28u));
    // 0x108bcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x108BCCu;
    {
        const bool branch_taken_0x108bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BCCu;
        // 0x108bd0: 0x25073b28  addiu       $a3, $t0, 0x3B28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 15144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bcc) {
            ctx->pc = 0x108C14u;
            return;
        }
    }
    ctx->pc = 0x108BD4u;
    // 0x108bd4: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x108bd8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108bdc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x108bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x108be0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x108be4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x108be4u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 4));
    // 0x108be8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108bec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x108becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x108bf0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x108bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x108bf4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x108bf8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x108bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x108bfc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x108bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x108c00: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x108c00u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x108c04: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108c08: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x108c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x108c0c: 0xac26b000  sw          $a2, -0x5000($at)
    ctx->pc = 0x108c0cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 6));
    // 0x108c10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x108c10u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    ctx->pc = 0x108c14u;
}
