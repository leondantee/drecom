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

// Function: entry_0026ecfc
// Address: 0x26ecfc - 0x26ed44
void entry_0026ecfc_0x26ecfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ecfc_0x26ecfc");
#endif

    ctx->pc = 0x26ecfcu;

    // 0x26ecfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26ed00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26ed04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26ED04u;
    {
        const bool branch_taken_0x26ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ed04) {
            ctx->pc = 0x26ED44u;
            return;
        }
    }
    ctx->pc = 0x26ED0Cu;
    // 0x26ed0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed10: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26ed10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26ed18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26ed20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ed24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26ed2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x26ed44u;
}
