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

// Function: entry_00265ad8
// Address: 0x265ad8 - 0x265b00
void entry_00265ad8_0x265ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265ad8_0x265ad8");
#endif

    ctx->pc = 0x265ad8u;

    // 0x265ad8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265adc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ae4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AE4u;
    {
        const bool branch_taken_0x265ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265ae4) {
            ctx->pc = 0x265B00u;
            return;
        }
    }
    ctx->pc = 0x265AECu;
    // 0x265aec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265af0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265af4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x265af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x265af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265AF8u;
    {
        const bool branch_taken_0x265af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265af8) {
            ctx->pc = 0x265B08u;
            return;
        }
    }
    ctx->pc = 0x265B00u;
}
