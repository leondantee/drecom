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

// Function: entry_00213f54
// Address: 0x213f54 - 0x213f88
void entry_00213f54_0x213f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213f54_0x213f54");
#endif

    ctx->pc = 0x213f54u;

    // 0x213f54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213f58: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x213F58u;
    {
        const bool branch_taken_0x213f58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x213F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F58u;
        // 0x213f5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f58) {
            ctx->pc = 0x213FA4u;
            return;
        }
    }
    ctx->pc = 0x213F60u;
    // 0x213f60: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x213f64: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213F64u;
    {
        const bool branch_taken_0x213f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x213F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F64u;
        // 0x213f68: 0x90e40000  lbu         $a0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f64) {
            ctx->pc = 0x213F88u;
            return;
        }
    }
    ctx->pc = 0x213F6Cu;
    // 0x213f6c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x213f70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x213f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x213f74: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x213f74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x213f78: 0x29030100  slti        $v1, $t0, 0x100
    ctx->pc = 0x213f78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x213f7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x213F7Cu;
    {
        const bool branch_taken_0x213f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F7Cu;
        // 0x213f80: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f7c) {
            ctx->pc = 0x213FA4u;
            return;
        }
    }
    ctx->pc = 0x213F84u;
    // 0x213f84: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x213f84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x213f88u;
}
