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

// Function: entry_0017973c
// Address: 0x17973c - 0x179764
void entry_0017973c_0x17973c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017973c_0x17973c");
#endif

    ctx->pc = 0x17973cu;

    // 0x17973c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179740: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x179740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179748: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x17974c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179750: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179750u;
    {
        const bool branch_taken_0x179750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179750) {
            ctx->pc = 0x179764u;
            return;
        }
    }
    ctx->pc = 0x179758u;
    // 0x179758: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x17975c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17975Cu;
    {
        const bool branch_taken_0x17975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17975c) {
            ctx->pc = 0x179768u;
            return;
        }
    }
    ctx->pc = 0x179764u;
}
