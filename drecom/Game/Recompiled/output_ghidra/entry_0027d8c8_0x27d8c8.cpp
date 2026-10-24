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

// Function: entry_0027d8c8
// Address: 0x27d8c8 - 0x27da1c
void entry_0027d8c8_0x27d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d8c8_0x27d8c8");
#endif

    switch (ctx->pc) {
        case 0x27d910u: goto label_27d910;
        case 0x27d91cu: goto label_27d91c;
        case 0x27d924u: goto label_27d924;
        case 0x27d948u: goto label_27d948;
        case 0x27d96cu: goto label_27d96c;
        case 0x27d9a0u: goto label_27d9a0;
        case 0x27d9acu: goto label_27d9ac;
        case 0x27da08u: goto label_27da08;
        case 0x27da14u: goto label_27da14;
        default: break;
    }

    ctx->pc = 0x27d8c8u;

    // 0x27d8c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d8cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d8d0: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d8d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d8d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d8dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d8e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d8e4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x27d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x27d8e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x27d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x27d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d8f0: 0x0  nop
    ctx->pc = 0x27d8f0u;
    // NOP
    // 0x27d8f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d8f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d8fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d8fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d900: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d904: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d904u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d908: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D908u;
    SET_GPR_U32(ctx, 31, 0x27D910u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D908u, 0x27D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D910u;
label_27d910:
    // 0x27d910: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d914: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D914u;
    SET_GPR_U32(ctx, 31, 0x27D91Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D914u, 0x27D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D91Cu;
label_27d91c:
    // 0x27d91c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D91Cu;
    SET_GPR_U32(ctx, 31, 0x27D924u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D91Cu, 0x27D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D924u;
label_27d924:
    // 0x27d924: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d92c: 0x0  nop
    ctx->pc = 0x27d92cu;
    // NOP
    // 0x27d930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d934: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x27d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d93c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x27d93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27d940: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D940u;
    SET_GPR_U32(ctx, 31, 0x27D948u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D940u, 0x27D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D948u;
label_27d948:
    // 0x27d948: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d950: 0x0  nop
    ctx->pc = 0x27d950u;
    // NOP
    // 0x27d954: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d958: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x27d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d95c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d960: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d964: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D964u;
    SET_GPR_U32(ctx, 31, 0x27D96Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D964u, 0x27D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D96Cu;
label_27d96c:
    // 0x27d96c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27d970: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d974: 0x0  nop
    ctx->pc = 0x27d974u;
    // NOP
    // 0x27d978: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d97c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x27d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27d980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27d980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27d984: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27d984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27d988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27d98c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d98cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d990: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d994: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d994u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d998: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27D998u;
    SET_GPR_U32(ctx, 31, 0x27D9A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27D998u, 0x27D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9A0u;
label_27d9a0:
    // 0x27d9a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27d9a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27d9a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27D9A4u;
    SET_GPR_U32(ctx, 31, 0x27D9ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27D9A4u, 0x27D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D9ACu;
label_27d9ac:
    // 0x27d9ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27d9b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27d9b4: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x27d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x27d9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27d9bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27d9bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27d9c0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d9c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27d9c8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27d9cc: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x27d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x27d9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d9d4: 0x0  nop
    ctx->pc = 0x27d9d4u;
    // NOP
    // 0x27d9d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27d9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27d9dc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x27d9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27d9e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x27d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x27d9e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d9e8: 0x0  nop
    ctx->pc = 0x27d9e8u;
    // NOP
    // 0x27d9ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27d9f0: 0x2404170a  addiu       $a0, $zero, 0x170A
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5898));
    // 0x27d9f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27d9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d9f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x27d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d9fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27d9fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27da00: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27DA00u;
    SET_GPR_U32(ctx, 31, 0x27DA08u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27DA00u, 0x27DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA08u;
label_27da08:
    // 0x27da08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27da08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27da0c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27DA0Cu;
    SET_GPR_U32(ctx, 31, 0x27DA14u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27DA0Cu, 0x27DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA14u;
label_27da14:
    // 0x27da14: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27DA14u;
    {
        const bool branch_taken_0x27da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27da14) {
            ctx->pc = 0x27DB60u;
            return;
        }
    }
    ctx->pc = 0x27DA1Cu;
}
