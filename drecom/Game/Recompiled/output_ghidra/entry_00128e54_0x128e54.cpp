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

// Function: entry_00128e54
// Address: 0x128e54 - 0x128e7c
void entry_00128e54_0x128e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128e54_0x128e54");
#endif

    ctx->pc = 0x128e54u;

    // 0x128e54: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x128e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128e58: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x128e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x128e5c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x128E5Cu;
    {
        const bool branch_taken_0x128e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e5c) {
            ctx->pc = 0x128E7Cu;
            return;
        }
    }
    ctx->pc = 0x128E64u;
    // 0x128e64: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x128e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128e68: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x128e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x128e6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x128e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x128e70: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x128e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x128e74: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x128E74u;
    {
        const bool branch_taken_0x128e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128e74) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x128E7Cu;
}
