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

// Function: entry_002447e0
// Address: 0x2447e0 - 0x244834
void entry_002447e0_0x2447e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002447e0_0x2447e0");
#endif

    ctx->pc = 0x2447e0u;

    // 0x2447e0: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2447e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2447e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2447e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2447e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2447e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2447ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2447f4: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2447f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2447f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2447f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2447fc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2447fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244800: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x244800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x244804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244808: 0x0  nop
    ctx->pc = 0x244808u;
    // NOP
    // 0x24480c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24480cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244810: 0x0  nop
    ctx->pc = 0x244810u;
    // NOP
    // 0x244814: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x244814u;
    {
        const bool branch_taken_0x244814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244814) {
            ctx->pc = 0x244834u;
            return;
        }
    }
    ctx->pc = 0x24481Cu;
    // 0x24481c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x24481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24482c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244830: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x244834u;
}
