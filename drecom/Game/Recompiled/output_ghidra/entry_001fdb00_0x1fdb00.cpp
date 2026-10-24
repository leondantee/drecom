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

// Function: entry_001fdb00
// Address: 0x1fdb00 - 0x1fdb30
void entry_001fdb00_0x1fdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb00_0x1fdb00");
#endif

    switch (ctx->pc) {
        case 0x1fdb10u: goto label_1fdb10;
        default: break;
    }

    ctx->pc = 0x1fdb00u;

    // 0x1fdb00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdb04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdb08: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FDB08u;
    SET_GPR_U32(ctx, 31, 0x1FDB10u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FDB10u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDB10u) { return; }
    ctx->pc = 0x1FDB10u;
label_1fdb10:
    // 0x1fdb10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdb14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb18: 0x0  nop
    ctx->pc = 0x1fdb18u;
    // NOP
    // 0x1fdb1c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fdb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1fdb20: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fdb20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdb24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb28: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1FDB28u;
    {
        const bool branch_taken_0x1fdb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb28) {
            ctx->pc = 0x1FDCA0u;
            return;
        }
    }
    ctx->pc = 0x1FDB30u;
}
