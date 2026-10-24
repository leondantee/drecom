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

// Function: entry_0023912c
// Address: 0x23912c - 0x2391d4
void entry_0023912c_0x23912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023912c_0x23912c");
#endif

    ctx->pc = 0x23912cu;

    // 0x23912c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239130: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239134: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23913c: 0x0  nop
    ctx->pc = 0x23913cu;
    // NOP
    // 0x239140: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x239140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239144: 0x0  nop
    ctx->pc = 0x239144u;
    // NOP
    // 0x239148: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x239148u;
    {
        const bool branch_taken_0x239148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239148) {
            ctx->pc = 0x23922Cu;
            return;
        }
    }
    ctx->pc = 0x239150u;
    // 0x239150: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239154: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239158: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23915c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23915cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239160: 0x0  nop
    ctx->pc = 0x239160u;
    // NOP
    // 0x239164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x239164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239168: 0x0  nop
    ctx->pc = 0x239168u;
    // NOP
    // 0x23916c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23916Cu;
    {
        const bool branch_taken_0x23916c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23916c) {
            ctx->pc = 0x2391D4u;
            return;
        }
    }
    ctx->pc = 0x239174u;
    // 0x239174: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239178: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23917c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239180: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x239180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x239184: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23918c: 0x0  nop
    ctx->pc = 0x23918cu;
    // NOP
    // 0x239190: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x239190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x239194: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x239194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x239198: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23919c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2391a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2391a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2391a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391a8: 0x0  nop
    ctx->pc = 0x2391a8u;
    // NOP
    // 0x2391ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2391acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2391b0: 0x0  nop
    ctx->pc = 0x2391b0u;
    // NOP
    // 0x2391b4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x23922Cu;
            return;
        }
    }
    ctx->pc = 0x2391BCu;
    // 0x2391bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2391bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2391c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2391c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2391c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2391c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2391c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2391cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2391CCu;
    {
        const bool branch_taken_0x2391cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2391cc) {
            ctx->pc = 0x23922Cu;
            return;
        }
    }
    ctx->pc = 0x2391D4u;
}
