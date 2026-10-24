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

// Function: entry_0022cf08
// Address: 0x22cf08 - 0x22cf84
void entry_0022cf08_0x22cf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cf08_0x22cf08");
#endif

    switch (ctx->pc) {
        case 0x22cf18u: goto label_22cf18;
        case 0x22cf24u: goto label_22cf24;
        default: break;
    }

    ctx->pc = 0x22cf08u;

    // 0x22cf08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22cf10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22CF10u;
    SET_GPR_U32(ctx, 31, 0x22CF18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22CF10u, 0x22CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF18u;
label_22cf18:
    // 0x22cf18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22CF1Cu;
    SET_GPR_U32(ctx, 31, 0x22CF24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22CF1Cu, 0x22CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CF24u;
label_22cf24:
    // 0x22cf24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf28: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22cf2c: 0x24503520  addiu       $s0, $v0, 0x3520
    ctx->pc = 0x22cf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
    // 0x22cf30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cf34: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x22cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x22cf38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22cf3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cf40: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x22cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cf44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x22cf44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22cf48: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22cf4c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x22cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cf50: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22cf54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22cf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf5c: 0x0  nop
    ctx->pc = 0x22cf5cu;
    // NOP
    // 0x22cf60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cf60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cf64: 0x0  nop
    ctx->pc = 0x22cf64u;
    // NOP
    // 0x22cf68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22CF68u;
    {
        const bool branch_taken_0x22cf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cf68) {
            ctx->pc = 0x22CF84u;
            return;
        }
    }
    ctx->pc = 0x22CF70u;
    // 0x22cf70: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x22cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x22cf74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22cf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cf7c: 0x0  nop
    ctx->pc = 0x22cf7cu;
    // NOP
    // 0x22cf80: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x22cf84u;
}
