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

// Function: entry_00328808
// Address: 0x328808 - 0x328834
void entry_00328808_0x328808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328808_0x328808");
#endif

    switch (ctx->pc) {
        case 0x328818u: goto label_328818;
        default: break;
    }

    ctx->pc = 0x328808u;

    // 0x328808: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32880c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328810: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x328810u;
    SET_GPR_U32(ctx, 31, 0x328818u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x328818u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328818u) { return; }
    ctx->pc = 0x328818u;
label_328818:
    // 0x328818: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x328818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32881c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32881cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328820: 0x0  nop
    ctx->pc = 0x328820u;
    // NOP
    // 0x328824: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x328824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x328828: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32882c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32882Cu;
    {
        const bool branch_taken_0x32882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32882c) {
            ctx->pc = 0x328860u;
            return;
        }
    }
    ctx->pc = 0x328834u;
}
