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

// Function: entry_002456ac
// Address: 0x2456ac - 0x245754
void entry_002456ac_0x2456ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002456ac_0x2456ac");
#endif

    ctx->pc = 0x2456acu;

    // 0x2456ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2456b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2456b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2456b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2456b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456bc: 0x0  nop
    ctx->pc = 0x2456bcu;
    // NOP
    // 0x2456c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2456c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2456c4: 0x0  nop
    ctx->pc = 0x2456c4u;
    // NOP
    // 0x2456c8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2456C8u;
    {
        const bool branch_taken_0x2456c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2456c8) {
            ctx->pc = 0x2457ACu;
            return;
        }
    }
    ctx->pc = 0x2456D0u;
    // 0x2456d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456d8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2456d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2456dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2456dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2456e0: 0x0  nop
    ctx->pc = 0x2456e0u;
    // NOP
    // 0x2456e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2456e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2456e8: 0x0  nop
    ctx->pc = 0x2456e8u;
    // NOP
    // 0x2456ec: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2456ECu;
    {
        const bool branch_taken_0x2456ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2456ec) {
            ctx->pc = 0x245754u;
            return;
        }
    }
    ctx->pc = 0x2456F4u;
    // 0x2456f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2456fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2456fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245700: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245704: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24570c: 0x0  nop
    ctx->pc = 0x24570cu;
    // NOP
    // 0x245710: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245714: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24571c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245720: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245728: 0x0  nop
    ctx->pc = 0x245728u;
    // NOP
    // 0x24572c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24572cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245730: 0x0  nop
    ctx->pc = 0x245730u;
    // NOP
    // 0x245734: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245734u;
    {
        const bool branch_taken_0x245734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245734) {
            ctx->pc = 0x2457ACu;
            return;
        }
    }
    ctx->pc = 0x24573Cu;
    // 0x24573c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24573cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245744: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245748: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x24574c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24574Cu;
    {
        const bool branch_taken_0x24574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24574c) {
            ctx->pc = 0x2457ACu;
            return;
        }
    }
    ctx->pc = 0x245754u;
}
