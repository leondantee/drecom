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

// Function: entry_0010043c
// Address: 0x10043c - 0x10046c
void entry_0010043c_0x10043c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010043c_0x10043c");
#endif

    ctx->pc = 0x10043cu;

    // 0x10043c: 0x14a2003a  bne         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x10043Cu;
    {
        const bool branch_taken_0x10043c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x100440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10043Cu;
        // 0x100440: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10043c) {
            ctx->pc = 0x100528u;
            return;
        }
    }
    ctx->pc = 0x100444u;
    // 0x100444: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x100448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10044c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x100450: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x100450u;
    {
        const bool branch_taken_0x100450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100450u;
        // 0x100454: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100450) {
            ctx->pc = 0x1004CCu;
            return;
        }
    }
    ctx->pc = 0x100458u;
    // 0x100458: 0x26430048  addiu       $v1, $s2, 0x48
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x10045c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x10045cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x100460: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x100460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x100464: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x100464u;
    {
        const bool branch_taken_0x100464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100464) {
            ctx->pc = 0x100468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100464u;
            // 0x100468: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10046Cu;
            return;
        }
    }
    ctx->pc = 0x10046Cu;
}
