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

// Function: entry_00187258
// Address: 0x187258 - 0x187304
void entry_00187258_0x187258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187258_0x187258");
#endif

    switch (ctx->pc) {
        case 0x1872d0u: goto label_1872d0;
        default: break;
    }

    ctx->pc = 0x187258u;

    // 0x187258: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x18725c: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x187260: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x187260u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3EDCE0u));
    // 0x187264: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187268: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x187268u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18726c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187270: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x187274: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x187274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x187278: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x187278u;
    {
        const bool branch_taken_0x187278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187278) {
            ctx->pc = 0x187304u;
            return;
        }
    }
    ctx->pc = 0x187280u;
    // 0x187280: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187284: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x187284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x187288: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x18728c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187290: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x187290u;
    {
        const bool branch_taken_0x187290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187290) {
            ctx->pc = 0x187304u;
            return;
        }
    }
    ctx->pc = 0x187298u;
    // 0x187298: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18729c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x18729cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1872a0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1872a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1872a4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1872A4u;
    {
        const bool branch_taken_0x1872a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1872a4) {
            ctx->pc = 0x187304u;
            return;
        }
    }
    ctx->pc = 0x1872ACu;
    // 0x1872ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1872acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1872b0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1872b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1872b4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1872b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1872b8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1872B8u;
    {
        const bool branch_taken_0x1872b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1872b8) {
            ctx->pc = 0x187304u;
            return;
        }
    }
    ctx->pc = 0x1872C0u;
    // 0x1872c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1872c4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1872c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1872c8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1872C8u;
    SET_GPR_U32(ctx, 31, 0x1872D0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1872C8u, 0x1872D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872D0u;
label_1872d0:
    // 0x1872d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1872d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1872d4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1872d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1872d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1872dc: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x1872dcu;
    { uint32_t bits = FAST_READ32(0x480368u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1872e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1872e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872e4: 0x0  nop
    ctx->pc = 0x1872e4u;
    // NOP
    // 0x1872e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1872E8u;
    {
        const bool branch_taken_0x1872e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1872e8) {
            ctx->pc = 0x187310u;
            return;
        }
    }
    ctx->pc = 0x1872F0u;
    // 0x1872f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1872f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1872f4: 0xc4200368  lwc1        $f0, 0x368($at)
    ctx->pc = 0x1872f4u;
    { uint32_t bits = FAST_READ32(0x480368u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1872f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1872f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1872fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1872FCu;
    {
        const bool branch_taken_0x1872fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872fc) {
            ctx->pc = 0x187310u;
            return;
        }
    }
    ctx->pc = 0x187304u;
}
