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

// Function: entry_0021f828
// Address: 0x21f828 - 0x21f894
void entry_0021f828_0x21f828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f828_0x21f828");
#endif

    switch (ctx->pc) {
        case 0x21f840u: goto label_21f840;
        case 0x21f868u: goto label_21f868;
        default: break;
    }

    ctx->pc = 0x21f828u;

    // 0x21f828: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f82c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f830: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x21f830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f834: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21f834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f838: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x21F838u;
    SET_GPR_U32(ctx, 31, 0x21F840u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x21F838u, 0x21F840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F840u;
label_21f840:
    // 0x21f840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f848: 0x0  nop
    ctx->pc = 0x21f848u;
    // NOP
    // 0x21f84c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f850: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f858: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x21f858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f85c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x21f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f860: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F860u;
    SET_GPR_U32(ctx, 31, 0x21F868u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F868u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F868u) { return; }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f870: 0x0  nop
    ctx->pc = 0x21f870u;
    // NOP
    // 0x21f874: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x21f874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x21f878: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f87c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f880: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x21f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21f884: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x21f884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21f888: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21f88c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F88Cu;
    SET_GPR_U32(ctx, 31, 0x21F894u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F894u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F894u) { return; }
    ctx->pc = 0x21F894u;
}
