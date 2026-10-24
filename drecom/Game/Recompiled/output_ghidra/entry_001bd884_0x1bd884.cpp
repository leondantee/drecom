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

// Function: entry_001bd884
// Address: 0x1bd884 - 0x1bd8c4
void entry_001bd884_0x1bd884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd884_0x1bd884");
#endif

    ctx->pc = 0x1bd884u;

    // 0x1bd884: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd888: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bd888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bd88c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd890: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd894: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BD894u;
    {
        const bool branch_taken_0x1bd894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd894) {
            ctx->pc = 0x1BD8F8u;
            return;
        }
    }
    ctx->pc = 0x1BD89Cu;
    // 0x1bd89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd8a0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD8A0u;
    {
        const bool branch_taken_0x1bd8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd8a0) {
            ctx->pc = 0x1BD8F8u;
            return;
        }
    }
    ctx->pc = 0x1BD8A8u;
    // 0x1bd8a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd8ac: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD8ACu;
    {
        const bool branch_taken_0x1bd8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bd8ac) {
            ctx->pc = 0x1BD8C4u;
            return;
        }
    }
    ctx->pc = 0x1BD8B4u;
    // 0x1bd8b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD8B4u;
    {
        const bool branch_taken_0x1bd8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8b4) {
            ctx->pc = 0x1BD8C4u;
            return;
        }
    }
    ctx->pc = 0x1BD8BCu;
    // 0x1bd8bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BD8BCu;
    {
        const bool branch_taken_0x1bd8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8bc) {
            ctx->pc = 0x1BD930u;
            return;
        }
    }
    ctx->pc = 0x1BD8C4u;
}
