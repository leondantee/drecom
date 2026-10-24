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

// Function: entry_0026ce98
// Address: 0x26ce98 - 0x26cf2c
void entry_0026ce98_0x26ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ce98_0x26ce98");
#endif

    ctx->pc = 0x26ce98u;

    // 0x26ce98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26ce98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ce9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26ce9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26cea0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26cea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x26cea4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26CEA4u;
    {
        const bool branch_taken_0x26cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cea4) {
            ctx->pc = 0x26CF9Cu;
            return;
        }
    }
    ctx->pc = 0x26CEACu;
    // 0x26ceac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26ceb0: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26ceb4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26CEB4u;
    {
        const bool branch_taken_0x26ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ceb4) {
            ctx->pc = 0x26CF40u;
            return;
        }
    }
    ctx->pc = 0x26CEBCu;
    // 0x26cebc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cec0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cec8: 0x0  nop
    ctx->pc = 0x26cec8u;
    // NOP
    // 0x26cecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ceccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ced0: 0x0  nop
    ctx->pc = 0x26ced0u;
    // NOP
    // 0x26ced4: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x26CED4u;
    {
        const bool branch_taken_0x26ced4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ced4) {
            ctx->pc = 0x26CF9Cu;
            return;
        }
    }
    ctx->pc = 0x26CEDCu;
    // 0x26cedc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cee0: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cee4: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x26cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
    // 0x26cee8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cef0: 0x0  nop
    ctx->pc = 0x26cef0u;
    // NOP
    // 0x26cef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cef8: 0x0  nop
    ctx->pc = 0x26cef8u;
    // NOP
    // 0x26cefc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x26CEFCu;
    {
        const bool branch_taken_0x26cefc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cefc) {
            ctx->pc = 0x26CF2Cu;
            return;
        }
    }
    ctx->pc = 0x26CF04u;
    // 0x26cf04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cf08: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf0c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26cf10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26cf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cf18: 0x0  nop
    ctx->pc = 0x26cf18u;
    // NOP
    // 0x26cf1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cf20: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26cf24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26CF24u;
    {
        const bool branch_taken_0x26cf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cf24) {
            ctx->pc = 0x26CF9Cu;
            return;
        }
    }
    ctx->pc = 0x26CF2Cu;
}
