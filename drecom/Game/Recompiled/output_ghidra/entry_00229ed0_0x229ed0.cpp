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

// Function: entry_00229ed0
// Address: 0x229ed0 - 0x229f28
void entry_00229ed0_0x229ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229ed0_0x229ed0");
#endif

    ctx->pc = 0x229ed0u;

    // 0x229ed0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ed4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ed8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229edc: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x229edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x229ee0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229ee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ee8: 0x0  nop
    ctx->pc = 0x229ee8u;
    // NOP
    // 0x229eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229ef0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229ef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ef8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229efc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f04: 0x0  nop
    ctx->pc = 0x229f04u;
    // NOP
    // 0x229f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229f0c: 0x0  nop
    ctx->pc = 0x229f0cu;
    // NOP
    // 0x229f10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x229F10u;
    {
        const bool branch_taken_0x229f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229f10) {
            ctx->pc = 0x229F28u;
            return;
        }
    }
    ctx->pc = 0x229F18u;
    // 0x229f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229f1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229f20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229f24: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x229f28u;
}
