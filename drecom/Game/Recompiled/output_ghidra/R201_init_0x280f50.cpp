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

// Function: R201_init
// Address: 0x280f50 - 0x281700
void R201_init_0x280f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R201_init_0x280f50");
#endif

    switch (ctx->pc) {
        case 0x280f6cu: goto label_280f6c;
        case 0x280f80u: goto label_280f80;
        case 0x280fccu: goto label_280fcc;
        case 0x281038u: goto label_281038;
        case 0x28105cu: goto label_28105c;
        case 0x281068u: goto label_281068;
        case 0x28108cu: goto label_28108c;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810d4u: goto label_2810d4;
        case 0x281108u: goto label_281108;
        case 0x281114u: goto label_281114;
        case 0x281170u: goto label_281170;
        case 0x28117cu: goto label_28117c;
        case 0x281198u: goto label_281198;
        case 0x2811bcu: goto label_2811bc;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811ecu: goto label_2811ec;
        case 0x281210u: goto label_281210;
        case 0x281234u: goto label_281234;
        case 0x281268u: goto label_281268;
        case 0x281274u: goto label_281274;
        case 0x2812d0u: goto label_2812d0;
        case 0x2812dcu: goto label_2812dc;
        case 0x2812f8u: goto label_2812f8;
        case 0x28131cu: goto label_28131c;
        case 0x281328u: goto label_281328;
        case 0x28134cu: goto label_28134c;
        case 0x281370u: goto label_281370;
        case 0x281394u: goto label_281394;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813d4u: goto label_2813d4;
        case 0x281430u: goto label_281430;
        case 0x28143cu: goto label_28143c;
        case 0x281458u: goto label_281458;
        case 0x28147cu: goto label_28147c;
        case 0x281488u: goto label_281488;
        case 0x2814acu: goto label_2814ac;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814f4u: goto label_2814f4;
        case 0x281528u: goto label_281528;
        case 0x281534u: goto label_281534;
        case 0x281590u: goto label_281590;
        case 0x28159cu: goto label_28159c;
        case 0x2815b4u: goto label_2815b4;
        case 0x2815d8u: goto label_2815d8;
        case 0x2815e4u: goto label_2815e4;
        case 0x281608u: goto label_281608;
        case 0x28162cu: goto label_28162c;
        case 0x281650u: goto label_281650;
        case 0x281684u: goto label_281684;
        case 0x281690u: goto label_281690;
        case 0x2816ecu: goto label_2816ec;
        default: break;
    }

    ctx->pc = 0x280f50u;

    // 0x280f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280f54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x280f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x280f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280f5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x280f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x280f60: 0x24443540  addiu       $a0, $v0, 0x3540
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x280f64: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x280F64u;
    SET_GPR_U32(ctx, 31, 0x280F6Cu);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x280F64u, 0x280F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F6Cu;
label_280f6c:
    // 0x280f6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280f70: 0x8c24fb20  lw          $a0, -0x4E0($at)
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB20u));
    // 0x280f74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x280f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x280f78: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x280F78u;
    SET_GPR_U32(ctx, 31, 0x280F80u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x280F78u, 0x280F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280F80u;
label_280f80:
    // 0x280f80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280f84: 0x8c23fb20  lw          $v1, -0x4E0($at)
    ctx->pc = 0x280f84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB20u));
    // 0x280f88: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x280f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x280f8c: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x280f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x280f90: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x280f90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x280f94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280f98: 0x8c23fb20  lw          $v1, -0x4E0($at)
    ctx->pc = 0x280f98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB20u));
    // 0x280f9c: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x280f9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x280fa0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x280fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x280fa4: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x280fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x280fa8: 0x24037fe0  addiu       $v1, $zero, 0x7FE0
    ctx->pc = 0x280fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32736));
    // 0x280fac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280fb0: 0x8c22fb20  lw          $v0, -0x4E0($at)
    ctx->pc = 0x280fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FB20u));
    // 0x280fb4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x280fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x280fb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280fbc: 0x8c24fb24  lw          $a0, -0x4DC($at)
    ctx->pc = 0x280fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FB24u));
    // 0x280fc0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x280fc4: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x280FC4u;
    SET_GPR_U32(ctx, 31, 0x280FCCu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x280FC4u, 0x280FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FCCu;
label_280fcc:
    // 0x280fcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280fd0: 0x8c23fb24  lw          $v1, -0x4DC($at)
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB24u));
    // 0x280fd4: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x280fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x280fd8: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x280fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x280fdc: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x280fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x280fe0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280fe4: 0x8c23fb24  lw          $v1, -0x4DC($at)
    ctx->pc = 0x280fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB24u));
    // 0x280fe8: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x280fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x280fec: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x280fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x280ff0: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x280ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x280ff4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x280ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x280ff8: 0x8c23fb24  lw          $v1, -0x4DC($at)
    ctx->pc = 0x280ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB24u));
    // 0x280ffc: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x280ffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x281000: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x281000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x281004: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x281004u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x281008: 0x24037fc0  addiu       $v1, $zero, 0x7FC0
    ctx->pc = 0x281008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32704));
    // 0x28100c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281010: 0x8c22fb24  lw          $v0, -0x4DC($at)
    ctx->pc = 0x281010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FB24u));
    // 0x281014: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x281014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x281018: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28101c: 0x8c23fb24  lw          $v1, -0x4DC($at)
    ctx->pc = 0x28101cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FB24u));
    // 0x281020: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x281020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x281024: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x281024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x281028: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x281028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x28102c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28102cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281030: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x281030u;
    {
        const bool branch_taken_0x281030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281030) {
            ctx->pc = 0x281180u;
            goto label_281180;
        }
    }
    ctx->pc = 0x281038u;
