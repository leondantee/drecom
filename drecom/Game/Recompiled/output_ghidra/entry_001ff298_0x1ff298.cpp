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

// Function: entry_001ff298
// Address: 0x1ff298 - 0x1ff2cc
void entry_001ff298_0x1ff298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff298_0x1ff298");
#endif

    switch (ctx->pc) {
        case 0x1ff2a8u: goto label_1ff2a8;
        default: break;
    }

    ctx->pc = 0x1ff298u;

    // 0x1ff298: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff29c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1ff29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff2a0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FF2A0u;
    SET_GPR_U32(ctx, 31, 0x1FF2A8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FF2A8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF2A8u) { return; }
    ctx->pc = 0x1FF2A8u;
label_1ff2a8:
    // 0x1ff2a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff2a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff2ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ff2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ff2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff2b4: 0x0  nop
    ctx->pc = 0x1ff2b4u;
    // NOP
    // 0x1ff2b8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ff2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1ff2bc: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1ff2bcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ff2c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ff2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1FF2C4u;
    {
        const bool branch_taken_0x1ff2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff2c4) {
            ctx->pc = 0x1FF3B8u;
            return;
        }
    }
    ctx->pc = 0x1FF2CCu;
}
