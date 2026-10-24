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

// Function: entry_00111cf0
// Address: 0x111cf0 - 0x111d14
void entry_00111cf0_0x111cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111cf0_0x111cf0");
#endif

    ctx->pc = 0x111cf0u;

    // 0x111cf0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x111cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111CF4u;
    {
        const bool branch_taken_0x111cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111CF4u;
        // 0x111cf8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111cf4) {
            ctx->pc = 0x111D14u;
            return;
        }
    }
    ctx->pc = 0x111CFCu;
    // 0x111cfc: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x111cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x111d00: 0x0  nop
    ctx->pc = 0x111d00u;
    // NOP
    // 0x111d04: 0x0  nop
    ctx->pc = 0x111d04u;
    // NOP
    // 0x111d08: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x111d08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x111d0c: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x111D0Cu;
    {
        const bool branch_taken_0x111d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D0Cu;
        // 0x111d10: 0xdfb10010  ld          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d0c) {
            ctx->pc = 0x112014u;
            return;
        }
    }
    ctx->pc = 0x111D14u;
}
