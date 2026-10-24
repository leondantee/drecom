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

// Function: entry_00109e08
// Address: 0x109e08 - 0x109e78
void entry_00109e08_0x109e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e08_0x109e08");
#endif

    ctx->pc = 0x109e08u;

    // 0x109e08: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x109e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x109e0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e10: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109E10u;
    {
        const bool branch_taken_0x109e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e10) {
            ctx->pc = 0x109E78u;
            return;
        }
    }
    ctx->pc = 0x109E18u;
    // 0x109e18: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x109e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x109e1c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e20: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x109E20u;
    {
        const bool branch_taken_0x109e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e20) {
            ctx->pc = 0x109E80u;
            return;
        }
    }
    ctx->pc = 0x109E28u;
    // 0x109e28: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x109e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x109e2c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e30: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x109E30u;
    {
        const bool branch_taken_0x109e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e30) {
            ctx->pc = 0x109E78u;
            return;
        }
    }
    ctx->pc = 0x109E38u;
    // 0x109e38: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x109e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x109e3c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e40: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109E40u;
    {
        const bool branch_taken_0x109e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e40) {
            ctx->pc = 0x109E78u;
            return;
        }
    }
    ctx->pc = 0x109E48u;
    // 0x109e48: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x109e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x109e4c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e50: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x109E50u;
    {
        const bool branch_taken_0x109e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e50) {
            ctx->pc = 0x109E78u;
            return;
        }
    }
    ctx->pc = 0x109E58u;
    // 0x109e58: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x109e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x109e5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e60: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109E60u;
    {
        const bool branch_taken_0x109e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x109e60) {
            ctx->pc = 0x109E78u;
            return;
        }
    }
    ctx->pc = 0x109E68u;
    // 0x109e68: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x109e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x109e6c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x109e70: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109E70u;
    {
        const bool branch_taken_0x109e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109e70) {
            ctx->pc = 0x109EC8u;
            return;
        }
    }
    ctx->pc = 0x109E78u;
}
