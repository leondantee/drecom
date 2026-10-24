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

// Function: entry_001fb26c
// Address: 0x1fb26c - 0x1fb2a4
void entry_001fb26c_0x1fb26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb26c_0x1fb26c");
#endif

    switch (ctx->pc) {
        case 0x1fb27cu: goto label_1fb27c;
        default: break;
    }

    ctx->pc = 0x1fb26cu;

    // 0x1fb26c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb270: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fb274: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FB274u;
    SET_GPR_U32(ctx, 31, 0x1FB27Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FB27Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FB27Cu) { return; }
    ctx->pc = 0x1FB27Cu;
label_1fb27c:
    // 0x1fb27c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1fb27cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fb280: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fb280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb288: 0x0  nop
    ctx->pc = 0x1fb288u;
    // NOP
    // 0x1fb28c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fb28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fb290: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fb290u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb298: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1fb298u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fb29c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1FB29Cu;
    {
        const bool branch_taken_0x1fb29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb29c) {
            ctx->pc = 0x1FB388u;
            return;
        }
    }
    ctx->pc = 0x1FB2A4u;
}
