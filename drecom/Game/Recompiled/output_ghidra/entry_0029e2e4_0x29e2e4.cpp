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

// Function: entry_0029e2e4
// Address: 0x29e2e4 - 0x29e344
void entry_0029e2e4_0x29e2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e2e4_0x29e2e4");
#endif

    ctx->pc = 0x29e2e4u;

    // 0x29e2e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e2ec: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29e2f0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29E2F0u;
    {
        const bool branch_taken_0x29e2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e2f0) {
            ctx->pc = 0x29E344u;
            return;
        }
    }
    ctx->pc = 0x29E2F8u;
    // 0x29e2f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e2fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e300: 0x9463004a  lhu         $v1, 0x4A($v1)
    ctx->pc = 0x29e300u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 74)));
    // 0x29e304: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e308: 0x28610168  slti        $at, $v1, 0x168
    ctx->pc = 0x29e308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x29e30c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E30Cu;
    {
        const bool branch_taken_0x29e30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e30c) {
            ctx->pc = 0x29E344u;
            return;
        }
    }
    ctx->pc = 0x29E314u;
    // 0x29e314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e31c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e320: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29e324: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e328: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e330: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e338: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e33c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e340: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e344u;
}
