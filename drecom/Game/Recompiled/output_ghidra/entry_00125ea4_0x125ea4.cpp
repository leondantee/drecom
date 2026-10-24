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

// Function: entry_00125ea4
// Address: 0x125ea4 - 0x125ecc
void entry_00125ea4_0x125ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125ea4_0x125ea4");
#endif

    ctx->pc = 0x125ea4u;

    // 0x125ea4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x125ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125ea8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x125eac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x125EACu;
    {
        const bool branch_taken_0x125eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125eac) {
            ctx->pc = 0x125ECCu;
            return;
        }
    }
    ctx->pc = 0x125EB4u;
    // 0x125eb4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x125eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125eb8: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x125eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x125ebc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x125ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x125ec0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x125ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x125ec4: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x125EC4u;
    {
        const bool branch_taken_0x125ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ec4) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x125ECCu;
}
