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

// Function: entry_001284d4
// Address: 0x1284d4 - 0x1284fc
void entry_001284d4_0x1284d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001284d4_0x1284d4");
#endif

    ctx->pc = 0x1284d4u;

    // 0x1284d4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1284d8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1284d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1284dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1284DCu;
    {
        const bool branch_taken_0x1284dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284dc) {
            ctx->pc = 0x1284FCu;
            return;
        }
    }
    ctx->pc = 0x1284E4u;
    // 0x1284e4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1284e8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1284e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1284ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1284ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1284f0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1284f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1284f4: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x1284F4u;
    {
        const bool branch_taken_0x1284f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284f4) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1284FCu;
}
