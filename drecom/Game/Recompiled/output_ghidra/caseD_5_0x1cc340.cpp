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

// Function: caseD_5
// Address: 0x1cc340 - 0x1cc384
void caseD_5_0x1cc340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cc340");
#endif

    ctx->pc = 0x1cc340u;

    // 0x1cc340: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc344: 0x848513ac  lh          $a1, 0x13AC($a0)
    ctx->pc = 0x1cc344u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5036)));
    // 0x1cc348: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC348u;
    {
        const bool branch_taken_0x1cc348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc348) {
            ctx->pc = 0x1CC384u;
            return;
        }
    }
    ctx->pc = 0x1CC350u;
    // 0x1cc350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc354: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x1cc358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc35c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cc35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1cc360: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC360u;
    {
        const bool branch_taken_0x1cc360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc360) {
            ctx->pc = 0x1CC384u;
            return;
        }
    }
    ctx->pc = 0x1CC368u;
    // 0x1cc368: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc36c: 0x30430400  andi        $v1, $v0, 0x400
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1cc370: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC370u;
    {
        const bool branch_taken_0x1cc370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc370) {
            ctx->pc = 0x1CC384u;
            return;
        }
    }
    ctx->pc = 0x1CC378u;
    // 0x1cc378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc37c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc380: 0xac831b68  sw          $v1, 0x1B68($a0)
    ctx->pc = 0x1cc380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 3));
    ctx->pc = 0x1cc384u;
}
