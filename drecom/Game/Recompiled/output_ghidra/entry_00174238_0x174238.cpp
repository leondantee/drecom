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

// Function: entry_00174238
// Address: 0x174238 - 0x174268
void entry_00174238_0x174238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174238_0x174238");
#endif

    ctx->pc = 0x174238u;

    // 0x174238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17423c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x17423cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x174240: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x174244: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174244u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17424c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17424Cu;
    {
        const bool branch_taken_0x17424c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17424c) {
            ctx->pc = 0x174268u;
            return;
        }
    }
    ctx->pc = 0x174254u;
    // 0x174254: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174258: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x174258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17425c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174260: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174264: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x174264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x174268u;
}
