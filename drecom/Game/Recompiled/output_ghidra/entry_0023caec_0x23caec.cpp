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

// Function: entry_0023caec
// Address: 0x23caec - 0x23cb04
void entry_0023caec_0x23caec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023caec_0x23caec");
#endif

    ctx->pc = 0x23caecu;

    // 0x23caec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23caecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23caf0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23caf4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x23caf8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x23caf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cafc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23CAFCu;
    {
        const bool branch_taken_0x23cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cafc) {
            ctx->pc = 0x23CB64u;
            return;
        }
    }
    ctx->pc = 0x23CB04u;
}
