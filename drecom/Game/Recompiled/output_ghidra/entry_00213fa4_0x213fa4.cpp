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

// Function: entry_00213fa4
// Address: 0x213fa4 - 0x213fe0
void entry_00213fa4_0x213fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213fa4_0x213fa4");
#endif

    switch (ctx->pc) {
        case 0x213fc4u: goto label_213fc4;
        default: break;
    }

    ctx->pc = 0x213fa4u;

    // 0x213fa4: 0x26309e50  addiu       $s0, $s1, -0x61B0
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942288));
    // 0x213fa8: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x213fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x213fac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x213facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x213fb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x213fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x213fb4: 0x81250007  lb          $a1, 0x7($t1)
    ctx->pc = 0x213fb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x213fb8: 0x8e249e50  lw          $a0, -0x61B0($s1)
    ctx->pc = 0x213fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942288)));
    // 0x213fbc: 0xc084ec6  jal         func_213B18
    ctx->pc = 0x213FBCu;
    SET_GPR_U32(ctx, 31, 0x213FC4u);
    ctx->pc = 0x213FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FBCu;
    // 0x213fc0: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213B18u;
    {
        ctx->pc = 0x213FC4u;
        ps2_stubs::sceDeci2ReqSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213FC4u) { return; }
    ctx->pc = 0x213FC4u;
label_213fc4:
    // 0x213fc4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x213FC4u;
    {
        const bool branch_taken_0x213fc4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x213fc4) {
            ctx->pc = 0x213FECu;
            return;
        }
    }
    ctx->pc = 0x213FCCu;
    // 0x213fcc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x213fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x213fd0: 0x42000038  ei
    ctx->pc = 0x213fd0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x213fd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213FD4u;
    {
        const bool branch_taken_0x213fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FD4u;
        // 0x213fd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fd4) {
            ctx->pc = 0x214000u;
            return;
        }
    }
    ctx->pc = 0x213FDCu;
    // 0x213fdc: 0x0  nop
    ctx->pc = 0x213fdcu;
    // NOP
    ctx->pc = 0x213fe0u;
}
