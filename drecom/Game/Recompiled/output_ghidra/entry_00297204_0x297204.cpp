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

// Function: entry_00297204
// Address: 0x297204 - 0x297260
void entry_00297204_0x297204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297204_0x297204");
#endif

    ctx->pc = 0x297204u;

    // 0x297204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297208: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29720c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297210: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x297214: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x297214u;
    {
        const bool branch_taken_0x297214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297214) {
            ctx->pc = 0x297310u;
            return;
        }
    }
    ctx->pc = 0x29721Cu;
    // 0x29721c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x297220: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x297220u;
    {
        const bool branch_taken_0x297220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297220) {
            ctx->pc = 0x2972FCu;
            return;
        }
    }
    ctx->pc = 0x297228u;
    // 0x297228: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x297228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29722c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29722Cu;
    {
        const bool branch_taken_0x29722c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29722c) {
            ctx->pc = 0x2972E0u;
            return;
        }
    }
    ctx->pc = 0x297234u;
    // 0x297234: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x297234u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x297238: 0x1077003b  beq         $v1, $s7, . + 4 + (0x3B << 2)
    ctx->pc = 0x297238u;
    {
        const bool branch_taken_0x297238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x297238) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x297240u;
    // 0x297240: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297244: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x297244u;
    {
        const bool branch_taken_0x297244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297244) {
            ctx->pc = 0x297294u;
            return;
        }
    }
    ctx->pc = 0x29724Cu;
    // 0x29724c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297250: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297250u;
    {
        const bool branch_taken_0x297250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297250) {
            ctx->pc = 0x297260u;
            return;
        }
    }
    ctx->pc = 0x297258u;
    // 0x297258: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x297258u;
    {
        const bool branch_taken_0x297258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297258) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x297260u;
}
