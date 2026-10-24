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

// Function: entry_001fc7a4
// Address: 0x1fc7a4 - 0x1fc7d4
void entry_001fc7a4_0x1fc7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc7a4_0x1fc7a4");
#endif

    switch (ctx->pc) {
        case 0x1fc7b4u: goto label_1fc7b4;
        default: break;
    }

    ctx->pc = 0x1fc7a4u;

    // 0x1fc7a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7a8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc7ac: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FC7ACu;
    SET_GPR_U32(ctx, 31, 0x1FC7B4u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FC7B4u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC7B4u) { return; }
    ctx->pc = 0x1FC7B4u;
label_1fc7b4:
    // 0x1fc7b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fc7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc7bc: 0x0  nop
    ctx->pc = 0x1fc7bcu;
    // NOP
    // 0x1fc7c0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fc7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fc7c4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fc7c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc7c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc7cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FC7CCu;
    {
        const bool branch_taken_0x1fc7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc7cc) {
            ctx->pc = 0x1FC890u;
            return;
        }
    }
    ctx->pc = 0x1FC7D4u;
}
