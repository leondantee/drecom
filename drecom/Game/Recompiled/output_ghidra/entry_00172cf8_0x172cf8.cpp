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

// Function: entry_00172cf8
// Address: 0x172cf8 - 0x172d48
void entry_00172cf8_0x172cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172cf8_0x172cf8");
#endif

    ctx->pc = 0x172cf8u;

    // 0x172cf8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x172cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172cfc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x172cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172d00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172d04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x172d08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d0c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x172d10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d18: 0x0  nop
    ctx->pc = 0x172d18u;
    // NOP
    // 0x172d1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d20: 0x0  nop
    ctx->pc = 0x172d20u;
    // NOP
    // 0x172d24: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x172D24u;
    {
        const bool branch_taken_0x172d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d24) {
            ctx->pc = 0x172D48u;
            return;
        }
    }
    ctx->pc = 0x172D2Cu;
    // 0x172d2c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x172d34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x172d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x172d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d3c: 0x0  nop
    ctx->pc = 0x172d3cu;
    // NOP
    // 0x172d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x172d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172d44: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x172d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x172d48u;
}
