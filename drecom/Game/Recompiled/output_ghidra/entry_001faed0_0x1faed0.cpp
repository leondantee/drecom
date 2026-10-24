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

// Function: entry_001faed0
// Address: 0x1faed0 - 0x1faf1c
void entry_001faed0_0x1faed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faed0_0x1faed0");
#endif

    ctx->pc = 0x1faed0u;

    // 0x1faed0: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1faed4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FAED4u;
    {
        const bool branch_taken_0x1faed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faed4) {
            ctx->pc = 0x1FAEBCu;
            return;
        }
    }
    ctx->pc = 0x1FAEDCu;
    // 0x1faedc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faee0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1faee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1faee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faee8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faeec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faef0: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1faef0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faef4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faef8: 0x906302aa  lbu         $v1, 0x2AA($v1)
    ctx->pc = 0x1faef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 682)));
    // 0x1faefc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faf04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf08: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1faf08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faf0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1faf10: 0x24740290  addiu       $s4, $v1, 0x290
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x1faf14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FAF14u;
    {
        const bool branch_taken_0x1faf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf14) {
            ctx->pc = 0x1FAF60u;
            return;
        }
    }
    ctx->pc = 0x1FAF1Cu;
}
