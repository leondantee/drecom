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

// Function: entry_002720d8
// Address: 0x2720d8 - 0x2720f0
void entry_002720d8_0x2720d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002720d8_0x2720d8");
#endif

    ctx->pc = 0x2720d8u;

    // 0x2720d8: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2720d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2720dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2720dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2720e0: 0x2842001c  slti        $v0, $v0, 0x1C
    ctx->pc = 0x2720e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x2720e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2720E4u;
    {
        const bool branch_taken_0x2720e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720e4) {
            ctx->pc = 0x2720F0u;
            return;
        }
    }
    ctx->pc = 0x2720ECu;
    // 0x2720ec: 0xa6000094  sh          $zero, 0x94($s0)
    ctx->pc = 0x2720ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2720f0u;
}
