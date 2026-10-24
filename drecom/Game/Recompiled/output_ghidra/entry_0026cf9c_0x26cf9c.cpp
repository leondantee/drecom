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

// Function: entry_0026cf9c
// Address: 0x26cf9c - 0x26d030
void entry_0026cf9c_0x26cf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026cf9c_0x26cf9c");
#endif

    ctx->pc = 0x26cf9cu;

    // 0x26cf9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x26cf9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26cfa0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26cfa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26cfa8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26CFA8u;
    {
        const bool branch_taken_0x26cfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cfa8) {
            ctx->pc = 0x26D0A0u;
            return;
        }
    }
    ctx->pc = 0x26CFB0u;
    // 0x26cfb0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cfb4: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x26cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x26cfb8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26CFB8u;
    {
        const bool branch_taken_0x26cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cfb8) {
            ctx->pc = 0x26D044u;
            return;
        }
    }
    ctx->pc = 0x26CFC0u;
    // 0x26cfc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cfc4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cfc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26cfc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cfcc: 0x0  nop
    ctx->pc = 0x26cfccu;
    // NOP
    // 0x26cfd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26cfd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cfd4: 0x0  nop
    ctx->pc = 0x26cfd4u;
    // NOP
    // 0x26cfd8: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x26CFD8u;
    {
        const bool branch_taken_0x26cfd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cfd8) {
            ctx->pc = 0x26D0A0u;
            return;
        }
    }
    ctx->pc = 0x26CFE0u;
    // 0x26cfe0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cfe4: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x26cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cfe8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26cfec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26cff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26cff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26cff4: 0x0  nop
    ctx->pc = 0x26cff4u;
    // NOP
    // 0x26cff8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26cff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cffc: 0x0  nop
    ctx->pc = 0x26cffcu;
    // NOP
    // 0x26d000: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x26D000u;
    {
        const bool branch_taken_0x26d000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d000) {
            ctx->pc = 0x26D030u;
            return;
        }
    }
    ctx->pc = 0x26D008u;
    // 0x26d008: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d00c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x26d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d010: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x26d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x26d014: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x26d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x26d018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d01c: 0x0  nop
    ctx->pc = 0x26d01cu;
    // NOP
    // 0x26d020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26d020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26d024: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x26d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x26d028: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26D028u;
    {
        const bool branch_taken_0x26d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d028) {
            ctx->pc = 0x26D0A0u;
            return;
        }
    }
    ctx->pc = 0x26D030u;
}
