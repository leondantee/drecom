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

// Function: entry_00156b38
// Address: 0x156b38 - 0x156bb0
void entry_00156b38_0x156b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b38_0x156b38");
#endif

    ctx->pc = 0x156b38u;

    // 0x156b38: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x156B38u;
    {
        const bool branch_taken_0x156b38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x156b38) {
            ctx->pc = 0x156BB0u;
            return;
        }
    }
    ctx->pc = 0x156B40u;
    // 0x156b40: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b48: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156b50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b58: 0x0  nop
    ctx->pc = 0x156b58u;
    // NOP
    // 0x156b5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b60: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b68: 0x0  nop
    ctx->pc = 0x156b68u;
    // NOP
    // 0x156b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156b70: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x156b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x156b74: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156b84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b8c: 0x0  nop
    ctx->pc = 0x156b8cu;
    // NOP
    // 0x156b90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b94: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b9c: 0x0  nop
    ctx->pc = 0x156b9cu;
    // NOP
    // 0x156ba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156ba4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x156ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x156ba8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x156BA8u;
    {
        const bool branch_taken_0x156ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ba8) {
            ctx->pc = 0x156C98u;
            return;
        }
    }
    ctx->pc = 0x156BB0u;
}
