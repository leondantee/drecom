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

// Function: entry_002f2b20
// Address: 0x2f2b20 - 0x2f2b3c
void entry_002f2b20_0x2f2b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2b20_0x2f2b20");
#endif

    ctx->pc = 0x2f2b20u;

    // 0x2f2b20: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x2f2b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f2b24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f2b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f2b28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2B28u;
    {
        const bool branch_taken_0x2f2b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b28) {
            ctx->pc = 0x2F2B3Cu;
            return;
        }
    }
    ctx->pc = 0x2F2B30u;
    // 0x2f2b30: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2f2b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f2b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2B34u;
    {
        const bool branch_taken_0x2f2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b34) {
            ctx->pc = 0x2F2B40u;
            return;
        }
    }
    ctx->pc = 0x2F2B3Cu;
}
