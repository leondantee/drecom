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

// Function: entry_0029421c
// Address: 0x29421c - 0x294250
void entry_0029421c_0x29421c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029421c_0x29421c");
#endif

    ctx->pc = 0x29421cu;

    // 0x29421c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294220: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x294224: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x294228: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x29422c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294230: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294234: 0x3c03b8d1  lui         $v1, 0xB8D1
    ctx->pc = 0x294234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47313 << 16));
    // 0x294238: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x294238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x29423c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29423cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294240: 0x0  nop
    ctx->pc = 0x294240u;
    // NOP
    // 0x294244: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x294244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x294248: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x294248u;
    {
        const bool branch_taken_0x294248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294248) {
            ctx->pc = 0x2942B0u;
            return;
        }
    }
    ctx->pc = 0x294250u;
}
