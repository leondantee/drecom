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

// Function: entry_001f3928
// Address: 0x1f3928 - 0x1f39b0
void entry_001f3928_0x1f3928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3928_0x1f3928");
#endif

    ctx->pc = 0x1f3928u;

    // 0x1f3928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f392c: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f392cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3930: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f3930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3934: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3938: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f393c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F393Cu;
    {
        const bool branch_taken_0x1f393c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f393c) {
            ctx->pc = 0x1F3A08u;
            return;
        }
    }
    ctx->pc = 0x1F3944u;
    // 0x1f3944: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3948: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f394c: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f394cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f3950: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F3950u;
    {
        const bool branch_taken_0x1f3950 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3950) {
            ctx->pc = 0x1F3A08u;
            return;
        }
    }
    ctx->pc = 0x1F3958u;
    // 0x1f3958: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f395c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3960: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f3960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3964: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3968: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f396c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f396cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3970: 0x0  nop
    ctx->pc = 0x1f3970u;
    // NOP
    // 0x1f3974: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F3974u;
    {
        const bool branch_taken_0x1f3974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3974) {
            ctx->pc = 0x1F39B0u;
            return;
        }
    }
    ctx->pc = 0x1F397Cu;
    // 0x1f397c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3980: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f3980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f3984: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3988u;
    {
        const bool branch_taken_0x1f3988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3988) {
            ctx->pc = 0x1F39B0u;
            return;
        }
    }
    ctx->pc = 0x1F3990u;
    // 0x1f3990: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3994: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3998: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f399c: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x1f399cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x1f39a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f39a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f39a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F39A8u;
    SET_GPR_U32(ctx, 31, 0x1F39B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F39A8u, 0x1F39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39B0u;
}
