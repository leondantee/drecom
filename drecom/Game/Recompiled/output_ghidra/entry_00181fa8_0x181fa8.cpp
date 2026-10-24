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

// Function: entry_00181fa8
// Address: 0x181fa8 - 0x181fe4
void entry_00181fa8_0x181fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181fa8_0x181fa8");
#endif

    ctx->pc = 0x181fa8u;

    // 0x181fa8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181fac: 0x8c28f228  lw          $t0, -0xDD8($at)
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x47F228u));
    // 0x181fb0: 0x3c07000c  lui         $a3, 0xC
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)12 << 16));
    // 0x181fb4: 0x1107005c  beq         $t0, $a3, . + 4 + (0x5C << 2)
    ctx->pc = 0x181FB4u;
    {
        const bool branch_taken_0x181fb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x181fb4) {
            ctx->pc = 0x182128u;
            return;
        }
    }
    ctx->pc = 0x181FBCu;
    // 0x181fbc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x181fc0: 0x1106003e  beq         $t0, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x181FC0u;
    {
        const bool branch_taken_0x181fc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        if (branch_taken_0x181fc0) {
            ctx->pc = 0x1820BCu;
            return;
        }
    }
    ctx->pc = 0x181FC8u;
    // 0x181fc8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x181fcc: 0x11030020  beq         $t0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x181FCCu;
    {
        const bool branch_taken_0x181fcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x181fcc) {
            ctx->pc = 0x182050u;
            return;
        }
    }
    ctx->pc = 0x181FD4u;
    // 0x181fd4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x181FD4u;
    {
        const bool branch_taken_0x181fd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fd4) {
            ctx->pc = 0x181FE4u;
            return;
        }
    }
    ctx->pc = 0x181FDCu;
    // 0x181fdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x181FDCu;
    {
        const bool branch_taken_0x181fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181fdc) {
            ctx->pc = 0x181FE4u;
            return;
        }
    }
    ctx->pc = 0x181FE4u;
}
