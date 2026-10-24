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

// Function: entry_0031884c
// Address: 0x31884c - 0x3188b4
void entry_0031884c_0x31884c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031884c_0x31884c");
#endif

    ctx->pc = 0x31884cu;

    // 0x31884c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x31884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318850: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x318850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318854: 0xc461010c  lwc1        $f1, 0x10C($v1)
    ctx->pc = 0x318854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318858: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x318858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x31885c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31885cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x318860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318864: 0x0  nop
    ctx->pc = 0x318864u;
    // NOP
    // 0x318868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x318868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31886c: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x31886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
    // 0x318870: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x318874: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x318874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x318878: 0xc441010c  lwc1        $f1, 0x10C($v0)
    ctx->pc = 0x318878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31887c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x318880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x318880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x318884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318888: 0x0  nop
    ctx->pc = 0x318888u;
    // NOP
    // 0x31888c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31888cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318890: 0x0  nop
    ctx->pc = 0x318890u;
    // NOP
    // 0x318894: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x318894u;
    {
        const bool branch_taken_0x318894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318894) {
            ctx->pc = 0x3188B4u;
            return;
        }
    }
    ctx->pc = 0x31889Cu;
    // 0x31889c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x31889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x3188a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3188a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3188a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3188a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3188a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3188ac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3188b0: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x3188b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    ctx->pc = 0x3188b4u;
}
