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

// Function: entry_001792f8
// Address: 0x1792f8 - 0x179320
void entry_001792f8_0x1792f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001792f8_0x1792f8");
#endif

    ctx->pc = 0x1792f8u;

    // 0x1792f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1792f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1792fc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1792fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x179300: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x179300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179304: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x179304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x179308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17930c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17930Cu;
    {
        const bool branch_taken_0x17930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17930c) {
            ctx->pc = 0x179320u;
            return;
        }
    }
    ctx->pc = 0x179314u;
    // 0x179314: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x179314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179318: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179318u;
    {
        const bool branch_taken_0x179318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179318) {
            ctx->pc = 0x17934Cu;
            return;
        }
    }
    ctx->pc = 0x179320u;
}
