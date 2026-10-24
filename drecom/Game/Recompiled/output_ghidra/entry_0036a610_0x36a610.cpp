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

// Function: entry_0036a610
// Address: 0x36a610 - 0x36a660
void entry_0036a610_0x36a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a610_0x36a610");
#endif

    ctx->pc = 0x36a610u;

    // 0x36a610: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a614: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36a614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36a618: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x36A618u;
    {
        const bool branch_taken_0x36a618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a618) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A620u;
    // 0x36a620: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a624: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x36a624u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a62c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a630: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36a630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a634: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a638: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36a638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a63c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a640: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36a640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a644: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a648: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36a648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a64c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x36a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x36a650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36a654: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36a654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36a658: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x36A658u;
    {
        const bool branch_taken_0x36a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a658) {
            ctx->pc = 0x36A720u;
            return;
        }
    }
    ctx->pc = 0x36A660u;
}
