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

// Function: entry_002e4b68
// Address: 0x2e4b68 - 0x2e4b98
void entry_002e4b68_0x2e4b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4b68_0x2e4b68");
#endif

    ctx->pc = 0x2e4b68u;

    // 0x2e4b68: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2e4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2e4b6c: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x2e4b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e4b74: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x2e4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x2e4b78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4b7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e4b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4b84: 0x0  nop
    ctx->pc = 0x2e4b84u;
    // NOP
    // 0x2e4b88: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e4b8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e4b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4b90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4B90u;
    {
        const bool branch_taken_0x2e4b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b90) {
            ctx->pc = 0x2E4C08u;
            return;
        }
    }
    ctx->pc = 0x2E4B98u;
}
