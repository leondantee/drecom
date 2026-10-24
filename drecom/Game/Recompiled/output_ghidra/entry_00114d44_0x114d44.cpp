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

// Function: entry_00114d44
// Address: 0x114d44 - 0x114d98
void entry_00114d44_0x114d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d44_0x114d44");
#endif

    ctx->pc = 0x114d44u;

    // 0x114d44: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x114d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x114d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114d4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114d50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114D50u;
    {
        const bool branch_taken_0x114d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D50u;
        // 0x114d54: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d50) {
            ctx->pc = 0x114D98u;
            return;
        }
    }
    ctx->pc = 0x114D58u;
    // 0x114d58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114d5c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114d60: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x114D60u;
    {
        const bool branch_taken_0x114d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d60) {
            ctx->pc = 0x114E74u;
            return;
        }
    }
    ctx->pc = 0x114D68u;
    // 0x114d68: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x114d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x114d6c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x114d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x114d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114d74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114d78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114d7c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x114d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x114d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x114d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x114d84: 0x0  nop
    ctx->pc = 0x114d84u;
    // NOP
    // 0x114d88: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x114D88u;
    {
        const bool branch_taken_0x114d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x114d88) {
            ctx->pc = 0x114D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D88u;
            // 0x114d8c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114E78u;
            return;
        }
    }
    ctx->pc = 0x114D90u;
    // 0x114d90: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x114D90u;
    {
        const bool branch_taken_0x114d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d90) {
            ctx->pc = 0x114F54u;
            return;
        }
    }
    ctx->pc = 0x114D98u;
}
