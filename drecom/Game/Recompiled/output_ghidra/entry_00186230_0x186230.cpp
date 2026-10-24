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

// Function: entry_00186230
// Address: 0x186230 - 0x186320
void entry_00186230_0x186230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186230_0x186230");
#endif

    switch (ctx->pc) {
        case 0x186244u: goto label_186244;
        case 0x186254u: goto label_186254;
        case 0x18626cu: goto label_18626c;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ecu: goto label_1862ec;
        case 0x186300u: goto label_186300;
        default: break;
    }

    ctx->pc = 0x186230u;

    // 0x186230: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186234: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x186238: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x186238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18623c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x18623Cu;
    SET_GPR_U32(ctx, 31, 0x186244u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x18623Cu, 0x186244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186244u;
label_186244:
    // 0x186244: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186248: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18624c: 0xc040c24  jal         func_103090
    ctx->pc = 0x18624Cu;
    SET_GPR_U32(ctx, 31, 0x186254u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x186254u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186254u) { return; }
    ctx->pc = 0x186254u;
label_186254:
    // 0x186254: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x186258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18625c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186260: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186264: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x186264u;
    SET_GPR_U32(ctx, 31, 0x18626Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x18626Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18626Cu) { return; }
    ctx->pc = 0x18626Cu;
label_18626c:
    // 0x18626c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x18626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186270: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x186270u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x186274: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x186274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x186278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18627c: 0x0  nop
    ctx->pc = 0x18627cu;
    // NOP
    // 0x186280: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x186280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186284: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x186284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186288: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x186288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18628c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186294: 0x0  nop
    ctx->pc = 0x186294u;
    // NOP
    // 0x186298: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x186298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x18629c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1862a4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1862a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1862a8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1862A8u;
    SET_GPR_U32(ctx, 31, 0x1862B0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1862A8u, 0x1862B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862B0u;
label_1862b0:
    // 0x1862b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1862b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862b4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1862b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1862b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862bc: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1862bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1862c0: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x1862C0u;
    SET_GPR_U32(ctx, 31, 0x1862C8u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1862C0u, 0x1862C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862C8u;
label_1862c8:
    // 0x1862c8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1862c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1862cc: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1862CCu;
    {
        const bool branch_taken_0x1862cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862cc) {
            ctx->pc = 0x186320u;
            return;
        }
    }
    ctx->pc = 0x1862D4u;
    // 0x1862d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1862d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1862d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1862dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1862dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1862e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1862e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1862e4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1862E4u;
    SET_GPR_U32(ctx, 31, 0x1862ECu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1862ECu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1862ECu) { return; }
    ctx->pc = 0x1862ECu;
label_1862ec:
    // 0x1862ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1862ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1862f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1862f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1862f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1862f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1862F8u;
    SET_GPR_U32(ctx, 31, 0x186300u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1862F8u, 0x186300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186300u;
label_186300:
    // 0x186300: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x186300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x186304: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x186304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x186308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18630c: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x18630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x186310: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x186314: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x186314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186318: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x186318u;
    SET_GPR_U32(ctx, 31, 0x186320u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x186320u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186320u) { return; }
    ctx->pc = 0x186320u;
}
