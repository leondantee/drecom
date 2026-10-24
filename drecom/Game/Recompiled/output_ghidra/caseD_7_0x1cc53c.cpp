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

// Function: caseD_7
// Address: 0x1cc53c - 0x1cc580
void caseD_7_0x1cc53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1cc53c");
#endif

    ctx->pc = 0x1cc53cu;

    // 0x1cc53c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc53cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc540: 0x84e813ac  lh          $t0, 0x13AC($a3)
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5036)));
    // 0x1cc544: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC544u;
    {
        const bool branch_taken_0x1cc544 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc544) {
            ctx->pc = 0x1CC580u;
            return;
        }
    }
    ctx->pc = 0x1CC54Cu;
    // 0x1cc54c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc550: 0x904209df  lbu         $v0, 0x9DF($v0)
    ctx->pc = 0x1cc550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2527)));
    // 0x1cc554: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1cc554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc558: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x1cc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1cc55c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC55Cu;
    {
        const bool branch_taken_0x1cc55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc55c) {
            ctx->pc = 0x1CC580u;
            return;
        }
    }
    ctx->pc = 0x1CC564u;
    // 0x1cc564: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc568: 0x30a60400  andi        $a2, $a1, 0x400
    ctx->pc = 0x1cc568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x1cc56c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC56Cu;
    {
        const bool branch_taken_0x1cc56c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc56c) {
            ctx->pc = 0x1CC580u;
            return;
        }
    }
    ctx->pc = 0x1CC574u;
    // 0x1cc574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc578: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc57c: 0xad071b68  sw          $a3, 0x1B68($t0)
    ctx->pc = 0x1cc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7016), GPR_U32(ctx, 7));
    ctx->pc = 0x1cc580u;
}
