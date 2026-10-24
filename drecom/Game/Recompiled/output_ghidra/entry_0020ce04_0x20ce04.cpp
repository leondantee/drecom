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

// Function: entry_0020ce04
// Address: 0x20ce04 - 0x20ce4c
void entry_0020ce04_0x20ce04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ce04_0x20ce04");
#endif

    ctx->pc = 0x20ce04u;

    // 0x20ce04: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x20ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x20ce08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ce0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ce10: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x20ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x20ce14: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x20ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x20ce18: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x20ce1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce20: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x20ce20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x20ce24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ce28: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20ce28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20ce2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20ce2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20ce30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce34: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20CE34u;
    {
        const bool branch_taken_0x20ce34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ce34) {
            ctx->pc = 0x20CEA0u;
            return;
        }
    }
    ctx->pc = 0x20CE3Cu;
    // 0x20ce3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CE3Cu;
    {
        const bool branch_taken_0x20ce3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce3c) {
            ctx->pc = 0x20CE4Cu;
            return;
        }
    }
    ctx->pc = 0x20CE44u;
    // 0x20ce44: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x20CE44u;
    {
        const bool branch_taken_0x20ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce44) {
            ctx->pc = 0x20CFE0u;
            return;
        }
    }
    ctx->pc = 0x20CE4Cu;
}
