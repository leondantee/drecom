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

// Function: entry_0014aef4
// Address: 0x14aef4 - 0x14af40
void entry_0014aef4_0x14aef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aef4_0x14aef4");
#endif

    ctx->pc = 0x14aef4u;

    // 0x14aef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14aef8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14aef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14aefc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14AEFCu;
    {
        const bool branch_taken_0x14aefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aefc) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AF04u;
    // 0x14af04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14af08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14af0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14af10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af14: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14af14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14af1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14af24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14af28: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14af2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af30: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14af30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14af34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14af34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14af38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14af3c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14af3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x14af40u;
}
