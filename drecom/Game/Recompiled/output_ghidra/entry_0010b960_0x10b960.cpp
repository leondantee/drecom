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

// Function: entry_0010b960
// Address: 0x10b960 - 0x10b9c0
void entry_0010b960_0x10b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b960_0x10b960");
#endif

    ctx->pc = 0x10b960u;

label_10b960:
    // 0x10b960: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b964: 0x0  nop
    ctx->pc = 0x10b964u;
    // NOP
    // 0x10b968: 0x0  nop
    ctx->pc = 0x10b968u;
    // NOP
    // 0x10b96c: 0x0  nop
    ctx->pc = 0x10b96cu;
    // NOP
    // 0x10b970: 0x0  nop
    ctx->pc = 0x10b970u;
    // NOP
    // 0x10b974: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B974u;
    {
        const bool branch_taken_0x10b974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b974) {
            ctx->pc = 0x10B960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b960;
        }
    }
    ctx->pc = 0x10B97Cu;
    // 0x10b97c: 0x11400028  beqz        $t2, . + 4 + (0x28 << 2)
    ctx->pc = 0x10B97Cu;
    {
        const bool branch_taken_0x10b97c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b97c) {
            ctx->pc = 0x10BA20u;
            return;
        }
    }
    ctx->pc = 0x10B984u;
    // 0x10b984: 0x11600026  beqz        $t3, . + 4 + (0x26 << 2)
    ctx->pc = 0x10B984u;
    {
        const bool branch_taken_0x10b984 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B984u;
        // 0x10b988: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b984) {
            ctx->pc = 0x10BA20u;
            return;
        }
    }
    ctx->pc = 0x10B98Cu;
    // 0x10b98c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b990: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10b994: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x10b994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x10b998: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x10b998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x10b99c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b9a0: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10b9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10b9a4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x10b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x10b9a8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x10b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x10b9ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10b9acu;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x10b9b0: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x10b9b0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 11));
    // 0x10b9b4: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x10b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x10b9b8: 0x34480100  ori         $t0, $v0, 0x100
    ctx->pc = 0x10b9b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x10b9bc: 0x0  nop
    ctx->pc = 0x10b9bcu;
    // NOP
    ctx->pc = 0x10b9c0u;
}
