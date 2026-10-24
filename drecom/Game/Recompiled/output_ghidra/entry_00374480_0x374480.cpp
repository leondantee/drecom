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

// Function: entry_00374480
// Address: 0x374480 - 0x3744f0
void entry_00374480_0x374480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374480_0x374480");
#endif

    switch (ctx->pc) {
        case 0x3744a0u: goto label_3744a0;
        case 0x3744c8u: goto label_3744c8;
        case 0x3744dcu: goto label_3744dc;
        case 0x3744ecu: goto label_3744ec;
        default: break;
    }

    ctx->pc = 0x374480u;

    // 0x374480: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x374480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x374484: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x374484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374488: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x374488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x37448c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37448Cu;
    {
        const bool branch_taken_0x37448c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37448c) {
            ctx->pc = 0x3744F0u;
            return;
        }
    }
    ctx->pc = 0x374494u;
    // 0x374494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x374494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374498: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x374498u;
    SET_GPR_U32(ctx, 31, 0x3744A0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3744A0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744A0u) { return; }
    ctx->pc = 0x3744A0u;
label_3744a0:
    // 0x3744a0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x3744a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3744a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3744a8: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x3744a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3744acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3744b0: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x3744b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3744b4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3744b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3744b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3744b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3744bc: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3744c0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3744C0u;
    SET_GPR_U32(ctx, 31, 0x3744C8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3744C8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744C8u) { return; }
    ctx->pc = 0x3744C8u;
label_3744c8:
    // 0x3744c8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3744c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3744cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3744ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3744d0: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x3744d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3744d4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x3744D4u;
    SET_GPR_U32(ctx, 31, 0x3744DCu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x3744D4u, 0x3744DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744DCu;
label_3744dc:
    // 0x3744dc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x3744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3744e0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3744e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3744e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3744E4u;
    SET_GPR_U32(ctx, 31, 0x3744ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3744ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3744ECu) { return; }
    ctx->pc = 0x3744ECu;
label_3744ec:
    // 0x3744ec: 0x0  nop
    ctx->pc = 0x3744ecu;
    // NOP
    ctx->pc = 0x3744f0u;
}
