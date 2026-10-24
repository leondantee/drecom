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

// Function: entry_001fd18c
// Address: 0x1fd18c - 0x1fd1bc
void entry_001fd18c_0x1fd18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd18c_0x1fd18c");
#endif

    switch (ctx->pc) {
        case 0x1fd19cu: goto label_1fd19c;
        default: break;
    }

    ctx->pc = 0x1fd18cu;

    // 0x1fd18c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd190: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fd190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd194: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FD194u;
    SET_GPR_U32(ctx, 31, 0x1FD19Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FD19Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD19Cu) { return; }
    ctx->pc = 0x1FD19Cu;
label_1fd19c:
    // 0x1fd19c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd1a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd1a4: 0x0  nop
    ctx->pc = 0x1fd1a4u;
    // NOP
    // 0x1fd1a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1fd1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1fd1ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fd1acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fd1b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd1b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1FD1B4u;
    {
        const bool branch_taken_0x1fd1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1b4) {
            ctx->pc = 0x1FD290u;
            return;
        }
    }
    ctx->pc = 0x1FD1BCu;
}
