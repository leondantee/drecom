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

// Function: entry_001bac80
// Address: 0x1bac80 - 0x1bacd8
void entry_001bac80_0x1bac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bac80_0x1bac80");
#endif

    ctx->pc = 0x1bac80u;

    // 0x1bac80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac84: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bac88: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bac8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bac8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bac90: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BAC90u;
    {
        const bool branch_taken_0x1bac90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac90) {
            ctx->pc = 0x1BACE4u;
            return;
        }
    }
    ctx->pc = 0x1BAC98u;
    // 0x1bac98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bac9c: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bac9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1baca0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1baca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1baca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1baca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baca8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BACA8u;
    {
        const bool branch_taken_0x1baca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1baca8) {
            ctx->pc = 0x1BACD8u;
            return;
        }
    }
    ctx->pc = 0x1BACB0u;
    // 0x1bacb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bacb4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BACB4u;
    {
        const bool branch_taken_0x1bacb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bacb4) {
            ctx->pc = 0x1BACD8u;
            return;
        }
    }
    ctx->pc = 0x1BACBCu;
    // 0x1bacbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bacc0: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BACC0u;
    {
        const bool branch_taken_0x1bacc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1bacc0) {
            ctx->pc = 0x1BACE4u;
            return;
        }
    }
    ctx->pc = 0x1BACC8u;
    // 0x1bacc8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BACC8u;
    {
        const bool branch_taken_0x1bacc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacc8) {
            ctx->pc = 0x1BACE4u;
            return;
        }
    }
    ctx->pc = 0x1BACD0u;
    // 0x1bacd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BACD0u;
    {
        const bool branch_taken_0x1bacd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bacd0) {
            ctx->pc = 0x1BACE4u;
            return;
        }
    }
    ctx->pc = 0x1BACD8u;
}
