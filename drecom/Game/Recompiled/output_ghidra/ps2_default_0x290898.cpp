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

// Function: default
// Address: 0x290898 - 0x2908c0
void ps2_default_0x290898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x290898");
#endif

    ctx->pc = 0x290898u;

    // 0x290898: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x29089c: 0x8c232988  lw          $v1, 0x2988($at)
    ctx->pc = 0x29089cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622988u));
    // 0x2908a0: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2908a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2908a4: 0x34c20011  ori         $v0, $a2, 0x11
    ctx->pc = 0x2908a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x2908a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2908A8u;
    {
        const bool branch_taken_0x2908a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2908a8) {
            ctx->pc = 0x2908C0u;
            return;
        }
    }
    ctx->pc = 0x2908B0u;
    // 0x2908b0: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x2908b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2908b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2908b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2908b8: 0x8c222988  lw          $v0, 0x2988($at)
    ctx->pc = 0x2908b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622988u));
    // 0x2908bc: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2908bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2908c0u;
}
