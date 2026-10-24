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

// Function: entry_00226f94
// Address: 0x226f94 - 0x22703c
void entry_00226f94_0x226f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226f94_0x226f94");
#endif

    ctx->pc = 0x226f94u;

    // 0x226f94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226f98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226f9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226fa4: 0x0  nop
    ctx->pc = 0x226fa4u;
    // NOP
    // 0x226fa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x226fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fac: 0x0  nop
    ctx->pc = 0x226facu;
    // NOP
    // 0x226fb0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x226FB0u;
    {
        const bool branch_taken_0x226fb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fb0) {
            ctx->pc = 0x227094u;
            return;
        }
    }
    ctx->pc = 0x226FB8u;
    // 0x226fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226fbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226fc0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226fc8: 0x0  nop
    ctx->pc = 0x226fc8u;
    // NOP
    // 0x226fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226fd0: 0x0  nop
    ctx->pc = 0x226fd0u;
    // NOP
    // 0x226fd4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x226FD4u;
    {
        const bool branch_taken_0x226fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226fd4) {
            ctx->pc = 0x22703Cu;
            return;
        }
    }
    ctx->pc = 0x226FDCu;
    // 0x226fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226fe0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226fe4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226fe8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x226fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x226fec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226ff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ff4: 0x0  nop
    ctx->pc = 0x226ff4u;
    // NOP
    // 0x226ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226ffc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x227000: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227004: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227008: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22700c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22700cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227010: 0x0  nop
    ctx->pc = 0x227010u;
    // NOP
    // 0x227014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x227014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227018: 0x0  nop
    ctx->pc = 0x227018u;
    // NOP
    // 0x22701c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22701Cu;
    {
        const bool branch_taken_0x22701c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22701c) {
            ctx->pc = 0x227094u;
            return;
        }
    }
    ctx->pc = 0x227024u;
    // 0x227024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22702c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227030: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x227030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x227034: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x227034u;
    {
        const bool branch_taken_0x227034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227034) {
            ctx->pc = 0x227094u;
            return;
        }
    }
    ctx->pc = 0x22703Cu;
}
