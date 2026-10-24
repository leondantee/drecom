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

// Function: entry_0014e108
// Address: 0x14e108 - 0x14e144
void entry_0014e108_0x14e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e108_0x14e108");
#endif

    ctx->pc = 0x14e108u;

    // 0x14e108: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x14e108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x14e10c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14e10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e114: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E114u;
    {
        const bool branch_taken_0x14e114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e114) {
            ctx->pc = 0x14E160u;
            return;
        }
    }
    ctx->pc = 0x14E11Cu;
    // 0x14e11c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14e120: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E120u;
    {
        const bool branch_taken_0x14e120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e120) {
            ctx->pc = 0x14E150u;
            return;
        }
    }
    ctx->pc = 0x14E128u;
    // 0x14e128: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e12c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E12Cu;
    {
        const bool branch_taken_0x14e12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e12c) {
            ctx->pc = 0x14E144u;
            return;
        }
    }
    ctx->pc = 0x14E134u;
    // 0x14e134: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E134u;
    {
        const bool branch_taken_0x14e134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e134) {
            ctx->pc = 0x14E144u;
            return;
        }
    }
    ctx->pc = 0x14E13Cu;
    // 0x14e13c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14E13Cu;
    {
        const bool branch_taken_0x14e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e13c) {
            ctx->pc = 0x14E144u;
            return;
        }
    }
    ctx->pc = 0x14E144u;
}
