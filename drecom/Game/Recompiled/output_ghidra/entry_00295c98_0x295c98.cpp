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

// Function: entry_00295c98
// Address: 0x295c98 - 0x295cc8
void entry_00295c98_0x295c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295c98_0x295c98");
#endif

    ctx->pc = 0x295c98u;

    // 0x295c98: 0x8e926858  lw          $s2, 0x6858($s4)
    ctx->pc = 0x295c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 26712)));
    // 0x295c9c: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295ca0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295ca4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295ca8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295ca8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295cac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295CACu;
    {
        const bool branch_taken_0x295cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cac) {
            ctx->pc = 0x295CC8u;
            return;
        }
    }
    ctx->pc = 0x295CB4u;
    // 0x295cb4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295cb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295cbc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295cc0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295CC0u;
    {
        const bool branch_taken_0x295cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cc0) {
            ctx->pc = 0x295CC8u;
            return;
        }
    }
    ctx->pc = 0x295CC8u;
}
