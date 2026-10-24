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

// Function: entry_00156c98
// Address: 0x156c98 - 0x156d2c
void entry_00156c98_0x156c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156c98_0x156c98");
#endif

    ctx->pc = 0x156c98u;

    // 0x156c98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x156c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x156c9c: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x156C9Cu;
    {
        const bool branch_taken_0x156c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x156c9c) {
            ctx->pc = 0x156D2Cu;
            return;
        }
    }
    ctx->pc = 0x156CA4u;
    // 0x156ca4: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x156ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x156ca8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x156ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156cac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156cb4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156cbc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156cc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156cc8: 0x0  nop
    ctx->pc = 0x156cc8u;
    // NOP
    // 0x156ccc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156cccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156cd0: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x156cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156cd8: 0x0  nop
    ctx->pc = 0x156cd8u;
    // NOP
    // 0x156cdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156ce0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x156ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x156ce4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156ce8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156cec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156cf4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156cfc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156cfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156d00: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d08: 0x0  nop
    ctx->pc = 0x156d08u;
    // NOP
    // 0x156d0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156d0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156d10: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d18: 0x0  nop
    ctx->pc = 0x156d18u;
    // NOP
    // 0x156d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156d20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x156d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x156d24: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x156D24u;
    {
        const bool branch_taken_0x156d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d24) {
            ctx->pc = 0x156E38u;
            return;
        }
    }
    ctx->pc = 0x156D2Cu;
}
