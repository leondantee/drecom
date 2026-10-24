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

// Function: entry_002062ac
// Address: 0x2062ac - 0x2062e8
void entry_002062ac_0x2062ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002062ac_0x2062ac");
#endif

    ctx->pc = 0x2062acu;

    // 0x2062ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062b0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2062b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2062b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2062b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2062b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2062b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2062bc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2062BCu;
    {
        const bool branch_taken_0x2062bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062bc) {
            ctx->pc = 0x2063A0u;
            return;
        }
    }
    ctx->pc = 0x2062C4u;
    // 0x2062c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2062c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2062c8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2062c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2062cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2062d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2062d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2062d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2062D4u;
    {
        const bool branch_taken_0x2062d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062d4) {
            ctx->pc = 0x2062E8u;
            return;
        }
    }
    ctx->pc = 0x2062DCu;
    // 0x2062dc: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x2062dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2062e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2062E0u;
    {
        const bool branch_taken_0x2062e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062e0) {
            ctx->pc = 0x2062ECu;
            return;
        }
    }
    ctx->pc = 0x2062E8u;
}
