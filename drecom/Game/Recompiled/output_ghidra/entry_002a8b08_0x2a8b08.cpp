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

// Function: entry_002a8b08
// Address: 0x2a8b08 - 0x2a8bb8
void entry_002a8b08_0x2a8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8b08_0x2a8b08");
#endif

    ctx->pc = 0x2a8b08u;

    // 0x2a8b08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8b0c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8b10: 0x247112c0  addiu       $s1, $v1, 0x12C0
    ctx->pc = 0x2a8b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2a8b14: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b18: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2a8b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x2a8b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b20: 0x0  nop
    ctx->pc = 0x2a8b20u;
    // NOP
    // 0x2a8b24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a8b24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8b28: 0x0  nop
    ctx->pc = 0x2a8b28u;
    // NOP
    // 0x2a8b2c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2A8B2Cu;
    {
        const bool branch_taken_0x2a8b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8b2c) {
            ctx->pc = 0x2A8BB8u;
            return;
        }
    }
    ctx->pc = 0x2A8B34u;
    // 0x2a8b34: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b38: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b3c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b44: 0x0  nop
    ctx->pc = 0x2a8b44u;
    // NOP
    // 0x2a8b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b4c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8b50: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x2a8b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b54: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b60: 0x0  nop
    ctx->pc = 0x2a8b60u;
    // NOP
    // 0x2a8b64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b68: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a8b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8b70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8b74: 0x24711450  addiu       $s1, $v1, 0x1450
    ctx->pc = 0x2a8b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5200));
    // 0x2a8b78: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2a8b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b7c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b80: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8b88: 0x0  nop
    ctx->pc = 0x2a8b88u;
    // NOP
    // 0x2a8b8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8b90: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2a8b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2a8b94: 0xc6210130  lwc1        $f1, 0x130($s1)
    ctx->pc = 0x2a8b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8b98: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2a8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2a8b9c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a8b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a8ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a8ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8ba4: 0x0  nop
    ctx->pc = 0x2a8ba4u;
    // NOP
    // 0x2a8ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a8ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8bac: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x2a8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x2a8bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A8BB0u;
    {
        const bool branch_taken_0x2a8bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8bb0) {
            ctx->pc = 0x2A8BC8u;
            return;
        }
    }
    ctx->pc = 0x2A8BB8u;
}
