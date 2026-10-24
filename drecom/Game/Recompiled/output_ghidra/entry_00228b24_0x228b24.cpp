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

// Function: entry_00228b24
// Address: 0x228b24 - 0x228bcc
void entry_00228b24_0x228b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228b24_0x228b24");
#endif

    ctx->pc = 0x228b24u;

    // 0x228b24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b30: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228b34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b38: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x228b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b3c: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x228b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b40: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x228b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x228b44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228b44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b48: 0x0  nop
    ctx->pc = 0x228b48u;
    // NOP
    // 0x228b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b50: 0x0  nop
    ctx->pc = 0x228b50u;
    // NOP
    // 0x228b54: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x228B54u;
    {
        const bool branch_taken_0x228b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b54) {
            ctx->pc = 0x228CB4u;
            return;
        }
    }
    ctx->pc = 0x228B5Cu;
    // 0x228b5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b60: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x228b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b64: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x228b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x228b68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228b68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b6c: 0x0  nop
    ctx->pc = 0x228b6cu;
    // NOP
    // 0x228b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b74: 0x0  nop
    ctx->pc = 0x228b74u;
    // NOP
    // 0x228b78: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x228B78u;
    {
        const bool branch_taken_0x228b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b78) {
            ctx->pc = 0x228BCCu;
            return;
        }
    }
    ctx->pc = 0x228B80u;
    // 0x228b80: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x228b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228b90: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228b94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b98: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x228b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x228b9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x228b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x228ba0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x228ba0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x228ba4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x228ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x228ba8: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x228BA8u;
    {
        const bool branch_taken_0x228ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ba8) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228BB0u;
    // 0x228bb0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x228bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x228bb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x228bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228bbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228bc0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x228bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x228bc4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x228BC4u;
    {
        const bool branch_taken_0x228bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228bc4) {
            ctx->pc = 0x228D90u;
            return;
        }
    }
    ctx->pc = 0x228BCCu;
}
