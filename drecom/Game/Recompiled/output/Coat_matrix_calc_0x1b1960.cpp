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

// Function: Coat_matrix_calc
// Address: 0x1b1960 - 0x1b19d4
void Coat_matrix_calc_0x1b1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Coat_matrix_calc_0x1b1960");
#endif

    ctx->pc = 0x1b1960u;

    // 0x1b1960: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x1b1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
    // 0x1b1964: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b1964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b1968: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b196c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b1970: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1974: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b1978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b197c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1988: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b1988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1b198c: 0x247edbc0  addiu       $fp, $v1, -0x2440
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1b1990: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b1994: 0x2471a530  addiu       $s1, $v1, -0x5AD0
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x1b1998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b199c: 0x0  nop
    ctx->pc = 0x1b199cu;
    // NOP
    // 0x1b19a0: 0xe7a0054c  swc1        $f0, 0x54C($sp)
    ctx->pc = 0x1b19a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1356), bits); }
    // 0x1b19a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b19a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b19a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b19a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b19ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b19acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b19b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b19b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b19b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b19bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b19bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b19c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b19c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b19c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b19c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19c8: 0x27bd0570  addiu       $sp, $sp, 0x570
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
    // 0x1b19cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B19CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B19CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B19D4u;
}
