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

// Function: ectrl03_move10_t03
// Address: 0x24c720 - 0x24c834
void ectrl03_move10_t03_0x24c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl03_move10_t03_0x24c720");
#endif

    switch (ctx->pc) {
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7fcu: goto label_24c7fc;
        default: break;
    }

    ctx->pc = 0x24c720u;

    // 0x24c720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24c724: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x24c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x24c728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24c72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24c730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24c730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24c734: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x24c734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x24c738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c73c: 0x8c700100  lw          $s0, 0x100($v1)
    ctx->pc = 0x24c73cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x24c740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c744: 0x8c720104  lw          $s2, 0x104($v1)
    ctx->pc = 0x24c744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24c748: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x24c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x24c74c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c750: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C750u;
    {
        const bool branch_taken_0x24c750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c750) {
            ctx->pc = 0x24C76Cu;
            goto label_24c76c;
        }
    }
    ctx->pc = 0x24C758u;
    // 0x24c758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c75c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c760: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x24c760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x24c764: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x24C764u;
    {
        const bool branch_taken_0x24c764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c764) {
            ctx->pc = 0x24C7C4u;
            goto label_24c7c4;
        }
    }
    ctx->pc = 0x24C76Cu;
label_24c76c:
    // 0x24c76c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x24c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c770: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c770u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c774: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c778: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c77c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c77cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c780: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c784: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c788: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24c78c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c790: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24c790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24c794: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c798: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c79c: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C79Cu;
    {
        const bool branch_taken_0x24c79c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c79c) {
            ctx->pc = 0x24C7B0u;
            goto label_24c7b0;
        }
    }
    ctx->pc = 0x24C7A4u;
    // 0x24c7a4: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x24c7a8: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c7ac: 0xae430b18  sw          $v1, 0xB18($s2)
    ctx->pc = 0x24c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 3));
label_24c7b0:
    // 0x24c7b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c7b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c7b8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c7bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24C7BCu;
    {
        const bool branch_taken_0x24c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c7bc) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C7C4u;
label_24c7c4:
    // 0x24c7c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c7c8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c7cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c7d0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C7D0u;
    {
        const bool branch_taken_0x24c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c7d0) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C7D8u;
    // 0x24c7d8: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x24c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x24c7dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c7dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c7e0: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c7e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c7e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c7e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C7E8u;
    SET_GPR_U32(ctx, 31, 0x24C7F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C7E8u, 0x24C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7F0u;
label_24c7f0:
    // 0x24c7f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c7f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c7f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C7F4u;
    SET_GPR_U32(ctx, 31, 0x24C7FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C7F4u, 0x24C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7FCu;
label_24c7fc:
    // 0x24c7fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24c7fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c800: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c804: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c808: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C808u;
    {
        const bool branch_taken_0x24c808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c808) {
            ctx->pc = 0x24C818u;
            goto label_24c818;
        }
    }
    ctx->pc = 0x24C810u;
    // 0x24c810: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x24c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c814: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x24c814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_24c818:
    // 0x24c818: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x24c818u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24c81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c828: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24c828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24c82c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C834u;
}
