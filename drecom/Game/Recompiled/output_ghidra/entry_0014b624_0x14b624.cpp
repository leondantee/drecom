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

// Function: entry_0014b624
// Address: 0x14b624 - 0x14b670
void entry_0014b624_0x14b624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b624_0x14b624");
#endif

    ctx->pc = 0x14b624u;

    // 0x14b624: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b628: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14b628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14b62c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B62Cu;
    {
        const bool branch_taken_0x14b62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b62c) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B634u;
    // 0x14b634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b63c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14b63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b644: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14b644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b64c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14b64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b654: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14b654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14b658: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14b65c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b660: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14b664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b66c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b66cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x14b670u;
}
