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

// Function: entry_003695c4
// Address: 0x3695c4 - 0x369624
void entry_003695c4_0x3695c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003695c4_0x3695c4");
#endif

    switch (ctx->pc) {
        case 0x3695d8u: goto label_3695d8;
        default: break;
    }

    ctx->pc = 0x3695c4u;

    // 0x3695c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3695c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3695c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3695c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3695cc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3695ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3695d0: 0xc067844  jal         func_19E110
    ctx->pc = 0x3695D0u;
    SET_GPR_U32(ctx, 31, 0x3695D8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x3695D0u, 0x3695D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695D8u;
label_3695d8:
    // 0x3695d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3695d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695dc: 0x0  nop
    ctx->pc = 0x3695dcu;
    // NOP
    // 0x3695e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3695e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3695e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3695e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695e8: 0x0  nop
    ctx->pc = 0x3695e8u;
    // NOP
    // 0x3695ec: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3695ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3695f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3695f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3695f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3695f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695f8: 0x0  nop
    ctx->pc = 0x3695f8u;
    // NOP
    // 0x3695fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3695fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x369600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369608: 0x0  nop
    ctx->pc = 0x369608u;
    // NOP
    // 0x36960c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x369610: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369614: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369618: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x369618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36961c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36961Cu;
    SET_GPR_U32(ctx, 31, 0x369624u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369624u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369624u) { return; }
    ctx->pc = 0x369624u;
}
