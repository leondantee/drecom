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

// Function: entry_0025704c
// Address: 0x25704c - 0x25708c
void entry_0025704c_0x25704c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025704c_0x25704c");
#endif

    ctx->pc = 0x25704cu;

    // 0x25704c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x25704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x257050: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257054: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x257054u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x257058: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x257058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x25705c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257060: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x257060u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x257064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x257064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257068: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x257068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x25706c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25706Cu;
    {
        const bool branch_taken_0x25706c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25706c) {
            ctx->pc = 0x25708Cu;
            return;
        }
    }
    ctx->pc = 0x257074u;
    // 0x257074: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x257074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x257078: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x257078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x25707c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257080: 0xfc640030  sd          $a0, 0x30($v1)
    ctx->pc = 0x257080u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 4));
    // 0x257084: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257084u;
    {
        const bool branch_taken_0x257084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257084) {
            ctx->pc = 0x25709Cu;
            return;
        }
    }
    ctx->pc = 0x25708Cu;
}
