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

// Function: entry_0031cb2c
// Address: 0x31cb2c - 0x31cbb4
void entry_0031cb2c_0x31cb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cb2c_0x31cb2c");
#endif

    ctx->pc = 0x31cb2cu;

    // 0x31cb2c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb30: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31cb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cb34: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31cb38: 0x3444126f  ori         $a0, $v0, 0x126F
    ctx->pc = 0x31cb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31cb3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31cb3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cb40: 0x0  nop
    ctx->pc = 0x31cb40u;
    // NOP
    // 0x31cb44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31cb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31cb48: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
    // 0x31cb4c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb50: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
    // 0x31cb54: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x31cb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31cb58: 0xac6712b8  sw          $a3, 0x12B8($v1)
    ctx->pc = 0x31cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 7));
    // 0x31cb5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb60: 0xc48112e0  lwc1        $f1, 0x12E0($a0)
    ctx->pc = 0x31cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cb64: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31cb68: 0x3446999a  ori         $a2, $v0, 0x999A
    ctx->pc = 0x31cb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31cb6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31cb6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cb70: 0x0  nop
    ctx->pc = 0x31cb70u;
    // NOP
    // 0x31cb74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31cb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cb78: 0x0  nop
    ctx->pc = 0x31cb78u;
    // NOP
    // 0x31cb7c: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x31CB7Cu;
    {
        const bool branch_taken_0x31cb7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cb7c) {
            ctx->pc = 0x31CC58u;
            return;
        }
    }
    ctx->pc = 0x31CB84u;
    // 0x31cb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cb88: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb8c: 0xac6212b4  sw          $v0, 0x12B4($v1)
    ctx->pc = 0x31cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4788), GPR_U32(ctx, 2));
    // 0x31cb90: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb94: 0xac4012b8  sw          $zero, 0x12B8($v0)
    ctx->pc = 0x31cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 0));
    // 0x31cb98: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x31cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x31cb9c: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x31cb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x31cba0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31cba0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cba4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cba8: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31cba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
    // 0x31cbac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31CBACu;
    {
        const bool branch_taken_0x31cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cbac) {
            ctx->pc = 0x31CC58u;
            return;
        }
    }
    ctx->pc = 0x31CBB4u;
}
