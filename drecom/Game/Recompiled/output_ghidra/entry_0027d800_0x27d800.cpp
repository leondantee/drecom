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

// Function: entry_0027d800
// Address: 0x27d800 - 0x27d8c8
void entry_0027d800_0x27d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d800_0x27d800");
#endif

    switch (ctx->pc) {
        case 0x27d848u: goto label_27d848;
        case 0x27d854u: goto label_27d854;
        case 0x27d8b4u: goto label_27d8b4;
        case 0x27d8c0u: goto label_27d8c0;
        default: break;
    }

    ctx->pc = 0x27d800u;

    // 0x27d800: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d804: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d808: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d80c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d810: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d814: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d818: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d81c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x27d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x27d820: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27d824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d828: 0x0  nop
    ctx->pc = 0x27d828u;
    // NOP
    // 0x27d82c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d834: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d838: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d83c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d83cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d840: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D840u;
    SET_GPR_U32(ctx, 31, 0x27D848u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D840u, 0x27D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D848u;
label_27d848:
    // 0x27d848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d84c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D84Cu;
    SET_GPR_U32(ctx, 31, 0x27D854u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D84Cu, 0x27D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D854u;
label_27d854:
    // 0x27d854: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d858: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d85c: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d864: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d864u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d868: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d86c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d870: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d874: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x27d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x27d878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d87c: 0x0  nop
    ctx->pc = 0x27d87cu;
    // NOP
    // 0x27d880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27d880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d884: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d888: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x27d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x27d88c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x27d88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x27d890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d894: 0x0  nop
    ctx->pc = 0x27d894u;
    // NOP
    // 0x27d898: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d89c: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27d8a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d8a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d8a4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d8a8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d8a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d8ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D8ACu;
    SET_GPR_U32(ctx, 31, 0x27D8B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D8ACu, 0x27D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8B4u;
label_27d8b4:
    // 0x27d8b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d8b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d8b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D8B8u;
    SET_GPR_U32(ctx, 31, 0x27D8C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D8B8u, 0x27D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D8C0u;
label_27d8c0:
    // 0x27d8c0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x27D8C0u;
    {
        const bool branch_taken_0x27d8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d8c0) {
            ctx->pc = 0x27DB60u;
            return;
        }
    }
    ctx->pc = 0x27D8C8u;
}
