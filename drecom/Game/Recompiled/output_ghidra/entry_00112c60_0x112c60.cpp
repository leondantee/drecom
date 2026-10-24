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

// Function: entry_00112c60
// Address: 0x112c60 - 0x112c88
void entry_00112c60_0x112c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c60_0x112c60");
#endif

    ctx->pc = 0x112c60u;

    // 0x112c60: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x112c64: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x112c68: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x112c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c6c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x112c70: 0x1ae00021  blez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x112C70u;
    {
        const bool branch_taken_0x112c70 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x112C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C70u;
        // 0x112c74: 0xdc520000  ld          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c70) {
            ctx->pc = 0x112CF8u;
            return;
        }
    }
    ctx->pc = 0x112C78u;
    // 0x112c78: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x112c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x112c7c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x112c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c80: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x112c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x112c84: 0x0  nop
    ctx->pc = 0x112c84u;
    // NOP
    ctx->pc = 0x112c88u;
}
