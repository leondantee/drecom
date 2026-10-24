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

// Function: entry_001a29b0
// Address: 0x1a29b0 - 0x1a2a10
void entry_001a29b0_0x1a29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a29b0_0x1a29b0");
#endif

    ctx->pc = 0x1a29b0u;

    // 0x1a29b0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a29b4: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a29b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a29b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29bc: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1a29c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29c4: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a29c8: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a29c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a29cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29d0: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x1a29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1a29d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29d8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x1a29dc: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x1a29dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a29e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29e4: 0x24420148  addiu       $v0, $v0, 0x148
    ctx->pc = 0x1a29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x1a29e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a29ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a29f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a29f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a29f8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A29F8u;
    {
        const bool branch_taken_0x1a29f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a29f8) {
            ctx->pc = 0x1A2A20u;
            return;
        }
    }
    ctx->pc = 0x1A2A00u;
    // 0x1a2a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2A00u;
    {
        const bool branch_taken_0x1a2a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a00) {
            ctx->pc = 0x1A2A10u;
            return;
        }
    }
    ctx->pc = 0x1A2A08u;
    // 0x1a2a08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2A08u;
    {
        const bool branch_taken_0x1a2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a08) {
            ctx->pc = 0x1A2A28u;
            return;
        }
    }
    ctx->pc = 0x1A2A10u;
}
