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

// Function: entry_0015d518
// Address: 0x15d518 - 0x15d540
void entry_0015d518_0x15d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d518_0x15d518");
#endif

    ctx->pc = 0x15d518u;

    // 0x15d518: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x15d518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d51c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d520: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15d520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15d524: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D524u;
    {
        const bool branch_taken_0x15d524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d524) {
            ctx->pc = 0x15D540u;
            return;
        }
    }
    ctx->pc = 0x15D52Cu;
    // 0x15d52c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d530: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15d534: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15d538: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15D538u;
    {
        const bool branch_taken_0x15d538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d538) {
            ctx->pc = 0x15D570u;
            return;
        }
    }
    ctx->pc = 0x15D540u;
}
