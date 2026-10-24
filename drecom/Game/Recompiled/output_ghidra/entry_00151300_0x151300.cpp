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

// Function: entry_00151300
// Address: 0x151300 - 0x15132c
void entry_00151300_0x151300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151300_0x151300");
#endif

    ctx->pc = 0x151300u;

    // 0x151300: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x151300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x151304: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x151304u;
    {
        const bool branch_taken_0x151304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151304) {
            ctx->pc = 0x1512C0u;
            return;
        }
    }
    ctx->pc = 0x15130Cu;
    // 0x15130c: 0x32240006  andi        $a0, $s1, 0x6
    ctx->pc = 0x15130cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x151310: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151310u;
    {
        const bool branch_taken_0x151310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151310) {
            ctx->pc = 0x15132Cu;
            return;
        }
    }
    ctx->pc = 0x151318u;
    // 0x151318: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15131c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151320: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x151324: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x151324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x151328: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x151328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x15132cu;
}
