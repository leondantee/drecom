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

// Function: entry_001b76c8
// Address: 0x1b76c8 - 0x1b7738
void entry_001b76c8_0x1b76c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b76c8_0x1b76c8");
#endif

    ctx->pc = 0x1b76c8u;

    // 0x1b76c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b76cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b76d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b76d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1b76d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b76d8: 0x10800317  beqz        $a0, . + 4 + (0x317 << 2)
    ctx->pc = 0x1B76D8u;
    {
        const bool branch_taken_0x1b76d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76d8) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B76E0u;
    // 0x1b76e0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b76e4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b76e8: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b76ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b76f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b76f4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b76f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b76fc: 0x906513a6  lbu         $a1, 0x13A6($v1)
    ctx->pc = 0x1b76fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b7700: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b7700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b7704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7708: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7708u;
    {
        const bool branch_taken_0x1b7708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7708) {
            ctx->pc = 0x1B7738u;
            return;
        }
    }
    ctx->pc = 0x1B7710u;
    // 0x1b7710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7714: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7714u;
    {
        const bool branch_taken_0x1b7714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7714) {
            ctx->pc = 0x1B7738u;
            return;
        }
    }
    ctx->pc = 0x1B771Cu;
    // 0x1b771c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7720: 0x10830305  beq         $a0, $v1, . + 4 + (0x305 << 2)
    ctx->pc = 0x1B7720u;
    {
        const bool branch_taken_0x1b7720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7720) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7728u;
    // 0x1b7728: 0x10800303  beqz        $a0, . + 4 + (0x303 << 2)
    ctx->pc = 0x1B7728u;
    {
        const bool branch_taken_0x1b7728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7728) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7730u;
    // 0x1b7730: 0x10000301  b           . + 4 + (0x301 << 2)
    ctx->pc = 0x1B7730u;
    {
        const bool branch_taken_0x1b7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7730) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7738u;
}
