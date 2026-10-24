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

// Function: entry_0014cc48
// Address: 0x14cc48 - 0x14cc98
void entry_0014cc48_0x14cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cc48_0x14cc48");
#endif

    ctx->pc = 0x14cc48u;

    // 0x14cc48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14cc4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14cc50: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14CC50u;
    {
        const bool branch_taken_0x14cc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc50) {
            ctx->pc = 0x14CC98u;
            return;
        }
    }
    ctx->pc = 0x14CC58u;
    // 0x14cc58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cc5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14cc60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14cc64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc68: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14cc68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc7c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14cc80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc84: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14cc88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc8c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc90: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14CC98u;
            return;
        }
    }
    ctx->pc = 0x14CC98u;
}
