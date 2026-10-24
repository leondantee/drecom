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

// Function: entry_00114e1c
// Address: 0x114e1c - 0x114e60
void entry_00114e1c_0x114e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114e1c_0x114e1c");
#endif

    ctx->pc = 0x114e1cu;

    // 0x114e1c: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x114e20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114e24: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x114e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x114e28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114E28u;
    {
        const bool branch_taken_0x114e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E28u;
        // 0x114e2c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e28) {
            ctx->pc = 0x114E60u;
            return;
        }
    }
    ctx->pc = 0x114E30u;
    // 0x114e30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x114e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x114e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114e3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x114e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114e40: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x114e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x114e44: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x114e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x114e48: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x114e48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x114e4c: 0x0  nop
    ctx->pc = 0x114e4cu;
    // NOP
    // 0x114e50: 0x0  nop
    ctx->pc = 0x114e50u;
    // NOP
    // 0x114e54: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114e54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114e58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114E58u;
    {
        const bool branch_taken_0x114e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E58u;
        // 0x114e5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e58) {
            ctx->pc = 0x114E74u;
            return;
        }
    }
    ctx->pc = 0x114E60u;
}
