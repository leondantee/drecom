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

// Function: entry_001fc324
// Address: 0x1fc324 - 0x1fc354
void entry_001fc324_0x1fc324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc324_0x1fc324");
#endif

    switch (ctx->pc) {
        case 0x1fc334u: goto label_1fc334;
        default: break;
    }

    ctx->pc = 0x1fc324u;

    // 0x1fc324: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc328: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc32c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC32Cu;
    SET_GPR_U32(ctx, 31, 0x1FC334u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC334u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC334u) { return; }
    ctx->pc = 0x1FC334u;
label_1fc334:
    // 0x1fc334: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fc334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc33c: 0x0  nop
    ctx->pc = 0x1fc33cu;
    // NOP
    // 0x1fc340: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fc340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fc344: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fc344u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc348: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc34c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FC34Cu;
    {
        const bool branch_taken_0x1fc34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc34c) {
            ctx->pc = 0x1FC410u;
            return;
        }
    }
    ctx->pc = 0x1FC354u;
}
