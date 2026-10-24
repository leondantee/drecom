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

// Function: entry_0024cc9c
// Address: 0x24cc9c - 0x24cdd8
void entry_0024cc9c_0x24cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024cc9c_0x24cc9c");
#endif

    switch (ctx->pc) {
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccecu: goto label_24ccec;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd54u: goto label_24cd54;
        default: break;
    }

    ctx->pc = 0x24cc9cu;

    // 0x24cc9c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cca0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cca4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cca8: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x24cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x24ccac: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x24ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ccb0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x24CCB0u;
    SET_GPR_U32(ctx, 31, 0x24CCB8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x24CCB0u, 0x24CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCB8u;
label_24ccb8:
    // 0x24ccb8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x24ccbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24ccbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ccc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x24ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ccc4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x24ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24ccc8: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x24CCC8u;
    SET_GPR_U32(ctx, 31, 0x24CCD0u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x24CCD0u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24CCD0u) { return; }
    ctx->pc = 0x24CCD0u;
label_24ccd0:
    // 0x24ccd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccd8: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x24ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x24ccdc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x24ccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cce0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x24cce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24cce4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x24CCE4u;
    SET_GPR_U32(ctx, 31, 0x24CCECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x24CCE4u, 0x24CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCECu;
label_24ccec:
    // 0x24ccec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24ccf0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24ccf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ccf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ccf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ccfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cd00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cd04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cd08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cd0c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24cd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cd10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd14: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24cd18: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24cd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24cd1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24cd20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24cd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24cd24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24cd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24cd28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24cd2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24cd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cd30: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24cd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24cd34: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x24cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x24cd38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24cd38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cd3c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24cd3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24cd40: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24CD40u;
    SET_GPR_U32(ctx, 31, 0x24CD48u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24CD40u, 0x24CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD48u;
label_24cd48:
    // 0x24cd48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24cd48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cd4c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24CD4Cu;
    SET_GPR_U32(ctx, 31, 0x24CD54u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24CD4Cu, 0x24CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD54u;
label_24cd54:
    // 0x24cd54: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x24cd54u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24cd58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd5c: 0xac730108  sw          $s3, 0x108($v1)
    ctx->pc = 0x24cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 19));
    // 0x24cd60: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cd64: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24cd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cd68: 0x1663001b  bne         $s3, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x24CD68u;
    {
        const bool branch_taken_0x24cd68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cd68) {
            ctx->pc = 0x24CDD8u;
            return;
        }
    }
    ctx->pc = 0x24CD70u;
    // 0x24cd70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cd74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cd78: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24cd7c: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x24cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x24cd80: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd84: 0xae03020c  sw          $v1, 0x20C($s0)
    ctx->pc = 0x24cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 3));
    // 0x24cd88: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x24cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x24cd8c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd90: 0xae230b18  sw          $v1, 0xB18($s1)
    ctx->pc = 0x24cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2840), GPR_U32(ctx, 3));
    // 0x24cd94: 0x8e430b18  lw          $v1, 0xB18($s2)
    ctx->pc = 0x24cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2840)));
    // 0x24cd98: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24cd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24cd9c: 0xae430b18  sw          $v1, 0xB18($s2)
    ctx->pc = 0x24cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2840), GPR_U32(ctx, 3));
    // 0x24cda0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cda4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cda8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdac: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x24cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x24cdb0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cdb4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cdb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdbc: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x24cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
    // 0x24cdc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24cdc4: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x24cdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24cdc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24cdcc: 0xac64010c  sw          $a0, 0x10C($v1)
    ctx->pc = 0x24cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 4));
    // 0x24cdd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24CDD0u;
    {
        const bool branch_taken_0x24cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cdd0) {
            ctx->pc = 0x24CDE4u;
            return;
        }
    }
    ctx->pc = 0x24CDD8u;
}
