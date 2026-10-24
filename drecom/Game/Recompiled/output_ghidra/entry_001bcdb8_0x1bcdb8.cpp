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

// Function: entry_001bcdb8
// Address: 0x1bcdb8 - 0x1bce30
void entry_001bcdb8_0x1bcdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcdb8_0x1bcdb8");
#endif

    ctx->pc = 0x1bcdb8u;

    // 0x1bcdb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcdbc: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1bcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1bcdc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcdc4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bcdc8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1bcdcc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1bcdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1bcdd0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BCDD0u;
    {
        const bool branch_taken_0x1bcdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcdd0) {
            ctx->pc = 0x1BCE3Cu;
            return;
        }
    }
    ctx->pc = 0x1BCDD8u;
    // 0x1bcdd8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcddc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bcde0: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bcde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1bcde4: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bcde8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1bcdec: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bcdecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bcdf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcdf4: 0x906213a6  lbu         $v0, 0x13A6($v1)
    ctx->pc = 0x1bcdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1bcdf8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1bcdf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bcdfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bce00: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BCE00u;
    {
        const bool branch_taken_0x1bce00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bce00) {
            ctx->pc = 0x1BCE30u;
            return;
        }
    }
    ctx->pc = 0x1BCE08u;
    // 0x1bce08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce0c: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCE0Cu;
    {
        const bool branch_taken_0x1bce0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bce0c) {
            ctx->pc = 0x1BCE30u;
            return;
        }
    }
    ctx->pc = 0x1BCE14u;
    // 0x1bce14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bce18: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCE18u;
    {
        const bool branch_taken_0x1bce18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x1bce18) {
            ctx->pc = 0x1BCE3Cu;
            return;
        }
    }
    ctx->pc = 0x1BCE20u;
    // 0x1bce20: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCE20u;
    {
        const bool branch_taken_0x1bce20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce20) {
            ctx->pc = 0x1BCE3Cu;
            return;
        }
    }
    ctx->pc = 0x1BCE28u;
    // 0x1bce28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCE28u;
    {
        const bool branch_taken_0x1bce28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bce28) {
            ctx->pc = 0x1BCE3Cu;
            return;
        }
    }
    ctx->pc = 0x1BCE30u;
}
