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

// Function: Set_effect_hokori
// Address: 0x21c3b0 - 0x21c5bc
void Set_effect_hokori_0x21c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_hokori_0x21c3b0");
#endif

    switch (ctx->pc) {
        case 0x21c418u: goto label_21c418;
        case 0x21c420u: goto label_21c420;
        case 0x21c46cu: goto label_21c46c;
        case 0x21c478u: goto label_21c478;
        case 0x21c480u: goto label_21c480;
        case 0x21c4ccu: goto label_21c4cc;
        case 0x21c4d8u: goto label_21c4d8;
        case 0x21c504u: goto label_21c504;
        case 0x21c50cu: goto label_21c50c;
        case 0x21c540u: goto label_21c540;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c554u: goto label_21c554;
        case 0x21c588u: goto label_21c588;
        case 0x21c594u: goto label_21c594;
        default: break;
    }

    ctx->pc = 0x21c3b0u;

    // 0x21c3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c3b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x21c3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21c3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c3bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x21c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x21c3c0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x21c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x21c3c4: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x21c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x21c3c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x21c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c3cc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21c3ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c3d0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c3d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21c3d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c3dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c3e0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x21c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x21c3e4: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x21c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x21c3e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c3ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C3ECu;
    {
        const bool branch_taken_0x21c3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c3ec) {
            ctx->pc = 0x21C400u;
            goto label_21c400;
        }
    }
    ctx->pc = 0x21C3F4u;
    // 0x21c3f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c3f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c3fc: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x21c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_21c400:
    // 0x21c400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x21c400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c404: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x21C404u;
    {
        const bool branch_taken_0x21c404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c404) {
            ctx->pc = 0x21C4F8u;
            goto label_21c4f8;
        }
    }
    ctx->pc = 0x21C40Cu;
    // 0x21c40c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21c40cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c410: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x21C410u;
    {
        const bool branch_taken_0x21c410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c410) {
            ctx->pc = 0x21C4E0u;
            goto label_21c4e0;
        }
    }
    ctx->pc = 0x21C418u;
label_21c418:
    // 0x21c418: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C418u;
    SET_GPR_U32(ctx, 31, 0x21C420u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C418u, 0x21C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C420u;
label_21c420:
    // 0x21c420: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c428: 0x0  nop
    ctx->pc = 0x21c428u;
    // NOP
    // 0x21c42c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c430: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c438: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c43c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c440: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c444: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c448: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c44c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c454: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c458: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x21c45c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c460: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c464: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C464u;
    SET_GPR_U32(ctx, 31, 0x21C46Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C464u, 0x21C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C46Cu;
label_21c46c:
    // 0x21c46c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c470: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C470u;
    SET_GPR_U32(ctx, 31, 0x21C478u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C470u, 0x21C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C478u;
label_21c478:
    // 0x21c478: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C478u;
    SET_GPR_U32(ctx, 31, 0x21C480u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C478u, 0x21C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C480u;
label_21c480:
    // 0x21c480: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c488: 0x0  nop
    ctx->pc = 0x21c488u;
    // NOP
    // 0x21c48c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c490: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c494: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c498: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c49c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c4a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c4a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c4a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c4ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c4b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21c4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c4b8: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x21c4bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c4bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c4c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c4c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C4C4u;
    SET_GPR_U32(ctx, 31, 0x21C4CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C4C4u, 0x21C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4CCu;
label_21c4cc:
    // 0x21c4cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c4ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c4d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C4D0u;
    SET_GPR_U32(ctx, 31, 0x21C4D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C4D0u, 0x21C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4D8u;
label_21c4d8:
    // 0x21c4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21c4dc: 0x0  nop
    ctx->pc = 0x21c4dcu;
    // NOP
label_21c4e0:
    // 0x21c4e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c4e4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x21c4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21c4e8: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x21C4E8u;
    {
        const bool branch_taken_0x21c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c4e8) {
            ctx->pc = 0x21C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c418;
        }
    }
    ctx->pc = 0x21C4F0u;
    // 0x21c4f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x21C4F0u;
    {
        const bool branch_taken_0x21c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4f0) {
            ctx->pc = 0x21C5A8u;
            goto label_21c5a8;
        }
    }
    ctx->pc = 0x21C4F8u;
label_21c4f8:
    // 0x21c4f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21c4f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c4fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21C4FCu;
    {
        const bool branch_taken_0x21c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4fc) {
            ctx->pc = 0x21C598u;
            goto label_21c598;
        }
    }
    ctx->pc = 0x21C504u;
label_21c504:
    // 0x21c504: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C504u;
    SET_GPR_U32(ctx, 31, 0x21C50Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C504u, 0x21C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C50Cu;
label_21c50c:
    // 0x21c50c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c514: 0x0  nop
    ctx->pc = 0x21c514u;
    // NOP
    // 0x21c518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c51c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c520: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c524: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c528: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x21c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x21c52c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c52cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c530: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c534: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c534u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c538: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C538u;
    SET_GPR_U32(ctx, 31, 0x21C540u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C538u, 0x21C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C540u;
label_21c540:
    // 0x21c540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c544: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C544u;
    SET_GPR_U32(ctx, 31, 0x21C54Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C544u, 0x21C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21C54Cu;
    SET_GPR_U32(ctx, 31, 0x21C554u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21C54Cu, 0x21C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C554u;
label_21c554:
    // 0x21c554: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21c558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21c558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c55c: 0x0  nop
    ctx->pc = 0x21c55cu;
    // NOP
    // 0x21c560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21c560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21c564: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21c568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21c56c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x21c56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21c570: 0x24041001  addiu       $a0, $zero, 0x1001
    ctx->pc = 0x21c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x21c574: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21c574u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c578: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21c578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21c57c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c57cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c580: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21C580u;
    SET_GPR_U32(ctx, 31, 0x21C588u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21C580u, 0x21C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C588u;
label_21c588:
    // 0x21c588: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21c588u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c58c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21C58Cu;
    SET_GPR_U32(ctx, 31, 0x21C594u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21C58Cu, 0x21C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C594u;
label_21c594:
    // 0x21c594: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c598:
    // 0x21c598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21c598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c59c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x21c59cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21c5a0: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x21C5A0u;
    {
        const bool branch_taken_0x21c5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c5a0) {
            ctx->pc = 0x21C504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c504;
        }
    }
    ctx->pc = 0x21C5A8u;
label_21c5a8:
    // 0x21c5a8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x21c5a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c5b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x21c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21c5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C5BCu;
}
