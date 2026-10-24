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

// Function: entry_00312788
// Address: 0x312788 - 0x3127a0
void entry_00312788_0x312788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312788_0x312788");
#endif

    ctx->pc = 0x312788u;

    // 0x312788: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x312788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31278c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x31278cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x312790: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312790u;
    {
        const bool branch_taken_0x312790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x312790) {
            ctx->pc = 0x3127A0u;
            return;
        }
    }
    ctx->pc = 0x312798u;
    // 0x312798: 0x93a30088  lbu         $v1, 0x88($sp)
    ctx->pc = 0x312798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31279c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x31279cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3127a0u;
}
