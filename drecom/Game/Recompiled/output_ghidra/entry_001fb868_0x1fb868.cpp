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

// Function: entry_001fb868
// Address: 0x1fb868 - 0x1fb89c
void entry_001fb868_0x1fb868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb868_0x1fb868");
#endif

    ctx->pc = 0x1fb868u;

    // 0x1fb868: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb86c: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fb86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fb870: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fb874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb878: 0x10850076  beq         $a0, $a1, . + 4 + (0x76 << 2)
    ctx->pc = 0x1FB878u;
    {
        const bool branch_taken_0x1fb878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fb878) {
            ctx->pc = 0x1FBA54u;
            return;
        }
    }
    ctx->pc = 0x1FB880u;
    // 0x1fb880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb884: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FB884u;
    {
        const bool branch_taken_0x1fb884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb884) {
            ctx->pc = 0x1FB990u;
            return;
        }
    }
    ctx->pc = 0x1FB88Cu;
    // 0x1fb88c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB88Cu;
    {
        const bool branch_taken_0x1fb88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb88c) {
            ctx->pc = 0x1FB89Cu;
            return;
        }
    }
    ctx->pc = 0x1FB894u;
    // 0x1fb894: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1FB894u;
    {
        const bool branch_taken_0x1fb894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb894) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB89Cu;
}
