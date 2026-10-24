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

// Function: entry_0012ec2c
// Address: 0x12ec2c - 0x12ec5c
void entry_0012ec2c_0x12ec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec2c_0x12ec2c");
#endif

    ctx->pc = 0x12ec2cu;

    // 0x12ec2c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12ec2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12ec30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec34: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12ec38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EC38u;
    {
        const bool branch_taken_0x12ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec38) {
            ctx->pc = 0x12EC5Cu;
            return;
        }
    }
    ctx->pc = 0x12EC40u;
    // 0x12ec40: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x12ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x12ec44: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x12ec44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ec48: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x12ec48u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x12ec4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ec50: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x12ec50u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ec54: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x12EC54u;
    {
        const bool branch_taken_0x12ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec54) {
            ctx->pc = 0x12EDC8u;
            return;
        }
    }
    ctx->pc = 0x12EC5Cu;
}
