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

// Function: entry_0011f630
// Address: 0x11f630 - 0x11f670
void entry_0011f630_0x11f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f630_0x11f630");
#endif

    ctx->pc = 0x11f630u;

    // 0x11f630: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11F630u;
    {
        const bool branch_taken_0x11f630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F630u;
        // 0x11f634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f630) {
            ctx->pc = 0x11F5B0u;
            return;
        }
    }
    ctx->pc = 0x11F638u;
    // 0x11f638: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x11f63c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x11f63cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11f640: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x11f644: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x11f644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11f648: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11f648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11f64c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x11f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11f650: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11f650u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11f654: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x11f654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x11f658: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11F658u;
    {
        const bool branch_taken_0x11f658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F658u;
        // 0x11f65c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f658) {
            ctx->pc = 0x11F6CCu;
            return;
        }
    }
    ctx->pc = 0x11F660u;
    // 0x11f660: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x11f660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f664: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F664u;
    {
        const bool branch_taken_0x11f664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F664u;
        // 0x11f668: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f664) {
            ctx->pc = 0x11F694u;
            return;
        }
    }
    ctx->pc = 0x11F66Cu;
    // 0x11f66c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->pc = 0x11f670u;
}
