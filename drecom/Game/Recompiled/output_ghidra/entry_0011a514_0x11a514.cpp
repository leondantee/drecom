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

// Function: entry_0011a514
// Address: 0x11a514 - 0x11a558
void entry_0011a514_0x11a514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a514_0x11a514");
#endif

    ctx->pc = 0x11a514u;

    // 0x11a514: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a518: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11A518u;
    {
        const bool branch_taken_0x11a518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A518u;
        // 0x11a51c: 0x2552823  subu        $a1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a518) {
            ctx->pc = 0x11A628u;
            return;
        }
    }
    ctx->pc = 0x11A520u;
    // 0x11a520: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a524: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x11a528: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x11a528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11a52c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x11a52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x11a530: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x11a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11a534: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x11A534u;
    {
        const bool branch_taken_0x11a534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A534u;
        // 0x11a538: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a534) {
            ctx->pc = 0x11A7C4u;
            return;
        }
    }
    ctx->pc = 0x11A53Cu;
    // 0x11a53c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x11a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x11a540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a544: 0x2bd50002  slti        $s5, $fp, 0x2
    ctx->pc = 0x11a544u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a548: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x11a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x11a54c: 0x13a03c  dsll32      $s4, $s3, 0
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
    // 0x11a550: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11a550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a554: 0x0  nop
    ctx->pc = 0x11a554u;
    // NOP
    ctx->pc = 0x11a558u;
}
