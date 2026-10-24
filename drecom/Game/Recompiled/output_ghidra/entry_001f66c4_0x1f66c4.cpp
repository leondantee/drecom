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

// Function: entry_001f66c4
// Address: 0x1f66c4 - 0x1f6724
void entry_001f66c4_0x1f66c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f66c4_0x1f66c4");
#endif

    ctx->pc = 0x1f66c4u;

    // 0x1f66c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66d4: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1f66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f66d8: 0xc440009c  lwc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f66dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f66dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f66e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f66e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f66e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f66e8: 0x0  nop
    ctx->pc = 0x1f66e8u;
    // NOP
    // 0x1f66ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f66ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f66f0: 0x0  nop
    ctx->pc = 0x1f66f0u;
    // NOP
    // 0x1f66f4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1F66F4u;
    {
        const bool branch_taken_0x1f66f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f66f4) {
            ctx->pc = 0x1F6724u;
            return;
        }
    }
    ctx->pc = 0x1F66FCu;
    // 0x1f66fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6700: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6704: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1f6704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1f6708: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f6708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f670c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f670cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6710: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6714: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6718: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1f671c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F671Cu;
    {
        const bool branch_taken_0x1f671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f671c) {
            ctx->pc = 0x1F6744u;
            return;
        }
    }
    ctx->pc = 0x1F6724u;
}
