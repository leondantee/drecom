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

// Function: entry_0023ad60
// Address: 0x23ad60 - 0x23adb8
void entry_0023ad60_0x23ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ad60_0x23ad60");
#endif

    ctx->pc = 0x23ad60u;

    // 0x23ad60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad6c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23ad70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23ad70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23ad74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ad74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad78: 0x0  nop
    ctx->pc = 0x23ad78u;
    // NOP
    // 0x23ad7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ad80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23ad84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad8c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad94: 0x0  nop
    ctx->pc = 0x23ad94u;
    // NOP
    // 0x23ad98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ad98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ad9c: 0x0  nop
    ctx->pc = 0x23ad9cu;
    // NOP
    // 0x23ada0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23ADA0u;
    {
        const bool branch_taken_0x23ada0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ada0) {
            ctx->pc = 0x23ADB8u;
            return;
        }
    }
    ctx->pc = 0x23ADA8u;
    // 0x23ada8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ada8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23adac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23adacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23adb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23adb4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23adb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23adb8u;
}
