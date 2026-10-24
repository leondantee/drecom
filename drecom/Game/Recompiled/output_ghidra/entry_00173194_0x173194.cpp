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

// Function: entry_00173194
// Address: 0x173194 - 0x1731e4
void entry_00173194_0x173194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173194_0x173194");
#endif

    ctx->pc = 0x173194u;

    // 0x173194: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x173194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173198: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x173198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17319c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17319cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1731a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1731a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1731a4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1731ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731b4: 0x0  nop
    ctx->pc = 0x1731b4u;
    // NOP
    // 0x1731b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1731b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1731bc: 0x0  nop
    ctx->pc = 0x1731bcu;
    // NOP
    // 0x1731c0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1731C0u;
    {
        const bool branch_taken_0x1731c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1731c0) {
            ctx->pc = 0x1731E4u;
            return;
        }
    }
    ctx->pc = 0x1731C8u;
    // 0x1731c8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1731c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1731cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1731d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1731d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1731d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1731d8: 0x0  nop
    ctx->pc = 0x1731d8u;
    // NOP
    // 0x1731dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1731dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1731e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1731e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x1731e4u;
}
