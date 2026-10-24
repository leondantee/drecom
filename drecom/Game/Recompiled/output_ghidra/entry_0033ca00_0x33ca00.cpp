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

// Function: entry_0033ca00
// Address: 0x33ca00 - 0x33cadc
void entry_0033ca00_0x33ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ca00_0x33ca00");
#endif

    switch (ctx->pc) {
        case 0x33ca40u: goto label_33ca40;
        case 0x33ca64u: goto label_33ca64;
        default: break;
    }

    ctx->pc = 0x33ca00u;

    // 0x33ca00: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33ca00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33ca04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33ca08: 0x1222007d  beq         $s1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x33CA08u;
    {
        const bool branch_taken_0x33ca08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ca08) {
            ctx->pc = 0x33CC00u;
            return;
        }
    }
    ctx->pc = 0x33CA10u;
    // 0x33ca10: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33ca14: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33ca18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ca1c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33ca20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33ca20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ca24: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca28: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33ca2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca30: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x33ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ca34: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x33ca34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33ca38: 0xc040c80  jal         func_103200
    ctx->pc = 0x33CA38u;
    SET_GPR_U32(ctx, 31, 0x33CA40u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33CA40u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33CA40u) { return; }
    ctx->pc = 0x33CA40u;
label_33ca40:
    // 0x33ca40: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x33ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x33ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ca48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33ca48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ca4c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x33ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca50: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x33ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ca54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33ca54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33ca58: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33ca58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33ca5c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x33CA5Cu;
    SET_GPR_U32(ctx, 31, 0x33CA64u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33CA5Cu, 0x33CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CA64u;
label_33ca64:
    // 0x33ca64: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x33ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x33ca68: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x33ca68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ca6c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33ca70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33ca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33ca74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ca78: 0x0  nop
    ctx->pc = 0x33ca78u;
    // NOP
    // 0x33ca7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33ca7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ca80: 0x0  nop
    ctx->pc = 0x33ca80u;
    // NOP
    // 0x33ca84: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x33CA84u;
    {
        const bool branch_taken_0x33ca84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ca84) {
            ctx->pc = 0x33CC00u;
            return;
        }
    }
    ctx->pc = 0x33CA8Cu;
    // 0x33ca8c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x33ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33ca90: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33ca94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ca98: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33ca9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33ca9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33caa0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33caa4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33caa4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33caa8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33caac: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cab4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33cab8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33cabc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cac0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x33CAC0u;
    {
        const bool branch_taken_0x33cac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cac0) {
            ctx->pc = 0x33CB58u;
            return;
        }
    }
    ctx->pc = 0x33CAC8u;
    // 0x33cac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cacc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33CACCu;
    {
        const bool branch_taken_0x33cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33cacc) {
            ctx->pc = 0x33CADCu;
            return;
        }
    }
    ctx->pc = 0x33CAD4u;
    // 0x33cad4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x33CAD4u;
    {
        const bool branch_taken_0x33cad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cad4) {
            ctx->pc = 0x33CBD0u;
            return;
        }
    }
    ctx->pc = 0x33CADCu;
}
