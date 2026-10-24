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

// Function: camera_area_check
// Address: 0x187b60 - 0x187cd0
void camera_area_check_0x187b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_area_check_0x187b60");
#endif

    switch (ctx->pc) {
        case 0x187bb4u: goto label_187bb4;
        case 0x187c6cu: goto label_187c6c;
        default: break;
    }

    ctx->pc = 0x187b60u;

    // 0x187b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187b64: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x187b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x187b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187b70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187b74: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x187b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x187b78: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x187b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x187b7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x187b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x187b80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x187b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187b84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x187b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x187b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187b8c: 0x0  nop
    ctx->pc = 0x187b8cu;
    // NOP
    // 0x187b90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x187b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x187b94: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x187b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x187b98: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187b9c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x187b9cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x187ba0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x187ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187ba4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x187ba4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x187ba8: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187bac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x187BACu;
    {
        const bool branch_taken_0x187bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bac) {
            ctx->pc = 0x187CA0u;
            goto label_187ca0;
        }
    }
    ctx->pc = 0x187BB4u;
label_187bb4:
    // 0x187bb4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187bb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187bbc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187bc0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187bc4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187bcc: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187bd0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x187bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187bd4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x187BD4u;
    {
        const bool branch_taken_0x187bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bd4) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187BDCu;
    // 0x187bdc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187be0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187be4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187be8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187bec: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187bf4: 0x8c420164  lw          $v0, 0x164($v0)
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x187bf8: 0x30510f00  andi        $s1, $v0, 0xF00
    ctx->pc = 0x187bf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x187bfc: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x187BFCu;
    {
        const bool branch_taken_0x187bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bfc) {
            ctx->pc = 0x187C48u;
            goto label_187c48;
        }
    }
    ctx->pc = 0x187C04u;
    // 0x187c04: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x187c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x187c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187C08u;
    {
        const bool branch_taken_0x187c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c08) {
            ctx->pc = 0x187C28u;
            goto label_187c28;
        }
    }
    ctx->pc = 0x187C10u;
    // 0x187c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187c14: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x187c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187c18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x187c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x187c1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187C1Cu;
    {
        const bool branch_taken_0x187c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c1c) {
            ctx->pc = 0x187C48u;
            goto label_187c48;
        }
    }
    ctx->pc = 0x187C24u;
    // 0x187c24: 0x0  nop
    ctx->pc = 0x187c24u;
    // NOP
label_187c28:
    // 0x187c28: 0x32220200  andi        $v0, $s1, 0x200
    ctx->pc = 0x187c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
    // 0x187c2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x187C2Cu;
    {
        const bool branch_taken_0x187c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c2c) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187C34u;
    // 0x187c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187c38: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x187c38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187c3c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x187c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x187c40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x187C40u;
    {
        const bool branch_taken_0x187c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c40) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187C48u;
label_187c48:
    // 0x187c48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x187c4c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187c54: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187c58: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187c5c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187c60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187c64: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x187C64u;
    SET_GPR_U32(ctx, 31, 0x187C6Cu);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x187C64u, 0x187C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C6Cu;
label_187c6c:
    // 0x187c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187C6Cu;
    {
        const bool branch_taken_0x187c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c6c) {
            ctx->pc = 0x187C88u;
            goto label_187c88;
        }
    }
    ctx->pc = 0x187C74u;
    // 0x187c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187c78: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187c80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187C80u;
    {
        const bool branch_taken_0x187c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c80) {
            ctx->pc = 0x187CB4u;
            goto label_187cb4;
        }
    }
    ctx->pc = 0x187C88u;
label_187c88:
    // 0x187c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x187c8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187c90: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C90u;
    {
        const bool branch_taken_0x187c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x187c90) {
            ctx->pc = 0x187CA0u;
            goto label_187ca0;
        }
    }
    ctx->pc = 0x187C98u;
    // 0x187c98: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x187c98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x187c9c: 0x0  nop
    ctx->pc = 0x187c9cu;
    // NOP
label_187ca0:
    // 0x187ca0: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x187ca0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x187ca4: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x187ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187ca8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x187CA8u;
    {
        const bool branch_taken_0x187ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ca8) {
            ctx->pc = 0x187BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187bb4;
        }
    }
    ctx->pc = 0x187CB0u;
    // 0x187cb0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x187cb0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_187cb4:
    // 0x187cb4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x187cb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187cb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187cb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187cbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187cbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187cc4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x187CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187CD0u;
}
