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

// Function: entry_00135f24
// Address: 0x135f24 - 0x135f50
void entry_00135f24_0x135f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135f24_0x135f24");
#endif

    ctx->pc = 0x135f24u;

    // 0x135f24: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x135f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x135f28: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x135F28u;
    {
        const bool branch_taken_0x135f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f28) {
            ctx->pc = 0x135F74u;
            return;
        }
    }
    ctx->pc = 0x135F30u;
    // 0x135f30: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135f34: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135F34u;
    {
        const bool branch_taken_0x135f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f34) {
            ctx->pc = 0x135F50u;
            return;
        }
    }
    ctx->pc = 0x135F3Cu;
    // 0x135f3c: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x135f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x135f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135f44: 0xa6030086  sh          $v1, 0x86($s0)
    ctx->pc = 0x135f44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x135f48: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x135F48u;
    {
        const bool branch_taken_0x135f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f48) {
            ctx->pc = 0x135FACu;
            return;
        }
    }
    ctx->pc = 0x135F50u;
}
