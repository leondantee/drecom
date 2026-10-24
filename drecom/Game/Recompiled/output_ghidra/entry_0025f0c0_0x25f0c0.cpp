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

// Function: entry_0025f0c0
// Address: 0x25f0c0 - 0x25f130
void entry_0025f0c0_0x25f0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f0c0_0x25f0c0");
#endif

    switch (ctx->pc) {
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f108u: goto label_25f108;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f12cu: goto label_25f12c;
        default: break;
    }

    ctx->pc = 0x25f0c0u;

    // 0x25f0c0: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f0c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f0c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f0c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f0cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F0CCu;
    {
        const bool branch_taken_0x25f0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f0cc) {
            ctx->pc = 0x25F130u;
            return;
        }
    }
    ctx->pc = 0x25F0D4u;
    // 0x25f0d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f0d8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F0D8u;
    SET_GPR_U32(ctx, 31, 0x25F0E0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F0E0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F0E0u) { return; }
    ctx->pc = 0x25F0E0u;
label_25f0e0:
    // 0x25f0e0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f0e8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f0f0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f0f4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f0f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f0fc: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25f0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f100: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F100u;
    SET_GPR_U32(ctx, 31, 0x25F108u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F108u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F108u) { return; }
    ctx->pc = 0x25F108u;
label_25f108:
    // 0x25f108: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f10c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f110: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25f110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f114: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F114u;
    SET_GPR_U32(ctx, 31, 0x25F11Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F114u, 0x25F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F11Cu;
label_25f11c:
    // 0x25f11c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f120: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25f120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f124: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F124u;
    SET_GPR_U32(ctx, 31, 0x25F12Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F12Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F12Cu) { return; }
    ctx->pc = 0x25F12Cu;
label_25f12c:
    // 0x25f12c: 0x0  nop
    ctx->pc = 0x25f12cu;
    // NOP
    ctx->pc = 0x25f130u;
}
