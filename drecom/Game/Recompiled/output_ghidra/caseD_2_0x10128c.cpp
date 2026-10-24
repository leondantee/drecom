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

// Function: caseD_2
// Address: 0x10128c - 0x1012c4
void caseD_2_0x10128c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x10128c");
#endif

    ctx->pc = 0x10128cu;

    // 0x10128c: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x10128cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101290: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x101294: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x101294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x101298: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10129c: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x10129cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1012a0: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1012a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1012a4: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x1012a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1012a8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1012A8u;
    {
        const bool branch_taken_0x1012a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012a8) {
            ctx->pc = 0x10131Cu;
            return;
        }
    }
    ctx->pc = 0x1012B0u;
    // 0x1012b0: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1012b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1012b4: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x1012b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1012b8: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1012b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1012bc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1012BCu;
    {
        const bool branch_taken_0x1012bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012bc) {
            ctx->pc = 0x101338u;
            return;
        }
    }
    ctx->pc = 0x1012C4u;
}
