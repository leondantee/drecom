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

// Function: entry_0012afa0
// Address: 0x12afa0 - 0x12afe4
void entry_0012afa0_0x12afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012afa0_0x12afa0");
#endif

    ctx->pc = 0x12afa0u;

    // 0x12afa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12afa4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12afa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12afa8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12afa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12afac: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12afacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12afb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12afb4: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12AFB4u;
    {
        const bool branch_taken_0x12afb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afb4) {
            ctx->pc = 0x12B05Cu;
            return;
        }
    }
    ctx->pc = 0x12AFBCu;
    // 0x12afbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12afc0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12AFC0u;
    {
        const bool branch_taken_0x12afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afc0) {
            ctx->pc = 0x12B034u;
            return;
        }
    }
    ctx->pc = 0x12AFC8u;
    // 0x12afc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12afcc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12AFCCu;
    {
        const bool branch_taken_0x12afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12afcc) {
            ctx->pc = 0x12B00Cu;
            return;
        }
    }
    ctx->pc = 0x12AFD4u;
    // 0x12afd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFD4u;
    {
        const bool branch_taken_0x12afd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afd4) {
            ctx->pc = 0x12AFE4u;
            return;
        }
    }
    ctx->pc = 0x12AFDCu;
    // 0x12afdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AFDCu;
    {
        const bool branch_taken_0x12afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12afdc) {
            ctx->pc = 0x12AFE4u;
            return;
        }
    }
    ctx->pc = 0x12AFE4u;
}
