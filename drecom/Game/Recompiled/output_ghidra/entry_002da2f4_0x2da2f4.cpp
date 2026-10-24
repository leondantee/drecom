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

// Function: entry_002da2f4
// Address: 0x2da2f4 - 0x2da360
void entry_002da2f4_0x2da2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da2f4_0x2da2f4");
#endif

    ctx->pc = 0x2da2f4u;

    // 0x2da2f4: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da2f8: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x2da2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x2da2fc: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2da2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2da300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da304: 0x0  nop
    ctx->pc = 0x2da304u;
    // NOP
    // 0x2da308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da30c: 0x0  nop
    ctx->pc = 0x2da30cu;
    // NOP
    // 0x2da310: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2DA310u;
    {
        const bool branch_taken_0x2da310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da310) {
            ctx->pc = 0x2DA380u;
            return;
        }
    }
    ctx->pc = 0x2DA318u;
    // 0x2da318: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da31c: 0x3c023f1a  lui         $v0, 0x3F1A
    ctx->pc = 0x2da31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16154 << 16));
    // 0x2da320: 0x344290fd  ori         $v0, $v0, 0x90FD
    ctx->pc = 0x2da320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37117);
    // 0x2da324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da328: 0x0  nop
    ctx->pc = 0x2da328u;
    // NOP
    // 0x2da32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2da32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da330: 0x0  nop
    ctx->pc = 0x2da330u;
    // NOP
    // 0x2da334: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2DA334u;
    {
        const bool branch_taken_0x2da334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da334) {
            ctx->pc = 0x2DA360u;
            return;
        }
    }
    ctx->pc = 0x2DA33Cu;
    // 0x2da33c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2da33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da340: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2da340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2da344: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2da344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2da348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da34c: 0x0  nop
    ctx->pc = 0x2da34cu;
    // NOP
    // 0x2da350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2da350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2da354: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2da354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2da358: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2DA358u;
    {
        const bool branch_taken_0x2da358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da358) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA360u;
}
