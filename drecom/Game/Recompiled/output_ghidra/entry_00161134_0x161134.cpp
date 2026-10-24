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

// Function: entry_00161134
// Address: 0x161134 - 0x161198
void entry_00161134_0x161134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161134_0x161134");
#endif

    switch (ctx->pc) {
        case 0x161184u: goto label_161184;
        default: break;
    }

    ctx->pc = 0x161134u;

    // 0x161134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161138: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16113c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161140: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161144: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161148: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16114c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161150: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161154: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x161158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16115c: 0x0  nop
    ctx->pc = 0x16115cu;
    // NOP
    // 0x161160: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161164: 0x0  nop
    ctx->pc = 0x161164u;
    // NOP
    // 0x161168: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x161168u;
    {
        const bool branch_taken_0x161168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161168) {
            ctx->pc = 0x161198u;
            return;
        }
    }
    ctx->pc = 0x161170u;
    // 0x161170: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x161170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161174: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x161174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x161178: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x161178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16117c: 0xc058978  jal         func_1625E0
    ctx->pc = 0x16117Cu;
    SET_GPR_U32(ctx, 31, 0x161184u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x16117Cu, 0x161184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161184u;
label_161184:
    // 0x161184: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x161184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161188: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16118c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x16118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x161190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161190u;
    {
        const bool branch_taken_0x161190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161190) {
            ctx->pc = 0x1611A4u;
            return;
        }
    }
    ctx->pc = 0x161198u;
}
