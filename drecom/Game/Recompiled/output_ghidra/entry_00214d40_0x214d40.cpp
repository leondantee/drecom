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

// Function: entry_00214d40
// Address: 0x214d40 - 0x214db8
void entry_00214d40_0x214d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214d40_0x214d40");
#endif

    switch (ctx->pc) {
        case 0x214d94u: goto label_214d94;
        default: break;
    }

    ctx->pc = 0x214d40u;

label_214d40:
    // 0x214d40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x214d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x214d44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x214d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x214d48: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x214d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x214d4c: 0x0  nop
    ctx->pc = 0x214d4cu;
    // NOP
    // 0x214d50: 0x0  nop
    ctx->pc = 0x214d50u;
    // NOP
    // 0x214d54: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x214D54u;
    {
        const bool branch_taken_0x214d54 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x214d54) {
            ctx->pc = 0x214D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214d40;
        }
    }
    ctx->pc = 0x214D5Cu;
    // 0x214d5c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x214d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x214d60: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x214d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x214d64: 0x24424c08  addiu       $v0, $v0, 0x4C08
    ctx->pc = 0x214d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19464));
    // 0x214d68: 0x2544a280  addiu       $a0, $t2, -0x5D80
    ctx->pc = 0x214d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943360));
    // 0x214d6c: 0x24634be8  addiu       $v1, $v1, 0x4BE8
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19432));
    // 0x214d70: 0x2651a258  addiu       $s1, $s2, -0x5DA8
    ctx->pc = 0x214d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943320));
    // 0x214d74: 0xad42a280  sw          $v0, -0x5D80($t2)
    ctx->pc = 0x214d74u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943360), GPR_U32(ctx, 2));
    // 0x214d78: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x214d7c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x214d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x214d80: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x214d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
    // 0x214d84: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x214d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x214d88: 0x42000038  ei
    ctx->pc = 0x214d88u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x214d8c: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x214D8Cu;
    SET_GPR_U32(ctx, 31, 0x214D94u);
    ctx->pc = 0x214D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D8Cu;
    // 0x214d90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x214D94u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x214D94u) { return; }
    ctx->pc = 0x214D94u;
label_214d94:
    // 0x214d94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x214d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x214d98: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x214d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x214d9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x214da0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x214da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x214da4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x214DA4u;
    {
        const bool branch_taken_0x214da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da4) {
            ctx->pc = 0x214DB8u;
            return;
        }
    }
    ctx->pc = 0x214DACu;
    // 0x214dac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x214dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x214db0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x214db0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 16));
    // 0x214db4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x214db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x214db8u;
}
