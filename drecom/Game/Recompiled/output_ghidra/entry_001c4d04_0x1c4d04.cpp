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

// Function: entry_001c4d04
// Address: 0x1c4d04 - 0x1c4d40
void entry_001c4d04_0x1c4d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4d04_0x1c4d04");
#endif

    ctx->pc = 0x1c4d04u;

    // 0x1c4d04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c4d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4d0c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c4d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c4d10: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c4d14: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c4d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c4d18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4d1c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c4d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c4d20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c4d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c4d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d28: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C4D28u;
    {
        const bool branch_taken_0x1c4d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4d28) {
            ctx->pc = 0x1C4D94u;
            return;
        }
    }
    ctx->pc = 0x1C4D30u;
    // 0x1c4d30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4D30u;
    {
        const bool branch_taken_0x1c4d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d30) {
            ctx->pc = 0x1C4D40u;
            return;
        }
    }
    ctx->pc = 0x1C4D38u;
    // 0x1c4d38: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C4D38u;
    {
        const bool branch_taken_0x1c4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d38) {
            ctx->pc = 0x1C4E88u;
            return;
        }
    }
    ctx->pc = 0x1C4D40u;
}
