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

// Function: entry_001ef538
// Address: 0x1ef538 - 0x1ef5e0
void entry_001ef538_0x1ef538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef538_0x1ef538");
#endif

    ctx->pc = 0x1ef538u;

    // 0x1ef538: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef53c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef540: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef548: 0x0  nop
    ctx->pc = 0x1ef548u;
    // NOP
    // 0x1ef54c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef54cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef550: 0x0  nop
    ctx->pc = 0x1ef550u;
    // NOP
    // 0x1ef554: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1EF554u;
    {
        const bool branch_taken_0x1ef554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef554) {
            ctx->pc = 0x1EF638u;
            return;
        }
    }
    ctx->pc = 0x1EF55Cu;
    // 0x1ef55c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef560: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef564: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef56c: 0x0  nop
    ctx->pc = 0x1ef56cu;
    // NOP
    // 0x1ef570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef574: 0x0  nop
    ctx->pc = 0x1ef574u;
    // NOP
    // 0x1ef578: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF578u;
    {
        const bool branch_taken_0x1ef578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef578) {
            ctx->pc = 0x1EF5E0u;
            return;
        }
    }
    ctx->pc = 0x1EF580u;
    // 0x1ef580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef584: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ef584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef588: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ef588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef58c: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef590: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ef590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ef594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ef594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef598: 0x0  nop
    ctx->pc = 0x1ef598u;
    // NOP
    // 0x1ef59c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ef59cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ef5a0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ef5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ef5a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1ef5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef5b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef5b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5b4: 0x0  nop
    ctx->pc = 0x1ef5b4u;
    // NOP
    // 0x1ef5b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef5bc: 0x0  nop
    ctx->pc = 0x1ef5bcu;
    // NOP
    // 0x1ef5c0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1EF5C0u;
    {
        const bool branch_taken_0x1ef5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef5c0) {
            ctx->pc = 0x1EF638u;
            return;
        }
    }
    ctx->pc = 0x1EF5C8u;
    // 0x1ef5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef5cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef5d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef5d4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1ef5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ef5d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF5D8u;
    {
        const bool branch_taken_0x1ef5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef5d8) {
            ctx->pc = 0x1EF638u;
            return;
        }
    }
    ctx->pc = 0x1EF5E0u;
}
