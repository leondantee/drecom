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

// Function: BTL_scr_ck
// Address: 0x186130 - 0x186560
void BTL_scr_ck_0x186130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_scr_ck_0x186130");
#endif

    switch (ctx->pc) {
        case 0x18615cu: goto label_18615c;
        case 0x186168u: goto label_186168;
        case 0x18618cu: goto label_18618c;
        case 0x1861a0u: goto label_1861a0;
        case 0x1861b4u: goto label_1861b4;
        case 0x1861ccu: goto label_1861cc;
        case 0x1861ecu: goto label_1861ec;
        case 0x186200u: goto label_186200;
        case 0x186220u: goto label_186220;
        case 0x186244u: goto label_186244;
        case 0x186254u: goto label_186254;
        case 0x18626cu: goto label_18626c;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ecu: goto label_1862ec;
        case 0x186300u: goto label_186300;
        case 0x186320u: goto label_186320;
        case 0x186364u: goto label_186364;
        case 0x18637cu: goto label_18637c;
        case 0x1863a0u: goto label_1863a0;
        case 0x1863b4u: goto label_1863b4;
        case 0x1863d4u: goto label_1863d4;
        case 0x1864d0u: goto label_1864d0;
        case 0x1864e0u: goto label_1864e0;
        case 0x186528u: goto label_186528;
        default: break;
    }

    ctx->pc = 0x186130u;

    // 0x186130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x186134: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x186134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x186138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18613c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186140: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x186140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x186144: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x186144u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x186148: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18614c: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x18614cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x186150: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x186150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x186154: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x186154u;
    SET_GPR_U32(ctx, 31, 0x18615Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x186154u, 0x18615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18615Cu;
label_18615c:
    // 0x18615c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186160: 0xc067588  jal         func_19D620
    ctx->pc = 0x186160u;
    SET_GPR_U32(ctx, 31, 0x186168u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x186160u, 0x186168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186168u;
label_186168:
    // 0x186168: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x186168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x18616c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186170: 0x0  nop
    ctx->pc = 0x186170u;
    // NOP
    // 0x186174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186178: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x186178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x18617c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186180: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186184: 0xc040c24  jal         func_103090
    ctx->pc = 0x186184u;
    SET_GPR_U32(ctx, 31, 0x18618Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x18618Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18618Cu) { return; }
    ctx->pc = 0x18618Cu;
label_18618c:
    // 0x18618c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186190: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x186190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186194: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x186194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186198: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x186198u;
    SET_GPR_U32(ctx, 31, 0x1861A0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1861A0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1861A0u) { return; }
    ctx->pc = 0x1861A0u;
label_1861a0:
    // 0x1861a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1861a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1861a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1861a8: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x1861a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1861ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1861ACu;
    SET_GPR_U32(ctx, 31, 0x1861B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1861ACu, 0x1861B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861B4u;
label_1861b4:
    // 0x1861b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1861b8: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x1861b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1861bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1861bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1861c0: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x1861c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1861c4: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x1861C4u;
    SET_GPR_U32(ctx, 31, 0x1861CCu);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x1861C4u, 0x1861CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861CCu;
label_1861cc:
    // 0x1861cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1861ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1861d0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1861D0u;
    {
        const bool branch_taken_0x1861d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861d0) {
            ctx->pc = 0x186230u;
            goto label_186230;
        }
    }
    ctx->pc = 0x1861D8u;
    // 0x1861d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1861d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1861dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1861e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1861e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1861e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1861E4u;
    SET_GPR_U32(ctx, 31, 0x1861ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1861E4u, 0x1861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1861ECu;
label_1861ec:
    // 0x1861ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1861ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1861f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1861f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1861f4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x1861f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1861f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1861F8u;
    SET_GPR_U32(ctx, 31, 0x186200u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1861F8u, 0x186200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x186200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x186204: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x186204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x186208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x186208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18620c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186210: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x186214: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x186214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186218: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x186218u;
    SET_GPR_U32(ctx, 31, 0x186220u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x186220u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186220u) { return; }
    ctx->pc = 0x186220u;
label_186220:
    // 0x186220: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x186220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186224: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x186224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x186228: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x186228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18622c: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x18622cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
label_186230:
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
            goto label_186320;
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
label_186320:
    // 0x186320: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x186320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186324: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x186324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x186328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18632c: 0x0  nop
    ctx->pc = 0x18632cu;
    // NOP
    // 0x186330: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x186330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186334: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x186334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186338: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x186338u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18633c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x186340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186348: 0x0  nop
    ctx->pc = 0x186348u;
    // NOP
    // 0x18634c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x18634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x186350: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186354: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186358: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18635c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x18635Cu;
    SET_GPR_U32(ctx, 31, 0x186364u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x18635Cu, 0x186364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186368: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18636c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186370: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x186370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186374: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186374u;
    SET_GPR_U32(ctx, 31, 0x18637Cu);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186374u, 0x18637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18637Cu;
label_18637c:
    // 0x18637c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x186380: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x186380u;
    {
        const bool branch_taken_0x186380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x186380) {
            ctx->pc = 0x1863D4u;
            goto label_1863d4;
        }
    }
    ctx->pc = 0x186388u;
    // 0x186388: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x186388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18638c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18638cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186390: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186394: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186398: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x186398u;
    SET_GPR_U32(ctx, 31, 0x1863A0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1863A0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1863A0u) { return; }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1863a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1863ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1863ACu;
    SET_GPR_U32(ctx, 31, 0x1863B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1863ACu, 0x1863B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1863B4u;
label_1863b4:
    // 0x1863b4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1863b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1863b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1863bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1863bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1863c0: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1863c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1863c4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1863c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1863c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863cc: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x1863CCu;
    SET_GPR_U32(ctx, 31, 0x1863D4u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x1863D4u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1863D4u) { return; }
    ctx->pc = 0x1863D4u;
label_1863d4:
    // 0x1863d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1863d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1863d8: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1863d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1863dc: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x1863dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x1863e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1863E0u;
    {
        const bool branch_taken_0x1863e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863e0) {
            ctx->pc = 0x186400u;
            goto label_186400;
        }
    }
    ctx->pc = 0x1863E8u;
    // 0x1863e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1863ec: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x1863ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x1863f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1863f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1863f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1863f8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1863F8u;
    {
        const bool branch_taken_0x1863f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1863f8) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x186400u;
label_186400:
    // 0x186400: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18640c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x18640cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186410: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x186410u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186414: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18641c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186420: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186420u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186424: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186428: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18642c: 0x0  nop
    ctx->pc = 0x18642cu;
    // NOP
    // 0x186430: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x186430u;
    {
        const bool branch_taken_0x186430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186430) {
            ctx->pc = 0x186480u;
            goto label_186480;
        }
    }
    ctx->pc = 0x186438u;
    // 0x186438: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x186438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18643c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186444: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186448: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186448u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18644c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18644cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186450: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186454: 0x0  nop
    ctx->pc = 0x186454u;
    // NOP
    // 0x186458: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x186458u;
    {
        const bool branch_taken_0x186458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186458) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x186460u;
    // 0x186460: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186468: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x18646c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x18646cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186474: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x186474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x186478: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x186478u;
    {
        const bool branch_taken_0x186478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186478) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x186480u;
label_186480:
    // 0x186480: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x186480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186484: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18648c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186490: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186490u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186494: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186498: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18649c: 0x0  nop
    ctx->pc = 0x18649cu;
    // NOP
    // 0x1864a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1864A0u;
    {
        const bool branch_taken_0x1864a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1864a0) {
            ctx->pc = 0x1864C0u;
            goto label_1864c0;
        }
    }
    ctx->pc = 0x1864A8u;
    // 0x1864a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1864ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1864acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1864b4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1864b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1864b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1864b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1864bc: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x1864bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
label_1864c0:
    // 0x1864c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1864c4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1864c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1864c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1864C8u;
    SET_GPR_U32(ctx, 31, 0x1864D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1864D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1864D0u) { return; }
    ctx->pc = 0x1864D0u;
label_1864d0:
    // 0x1864d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1864d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1864d4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1864d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1864D8u;
    SET_GPR_U32(ctx, 31, 0x1864E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1864E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1864E0u) { return; }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1864e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1864e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1864e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864ec: 0x0  nop
    ctx->pc = 0x1864ecu;
    // NOP
    // 0x1864f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1864f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1864f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1864f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1864f8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1864f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1864fc: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186504: 0x0  nop
    ctx->pc = 0x186504u;
    // NOP
    // 0x186508: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18650c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186510: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186514: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186518: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x186518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18651c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x18651cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186520: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186520u;
    SET_GPR_U32(ctx, 31, 0x186528u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186520u, 0x186528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186528u;
label_186528:
    // 0x186528: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x186528u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18652c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18652Cu;
    {
        const bool branch_taken_0x18652c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18652c) {
            ctx->pc = 0x186548u;
            goto label_186548;
        }
    }
    ctx->pc = 0x186534u;
    // 0x186534: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x186534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x186538: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x186538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18653c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x18653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186540: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186544: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x186544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
label_186548:
    // 0x186548: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x186548u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18654c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18654cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186554: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186558: 0x3e00008  jr          $ra
    ctx->pc = 0x186558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186560u;
}
