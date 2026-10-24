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

// Function: entry_001569a0
// Address: 0x1569a0 - 0x156a34
void entry_001569a0_0x1569a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001569a0_0x1569a0");
#endif

    ctx->pc = 0x1569a0u;

    // 0x1569a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1569a4: 0x16420023  bne         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1569A4u;
    {
        const bool branch_taken_0x1569a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1569a4) {
            ctx->pc = 0x156A34u;
            return;
        }
    }
    ctx->pc = 0x1569ACu;
    // 0x1569ac: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1569b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1569b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1569b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1569b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1569b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1569bc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1569bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1569c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1569c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1569c4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1569c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1569c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1569cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1569ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1569d0: 0x0  nop
    ctx->pc = 0x1569d0u;
    // NOP
    // 0x1569d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1569d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1569d8: 0x3c0544e0  lui         $a1, 0x44E0
    ctx->pc = 0x1569d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17632 << 16));
    // 0x1569dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1569dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1569e0: 0x0  nop
    ctx->pc = 0x1569e0u;
    // NOP
    // 0x1569e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1569e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1569e8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1569e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1569ec: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1569f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1569f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1569f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1569f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1569f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1569f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1569fc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1569fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156a04: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156a08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a10: 0x0  nop
    ctx->pc = 0x156a10u;
    // NOP
    // 0x156a14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156a14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156a18: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a20: 0x0  nop
    ctx->pc = 0x156a20u;
    // NOP
    // 0x156a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156a28: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x156a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x156a2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x156A2Cu;
    {
        const bool branch_taken_0x156a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a2c) {
            ctx->pc = 0x156B38u;
            return;
        }
    }
    ctx->pc = 0x156A34u;
}
