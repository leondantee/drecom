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

// Function: entry_0023a560
// Address: 0x23a560 - 0x23a608
void entry_0023a560_0x23a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a560_0x23a560");
#endif

    ctx->pc = 0x23a560u;

    // 0x23a560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a564: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a568: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a56c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a56cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a570: 0x0  nop
    ctx->pc = 0x23a570u;
    // NOP
    // 0x23a574: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23a574u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a578: 0x0  nop
    ctx->pc = 0x23a578u;
    // NOP
    // 0x23a57c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23A57Cu;
    {
        const bool branch_taken_0x23a57c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a57c) {
            ctx->pc = 0x23A660u;
            return;
        }
    }
    ctx->pc = 0x23A584u;
    // 0x23a584: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a588: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a58c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a594: 0x0  nop
    ctx->pc = 0x23a594u;
    // NOP
    // 0x23a598: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a59c: 0x0  nop
    ctx->pc = 0x23a59cu;
    // NOP
    // 0x23a5a0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23A5A0u;
    {
        const bool branch_taken_0x23a5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a5a0) {
            ctx->pc = 0x23A608u;
            return;
        }
    }
    ctx->pc = 0x23A5A8u;
    // 0x23a5a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5ac: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5b0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a5b4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23a5b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a5bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a5bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5c0: 0x0  nop
    ctx->pc = 0x23a5c0u;
    // NOP
    // 0x23a5c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23a5c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a5c8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a5cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5d4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a5d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5dc: 0x0  nop
    ctx->pc = 0x23a5dcu;
    // NOP
    // 0x23a5e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a5e4: 0x0  nop
    ctx->pc = 0x23a5e4u;
    // NOP
    // 0x23a5e8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23A5E8u;
    {
        const bool branch_taken_0x23a5e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a5e8) {
            ctx->pc = 0x23A660u;
            return;
        }
    }
    ctx->pc = 0x23A5F0u;
    // 0x23a5f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a5f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a5f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a5fc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23a600: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A600u;
    {
        const bool branch_taken_0x23a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a600) {
            ctx->pc = 0x23A660u;
            return;
        }
    }
    ctx->pc = 0x23A608u;
}
