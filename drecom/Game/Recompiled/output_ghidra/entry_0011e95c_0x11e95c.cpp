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

// Function: entry_0011e95c
// Address: 0x11e95c - 0x11e9a0
void entry_0011e95c_0x11e95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e95c_0x11e95c");
#endif

    ctx->pc = 0x11e95cu;

    // 0x11e95c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11E95Cu;
    {
        const bool branch_taken_0x11e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E95Cu;
        // 0x11e960: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e95c) {
            ctx->pc = 0x11E8E8u;
            return;
        }
    }
    ctx->pc = 0x11E964u;
    // 0x11e964: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x11e964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x11e968: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x11e968u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11e96c: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11e970: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x11e970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11e974: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11e974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11e978: 0x32023  negu        $a0, $v1
    ctx->pc = 0x11e978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11e97c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11e97cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11e980: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x11e980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x11e984: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11E984u;
    {
        const bool branch_taken_0x11e984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E984u;
        // 0x11e988: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e984) {
            ctx->pc = 0x11E9FCu;
            return;
        }
    }
    ctx->pc = 0x11E98Cu;
    // 0x11e98c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x11e98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11e990: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E990u;
    {
        const bool branch_taken_0x11e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E990u;
        // 0x11e994: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e990) {
            ctx->pc = 0x11E9C4u;
            return;
        }
    }
    ctx->pc = 0x11E998u;
    // 0x11e998: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e99c: 0x0  nop
    ctx->pc = 0x11e99cu;
    // NOP
    ctx->pc = 0x11e9a0u;
}
