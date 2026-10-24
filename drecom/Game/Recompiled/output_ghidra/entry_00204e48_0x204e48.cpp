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

// Function: entry_00204e48
// Address: 0x204e48 - 0x204e60
void entry_00204e48_0x204e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e48_0x204e48");
#endif

    ctx->pc = 0x204e48u;

    // 0x204e48: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e4c: 0xa4e00096  sh          $zero, 0x96($a3)
    ctx->pc = 0x204e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e50: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e54: 0xa5000094  sh          $zero, 0x94($t0)
    ctx->pc = 0x204e54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x204e58: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x204E58u;
    {
        const bool branch_taken_0x204e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e58) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204E60u;
}
