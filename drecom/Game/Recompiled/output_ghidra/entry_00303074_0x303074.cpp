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

// Function: entry_00303074
// Address: 0x303074 - 0x3030a8
void entry_00303074_0x303074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303074_0x303074");
#endif

    ctx->pc = 0x303074u;

    // 0x303074: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x303074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x303078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30307c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30307cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x303080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303084: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x303084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30308c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303090: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x303090u;
    {
        const bool branch_taken_0x303090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303090) {
            ctx->pc = 0x3031F0u;
            return;
        }
    }
    ctx->pc = 0x303098u;
    // 0x303098: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303098u;
    {
        const bool branch_taken_0x303098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303098) {
            ctx->pc = 0x3030A8u;
            return;
        }
    }
    ctx->pc = 0x3030A0u;
    // 0x3030a0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3030A0u;
    {
        const bool branch_taken_0x3030a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3030a0) {
            ctx->pc = 0x303320u;
            return;
        }
    }
    ctx->pc = 0x3030A8u;
}
