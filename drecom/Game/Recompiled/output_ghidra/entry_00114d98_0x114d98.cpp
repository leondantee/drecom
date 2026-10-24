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

// Function: entry_00114d98
// Address: 0x114d98 - 0x114df8
void entry_00114d98_0x114d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d98_0x114d98");
#endif

    switch (ctx->pc) {
        case 0x114da0u: goto label_114da0;
        default: break;
    }

    ctx->pc = 0x114d98u;

    // 0x114d98: 0xc045420  jal         func_115080
    ctx->pc = 0x114D98u;
    SET_GPR_U32(ctx, 31, 0x114DA0u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x114D98u, 0x114DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DA0u;
label_114da0:
    // 0x114da0: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x114da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x114da4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114da8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114dac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x114DACu;
    {
        const bool branch_taken_0x114dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DACu;
        // 0x114db0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dac) {
            ctx->pc = 0x114E1Cu;
            return;
        }
    }
    ctx->pc = 0x114DB4u;
    // 0x114db4: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x114db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x114db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114dbc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114dc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114DC0u;
    {
        const bool branch_taken_0x114dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DC0u;
        // 0x114dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dc0) {
            ctx->pc = 0x114DF8u;
            return;
        }
    }
    ctx->pc = 0x114DC8u;
    // 0x114dc8: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x114dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x114dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114dd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x114dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x114dd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114ddc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114de0: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x114de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x114de4: 0x0  nop
    ctx->pc = 0x114de4u;
    // NOP
    // 0x114de8: 0x0  nop
    ctx->pc = 0x114de8u;
    // NOP
    // 0x114dec: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114decu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114df0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x114DF0u;
    {
        const bool branch_taken_0x114df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DF0u;
        // 0x114df4: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114df0) {
            ctx->pc = 0x114E78u;
            return;
        }
    }
    ctx->pc = 0x114DF8u;
}
