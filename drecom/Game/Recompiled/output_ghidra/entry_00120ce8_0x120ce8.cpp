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

// Function: entry_00120ce8
// Address: 0x120ce8 - 0x120d60
void entry_00120ce8_0x120ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120ce8_0x120ce8");
#endif

    switch (ctx->pc) {
        case 0x120d2cu: goto label_120d2c;
        default: break;
    }

    ctx->pc = 0x120ce8u;

    // 0x120ce8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x120ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x120cec: 0x34830040  ori         $v1, $a0, 0x40
    ctx->pc = 0x120cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x120cf0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x120cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x120cf4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120cf8: 0x908311ee  lbu         $v1, 0x11EE($a0)
    ctx->pc = 0x120cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4590)));
    // 0x120cfc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x120cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x120d00: 0x30b30030  andi        $s3, $a1, 0x30
    ctx->pc = 0x120d00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x120d04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d08: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x120d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x120d0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d10: 0x8c911210  lw          $s1, 0x1210($a0)
    ctx->pc = 0x120d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4624)));
    // 0x120d14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x120d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120d1c: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x120d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x120d20: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x120d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x120d24: 0xc058f20  jal         func_163C80
    ctx->pc = 0x120D24u;
    SET_GPR_U32(ctx, 31, 0x120D2Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x120D24u, 0x120D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D2Cu;
label_120d2c:
    // 0x120d2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x120d30: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x120d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x120d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x120d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120d38: 0x0  nop
    ctx->pc = 0x120d38u;
    // NOP
    // 0x120d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x120d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x120d40: 0x0  nop
    ctx->pc = 0x120d40u;
    // NOP
    // 0x120d44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x120D44u;
    {
        const bool branch_taken_0x120d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x120d44) {
            ctx->pc = 0x120D60u;
            return;
        }
    }
    ctx->pc = 0x120D4Cu;
    // 0x120d4c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x120d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x120d50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x120d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120d54: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x120d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x120d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x120d5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x120d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x120d60u;
}
