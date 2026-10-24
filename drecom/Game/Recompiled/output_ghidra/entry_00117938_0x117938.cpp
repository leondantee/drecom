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

// Function: entry_00117938
// Address: 0x117938 - 0x117978
void entry_00117938_0x117938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117938_0x117938");
#endif

    switch (ctx->pc) {
        case 0x117958u: goto label_117958;
        default: break;
    }

    ctx->pc = 0x117938u;

    // 0x117938: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x117938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x11793c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11793Cu;
    {
        const bool branch_taken_0x11793c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11793Cu;
        // 0x117940: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11793c) {
            ctx->pc = 0x117978u;
            return;
        }
    }
    ctx->pc = 0x117944u;
    // 0x117944: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x117944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117948: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x117948u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x11794c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11794cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117950: 0xc0462d2  jal         func_118B48
    ctx->pc = 0x117950u;
    SET_GPR_U32(ctx, 31, 0x117958u);
    ctx->pc = 0x117954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117950u;
    // 0x117954: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B48u;
    {
        ctx->pc = 0x117958u;
        ps2_stubs::memmove(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117958u) { return; }
    ctx->pc = 0x117958u;
label_117958:
    // 0x117958: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x117958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11795c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117960: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x117964: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x117964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x117968: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x117968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11796c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11796cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x117970: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x117970u;
    {
        const bool branch_taken_0x117970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117970u;
        // 0x117974: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117970) {
            ctx->pc = 0x117A20u;
            return;
        }
    }
    ctx->pc = 0x117978u;
}
