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

// Function: entry_0022564c
// Address: 0x22564c - 0x2256a4
void entry_0022564c_0x22564c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022564c_0x22564c");
#endif

    ctx->pc = 0x22564cu;

    // 0x22564c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225650: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x225650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225654: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x225654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225658: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x225658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22565c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22565cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x225660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225664: 0x0  nop
    ctx->pc = 0x225664u;
    // NOP
    // 0x225668: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x225668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22566c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22566cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x225670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225674: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225678: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x225678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22567c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22567cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225680: 0x0  nop
    ctx->pc = 0x225680u;
    // NOP
    // 0x225684: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225688: 0x0  nop
    ctx->pc = 0x225688u;
    // NOP
    // 0x22568c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22568Cu;
    {
        const bool branch_taken_0x22568c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22568c) {
            ctx->pc = 0x2256A4u;
            return;
        }
    }
    ctx->pc = 0x225694u;
    // 0x225694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225698: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22569c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22569cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2256a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2256a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x2256a4u;
}
