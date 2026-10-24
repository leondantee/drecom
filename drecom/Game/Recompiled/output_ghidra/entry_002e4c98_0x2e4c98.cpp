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

// Function: entry_002e4c98
// Address: 0x2e4c98 - 0x2e4cd4
void entry_002e4c98_0x2e4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4c98_0x2e4c98");
#endif

    ctx->pc = 0x2e4c98u;

    // 0x2e4c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4c9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4ca0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e4ca4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e4ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e4ca8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E4CA8u;
    {
        const bool branch_taken_0x2e4ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ca8) {
            ctx->pc = 0x2E4DD8u;
            return;
        }
    }
    ctx->pc = 0x2E4CB0u;
    // 0x2e4cb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cb4: 0x0  nop
    ctx->pc = 0x2e4cb4u;
    // NOP
    // 0x2e4cb8: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2e4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2e4cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e4cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4cc0: 0x0  nop
    ctx->pc = 0x2e4cc0u;
    // NOP
    // 0x2e4cc4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2e4cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2e4cc8: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x2e4cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2e4ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e4cd0: 0xa20200a8  sb          $v0, 0xA8($s0)
    ctx->pc = 0x2e4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e4cd4u;
}