label_281038:
    // 0x281038: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28103c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281040: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x281040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281044: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281048: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x281048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28104c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28104cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281050: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281050u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281054: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281054u;
    SET_GPR_U32(ctx, 31, 0x28105Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281054u, 0x28105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28105Cu;
label_28105c:
    // 0x28105c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28105cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281060: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281060u;
    SET_GPR_U32(ctx, 31, 0x281068u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281060u, 0x281068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281068u;
label_281068:
    // 0x281068: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28106c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281070: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x281070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281078: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28107c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281080: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x281080u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281084: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281084u;
    SET_GPR_U32(ctx, 31, 0x28108Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281084u, 0x28108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28108Cu;
label_28108c:
    // 0x28108c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281094: 0x0  nop
    ctx->pc = 0x281094u;
    // NOP
    // 0x281098: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28109c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2810a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2810a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2810A8u;
    SET_GPR_U32(ctx, 31, 0x2810B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2810A8u, 0x2810B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810B0u;
label_2810b0:
    // 0x2810b0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2810b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2810b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2810b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810b8: 0x0  nop
    ctx->pc = 0x2810b8u;
    // NOP
    // 0x2810bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2810bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2810c0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2810c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2810c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2810cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2810CCu;
    SET_GPR_U32(ctx, 31, 0x2810D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2810CCu, 0x2810D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810D4u;
label_2810d4:
    // 0x2810d4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2810d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2810d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2810d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2810dc: 0x0  nop
    ctx->pc = 0x2810dcu;
    // NOP
    // 0x2810e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2810e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2810e4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2810e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2810e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2810e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2810ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2810ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2810f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2810f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2810f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2810f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2810f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2810fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2810fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281100: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281100u;
    SET_GPR_U32(ctx, 31, 0x281108u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281100u, 0x281108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281108u;
label_281108:
    // 0x281108: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28110c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28110Cu;
    SET_GPR_U32(ctx, 31, 0x281114u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28110Cu, 0x281114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281114u;
label_281114:
    // 0x281114: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281118: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28111c: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x28111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x281120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281124: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281128: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28112c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28112cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281130: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281134: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28113c: 0x0  nop
    ctx->pc = 0x28113cu;
    // NOP
    // 0x281140: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281144: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281148: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28114c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281150: 0x0  nop
    ctx->pc = 0x281150u;
    // NOP
    // 0x281154: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281158: 0x2404171e  addiu       $a0, $zero, 0x171E
    ctx->pc = 0x281158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5918));
    // 0x28115c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28115cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281160: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281164: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281164u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281168: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281168u;
    SET_GPR_U32(ctx, 31, 0x281170u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281168u, 0x281170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281170u;
label_281170:
    // 0x281170: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281174: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281174u;
    SET_GPR_U32(ctx, 31, 0x28117Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281174u, 0x28117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28117Cu;
label_28117c:
    // 0x28117c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28117cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_281180:
    // 0x281180: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x281180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x281184: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281184) {
            ctx->pc = 0x281038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281038;
        }
    }
    ctx->pc = 0x28118Cu;
    // 0x28118c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28118cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281190: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x281190u;
    {
        const bool branch_taken_0x281190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281190) {
            ctx->pc = 0x2812E0u;
            goto label_2812e0;
        }
    }
    ctx->pc = 0x281198u;
label_281198:
    // 0x281198: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28119c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2811a0: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x2811a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x2811a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2811a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2811a8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2811a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2811ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2811acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2811b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2811b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2811b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2811B4u;
    SET_GPR_U32(ctx, 31, 0x2811BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2811B4u, 0x2811BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811BCu;
label_2811bc:
    // 0x2811bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2811bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2811c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2811C0u;
    SET_GPR_U32(ctx, 31, 0x2811C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2811C0u, 0x2811C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811C8u;
label_2811c8:
    // 0x2811c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2811cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2811ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2811d0: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x2811d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2811d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2811d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2811dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2811dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2811e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2811e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2811e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2811E4u;
    SET_GPR_U32(ctx, 31, 0x2811ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2811E4u, 0x2811ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811ECu;
label_2811ec:
    // 0x2811ec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2811ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2811f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2811f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2811f4: 0x0  nop
    ctx->pc = 0x2811f4u;
    // NOP
    // 0x2811f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2811f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2811fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2811fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281204: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281208: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281208u;
    SET_GPR_U32(ctx, 31, 0x281210u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281208u, 0x281210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281210u;
label_281210:
    // 0x281210: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281218: 0x0  nop
    ctx->pc = 0x281218u;
    // NOP
    // 0x28121c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28121cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281220: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x281220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281228: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28122c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28122Cu;
    SET_GPR_U32(ctx, 31, 0x281234u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28122Cu, 0x281234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281234u;
label_281234:
    // 0x281234: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28123c: 0x0  nop
    ctx->pc = 0x28123cu;
    // NOP
    // 0x281240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281244: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28124c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x281250: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x281250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x281254: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281258: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28125c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28125cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281260: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281260u;
    SET_GPR_U32(ctx, 31, 0x281268u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281260u, 0x281268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281268u;
label_281268:
    // 0x281268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28126c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28126Cu;
    SET_GPR_U32(ctx, 31, 0x281274u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28126Cu, 0x281274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281274u;
label_281274:
    // 0x281274: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281278: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28127c: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x281280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281284: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281284u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281288: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28128c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28128cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281290: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281294: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28129c: 0x0  nop
    ctx->pc = 0x28129cu;
    // NOP
    // 0x2812a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2812a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2812a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2812a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2812a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2812a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2812ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2812acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2812b0: 0x0  nop
    ctx->pc = 0x2812b0u;
    // NOP
    // 0x2812b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2812b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2812b8: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x2812b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x2812bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2812bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2812c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2812c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2812c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2812C8u;
    SET_GPR_U32(ctx, 31, 0x2812D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2812C8u, 0x2812D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812D0u;
label_2812d0:
    // 0x2812d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2812d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2812d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2812D4u;
    SET_GPR_U32(ctx, 31, 0x2812DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2812D4u, 0x2812DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812DCu;
label_2812dc:
    // 0x2812dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2812dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2812e0:
    // 0x2812e0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x2812e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2812e4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2812E4u;
    {
        const bool branch_taken_0x2812e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2812e4) {
            ctx->pc = 0x281198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281198;
        }
    }
    ctx->pc = 0x2812ECu;
    // 0x2812ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2812ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812f0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2812F0u;
    {
        const bool branch_taken_0x2812f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2812f0) {
            ctx->pc = 0x281440u;
            goto label_281440;
        }
    }
    ctx->pc = 0x2812F8u;
label_2812f8:
    // 0x2812f8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2812f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2812fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281300: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x281304: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281308: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28130c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28130cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281310: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281310u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281314: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281314u;
    SET_GPR_U32(ctx, 31, 0x28131Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281314u, 0x28131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28131Cu;
label_28131c:
    // 0x28131c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28131cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281320: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281320u;
    SET_GPR_U32(ctx, 31, 0x281328u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281320u, 0x281328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281328u;
label_281328:
    // 0x281328: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28132c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28132cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281330: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x281330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x281334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281338: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281338u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28133c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281340: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x281340u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281344: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281344u;
    SET_GPR_U32(ctx, 31, 0x28134Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281344u, 0x28134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28134Cu;
label_28134c:
    // 0x28134c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281354: 0x0  nop
    ctx->pc = 0x281354u;
    // NOP
    // 0x281358: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28135c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281364: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281368: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281368u;
    SET_GPR_U32(ctx, 31, 0x281370u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281368u, 0x281370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281370u;
label_281370:
    // 0x281370: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281378: 0x0  nop
    ctx->pc = 0x281378u;
    // NOP
    // 0x28137c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28137cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281380: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x281380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281388: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28138c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28138Cu;
    SET_GPR_U32(ctx, 31, 0x281394u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28138Cu, 0x281394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281394u;
label_281394:
    // 0x281394: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28139c: 0x0  nop
    ctx->pc = 0x28139cu;
    // NOP
    // 0x2813a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2813a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2813a4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2813a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2813a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2813a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2813ac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2813acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2813b0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2813b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2813b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2813b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2813b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2813b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2813bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2813bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2813c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2813C0u;
    SET_GPR_U32(ctx, 31, 0x2813C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2813C0u, 0x2813C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813C8u;
label_2813c8:
    // 0x2813c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2813c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2813cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2813CCu;
    SET_GPR_U32(ctx, 31, 0x2813D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2813CCu, 0x2813D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813D4u;
label_2813d4:
    // 0x2813d4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2813d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2813d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2813d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2813dc: 0x24423610  addiu       $v0, $v0, 0x3610
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13840));
    // 0x2813e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2813e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2813e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2813e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2813ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2813ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2813f0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2813f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2813f4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2813f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2813f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2813f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2813fc: 0x0  nop
    ctx->pc = 0x2813fcu;
    // NOP
    // 0x281400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281404: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281408: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28140c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281410: 0x0  nop
    ctx->pc = 0x281410u;
    // NOP
    // 0x281414: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281418: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x281418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x28141c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28141cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281420: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281428: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281428u;
    SET_GPR_U32(ctx, 31, 0x281430u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281428u, 0x281430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281430u;
label_281430:
    // 0x281430: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281434: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281434u;
    SET_GPR_U32(ctx, 31, 0x28143Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281434u, 0x28143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28143Cu;
label_28143c:
    // 0x28143c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28143cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_281440:
    // 0x281440: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x281440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x281444: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x281444u;
    {
        const bool branch_taken_0x281444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281444) {
            ctx->pc = 0x2812F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2812f8;
        }
    }
    ctx->pc = 0x28144Cu;
    // 0x28144c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x28144cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281450: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x281450u;
    {
        const bool branch_taken_0x281450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281450) {
            ctx->pc = 0x2815A0u;
            goto label_2815a0;
        }
    }
    ctx->pc = 0x281458u;
label_281458:
    // 0x281458: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28145c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281460: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x281460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281464: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281468: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x28146c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28146cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281474u;
    SET_GPR_U32(ctx, 31, 0x28147Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281474u, 0x28147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28147Cu;
label_28147c:
    // 0x28147c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28147cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281480u;
    SET_GPR_U32(ctx, 31, 0x281488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281480u, 0x281488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281488u;
label_281488:
    // 0x281488: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28148c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281490: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x281490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281498: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28149c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2814a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2814a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2814a4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814A4u;
    SET_GPR_U32(ctx, 31, 0x2814ACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814A4u, 0x2814ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814ACu;
label_2814ac:
    // 0x2814ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814b4: 0x0  nop
    ctx->pc = 0x2814b4u;
    // NOP
    // 0x2814b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2814b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2814bc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2814bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2814c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2814c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2814c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2814c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2814c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814C8u;
    SET_GPR_U32(ctx, 31, 0x2814D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814C8u, 0x2814D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814D0u;
label_2814d0:
    // 0x2814d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814d8: 0x0  nop
    ctx->pc = 0x2814d8u;
    // NOP
    // 0x2814dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2814dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2814e0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2814e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2814e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2814e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2814e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2814e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2814ec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2814ECu;
    SET_GPR_U32(ctx, 31, 0x2814F4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2814ECu, 0x2814F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814F4u;
label_2814f4:
    // 0x2814f4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2814f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814fc: 0x0  nop
    ctx->pc = 0x2814fcu;
    // NOP
    // 0x281500: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281504: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281508: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28150c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x281510: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x281514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281518: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28151c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28151cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281520: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281520u;
    SET_GPR_U32(ctx, 31, 0x281528u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281520u, 0x281528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281528u;
label_281528:
    // 0x281528: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281528u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28152c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28152Cu;
    SET_GPR_U32(ctx, 31, 0x281534u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28152Cu, 0x281534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281534u;
label_281534:
    // 0x281534: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281538: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28153c: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x28153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x281540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281544: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281544u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281548: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28154c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28154cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281550: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281554: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28155c: 0x0  nop
    ctx->pc = 0x28155cu;
    // NOP
    // 0x281560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x281560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x281564: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281568: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x28156c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28156cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281570: 0x0  nop
    ctx->pc = 0x281570u;
    // NOP
    // 0x281574: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x281578: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x28157c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28157cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281580: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281584: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281584u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281588: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281588u;
    SET_GPR_U32(ctx, 31, 0x281590u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281588u, 0x281590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281590u;
label_281590:
    // 0x281590: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281590u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281594: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281594u;
    SET_GPR_U32(ctx, 31, 0x28159Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281594u, 0x28159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28159Cu;
label_28159c:
    // 0x28159c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28159cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2815a0:
    // 0x2815a0: 0x1200ffad  beqz        $s0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x2815A0u;
    {
        const bool branch_taken_0x2815a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815a0) {
            ctx->pc = 0x281458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281458;
        }
    }
    ctx->pc = 0x2815A8u;
    // 0x2815a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2815a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2815ACu;
    {
        const bool branch_taken_0x2815ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815ac) {
            ctx->pc = 0x2816D8u;
            goto label_2816d8;
        }
    }
    ctx->pc = 0x2815B4u;
label_2815b4:
    // 0x2815b4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2815b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2815b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2815b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2815bc: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x2815bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x2815c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2815c4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2815c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2815c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2815c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2815ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2815d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2815D0u;
    SET_GPR_U32(ctx, 31, 0x2815D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2815D0u, 0x2815D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815D8u;
label_2815d8:
    // 0x2815d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2815d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2815dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2815DCu;
    SET_GPR_U32(ctx, 31, 0x2815E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2815DCu, 0x2815E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815E4u;
label_2815e4:
    // 0x2815e4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2815e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2815e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2815ec: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x2815ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x2815f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2815f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2815f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2815f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2815f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2815fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2815fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281600: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281600u;
    SET_GPR_U32(ctx, 31, 0x281608u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281600u, 0x281608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281608u;
label_281608:
    // 0x281608: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x28160c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28160cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281610: 0x0  nop
    ctx->pc = 0x281610u;
    // NOP
    // 0x281614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281618: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x281618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28161c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28161cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281620: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281624: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281624u;
    SET_GPR_U32(ctx, 31, 0x28162Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281624u, 0x28162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28162Cu;
label_28162c:
    // 0x28162c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x28162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281634: 0x0  nop
    ctx->pc = 0x281634u;
    // NOP
    // 0x281638: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28163c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281640: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281644: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x281648: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281648u;
    SET_GPR_U32(ctx, 31, 0x281650u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281648u, 0x281650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281650u;
label_281650:
    // 0x281650: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281658: 0x0  nop
    ctx->pc = 0x281658u;
    // NOP
    // 0x28165c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28165cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281660: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281668: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x281668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x28166c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x28166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281674: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281678: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281678u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28167c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28167Cu;
    SET_GPR_U32(ctx, 31, 0x281684u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28167Cu, 0x281684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281684u;
label_281684:
    // 0x281684: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x281688: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281688u;
    SET_GPR_U32(ctx, 31, 0x281690u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281688u, 0x281690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281690u;
label_281690:
    // 0x281690: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281694: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281698: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x281698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x28169c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2816a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2816a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2816a4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2816a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2816a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2816ac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2816acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2816b0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2816b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2816b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2816b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2816b8: 0x0  nop
    ctx->pc = 0x2816b8u;
    // NOP
    // 0x2816bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2816bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2816c0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2816c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2816c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2816c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2816c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2816cc: 0x0  nop
    ctx->pc = 0x2816ccu;
    // NOP
    // 0x2816d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2816d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2816d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2816d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2816d8:
    // 0x2816d8: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2816d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2816dc: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2816DCu;
    {
        const bool branch_taken_0x2816dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2816dc) {
            ctx->pc = 0x2815B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2815b4;
        }
    }
    ctx->pc = 0x2816E4u;
    // 0x2816e4: 0xc0a0640  jal         func_281900
    ctx->pc = 0x2816E4u;
    SET_GPR_U32(ctx, 31, 0x2816ECu);
    ctx->pc = 0x281900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281900u, 0x2816E4u, 0x2816ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2816ECu;
label_2816ec:
    // 0x2816ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2816ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2816f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2816f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2816f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2816f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2816f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2816F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281700u;
}
