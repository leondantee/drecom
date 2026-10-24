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

// Function: entry_002255a4
// Address: 0x2255a4 - 0x22564c
void entry_002255a4_0x2255a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002255a4_0x2255a4");
#endif

    ctx->pc = 0x2255a4u;

    // 0x2255a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2255a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2255acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2255b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2255b4: 0x0  nop
    ctx->pc = 0x2255b4u;
    // NOP
    // 0x2255b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2255b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255bc: 0x0  nop
    ctx->pc = 0x2255bcu;
    // NOP
    // 0x2255c0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2255C0u;
    {
        const bool branch_taken_0x2255c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2255c0) {
            ctx->pc = 0x2256A4u;
            return;
        }
    }
    ctx->pc = 0x2255C8u;
    // 0x2255c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2255ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2255d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2255d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2255d8: 0x0  nop
    ctx->pc = 0x2255d8u;
    // NOP
    // 0x2255dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2255dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255e0: 0x0  nop
    ctx->pc = 0x2255e0u;
    // NOP
    // 0x2255e4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2255E4u;
    {
        const bool branch_taken_0x2255e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2255e4) {
            ctx->pc = 0x22564Cu;
            return;
        }
    }
    ctx->pc = 0x2255ECu;
    // 0x2255ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2255ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2255f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2255f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2255f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2255f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2255f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2255fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2255fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225604: 0x0  nop
    ctx->pc = 0x225604u;
    // NOP
    // 0x225608: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x225608u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22560c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22560cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x225610: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225614: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225618: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x225618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22561c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22561cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225620: 0x0  nop
    ctx->pc = 0x225620u;
    // NOP
    // 0x225624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225628: 0x0  nop
    ctx->pc = 0x225628u;
    // NOP
    // 0x22562c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22562Cu;
    {
        const bool branch_taken_0x22562c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22562c) {
            ctx->pc = 0x2256A4u;
            return;
        }
    }
    ctx->pc = 0x225634u;
    // 0x225634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225638: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22563c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225640: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x225640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x225644: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x225644u;
    {
        const bool branch_taken_0x225644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225644) {
            ctx->pc = 0x2256A4u;
            return;
        }
    }
    ctx->pc = 0x22564Cu;
}
