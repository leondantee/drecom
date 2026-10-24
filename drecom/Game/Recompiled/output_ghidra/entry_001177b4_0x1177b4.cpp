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

// Function: entry_001177b4
// Address: 0x1177b4 - 0x1177d8
void entry_001177b4_0x1177b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001177b4_0x1177b4");
#endif

    switch (ctx->pc) {
        case 0x1177c8u: goto label_1177c8;
        default: break;
    }

    ctx->pc = 0x1177b4u;

    // 0x1177b4: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x1177b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x1177b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1177b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1177bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1177bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c0: 0xc084c4a  jal         func_213128
    ctx->pc = 0x1177C0u;
    SET_GPR_U32(ctx, 31, 0x1177C8u);
    ctx->pc = 0x1177C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177C0u;
    // 0x1177c4: 0xae200e20  sw          $zero, 0xE20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213128u;
    {
        ctx->pc = 0x1177C8u;
        ps2_stubs::fstat(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1177C8u) { return; }
    ctx->pc = 0x1177C8u;
label_1177c8:
    // 0x1177c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1177c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1177ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1177d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1177D0u;
    {
        const bool branch_taken_0x1177d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1177D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D0u;
        // 0x1177d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177d0) {
            ctx->pc = 0x1177E8u;
            return;
        }
    }
    ctx->pc = 0x1177D8u;
}
