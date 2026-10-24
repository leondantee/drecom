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

// Function: entry_0026abf8
// Address: 0x26abf8 - 0x26ac1c
void entry_0026abf8_0x26abf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026abf8_0x26abf8");
#endif

    ctx->pc = 0x26abf8u;

    // 0x26abf8: 0x3223000c  andi        $v1, $s1, 0xC
    ctx->pc = 0x26abf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
    // 0x26abfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26ac00: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26AC00u;
    {
        const bool branch_taken_0x26ac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac00) {
            ctx->pc = 0x26AC78u;
            return;
        }
    }
    ctx->pc = 0x26AC08u;
    // 0x26ac08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ac0c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AC0Cu;
    {
        const bool branch_taken_0x26ac0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac0c) {
            ctx->pc = 0x26AC1Cu;
            return;
        }
    }
    ctx->pc = 0x26AC14u;
    // 0x26ac14: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26AC14u;
    {
        const bool branch_taken_0x26ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac14) {
            ctx->pc = 0x26ACD4u;
            return;
        }
    }
    ctx->pc = 0x26AC1Cu;
}
