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

// Function: entry_00245b48
// Address: 0x245b48 - 0x245ba0
void entry_00245b48_0x245b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245b48_0x245b48");
#endif

    ctx->pc = 0x245b48u;

    // 0x245b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b4c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b50: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b54: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245b58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b60: 0x0  nop
    ctx->pc = 0x245b60u;
    // NOP
    // 0x245b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245b68: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245b6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b74: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b7c: 0x0  nop
    ctx->pc = 0x245b7cu;
    // NOP
    // 0x245b80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245b80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b84: 0x0  nop
    ctx->pc = 0x245b84u;
    // NOP
    // 0x245b88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x245B88u;
    {
        const bool branch_taken_0x245b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245b88) {
            ctx->pc = 0x245BA0u;
            return;
        }
    }
    ctx->pc = 0x245B90u;
    // 0x245b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b9c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x245ba0u;
}
