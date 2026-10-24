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

// Function: entry_00100368
// Address: 0x100368 - 0x1003c4
void entry_00100368_0x100368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100368_0x100368");
#endif

    ctx->pc = 0x100368u;

    // 0x100368: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x100368u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x10036c: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x10036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x100370: 0x32a3000f  andi        $v1, $s5, 0xF
    ctx->pc = 0x100370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x100374: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x100374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x100378: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x100378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x10037c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x10037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x100380: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100384: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x100384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x100388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10038c: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x10038cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x100390: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x100394: 0x14a40029  bne         $a1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x100394u;
    {
        const bool branch_taken_0x100394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x100398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100394u;
        // 0x100398: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100394) {
            ctx->pc = 0x10043Cu;
            return;
        }
    }
    ctx->pc = 0x10039Cu;
    // 0x10039c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x10039cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1003a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1003a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1003a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1003a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1003a8: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1003A8u;
    {
        const bool branch_taken_0x1003a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1003ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003A8u;
        // 0x1003ac: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003a8) {
            ctx->pc = 0x100404u;
            return;
        }
    }
    ctx->pc = 0x1003B0u;
    // 0x1003b0: 0x26430032  addiu       $v1, $s2, 0x32
    ctx->pc = 0x1003b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
    // 0x1003b4: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1003b4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1003b8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1003b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1003bc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1003BCu;
    {
        const bool branch_taken_0x1003bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003bc) {
            ctx->pc = 0x1003C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1003BCu;
            // 0x1003c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1003C4u;
            return;
        }
    }
    ctx->pc = 0x1003C4u;
}
