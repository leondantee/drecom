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

// Function: entry_00226b58
// Address: 0x226b58 - 0x226bb0
void entry_00226b58_0x226b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226b58_0x226b58");
#endif

    ctx->pc = 0x226b58u;

    // 0x226b58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b60: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b64: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x226b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x226b68: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b70: 0x0  nop
    ctx->pc = 0x226b70u;
    // NOP
    // 0x226b74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226b78: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x226b7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b84: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b8c: 0x0  nop
    ctx->pc = 0x226b8cu;
    // NOP
    // 0x226b90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226b94: 0x0  nop
    ctx->pc = 0x226b94u;
    // NOP
    // 0x226b98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x226B98u;
    {
        const bool branch_taken_0x226b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b98) {
            ctx->pc = 0x226BB0u;
            return;
        }
    }
    ctx->pc = 0x226BA0u;
    // 0x226ba0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ba8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226bac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x226bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x226bb0u;
}
