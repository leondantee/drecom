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

// Function: entry_0012eaac
// Address: 0x12eaac - 0x12eac4
void entry_0012eaac_0x12eaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eaac_0x12eaac");
#endif

    ctx->pc = 0x12eaacu;

    // 0x12eaac: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x12eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12eab0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x12eab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12eab4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EAB4u;
    {
        const bool branch_taken_0x12eab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eab4) {
            ctx->pc = 0x12EAC4u;
            return;
        }
    }
    ctx->pc = 0x12EABCu;
    // 0x12eabc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12eac0: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x12eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    ctx->pc = 0x12eac4u;
}
