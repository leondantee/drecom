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

// Function: entry_001fc470
// Address: 0x1fc470 - 0x1fc4b0
void entry_001fc470_0x1fc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc470_0x1fc470");
#endif

    ctx->pc = 0x1fc470u;

    // 0x1fc470: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc474: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fc474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fc478: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc47c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fc47cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fc480: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FC480u;
    {
        const bool branch_taken_0x1fc480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc480) {
            ctx->pc = 0x1FC434u;
            return;
        }
    }
    ctx->pc = 0x1FC488u;
    // 0x1fc488: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc48c: 0x8c6402a4  lw          $a0, 0x2A4($v1)
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 676)));
    // 0x1fc490: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc494: 0x8c630ab8  lw          $v1, 0xAB8($v1)
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1fc498: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1fc498u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fc49c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC49Cu;
    {
        const bool branch_taken_0x1fc49c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc49c) {
            ctx->pc = 0x1FC4B0u;
            return;
        }
    }
    ctx->pc = 0x1FC4A4u;
    // 0x1fc4a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc4a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc4ac: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fc4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    ctx->pc = 0x1fc4b0u;
}
