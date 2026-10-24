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

// Function: entry_00119e34
// Address: 0x119e34 - 0x119e70
void entry_00119e34_0x119e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e34_0x119e34");
#endif

    ctx->pc = 0x119e34u;

    // 0x119e34: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x119e38: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x119E38u;
    {
        const bool branch_taken_0x119e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E38u;
        // 0x119e3c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e38) {
            ctx->pc = 0x119F40u;
            return;
        }
    }
    ctx->pc = 0x119E40u;
    // 0x119e40: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x119e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119e44: 0x2d38021  addu        $s0, $s6, $s3
    ctx->pc = 0x119e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x119e48: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x119e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x119e4c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x119e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x119e50: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x119E50u;
    {
        const bool branch_taken_0x119e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E50u;
        // 0x119e54: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e50) {
            ctx->pc = 0x11A7C4u;
            return;
        }
    }
    ctx->pc = 0x119E58u;
    // 0x119e58: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x119e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x119e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119e60: 0x2bd50002  slti        $s5, $fp, 0x2
    ctx->pc = 0x119e60u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x119e64: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x119e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x119e68: 0x13a03c  dsll32      $s4, $s3, 0
    ctx->pc = 0x119e68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) << (32 + 0));
    // 0x119e6c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119e70u;
}
