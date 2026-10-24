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

// Function: entry_00111d14
// Address: 0x111d14 - 0x111d64
void entry_00111d14_0x111d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d14_0x111d14");
#endif

    ctx->pc = 0x111d14u;

    // 0x111d14: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x111d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x111d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111d1c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111d20: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x111D20u;
    {
        const bool branch_taken_0x111d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D20u;
        // 0x111d24: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d20) {
            ctx->pc = 0x111E48u;
            return;
        }
    }
    ctx->pc = 0x111D28u;
    // 0x111d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111d2c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x111d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x111d30: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x111D30u;
    {
        const bool branch_taken_0x111d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d30) {
            ctx->pc = 0x111D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111D30u;
            // 0x111d34: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111D64u;
            return;
        }
    }
    ctx->pc = 0x111D38u;
    // 0x111d38: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x111d3c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x111d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x111d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111d4c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x111d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x111d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x111d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x111d54: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x111D54u;
    {
        const bool branch_taken_0x111d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x111d54) {
            ctx->pc = 0x111D64u;
            return;
        }
    }
    ctx->pc = 0x111D5Cu;
    // 0x111d5c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x111D5Cu;
    {
        const bool branch_taken_0x111d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111D5Cu;
        // 0x111d60: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d5c) {
            ctx->pc = 0x11200Cu;
            return;
        }
    }
    ctx->pc = 0x111D64u;
}
