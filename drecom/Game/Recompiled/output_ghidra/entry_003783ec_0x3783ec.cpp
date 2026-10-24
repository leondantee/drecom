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

// Function: entry_003783ec
// Address: 0x3783ec - 0x378404
void entry_003783ec_0x3783ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003783ec_0x3783ec");
#endif

    ctx->pc = 0x3783ecu;

    // 0x3783ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3783ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3783f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3783f4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3783f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3783f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3783f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3783fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3783FCu;
    {
        const bool branch_taken_0x3783fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3783fc) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x378404u;
}
