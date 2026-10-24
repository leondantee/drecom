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

// Function: entry_00246fc0
// Address: 0x246fc0 - 0x247004
void entry_00246fc0_0x246fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246fc0_0x246fc0");
#endif

    ctx->pc = 0x246fc0u;

    // 0x246fc0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246fc4: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x246fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fc8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x246fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x246fcc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x246fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x246fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246fd4: 0x0  nop
    ctx->pc = 0x246fd4u;
    // NOP
    // 0x246fd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246fdc: 0x0  nop
    ctx->pc = 0x246fdcu;
    // NOP
    // 0x246fe0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x246FE0u;
    {
        const bool branch_taken_0x246fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246fe0) {
            ctx->pc = 0x247004u;
            return;
        }
    }
    ctx->pc = 0x246FE8u;
    // 0x246fe8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x246fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x246fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ff0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246ff8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246ffc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x246FFCu;
    {
        const bool branch_taken_0x246ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ffc) {
            ctx->pc = 0x247094u;
            return;
        }
    }
    ctx->pc = 0x247004u;
}
