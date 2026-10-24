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

// Function: entry_00295e2c
// Address: 0x295e2c - 0x295e5c
void entry_00295e2c_0x295e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295e2c_0x295e2c");
#endif

    ctx->pc = 0x295e2cu;

    // 0x295e2c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x295e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295e30: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295e34: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295e38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295e3c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295e3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295e40: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295E40u;
    {
        const bool branch_taken_0x295e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e40) {
            ctx->pc = 0x295E5Cu;
            return;
        }
    }
    ctx->pc = 0x295E48u;
    // 0x295e48: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295e4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295e50: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295e54: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295E54u;
    {
        const bool branch_taken_0x295e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e54) {
            ctx->pc = 0x295E5Cu;
            return;
        }
    }
    ctx->pc = 0x295E5Cu;
}
