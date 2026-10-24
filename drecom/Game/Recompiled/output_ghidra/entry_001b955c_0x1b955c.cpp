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

// Function: entry_001b955c
// Address: 0x1b955c - 0x1b95d4
void entry_001b955c_0x1b955c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b955c_0x1b955c");
#endif

    ctx->pc = 0x1b955cu;

    // 0x1b955c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9560: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1b9560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1b9564: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9568: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b956c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1b956cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1b9570: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1b9570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b9574: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B9574u;
    {
        const bool branch_taken_0x1b9574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9574) {
            ctx->pc = 0x1B95E0u;
            return;
        }
    }
    ctx->pc = 0x1B957Cu;
    // 0x1b957c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9580: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b9580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b9584: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b9584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b9588: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x1b9588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b958c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b958cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1b9590: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b9590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1b9594: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9598: 0x904513a6  lbu         $a1, 0x13A6($v0)
    ctx->pc = 0x1b9598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x1b959c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1b959cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b95a0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1b95a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b95a4: 0x10c7000b  beq         $a2, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1B95A4u;
    {
        const bool branch_taken_0x1b95a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1b95a4) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B95ACu;
    // 0x1b95ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b95b0: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B95B0u;
    {
        const bool branch_taken_0x1b95b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1b95b0) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B95B8u;
    // 0x1b95b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b95bc: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B95BCu;
    {
        const bool branch_taken_0x1b95bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b95bc) {
            ctx->pc = 0x1B95E0u;
            return;
        }
    }
    ctx->pc = 0x1B95C4u;
    // 0x1b95c4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95E0u;
            return;
        }
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B95CCu;
    {
        const bool branch_taken_0x1b95cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95cc) {
            ctx->pc = 0x1B95E0u;
            return;
        }
    }
    ctx->pc = 0x1B95D4u;
}
