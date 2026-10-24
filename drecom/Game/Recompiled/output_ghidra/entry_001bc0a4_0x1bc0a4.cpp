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

// Function: entry_001bc0a4
// Address: 0x1bc0a4 - 0x1bc11c
void entry_001bc0a4_0x1bc0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc0a4_0x1bc0a4");
#endif

    switch (ctx->pc) {
        case 0x1bc0c8u: goto label_1bc0c8;
        case 0x1bc0e8u: goto label_1bc0e8;
        default: break;
    }

    ctx->pc = 0x1bc0a4u;

    // 0x1bc0a4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0ac: 0x3c053e49  lui         $a1, 0x3E49
    ctx->pc = 0x1bc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15945 << 16));
    // 0x1bc0b0: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1bc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1bc0b4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1bc0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bc0b8: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1bc0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc0bc: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1bc0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bc0c0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BC0C0u;
    SET_GPR_U32(ctx, 31, 0x1BC0C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BC0C0u, 0x1BC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0C8u;
label_1bc0c8:
    // 0x1bc0c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0cc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bc0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1bc0d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc0d8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1bc0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bc0dc: 0xc46d1380  lwc1        $f13, 0x1380($v1)
    ctx->pc = 0x1bc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bc0e0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BC0E0u;
    SET_GPR_U32(ctx, 31, 0x1BC0E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BC0E0u, 0x1BC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0E8u;
label_1bc0e8:
    // 0x1bc0e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bc0ec: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc0f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc0f4: 0x0  nop
    ctx->pc = 0x1bc0f4u;
    // NOP
    // 0x1bc0f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc0fc: 0x0  nop
    ctx->pc = 0x1bc0fcu;
    // NOP
    // 0x1bc100: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC100u;
    {
        const bool branch_taken_0x1bc100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc100) {
            ctx->pc = 0x1BC11Cu;
            return;
        }
    }
    ctx->pc = 0x1BC108u;
    // 0x1bc108: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1bc10c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bc10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc110: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc114: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc118: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bc118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1bc11cu;
}
