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

// Function: entry_003104d4
// Address: 0x3104d4 - 0x31056c
void entry_003104d4_0x3104d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003104d4_0x3104d4");
#endif

    switch (ctx->pc) {
        case 0x3104fcu: goto label_3104fc;
        case 0x310518u: goto label_310518;
        case 0x310560u: goto label_310560;
        default: break;
    }

    ctx->pc = 0x3104d4u;

    // 0x3104d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104d8: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x3104d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3104dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3104dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3104e0: 0x0  nop
    ctx->pc = 0x3104e0u;
    // NOP
    // 0x3104e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3104e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3104e8: 0x0  nop
    ctx->pc = 0x3104e8u;
    // NOP
    // 0x3104ec: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x3104ECu;
    {
        const bool branch_taken_0x3104ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3104ec) {
            ctx->pc = 0x31056Cu;
            return;
        }
    }
    ctx->pc = 0x3104F4u;
    // 0x3104f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3104F4u;
    SET_GPR_U32(ctx, 31, 0x3104FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3104F4u, 0x3104FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3104FCu;
label_3104fc:
    // 0x3104fc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3104fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x310500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x310500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310504: 0x0  nop
    ctx->pc = 0x310504u;
    // NOP
    // 0x310508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31050c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310510: 0xc06765c  jal         func_19D970
    ctx->pc = 0x310510u;
    SET_GPR_U32(ctx, 31, 0x310518u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x310510u, 0x310518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310518u;
label_310518:
    // 0x310518: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x310518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31051c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31051cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310520: 0x0  nop
    ctx->pc = 0x310520u;
    // NOP
    // 0x310524: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x310528: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x310528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31052c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310530: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x310530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x310534: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x310534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x310538: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x310538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31053c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x310540: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x310544: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x310544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x310548: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x310548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31054c: 0x24045500  addiu       $a0, $zero, 0x5500
    ctx->pc = 0x31054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21760));
    // 0x310550: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x310550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x310554: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x310554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310558: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x310558u;
    SET_GPR_U32(ctx, 31, 0x310560u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x310558u, 0x310560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310560u;
label_310560:
    // 0x310560: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x310560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x310564: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x310564u;
    SET_GPR_U32(ctx, 31, 0x31056Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x310564u, 0x31056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31056Cu;
}
