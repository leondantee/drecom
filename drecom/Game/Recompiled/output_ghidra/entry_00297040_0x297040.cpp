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

// Function: entry_00297040
// Address: 0x297040 - 0x2970a4
void entry_00297040_0x297040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297040_0x297040");
#endif

    ctx->pc = 0x297040u;

    // 0x297040: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x297040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x297044: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x297044u;
    {
        const bool branch_taken_0x297044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297044) {
            ctx->pc = 0x296F10u;
            return;
        }
    }
    ctx->pc = 0x29704Cu;
    // 0x29704c: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x29704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x297050: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x297050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297054: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x297054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297058: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x297058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29705c: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x29705cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x297060: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x297060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x297064: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x297064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297068: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x297068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29706c: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x29706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297074: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x297074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x297078: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x297078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29707c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x29707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297080: 0x8c8369c0  lw          $v1, 0x69C0($a0)
    ctx->pc = 0x297080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27072)));
    // 0x297084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x297084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x297088: 0xac8369c0  sw          $v1, 0x69C0($a0)
    ctx->pc = 0x297088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27072), GPR_U32(ctx, 3));
    // 0x29708c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x29708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x297090: 0x8c23c9e8  lw          $v1, -0x3618($at)
    ctx->pc = 0x297090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E8u));
    // 0x297094: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297094u;
    {
        const bool branch_taken_0x297094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297094) {
            ctx->pc = 0x2970ACu;
            return;
        }
    }
    ctx->pc = 0x29709Cu;
    // 0x29709c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2970a0: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x2970a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2970a4u;
}
