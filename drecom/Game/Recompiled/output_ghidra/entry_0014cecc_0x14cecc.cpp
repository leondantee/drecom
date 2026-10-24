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

// Function: entry_0014cecc
// Address: 0x14cecc - 0x14cf1c
void entry_0014cecc_0x14cecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cecc_0x14cecc");
#endif

    ctx->pc = 0x14ceccu;

    // 0x14cecc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ced0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14ced0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14ced4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CED4u;
    {
        const bool branch_taken_0x14ced4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ced4) {
            ctx->pc = 0x14CF1Cu;
            return;
        }
    }
    ctx->pc = 0x14CEDCu;
    // 0x14cedc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cee4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14cee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cee8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ceec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14ceecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cef4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14cef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cefc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14cefcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf00: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14cf04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf08: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14cf0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cf10: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cf10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cf14: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CF14u;
    {
        const bool branch_taken_0x14cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf14) {
            ctx->pc = 0x14CF1Cu;
            return;
        }
    }
    ctx->pc = 0x14CF1Cu;
}
