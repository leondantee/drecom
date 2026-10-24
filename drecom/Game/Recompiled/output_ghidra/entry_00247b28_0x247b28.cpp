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

// Function: entry_00247b28
// Address: 0x247b28 - 0x247b9c
void entry_00247b28_0x247b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247b28_0x247b28");
#endif

    ctx->pc = 0x247b28u;

    // 0x247b28: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x247b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x247b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247b30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x247b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x247b34: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x247b34u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247b38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247b3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b40: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x247b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247b48: 0x0  nop
    ctx->pc = 0x247b48u;
    // NOP
    // 0x247b4c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x247B4Cu;
    {
        const bool branch_taken_0x247b4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247b4c) {
            ctx->pc = 0x247B9Cu;
            return;
        }
    }
    ctx->pc = 0x247B54u;
    // 0x247b54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b58: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247b5c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x247b60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x247b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x247b64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x247B64u;
    {
        const bool branch_taken_0x247b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x247b64) {
            ctx->pc = 0x247B9Cu;
            return;
        }
    }
    ctx->pc = 0x247B6Cu;
    // 0x247b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x247b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247b70: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b74: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x247b74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x247b78: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x247b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x247b7c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b80: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x247b80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x247b84: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x247b84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b88: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x247b88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b90: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x247b90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x247b94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247b98: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x247b9cu;
}
