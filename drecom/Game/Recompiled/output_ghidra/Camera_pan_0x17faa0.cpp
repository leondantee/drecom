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

// Function: Camera_pan
// Address: 0x17faa0 - 0x17fbbc
void Camera_pan_0x17faa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_pan_0x17faa0");
#endif

    switch (ctx->pc) {
        case 0x17faecu: goto label_17faec;
        case 0x17fb9cu: goto label_17fb9c;
        case 0x17fba8u: goto label_17fba8;
        default: break;
    }

    ctx->pc = 0x17faa0u;

    // 0x17faa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17faa4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17faa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17faac: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x17faacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x17fab0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17fab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17fab4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x17fab4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17fab8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17fabc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17fabcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17fac0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17fac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fac4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17fac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fac8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17facc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fad0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fad4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17fad8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17fadc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17fadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fae0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fae4: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x17FAE4u;
    SET_GPR_U32(ctx, 31, 0x17FAECu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x17FAE4u, 0x17FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FAECu;
label_17faec:
    // 0x17faec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17faf0: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x17faf0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x17faf4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17faf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17faf8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17faf8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17fafc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fb04: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17fb08: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17fb0c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17fb10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fb14: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x17fb18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fb18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb1c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fb20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fb24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fb24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb2c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x17fb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x17fb30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb34: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x17fb38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FB38u;
    {
        const bool branch_taken_0x17fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fb38) {
            ctx->pc = 0x17FB4Cu;
            goto label_17fb4c;
        }
    }
    ctx->pc = 0x17FB40u;
    // 0x17fb40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fb44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb48: 0xac4300b8  sw          $v1, 0xB8($v0)
    ctx->pc = 0x17fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
label_17fb4c:
    // 0x17fb4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb54: 0x0  nop
    ctx->pc = 0x17fb54u;
    // NOP
    // 0x17fb58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17fb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17fb5c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fb60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fb60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb68: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fb6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fb70: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fb74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fb74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb7c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17fb80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fb84: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fb88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb8c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x17fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x17fb90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb94: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x17FB94u;
    SET_GPR_U32(ctx, 31, 0x17FB9Cu);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x17FB94u, 0x17FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB9Cu;
label_17fb9c:
    // 0x17fb9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fba0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x17FBA0u;
    SET_GPR_U32(ctx, 31, 0x17FBA8u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x17FBA0u, 0x17FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBA8u;
label_17fba8:
    // 0x17fba8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17fba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fbb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17fbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FBBCu;
}
