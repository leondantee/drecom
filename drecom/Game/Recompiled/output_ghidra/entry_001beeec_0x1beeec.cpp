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

// Function: entry_001beeec
// Address: 0x1beeec - 0x1bef1c
void entry_001beeec_0x1beeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beeec_0x1beeec");
#endif

    ctx->pc = 0x1beeecu;

    // 0x1beeec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1beeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beef0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1beef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1beef4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BEEF4u;
    {
        const bool branch_taken_0x1beef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beef4) {
            ctx->pc = 0x1BEF6Cu;
            return;
        }
    }
    ctx->pc = 0x1BEEFCu;
    // 0x1beefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1beefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef00: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1bef00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1bef04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEF04u;
    {
        const bool branch_taken_0x1bef04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef04) {
            ctx->pc = 0x1BEF1Cu;
            return;
        }
    }
    ctx->pc = 0x1BEF0Cu;
    // 0x1bef0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef10: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1bef10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bef14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF14u;
    {
        const bool branch_taken_0x1bef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bef14) {
            ctx->pc = 0x1BEF28u;
            return;
        }
    }
    ctx->pc = 0x1BEF1Cu;
}
