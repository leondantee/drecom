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

// Function: Pl_r1_evt_turn
// Address: 0x14c4a0 - 0x14c5f0
void Pl_r1_evt_turn_0x14c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_evt_turn_0x14c4a0");
#endif

    switch (ctx->pc) {
        case 0x14c50cu: goto label_14c50c;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c538u: goto label_14c538;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c558u: goto label_14c558;
        case 0x14c5a0u: goto label_14c5a0;
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5e0u: goto label_14c5e0;
        default: break;
    }

    ctx->pc = 0x14c4a0u;

    // 0x14c4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c4a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x14c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x14c4a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x14c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x14c4ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4b0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14c4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c4b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14c4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14c4b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c4bc: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x14C4BCu;
    {
        const bool branch_taken_0x14c4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c4bc) {
            ctx->pc = 0x14C5B0u;
            goto label_14c5b0;
        }
    }
    ctx->pc = 0x14C4C4u;
    // 0x14c4c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c4c8: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14C4C8u;
    {
        const bool branch_taken_0x14c4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c4c8) {
            ctx->pc = 0x14C580u;
            goto label_14c580;
        }
    }
    ctx->pc = 0x14C4D0u;
    // 0x14c4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c4d4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14C4D4u;
    {
        const bool branch_taken_0x14c4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14c4d4) {
            ctx->pc = 0x14C51Cu;
            goto label_14c51c;
        }
    }
    ctx->pc = 0x14C4DCu;
    // 0x14c4dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C4DCu;
    {
        const bool branch_taken_0x14c4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4dc) {
            ctx->pc = 0x14C4ECu;
            goto label_14c4ec;
        }
    }
    ctx->pc = 0x14C4E4u;
    // 0x14c4e4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14C4E4u;
    {
        const bool branch_taken_0x14c4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4e4) {
            ctx->pc = 0x14C5E0u;
            goto label_14c5e0;
        }
    }
    ctx->pc = 0x14C4ECu;
label_14c4ec:
    // 0x14c4ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c4f8: 0x24060aa3  addiu       $a2, $zero, 0xAA3
    ctx->pc = 0x14c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2723));
    // 0x14c4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c500: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c504: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C504u;
    SET_GPR_U32(ctx, 31, 0x14C50Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C504u, 0x14C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C50Cu;
label_14c50c:
    // 0x14c50c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c510: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c518: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c51c:
    // 0x14c51c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c520: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c520u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c524: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C524u;
    SET_GPR_U32(ctx, 31, 0x14C52Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C524u, 0x14C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C52Cu;
label_14c52c:
    // 0x14c52c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c530: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14C530u;
    SET_GPR_U32(ctx, 31, 0x14C538u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14C530u, 0x14C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C538u;
label_14c538:
    // 0x14c538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c53c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c540: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c544: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C544u;
    SET_GPR_U32(ctx, 31, 0x14C54Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C544u, 0x14C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C54Cu;
label_14c54c:
    // 0x14c54c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c54cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c550: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C550u;
    SET_GPR_U32(ctx, 31, 0x14C558u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C550u, 0x14C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C558u;
label_14c558:
    // 0x14c558: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c55c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c560: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C5E0u;
            goto label_14c5e0;
        }
    }
    ctx->pc = 0x14C568u;
    // 0x14c568: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c56c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x14c56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14c570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c574: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x14c574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14c578: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14C578u;
    {
        const bool branch_taken_0x14c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c578) {
            ctx->pc = 0x14C5E0u;
            goto label_14c5e0;
        }
    }
    ctx->pc = 0x14C580u;
label_14c580:
    // 0x14c580: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14c58c: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x14c590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14c590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14c594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14c598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14C598u;
    SET_GPR_U32(ctx, 31, 0x14C5A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14C598u, 0x14C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5A0u;
label_14c5a0:
    // 0x14c5a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14c5a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14c5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14c5ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14c5acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14c5b0:
    // 0x14c5b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c5b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C5B8u;
    SET_GPR_U32(ctx, 31, 0x14C5C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C5B8u, 0x14C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5C0u;
label_14c5c0:
    // 0x14c5c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c5c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c5c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c5cc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C5CCu;
    SET_GPR_U32(ctx, 31, 0x14C5D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C5CCu, 0x14C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5D4u;
label_14c5d4:
    // 0x14c5d4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14c5d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c5d8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14C5D8u;
    SET_GPR_U32(ctx, 31, 0x14C5E0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14C5D8u, 0x14C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5E0u;
label_14c5e0:
    // 0x14c5e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x14c5e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c5e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14c5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14C5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C5F0u;
}
