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

// Function: entry_0016e878
// Address: 0x16e878 - 0x16e8b8
void entry_0016e878_0x16e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e878_0x16e878");
#endif

    ctx->pc = 0x16e878u;

    // 0x16e878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e87c: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x16e87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16e880: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x16e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16e884: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16e884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16e888: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e88c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16E88Cu;
    {
        const bool branch_taken_0x16e88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e88c) {
            ctx->pc = 0x16E8C8u;
            return;
        }
    }
    ctx->pc = 0x16E894u;
    // 0x16e894: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e898: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E898u;
    {
        const bool branch_taken_0x16e898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e898) {
            ctx->pc = 0x16E8B8u;
            return;
        }
    }
    ctx->pc = 0x16E8A0u;
    // 0x16e8a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e8a4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x16e8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x16e8a8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x16e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x16e8ac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16e8b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16E8B0u;
    {
        const bool branch_taken_0x16e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8b0) {
            ctx->pc = 0x16E8C8u;
            return;
        }
    }
    ctx->pc = 0x16E8B8u;
}
