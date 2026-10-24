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

// Function: entry_00108500
// Address: 0x108500 - 0x108560
void entry_00108500_0x108500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108500_0x108500");
#endif

    ctx->pc = 0x108500u;

label_108500:
    // 0x108500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108504: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x108504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x108508: 0x0  nop
    ctx->pc = 0x108508u;
    // NOP
    // 0x10850c: 0x0  nop
    ctx->pc = 0x10850cu;
    // NOP
    // 0x108510: 0x0  nop
    ctx->pc = 0x108510u;
    // NOP
    // 0x108514: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108514u;
    {
        const bool branch_taken_0x108514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108514) {
            ctx->pc = 0x108500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108500;
        }
    }
    ctx->pc = 0x10851Cu;
    // 0x10851c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10851cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108520: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x108520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108524: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x108524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x108528: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x108528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x10852c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10852cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0));
    // 0x108530: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108534: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x108534u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 8));
    // 0x108538: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x108538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10853c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x108540: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x108540u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 10));
    // 0x108544: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x108548: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x108548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10854c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10854cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 2));
    // 0x108550: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108554: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x108554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x108558: 0x8d87000c  lw          $a3, 0xC($t4)
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x10855c: 0x0  nop
    ctx->pc = 0x10855cu;
    // NOP
    ctx->pc = 0x108560u;
}
