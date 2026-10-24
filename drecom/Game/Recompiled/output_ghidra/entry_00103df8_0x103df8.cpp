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

// Function: entry_00103df8
// Address: 0x103df8 - 0x103e50
void entry_00103df8_0x103df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103df8_0x103df8");
#endif

    ctx->pc = 0x103df8u;

label_103df8:
    // 0x103df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x103df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x103dfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x103dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x103e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x103e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x103e04: 0x0  nop
    ctx->pc = 0x103e04u;
    // NOP
    // 0x103e08: 0x0  nop
    ctx->pc = 0x103e08u;
    // NOP
    // 0x103e0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x103E0Cu;
    {
        const bool branch_taken_0x103e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103e0c) {
            ctx->pc = 0x103DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103df8;
        }
    }
    ctx->pc = 0x103E14u;
    // 0x103e14: 0x25e641f8  addiu       $a2, $t7, 0x41F8
    ctx->pc = 0x103e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 16888));
    // 0x103e18: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x103e1c: 0x8cc40280  lw          $a0, 0x280($a2)
    ctx->pc = 0x103e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 640)));
    // 0x103e20: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x103e24: 0x8f033bec  lw          $v1, 0x3BEC($t8)
    ctx->pc = 0x103e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 15340)));
    // 0x103e28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x103e2c: 0x872818  mult        $a1, $a0, $a3
    ctx->pc = 0x103e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x103e30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x103e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x103e38: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x103e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x103e3c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x103e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x103e40: 0x8c8d012c  lw          $t5, 0x12C($a0)
    ctx->pc = 0x103e40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x103e44: 0x19a00022  blez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x103E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E44u;
        // 0x103e48: 0x656025  or          $t4, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103ED0u;
            return;
        }
    }
    ctx->pc = 0x103E4Cu;
    // 0x103e4c: 0x25aeffff  addiu       $t6, $t5, -0x1
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    ctx->pc = 0x103e50u;
}
