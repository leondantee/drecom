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

// Function: entry_002d45a0
// Address: 0x2d45a0 - 0x2d46b4
void entry_002d45a0_0x2d45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d45a0_0x2d45a0");
#endif

    switch (ctx->pc) {
        case 0x2d4600u: goto label_2d4600;
        case 0x2d4634u: goto label_2d4634;
        case 0x2d4668u: goto label_2d4668;
        case 0x2d469cu: goto label_2d469c;
        case 0x2d46acu: goto label_2d46ac;
        default: break;
    }

    ctx->pc = 0x2d45a0u;

    // 0x2d45a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d45a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d45a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d45ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d45acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d45b0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2D45B0u;
    {
        const bool branch_taken_0x2d45b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d45b0) {
            ctx->pc = 0x2D4798u;
            return;
        }
    }
    ctx->pc = 0x2D45B8u;
    // 0x2d45b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d45bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d45c0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D45C0u;
    {
        const bool branch_taken_0x2d45c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d45c0) {
            ctx->pc = 0x2D46B4u;
            return;
        }
    }
    ctx->pc = 0x2D45C8u;
    // 0x2d45c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d45cc: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x2d45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x2d45d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d45d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d45d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398770u));
    // 0x2d45d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d45dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d45e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45e8: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d45ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d45ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d45f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d45f4: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d45f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d45f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D45F8u;
    SET_GPR_U32(ctx, 31, 0x2D4600u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D45F8u, 0x2D4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4600u;
label_2d4600:
    // 0x2d4600: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4608: 0x0  nop
    ctx->pc = 0x2d4608u;
    // NOP
    // 0x2d460c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4610: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4614: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d461c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4620: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4624: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4628: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d462c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D462Cu;
    SET_GPR_U32(ctx, 31, 0x2D4634u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D462Cu, 0x2D4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4634u;
label_2d4634:
    // 0x2d4634: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d463c: 0x0  nop
    ctx->pc = 0x2d463cu;
    // NOP
    // 0x2d4640: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4648: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d464c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4650: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4654: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4658: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d465c: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d465cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d4660: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4660u;
    SET_GPR_U32(ctx, 31, 0x2D4668u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4660u, 0x2D4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4668u;
label_2d4668:
    // 0x2d4668: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d466c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d466cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4670: 0x0  nop
    ctx->pc = 0x2d4670u;
    // NOP
    // 0x2d4674: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d467c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4684: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4688: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d468c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4690: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d4694: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4694u;
    SET_GPR_U32(ctx, 31, 0x2D469Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4694u, 0x2D469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D469Cu;
label_2d469c:
    // 0x2d469c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d46a4: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D46A4u;
    SET_GPR_U32(ctx, 31, 0x2D46ACu);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D46A4u, 0x2D46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ACu;
label_2d46ac:
    // 0x2d46ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D46ACu;
    {
        const bool branch_taken_0x2d46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d46ac) {
            ctx->pc = 0x2D4798u;
            return;
        }
    }
    ctx->pc = 0x2D46B4u;
}
