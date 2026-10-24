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

// Function: caseD_2e
// Address: 0x11b5e8 - 0x11b620
void caseD_2e_0x11b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2e_0x11b5e8");
#endif

    ctx->pc = 0x11b5e8u;

    // 0x11b5e8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x11b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b5ec: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x11b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11b5f0: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x11b5f0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b5f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11b5f8: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B5F8u;
    {
        const bool branch_taken_0x11b5f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5F8u;
        // 0x11b5fc: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5f8) {
            ctx->pc = 0x11B620u;
            return;
        }
    }
    ctx->pc = 0x11B600u;
    // 0x11b600: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b604: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11b608: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x11b608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b60c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b610: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x11b610u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b614: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11b614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b618: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x11B618u;
    {
        const bool branch_taken_0x11b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B618u;
        // 0x11b61c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b618) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B620u;
}
