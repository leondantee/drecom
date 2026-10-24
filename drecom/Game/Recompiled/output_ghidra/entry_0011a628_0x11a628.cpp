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

// Function: entry_0011a628
// Address: 0x11a628 - 0x11a670
void entry_0011a628_0x11a628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a628_0x11a628");
#endif

    ctx->pc = 0x11a628u;

    // 0x11a628: 0x2b61823  subu        $v1, $s5, $s6
    ctx->pc = 0x11a628u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x11a62c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x11a62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11a630: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11a630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a634: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x11a634u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x11a638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a63c: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11a640: 0x18a00025  blez        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11A640u;
    {
        const bool branch_taken_0x11a640 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x11A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A640u;
        // 0x11a644: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a640) {
            ctx->pc = 0x11A6D8u;
            return;
        }
    }
    ctx->pc = 0x11A648u;
    // 0x11a648: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x11a648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a64c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11A64Cu;
    {
        const bool branch_taken_0x11a64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A64Cu;
        // 0x11a650: 0x2451823  subu        $v1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a64c) {
            ctx->pc = 0x11A698u;
            return;
        }
    }
    ctx->pc = 0x11A654u;
    // 0x11a654: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x11a654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x11a658: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a65c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a660: 0x2918023  subu        $s0, $s4, $s1
    ctx->pc = 0x11a660u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x11a664: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a668: 0x2b43823  subu        $a3, $s5, $s4
    ctx->pc = 0x11a668u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x11a66c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a670u;
}
