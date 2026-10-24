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

// Function: entry_0023a028
// Address: 0x23a028 - 0x23a0d0
void entry_0023a028_0x23a028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a028_0x23a028");
#endif

    ctx->pc = 0x23a028u;

    // 0x23a028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a02c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a030: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a038: 0x0  nop
    ctx->pc = 0x23a038u;
    // NOP
    // 0x23a03c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23a03cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a040: 0x0  nop
    ctx->pc = 0x23a040u;
    // NOP
    // 0x23a044: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23A044u;
    {
        const bool branch_taken_0x23a044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a044) {
            ctx->pc = 0x23A128u;
            return;
        }
    }
    ctx->pc = 0x23A04Cu;
    // 0x23a04c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a050: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a054: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a05c: 0x0  nop
    ctx->pc = 0x23a05cu;
    // NOP
    // 0x23a060: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a064: 0x0  nop
    ctx->pc = 0x23a064u;
    // NOP
    // 0x23a068: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23A068u;
    {
        const bool branch_taken_0x23a068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a068) {
            ctx->pc = 0x23A0D0u;
            return;
        }
    }
    ctx->pc = 0x23A070u;
    // 0x23a070: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a074: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a078: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a07c: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x23a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x23a080: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a088: 0x0  nop
    ctx->pc = 0x23a088u;
    // NOP
    // 0x23a08c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23a08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a090: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a098: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a09c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0a4: 0x0  nop
    ctx->pc = 0x23a0a4u;
    // NOP
    // 0x23a0a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a0ac: 0x0  nop
    ctx->pc = 0x23a0acu;
    // NOP
    // 0x23a0b0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23A0B0u;
    {
        const bool branch_taken_0x23a0b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a0b0) {
            ctx->pc = 0x23A128u;
            return;
        }
    }
    ctx->pc = 0x23A0B8u;
    // 0x23a0b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a0bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a0c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a0c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23a0c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23A0C8u;
    {
        const bool branch_taken_0x23a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c8) {
            ctx->pc = 0x23A128u;
            return;
        }
    }
    ctx->pc = 0x23A0D0u;
}
