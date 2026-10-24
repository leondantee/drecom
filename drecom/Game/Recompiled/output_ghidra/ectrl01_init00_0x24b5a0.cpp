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

// Function: ectrl01_init00
// Address: 0x24b5a0 - 0x24b6bc
void ectrl01_init00_0x24b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl01_init00_0x24b5a0");
#endif

    switch (ctx->pc) {
        case 0x24b5e8u: goto label_24b5e8;
        case 0x24b5f4u: goto label_24b5f4;
        case 0x24b630u: goto label_24b630;
        case 0x24b63cu: goto label_24b63c;
        case 0x24b678u: goto label_24b678;
        case 0x24b684u: goto label_24b684;
        default: break;
    }

    ctx->pc = 0x24b5a0u;

    // 0x24b5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b5a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x24b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x24b5a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24b5ac: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b5b0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24b5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b5b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b5b8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b5bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b5c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b5c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b5c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b5cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b5d0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24b5d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b5d4: 0x2404050b  addiu       $a0, $zero, 0x50B
    ctx->pc = 0x24b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x24b5d8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24b5dc: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24b5e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24B5E0u;
    SET_GPR_U32(ctx, 31, 0x24B5E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24B5E0u, 0x24B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5E8u;
label_24b5e8:
    // 0x24b5e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24b5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b5ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24B5ECu;
    SET_GPR_U32(ctx, 31, 0x24B5F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24B5ECu, 0x24B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5F4u;
label_24b5f4:
    // 0x24b5f4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b5f8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24b5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b5fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b600: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b604: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b608: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b60c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b610: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b614: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b618: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24b618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b61c: 0x2404050b  addiu       $a0, $zero, 0x50B
    ctx->pc = 0x24b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x24b620: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24b620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24b624: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24b628: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24B628u;
    SET_GPR_U32(ctx, 31, 0x24B630u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24B628u, 0x24B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B630u;
label_24b630:
    // 0x24b630: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24b630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b634: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24B634u;
    SET_GPR_U32(ctx, 31, 0x24B63Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24B634u, 0x24B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B63Cu;
label_24b63c:
    // 0x24b63c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x24b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b640: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x24b640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b644: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b648: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24b64c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b650: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b654: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b65c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b660: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24b660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b664: 0x2404050b  addiu       $a0, $zero, 0x50B
    ctx->pc = 0x24b664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x24b668: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24b66c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24b670: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24B670u;
    SET_GPR_U32(ctx, 31, 0x24B678u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24B670u, 0x24B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B678u;
label_24b678:
    // 0x24b678: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24b678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24b67c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24B67Cu;
    SET_GPR_U32(ctx, 31, 0x24B684u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24B67Cu, 0x24B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B684u;
label_24b684:
    // 0x24b684: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24b684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b688: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24b68c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x24b68cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24b690: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B690u;
    {
        const bool branch_taken_0x24b690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b690) {
            ctx->pc = 0x24B6ACu;
            goto label_24b6ac;
        }
    }
    ctx->pc = 0x24B698u;
    // 0x24b698: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b69c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b6a0: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x24b6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24b6a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b6a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_24b6ac:
    // 0x24b6ac: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x24b6acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B6BCu;
}
