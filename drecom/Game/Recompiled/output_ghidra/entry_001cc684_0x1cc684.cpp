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

// Function: entry_001cc684
// Address: 0x1cc684 - 0x1cc6a4
void entry_001cc684_0x1cc684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc684_0x1cc684");
#endif

    ctx->pc = 0x1cc684u;

    // 0x1cc684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc688: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cc688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cc68c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CC68Cu;
    {
        const bool branch_taken_0x1cc68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc68c) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC694u;
    // 0x1cc694: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc698: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1cc698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1cc69c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CC69Cu;
    {
        const bool branch_taken_0x1cc69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc69c) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC6A4u;
}
