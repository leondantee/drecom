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

// Function: entry_0025f610
// Address: 0x25f610 - 0x25f680
void entry_0025f610_0x25f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f610_0x25f610");
#endif

    switch (ctx->pc) {
        case 0x25f630u: goto label_25f630;
        case 0x25f658u: goto label_25f658;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f67cu: goto label_25f67c;
        default: break;
    }

    ctx->pc = 0x25f610u;

    // 0x25f610: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f614: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f618: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f61c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F61Cu;
    {
        const bool branch_taken_0x25f61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f61c) {
            ctx->pc = 0x25F680u;
            return;
        }
    }
    ctx->pc = 0x25F624u;
    // 0x25f624: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f628: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F628u;
    SET_GPR_U32(ctx, 31, 0x25F630u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F630u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F630u) { return; }
    ctx->pc = 0x25F630u;
label_25f630:
    // 0x25f630: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f634: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25f638: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f63c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25f63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25f640: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f644: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25f648: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f64c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x25f650: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F650u;
    SET_GPR_U32(ctx, 31, 0x25F658u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F658u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F658u) { return; }
    ctx->pc = 0x25F658u;
label_25f658:
    // 0x25f658: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x25f658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f65c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25f660: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x25f660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25f664: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F664u;
    SET_GPR_U32(ctx, 31, 0x25F66Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F664u, 0x25F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x25f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x25f670: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25f674: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F674u;
    SET_GPR_U32(ctx, 31, 0x25F67Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F67Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F67Cu) { return; }
    ctx->pc = 0x25F67Cu;
label_25f67c:
    // 0x25f67c: 0x0  nop
    ctx->pc = 0x25f67cu;
    // NOP
    ctx->pc = 0x25f680u;
}
