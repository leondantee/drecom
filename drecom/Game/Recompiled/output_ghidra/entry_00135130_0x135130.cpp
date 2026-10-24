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

// Function: entry_00135130
// Address: 0x135130 - 0x135148
void entry_00135130_0x135130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135130_0x135130");
#endif

    ctx->pc = 0x135130u;

    // 0x135130: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135134: 0xa603007e  sh          $v1, 0x7E($s0)
    ctx->pc = 0x135134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 3));
    // 0x135138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13513c: 0xa2030096  sb          $v1, 0x96($s0)
    ctx->pc = 0x13513cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 3));
    // 0x135140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135140u;
    {
        const bool branch_taken_0x135140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135140) {
            ctx->pc = 0x135150u;
            return;
        }
    }
    ctx->pc = 0x135148u;
}
