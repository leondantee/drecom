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

// Function: entry_00228c40
// Address: 0x228c40 - 0x228cb4
void entry_00228c40_0x228c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228c40_0x228c40");
#endif

    ctx->pc = 0x228c40u;

    // 0x228c40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c44: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228c48: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x228c4c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x228c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x228c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c54: 0x0  nop
    ctx->pc = 0x228c54u;
    // NOP
    // 0x228c58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228c5c: 0x0  nop
    ctx->pc = 0x228c5cu;
    // NOP
    // 0x228c60: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
    ctx->pc = 0x228C60u;
    {
        const bool branch_taken_0x228c60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228c60) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228C68u;
    // 0x228c68: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x228c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x228c6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228c6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c70: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c74: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x228c78: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x228c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x228c7c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228c80: 0x84e8127a  lh          $t0, 0x127A($a3)
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4730)));
    // 0x228c84: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x228c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x228c88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228c88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228c8c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x228c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228c90: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x228C90u;
    {
        const bool branch_taken_0x228c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228c90) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228C98u;
    // 0x228c98: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x228c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ca0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ca4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x228ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ca8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x228ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x228cac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x228CACu;
    {
        const bool branch_taken_0x228cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228cac) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228CB4u;
}
