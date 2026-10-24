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

// Function: entry_00228d28
// Address: 0x228d28 - 0x228d90
void entry_00228d28_0x228d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228d28_0x228d28");
#endif

    ctx->pc = 0x228d28u;

    // 0x228d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d2c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x228d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228d30: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x228d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x228d34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228d34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d38: 0x0  nop
    ctx->pc = 0x228d38u;
    // NOP
    // 0x228d3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228d40: 0x0  nop
    ctx->pc = 0x228d40u;
    // NOP
    // 0x228d44: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x228D44u;
    {
        const bool branch_taken_0x228d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228d44) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228D4Cu;
    // 0x228d4c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x228d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228d5c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x228d60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d64: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x228d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x228d68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x228d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x228d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x228d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x228d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x228d74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228D74u;
    {
        const bool branch_taken_0x228d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d74) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228D7Cu;
    // 0x228d7c: 0x3c12c248  lui         $s2, 0xC248
    ctx->pc = 0x228d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49736 << 16));
    // 0x228d80: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x228d80u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228d84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d88: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228d8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x228d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x228d90u;
}
