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

// Function: entry_0014712c
// Address: 0x14712c - 0x14717c
void entry_0014712c_0x14712c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014712c_0x14712c");
#endif

    ctx->pc = 0x14712cu;

    // 0x14712c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147130: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x147130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x147134: 0x10600134  beqz        $v1, . + 4 + (0x134 << 2)
    ctx->pc = 0x147134u;
    {
        const bool branch_taken_0x147134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147134) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14713Cu;
    // 0x14713c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147144: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x147144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x147148: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14714c: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x14714cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x147150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147154: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x147154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x147158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14715c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14715cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x147160: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x147164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147168: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x147168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14716c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147170: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147174: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x147174u;
    {
        const bool branch_taken_0x147174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147174) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14717Cu;
}
