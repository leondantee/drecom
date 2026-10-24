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

// Function: entry_0032bd28
// Address: 0x32bd28 - 0x32bdb8
void entry_0032bd28_0x32bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bd28_0x32bd28");
#endif

    switch (ctx->pc) {
        case 0x32bd48u: goto label_32bd48;
        case 0x32bd6cu: goto label_32bd6c;
        case 0x32bd90u: goto label_32bd90;
        case 0x32bdb4u: goto label_32bdb4;
        default: break;
    }

    ctx->pc = 0x32bd28u;

    // 0x32bd28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x32bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32bd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd30: 0x0  nop
    ctx->pc = 0x32bd30u;
    // NOP
    // 0x32bd34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd38: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd3c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd40: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD40u;
    SET_GPR_U32(ctx, 31, 0x32BD48u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD40u, 0x32BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD48u;
label_32bd48:
    // 0x32bd48: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32bd4c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x32bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32bd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32bd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd54: 0x0  nop
    ctx->pc = 0x32bd54u;
    // NOP
    // 0x32bd58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd5c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd60: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd64: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD64u;
    SET_GPR_U32(ctx, 31, 0x32BD6Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD64u, 0x32BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD6Cu;
label_32bd6c:
    // 0x32bd6c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32bd70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x32bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32bd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd78: 0x0  nop
    ctx->pc = 0x32bd78u;
    // NOP
    // 0x32bd7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bd7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bd80: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd84: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bd84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bd88: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BD88u;
    SET_GPR_U32(ctx, 31, 0x32BD90u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BD88u, 0x32BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD90u;
label_32bd90:
    // 0x32bd90: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32bd94: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x32bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32bd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd9c: 0x0  nop
    ctx->pc = 0x32bd9cu;
    // NOP
    // 0x32bda0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32bda0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bda4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bda8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32bda8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bdac: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32BDACu;
    SET_GPR_U32(ctx, 31, 0x32BDB4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32BDACu, 0x32BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDB4u;
label_32bdb4:
    // 0x32bdb4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x32bdb8u;
}
