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

// Function: entry_0010ba98
// Address: 0x10ba98 - 0x10bb18
void entry_0010ba98_0x10ba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba98_0x10ba98");
#endif

    ctx->pc = 0x10ba98u;

label_10ba98:
    // 0x10ba98: 0x42000039  di
    ctx->pc = 0x10ba98u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10ba9c: 0x40f  sync.p
    ctx->pc = 0x10ba9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10baa0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10baa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10baa8: 0x0  nop
    ctx->pc = 0x10baa8u;
    // NOP
    // 0x10baac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BAACu;
    {
        const bool branch_taken_0x10baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10baac) {
            ctx->pc = 0x10BA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ba98;
        }
    }
    ctx->pc = 0x10BAB4u;
    // 0x10bab4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10bab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10bab8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10babc: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x10babcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x10bac0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10bac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10bac4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10bac8: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x10bac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x10bacc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10baccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bad0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10bad4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10bad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10bad8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10bad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10badc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10badcu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x10bae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bae4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10bae4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x10bae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10bae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10baec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10baecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x10baf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10baf4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10baf8: 0x42000038  ei
    ctx->pc = 0x10baf8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10bafc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10bb04: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10bb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10bb08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bb0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bb0cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x10bb10: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10bb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10bb14: 0x0  nop
    ctx->pc = 0x10bb14u;
    // NOP
    ctx->pc = 0x10bb18u;
}
