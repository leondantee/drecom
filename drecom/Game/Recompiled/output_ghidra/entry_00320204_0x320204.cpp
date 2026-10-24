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

// Function: entry_00320204
// Address: 0x320204 - 0x320230
void entry_00320204_0x320204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320204_0x320204");
#endif

    switch (ctx->pc) {
        case 0x320214u: goto label_320214;
        default: break;
    }

    ctx->pc = 0x320204u;

    // 0x320204: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x320204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320208: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x320208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32020c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x32020Cu;
    SET_GPR_U32(ctx, 31, 0x320214u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x320214u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x320214u) { return; }
    ctx->pc = 0x320214u;
label_320214:
    // 0x320214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x320218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32021c: 0x0  nop
    ctx->pc = 0x32021cu;
    // NOP
    // 0x320220: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x320220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x320224: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320228: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x320228u;
    {
        const bool branch_taken_0x320228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320228) {
            ctx->pc = 0x3202E8u;
            return;
        }
    }
    ctx->pc = 0x320230u;
}
