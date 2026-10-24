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

// Function: entry_001ddec8
// Address: 0x1ddec8 - 0x1ddee8
void entry_001ddec8_0x1ddec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddec8_0x1ddec8");
#endif

    ctx->pc = 0x1ddec8u;

    // 0x1ddec8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddecc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddeccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dded0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dded0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dded4: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x1dded4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1dded8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddedc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ddedcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddee0: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1DDEE0u;
    {
        const bool branch_taken_0x1ddee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddee0) {
            ctx->pc = 0x1DDC48u;
            return;
        }
    }
    ctx->pc = 0x1DDEE8u;
}
