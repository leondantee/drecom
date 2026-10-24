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

// Function: entry_0032b8e0
// Address: 0x32b8e0 - 0x32b930
void entry_0032b8e0_0x32b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b8e0_0x32b8e0");
#endif

    ctx->pc = 0x32b8e0u;

    // 0x32b8e0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x32b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x32b8e4: 0x2495a5d0  addiu       $s5, $a0, -0x5A30
    ctx->pc = 0x32b8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944208));
    // 0x32b8e8: 0x92c428ba  lbu         $a0, 0x28BA($s6)
    ctx->pc = 0x32b8e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b8ec: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x32b8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32b8f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b8f4: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32B8F4u;
    {
        const bool branch_taken_0x32b8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b8f4) {
            ctx->pc = 0x32B968u;
            return;
        }
    }
    ctx->pc = 0x32B8FCu;
    // 0x32b8fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b900: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32B900u;
    {
        const bool branch_taken_0x32b900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b900) {
            ctx->pc = 0x32B958u;
            return;
        }
    }
    ctx->pc = 0x32B908u;
    // 0x32b908: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b90c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32B90Cu;
    {
        const bool branch_taken_0x32b90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b90c) {
            ctx->pc = 0x32B948u;
            return;
        }
    }
    ctx->pc = 0x32B914u;
    // 0x32b914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b918: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32B918u;
    {
        const bool branch_taken_0x32b918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x32b918) {
            ctx->pc = 0x32B93Cu;
            return;
        }
    }
    ctx->pc = 0x32B920u;
    // 0x32b920: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B920u;
    {
        const bool branch_taken_0x32b920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b920) {
            ctx->pc = 0x32B930u;
            return;
        }
    }
    ctx->pc = 0x32B928u;
    // 0x32b928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x32B928u;
    {
        const bool branch_taken_0x32b928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b928) {
            ctx->pc = 0x32B978u;
            return;
        }
    }
    ctx->pc = 0x32B930u;
}
