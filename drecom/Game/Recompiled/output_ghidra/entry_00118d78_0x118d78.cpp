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

// Function: entry_00118d78
// Address: 0x118d78 - 0x118d9c
void entry_00118d78_0x118d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d78_0x118d78");
#endif

    switch (ctx->pc) {
        case 0x118d90u: goto label_118d90;
        default: break;
    }

    ctx->pc = 0x118d78u;

    // 0x118d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d7c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x118d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x118d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118d84: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x118d84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118d88: 0xc04567c  jal         func_1159F0
    ctx->pc = 0x118D88u;
    SET_GPR_U32(ctx, 31, 0x118D90u);
    ctx->pc = 0x118D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D88u;
    // 0x118d8c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159F0u;
    {
        ctx->pc = 0x118D90u;
        ps2_stubs::calloc_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118D90u) { return; }
    ctx->pc = 0x118D90u;
label_118d90:
    // 0x118d90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d94: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D94u;
    {
        const bool branch_taken_0x118d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x118d94) {
            ctx->pc = 0x118D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118D94u;
            // 0x118d98: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118DA4u;
            return;
        }
    }
    ctx->pc = 0x118D9Cu;
}
