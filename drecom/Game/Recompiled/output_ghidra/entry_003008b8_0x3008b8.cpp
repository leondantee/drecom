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

// Function: entry_003008b8
// Address: 0x3008b8 - 0x3009e4
void entry_003008b8_0x3008b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003008b8_0x3008b8");
#endif

    switch (ctx->pc) {
        case 0x3008e4u: goto label_3008e4;
        case 0x300940u: goto label_300940;
        case 0x30094cu: goto label_30094c;
        case 0x300994u: goto label_300994;
        case 0x3009a0u: goto label_3009a0;
        case 0x3009d8u: goto label_3009d8;
        default: break;
    }

    ctx->pc = 0x3008b8u;

label_3008b8:
    // 0x3008b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3008b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008bc:
    // 0x3008bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3008bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008c0:
    // 0x3008c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3008c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3008c4:
    // 0x3008c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3008c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3008c8:
    // 0x3008c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3008c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3008cc:
    // 0x3008cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_3008d0:
    // 0x3008d0: 0x24429410  addiu       $v0, $v0, -0x6BF0
    ctx->pc = 0x3008d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939664));
label_3008d4:
    // 0x3008d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3008d8:
    // 0x3008d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3008d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3008dc:
    // 0x3008dc: 0x40f809  jalr        $v0
label_3008e0:
    if (ctx->pc == 0x3008E0u) {
        ctx->pc = 0x3008E4u;
        goto label_3008e4;
    }
    ctx->pc = 0x3008DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3008E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008DCu, 0x3008E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3008E4u;
label_3008e4:
    // 0x3008e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3008e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3008e8:
    // 0x3008e8: 0x8c621344  lw          $v0, 0x1344($v1)
    ctx->pc = 0x3008e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
label_3008ec:
    // 0x3008ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3008f0:
    // 0x3008f0: 0xac621344  sw          $v0, 0x1344($v1)
    ctx->pc = 0x3008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4932), GPR_U32(ctx, 2));
label_3008f4:
    // 0x3008f4: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x3008f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3008f8:
    // 0x3008f8: 0x1420003a  bnez        $at, . + 4 + (0x3A << 2)
label_3008fc:
    if (ctx->pc == 0x3008FCu) {
        ctx->pc = 0x300900u;
        goto label_300900;
    }
    ctx->pc = 0x3008F8u;
    {
        const bool branch_taken_0x3008f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008f8) {
            ctx->pc = 0x3009E4u;
            return;
        }
    }
    ctx->pc = 0x300900u;
label_300900:
    // 0x300900: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300904:
    // 0x300904: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x300904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
label_300908:
    // 0x300908: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30090c:
    // 0x30090c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_300910:
    // 0x300910: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x300910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_300914:
    // 0x300914: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_300918:
    // 0x300918: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x300918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30091c:
    // 0x30091c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_300920:
    // 0x300920: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_300924:
    // 0x300924: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_300928:
    // 0x300928: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x300928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30092c:
    // 0x30092c: 0x24042501  addiu       $a0, $zero, 0x2501
    ctx->pc = 0x30092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9473));
label_300930:
    // 0x300930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x300930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_300934:
    // 0x300934: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x300934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_300938:
    // 0x300938: 0xc062f5c  jal         func_18BD70
label_30093c:
    if (ctx->pc == 0x30093Cu) {
        ctx->pc = 0x300940u;
        goto label_300940;
    }
    ctx->pc = 0x300938u;
    SET_GPR_U32(ctx, 31, 0x300940u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x300938u, 0x300940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300940u;
label_300940:
    // 0x300940: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300940u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_300944:
    // 0x300944: 0xc0630a8  jal         func_18C2A0
label_300948:
    if (ctx->pc == 0x300948u) {
        ctx->pc = 0x30094Cu;
        goto label_30094c;
    }
    ctx->pc = 0x300944u;
    SET_GPR_U32(ctx, 31, 0x30094Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300944u, 0x30094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30094Cu;
label_30094c:
    // 0x30094c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_300950:
    // 0x300950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_300954:
    // 0x300954: 0x0  nop
    ctx->pc = 0x300954u;
    // NOP
label_300958:
    // 0x300958: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x300958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_30095c:
    // 0x30095c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x30095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300960:
    // 0x300960: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_300964:
    // 0x300964: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x300964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_300968:
    // 0x300968: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x300968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_30096c:
    // 0x30096c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30096cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_300970:
    // 0x300970: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x300970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_300974:
    // 0x300974: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x300974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_300978:
    // 0x300978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30097c:
    // 0x30097c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30097cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_300980:
    // 0x300980: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x300980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
label_300984:
    // 0x300984: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x300984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_300988:
    // 0x300988: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x300988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_30098c:
    // 0x30098c: 0xc062f5c  jal         func_18BD70
label_300990:
    if (ctx->pc == 0x300990u) {
        ctx->pc = 0x300994u;
        goto label_300994;
    }
    ctx->pc = 0x30098Cu;
    SET_GPR_U32(ctx, 31, 0x300994u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30098Cu, 0x300994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300994u;
label_300994:
    // 0x300994: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x300994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_300998:
    // 0x300998: 0xc0630a8  jal         func_18C2A0
label_30099c:
    if (ctx->pc == 0x30099Cu) {
        ctx->pc = 0x3009A0u;
        goto label_3009a0;
    }
    ctx->pc = 0x300998u;
    SET_GPR_U32(ctx, 31, 0x3009A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300998u, 0x3009A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009A0u;
label_3009a0:
    // 0x3009a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3009a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3009a4:
    // 0x3009a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3009a8:
    // 0x3009a8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x3009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_3009ac:
    // 0x3009ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3009acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_3009b0:
    // 0x3009b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3009b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3009b4:
    // 0x3009b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3009b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3009b8:
    // 0x3009b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3009b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3009bc:
    // 0x3009bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3009bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3009c0:
    // 0x3009c0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3009c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3009c4:
    // 0x3009c4: 0x24042500  addiu       $a0, $zero, 0x2500
    ctx->pc = 0x3009c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
label_3009c8:
    // 0x3009c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3009c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3009cc:
    // 0x3009cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3009d0:
    // 0x3009d0: 0xc062f5c  jal         func_18BD70
label_3009d4:
    if (ctx->pc == 0x3009D4u) {
        ctx->pc = 0x3009D8u;
        goto label_3009d8;
    }
    ctx->pc = 0x3009D0u;
    SET_GPR_U32(ctx, 31, 0x3009D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3009D0u, 0x3009D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009D8u;
label_3009d8:
    // 0x3009d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3009d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3009dc:
    // 0x3009dc: 0xc0630a8  jal         func_18C2A0
label_3009e0:
    if (ctx->pc == 0x3009E0u) {
        ctx->pc = 0x3009E4u;
        goto label_fallthrough_0x3009dc;
    }
    ctx->pc = 0x3009DCu;
    SET_GPR_U32(ctx, 31, 0x3009E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3009DCu, 0x3009E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3009dc:
    ctx->pc = 0x3009E4u;
}
