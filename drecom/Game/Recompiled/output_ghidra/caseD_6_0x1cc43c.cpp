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

// Function: caseD_6
// Address: 0x1cc43c - 0x1cc480
void caseD_6_0x1cc43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1cc43c");
#endif

    ctx->pc = 0x1cc43cu;

    // 0x1cc43c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc440: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
    // 0x1cc444: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC444u;
    {
        const bool branch_taken_0x1cc444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc444) {
            ctx->pc = 0x1CC480u;
            return;
        }
    }
    ctx->pc = 0x1CC44Cu;
    // 0x1cc44c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc450: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x1cc454: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc458: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1cc458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1cc45c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC45Cu;
    {
        const bool branch_taken_0x1cc45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc45c) {
            ctx->pc = 0x1CC480u;
            return;
        }
    }
    ctx->pc = 0x1CC464u;
    // 0x1cc464: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1cc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc468: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1cc468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1cc46c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC46Cu;
    {
        const bool branch_taken_0x1cc46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc46c) {
            ctx->pc = 0x1CC480u;
            return;
        }
    }
    ctx->pc = 0x1CC474u;
    // 0x1cc474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc47c: 0xac431b68  sw          $v1, 0x1B68($v0)
    ctx->pc = 0x1cc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 3));
    ctx->pc = 0x1cc480u;
}
