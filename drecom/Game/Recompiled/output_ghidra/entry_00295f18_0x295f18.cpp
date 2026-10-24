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

// Function: entry_00295f18
// Address: 0x295f18 - 0x295f4c
void entry_00295f18_0x295f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295f18_0x295f18");
#endif

    ctx->pc = 0x295f18u;

    // 0x295f18: 0x8e631a14  lw          $v1, 0x1A14($s3)
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6676)));
    // 0x295f1c: 0x8c720054  lw          $s2, 0x54($v1)
    ctx->pc = 0x295f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x295f20: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x295f24: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x295f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295f28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295f2c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x295f2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x295f30: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x295F30u;
    {
        const bool branch_taken_0x295f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f30) {
            ctx->pc = 0x295F4Cu;
            return;
        }
    }
    ctx->pc = 0x295F38u;
    // 0x295f38: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295f3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x295f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x295f40: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x295f44: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x295F44u;
    {
        const bool branch_taken_0x295f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f44) {
            ctx->pc = 0x295F4Cu;
            return;
        }
    }
    ctx->pc = 0x295F4Cu;
}
