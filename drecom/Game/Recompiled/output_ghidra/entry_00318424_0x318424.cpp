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

// Function: entry_00318424
// Address: 0x318424 - 0x31848c
void entry_00318424_0x318424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00318424_0x318424");
#endif

    ctx->pc = 0x318424u;

    // 0x318424: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318428: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31842c: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x31842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318430: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x318434: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x318434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31843c: 0x0  nop
    ctx->pc = 0x31843cu;
    // NOP
    // 0x318440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x318444: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x318444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x318448: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31844c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318450: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x318450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318454: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x318454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31845c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31845cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318460: 0x0  nop
    ctx->pc = 0x318460u;
    // NOP
    // 0x318464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318468: 0x0  nop
    ctx->pc = 0x318468u;
    // NOP
    // 0x31846c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x31846Cu;
    {
        const bool branch_taken_0x31846c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31846c) {
            ctx->pc = 0x31848Cu;
            return;
        }
    }
    ctx->pc = 0x318474u;
    // 0x318474: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x318474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x318478: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31847c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31847cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318480: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x318480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318484: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318488: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x318488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    ctx->pc = 0x31848cu;
}
