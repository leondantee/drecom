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

// Function: entry_00294250
// Address: 0x294250 - 0x294284
void entry_00294250_0x294250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294250_0x294250");
#endif

    ctx->pc = 0x294250u;

    // 0x294250: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x294254: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x294258: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x294258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29425c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x29425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294264: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294268: 0x3c033951  lui         $v1, 0x3951
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14673 << 16));
    // 0x29426c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x29426cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x294270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294274: 0x0  nop
    ctx->pc = 0x294274u;
    // NOP
    // 0x294278: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x294278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x29427c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29427Cu;
    {
        const bool branch_taken_0x29427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29427c) {
            ctx->pc = 0x2942B0u;
            return;
        }
    }
    ctx->pc = 0x294284u;
}
