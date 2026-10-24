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

// Function: entry_001c45e0
// Address: 0x1c45e0 - 0x1c45fc
void entry_001c45e0_0x1c45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c45e0_0x1c45e0");
#endif

    ctx->pc = 0x1c45e0u;

    // 0x1c45e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c45e4: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c45e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
    // 0x1c45e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c45e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c45ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C45ECu;
    {
        const bool branch_taken_0x1c45ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45ec) {
            ctx->pc = 0x1C45FCu;
            return;
        }
    }
    ctx->pc = 0x1C45F4u;
    // 0x1c45f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c45f8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c45f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c45fcu;
}
