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

// Function: entry_002765a0
// Address: 0x2765a0 - 0x276674
void entry_002765a0_0x2765a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002765a0_0x2765a0");
#endif

    switch (ctx->pc) {
        case 0x2765a8u: goto label_2765a8;
        case 0x2765dcu: goto label_2765dc;
        case 0x2765e8u: goto label_2765e8;
        default: break;
    }

    ctx->pc = 0x2765a0u;

    // 0x2765a0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2765A0u;
    SET_GPR_U32(ctx, 31, 0x2765A8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2765A0u, 0x2765A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765A8u;
label_2765a8:
    // 0x2765a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2765a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2765ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2765acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2765b0: 0x0  nop
    ctx->pc = 0x2765b0u;
    // NOP
    // 0x2765b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2765b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2765b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2765bc: 0xe420d2cc  swc1        $f0, -0x2D34($at)
    ctx->pc = 0x2765bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2CCu, _value); } while (0); }
    // 0x2765c0: 0x24042c06  addiu       $a0, $zero, 0x2C06
    ctx->pc = 0x2765c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11270));
    // 0x2765c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2765c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2765c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2765c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2765cc: 0x2446d2c0  addiu       $a2, $v0, -0x2D40
    ctx->pc = 0x2765ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955712));
    // 0x2765d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2765d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2765d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2765D4u;
    SET_GPR_U32(ctx, 31, 0x2765DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2765D4u, 0x2765DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765DCu;
label_2765dc:
    // 0x2765dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2765dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2765e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2765E0u;
    SET_GPR_U32(ctx, 31, 0x2765E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2765E0u, 0x2765E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765E8u;
label_2765e8:
    // 0x2765e8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2765e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2765ec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2765ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2765f0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2765f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2765f4: 0x12630046  beq         $s3, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2765F4u;
    {
        const bool branch_taken_0x2765f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2765f4) {
            ctx->pc = 0x276710u;
            return;
        }
    }
    ctx->pc = 0x2765FCu;
    // 0x2765fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2765fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x276600: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x276600u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x276604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276608: 0x0  nop
    ctx->pc = 0x276608u;
    // NOP
    // 0x27660c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x27660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x276610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276614: 0x0  nop
    ctx->pc = 0x276614u;
    // NOP
    // 0x276618: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x276618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x27661c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27661cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276620: 0x0  nop
    ctx->pc = 0x276620u;
    // NOP
    // 0x276624: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x276624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x276628: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x276628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27662c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27662cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276630: 0x0  nop
    ctx->pc = 0x276630u;
    // NOP
    // 0x276634: 0xe6600060  swc1        $f0, 0x60($s3)
    ctx->pc = 0x276634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x276638: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x276638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x27663c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27663cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276640: 0x0  nop
    ctx->pc = 0x276640u;
    // NOP
    // 0x276644: 0xe6600068  swc1        $f0, 0x68($s3)
    ctx->pc = 0x276644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
    // 0x276648: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x276648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x27664c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276650: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x276650u;
    {
        const bool branch_taken_0x276650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x276650) {
            ctx->pc = 0x2766A4u;
            return;
        }
    }
    ctx->pc = 0x276658u;
    // 0x276658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27665c: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27665Cu;
    {
        const bool branch_taken_0x27665c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27665c) {
            ctx->pc = 0x27668Cu;
            return;
        }
    }
    ctx->pc = 0x276664u;
    // 0x276664: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276664u;
    {
        const bool branch_taken_0x276664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x276664) {
            ctx->pc = 0x276674u;
            return;
        }
    }
    ctx->pc = 0x27666Cu;
    // 0x27666c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27666Cu;
    {
        const bool branch_taken_0x27666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27666c) {
            ctx->pc = 0x2766B8u;
            return;
        }
    }
    ctx->pc = 0x276674u;
}
