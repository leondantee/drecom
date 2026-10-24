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

// Function: entry_001bc4c8
// Address: 0x1bc4c8 - 0x1bc538
void entry_001bc4c8_0x1bc4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc4c8_0x1bc4c8");
#endif

    ctx->pc = 0x1bc4c8u;

    // 0x1bc4c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc4cc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1bc4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bc4d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bc4d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bc4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bc4d8: 0x10600314  beqz        $v1, . + 4 + (0x314 << 2)
    ctx->pc = 0x1BC4D8u;
    {
        const bool branch_taken_0x1bc4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4d8) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC4E0u;
    // 0x1bc4e0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc4e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bc4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bc4e8: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1bc4ec: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x1bc4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bc4f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1bc4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1bc4f4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bc4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bc4f8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc4fc: 0x90a313a6  lbu         $v1, 0x13A6($a1)
    ctx->pc = 0x1bc4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5030)));
    // 0x1bc500: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bc500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bc504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bc504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc508: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC508u;
    {
        const bool branch_taken_0x1bc508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc508) {
            ctx->pc = 0x1BC538u;
            return;
        }
    }
    ctx->pc = 0x1BC510u;
    // 0x1bc510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc514: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC514u;
    {
        const bool branch_taken_0x1bc514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1bc514) {
            ctx->pc = 0x1BC538u;
            return;
        }
    }
    ctx->pc = 0x1BC51Cu;
    // 0x1bc51c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc520: 0x10830302  beq         $a0, $v1, . + 4 + (0x302 << 2)
    ctx->pc = 0x1BC520u;
    {
        const bool branch_taken_0x1bc520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc520) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC528u;
    // 0x1bc528: 0x10800300  beqz        $a0, . + 4 + (0x300 << 2)
    ctx->pc = 0x1BC528u;
    {
        const bool branch_taken_0x1bc528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc528) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC530u;
    // 0x1bc530: 0x100002fe  b           . + 4 + (0x2FE << 2)
    ctx->pc = 0x1BC530u;
    {
        const bool branch_taken_0x1bc530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc530) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC538u;
}
