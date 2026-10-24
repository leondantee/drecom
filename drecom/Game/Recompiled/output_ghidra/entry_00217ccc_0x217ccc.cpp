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

// Function: entry_00217ccc
// Address: 0x217ccc - 0x217cf0
void entry_00217ccc_0x217ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217ccc_0x217ccc");
#endif

    switch (ctx->pc) {
        case 0x217cd4u: goto label_217cd4;
        case 0x217cdcu: goto label_217cdc;
        default: break;
    }

    ctx->pc = 0x217cccu;

    // 0x217ccc: 0xc0854d2  jal         func_215348
    ctx->pc = 0x217CCCu;
    SET_GPR_U32(ctx, 31, 0x217CD4u);
    ctx->pc = 0x217CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CCCu;
    // 0x217cd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x217CD4u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217CD4u) { return; }
    ctx->pc = 0x217CD4u;
label_217cd4:
    // 0x217cd4: 0xc085542  jal         func_215508
    ctx->pc = 0x217CD4u;
    SET_GPR_U32(ctx, 31, 0x217CDCu);
    ctx->pc = 0x215508u;
    {
        ctx->pc = 0x217CDCu;
        ps2_stubs::sceSifExitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217CDCu) { return; }
    ctx->pc = 0x217CDCu;
label_217cdc:
    // 0x217cdc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x217cdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217ce0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ce4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217CE4u;
    {
        const bool branch_taken_0x217ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE4u;
        // 0x217ce8: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce4) {
            ctx->pc = 0x217D0Cu;
            return;
        }
    }
    ctx->pc = 0x217CECu;
    // 0x217cec: 0x0  nop
    ctx->pc = 0x217cecu;
    // NOP
    ctx->pc = 0x217cf0u;
}
