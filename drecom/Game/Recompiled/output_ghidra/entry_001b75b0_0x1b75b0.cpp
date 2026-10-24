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

// Function: entry_001b75b0
// Address: 0x1b75b0 - 0x1b767c
void entry_001b75b0_0x1b75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b75b0_0x1b75b0");
#endif

    switch (ctx->pc) {
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b7604u: goto label_1b7604;
        default: break;
    }

    ctx->pc = 0x1b75b0u;

    // 0x1b75b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b75b4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1b75b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b75b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b75bc: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b75bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b75c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b75c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b75c4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b75c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b75c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b75cc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B75CCu;
    SET_GPR_U32(ctx, 31, 0x1B75D4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B75CCu, 0x1B75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75D4u;
label_1b75d4:
    // 0x1b75d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b75d8: 0x90c309df  lbu         $v1, 0x9DF($a2)
    ctx->pc = 0x1b75d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1b75dc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b75dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b75e0: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1b75e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b75e4: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B75E4u;
    {
        const bool branch_taken_0x1b75e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b75e4) {
            ctx->pc = 0x1B7690u;
            return;
        }
    }
    ctx->pc = 0x1B75ECu;
    // 0x1b75ec: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b75ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b75f0: 0x8ce81b68  lw          $t0, 0x1B68($a3)
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 7016)));
    // 0x1b75f4: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x1b75f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x1b75f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b75f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b75fc: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B75FCu;
    SET_GPR_U32(ctx, 31, 0x1B7604u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B75FCu, 0x1B7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7604u;
label_1b7604:
    // 0x1b7604: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1B7604u;
    {
        const bool branch_taken_0x1b7604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7604) {
            ctx->pc = 0x1B7748u;
            return;
        }
    }
    ctx->pc = 0x1B760Cu;
    // 0x1b760c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7610: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1b7610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b7614: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b7618: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1b7618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b761c: 0x10a00346  beqz        $a1, . + 4 + (0x346 << 2)
    ctx->pc = 0x1B761Cu;
    {
        const bool branch_taken_0x1b761c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b761c) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7624u;
    // 0x1b7624: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7628: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b762c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b7630: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b7630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b7634: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1b7634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1b7638: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b7638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b763c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7640: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1b7640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1b7644: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1b7644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b7648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b764c: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B764Cu;
    {
        const bool branch_taken_0x1b764c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b764c) {
            ctx->pc = 0x1B767Cu;
            return;
        }
    }
    ctx->pc = 0x1B7654u;
    // 0x1b7654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7658: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7658u;
    {
        const bool branch_taken_0x1b7658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b7658) {
            ctx->pc = 0x1B767Cu;
            return;
        }
    }
    ctx->pc = 0x1B7660u;
    // 0x1b7660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7664: 0x10a30334  beq         $a1, $v1, . + 4 + (0x334 << 2)
    ctx->pc = 0x1B7664u;
    {
        const bool branch_taken_0x1b7664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b7664) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B766Cu;
    // 0x1b766c: 0x10a00332  beqz        $a1, . + 4 + (0x332 << 2)
    ctx->pc = 0x1B766Cu;
    {
        const bool branch_taken_0x1b766c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b766c) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7674u;
    // 0x1b7674: 0x10000330  b           . + 4 + (0x330 << 2)
    ctx->pc = 0x1B7674u;
    {
        const bool branch_taken_0x1b7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7674) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B767Cu;
}
