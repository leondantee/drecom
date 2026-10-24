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

// Function: entry_002452d0
// Address: 0x2452d0 - 0x245378
void entry_002452d0_0x2452d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002452d0_0x2452d0");
#endif

    ctx->pc = 0x2452d0u;

    // 0x2452d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2452d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2452dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452e0: 0x0  nop
    ctx->pc = 0x2452e0u;
    // NOP
    // 0x2452e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2452e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452e8: 0x0  nop
    ctx->pc = 0x2452e8u;
    // NOP
    // 0x2452ec: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2452ECu;
    {
        const bool branch_taken_0x2452ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452ec) {
            ctx->pc = 0x2453D0u;
            return;
        }
    }
    ctx->pc = 0x2452F4u;
    // 0x2452f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2452f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2452f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2452f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2452fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2452fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245304: 0x0  nop
    ctx->pc = 0x245304u;
    // NOP
    // 0x245308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24530c: 0x0  nop
    ctx->pc = 0x24530cu;
    // NOP
    // 0x245310: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x245310u;
    {
        const bool branch_taken_0x245310 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245310) {
            ctx->pc = 0x245378u;
            return;
        }
    }
    ctx->pc = 0x245318u;
    // 0x245318: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24531c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24531cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245320: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245324: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x245328: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24532c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24532cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245330: 0x0  nop
    ctx->pc = 0x245330u;
    // NOP
    // 0x245334: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245334u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245338: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24533c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245340: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245344: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24534c: 0x0  nop
    ctx->pc = 0x24534cu;
    // NOP
    // 0x245350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245354: 0x0  nop
    ctx->pc = 0x245354u;
    // NOP
    // 0x245358: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245358u;
    {
        const bool branch_taken_0x245358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245358) {
            ctx->pc = 0x2453D0u;
            return;
        }
    }
    ctx->pc = 0x245360u;
    // 0x245360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245364: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245368: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24536c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x24536cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x245370: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x245370u;
    {
        const bool branch_taken_0x245370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245370) {
            ctx->pc = 0x2453D0u;
            return;
        }
    }
    ctx->pc = 0x245378u;
}
