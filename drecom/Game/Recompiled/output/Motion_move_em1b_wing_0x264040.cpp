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

// Function: Motion_move_em1b_wing
// Address: 0x264040 - 0x264178
void Motion_move_em1b_wing_0x264040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_em1b_wing_0x264040");
#endif

    switch (ctx->pc) {
        case 0x264058u: goto label_264058;
        default: break;
    }

    ctx->pc = 0x264040u;

    // 0x264040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264044: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x264044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x264048: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x264048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x26404c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x26404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264050: 0xc098f08  jal         func_263C20
    ctx->pc = 0x264050u;
    SET_GPR_U32(ctx, 31, 0x264058u);
    ctx->pc = 0x263C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263C20u, 0x264050u, 0x264058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264058u;
label_264058:
    // 0x264058: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26405c: 0xa0401085  sb          $zero, 0x1085($v0)
    ctx->pc = 0x26405cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4229), (uint8_t)GPR_U32(ctx, 0));
    // 0x264060: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264064: 0x8c420ca0  lw          $v0, 0xCA0($v0)
    ctx->pc = 0x264064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3232)));
    // 0x264068: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x264068u;
    {
        const bool branch_taken_0x264068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264068) {
            ctx->pc = 0x26415Cu;
            goto label_26415c;
        }
    }
    ctx->pc = 0x264070u;
    // 0x264070: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264074: 0x94421080  lhu         $v0, 0x1080($v0)
    ctx->pc = 0x264074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4224)));
    // 0x264078: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x264078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26407c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x26407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x264080: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x264080u;
    {
        const bool branch_taken_0x264080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264080) {
            ctx->pc = 0x264134u;
            goto label_264134;
        }
    }
    ctx->pc = 0x264088u;
    // 0x264088: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26408c: 0x946210a0  lhu         $v0, 0x10A0($v1)
    ctx->pc = 0x26408cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x264090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264094: 0xa46210a0  sh          $v0, 0x10A0($v1)
    ctx->pc = 0x264094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4256), (uint16_t)GPR_U32(ctx, 2));
    // 0x264098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26409c: 0x944210a0  lhu         $v0, 0x10A0($v0)
    ctx->pc = 0x26409cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4256)));
    // 0x2640a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2640a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2640a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640a8: 0x944210a2  lhu         $v0, 0x10A2($v0)
    ctx->pc = 0x2640a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4258)));
    // 0x2640ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2640acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2640b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2640b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2640b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2640B4u;
    {
        const bool branch_taken_0x2640b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640b4) {
            ctx->pc = 0x2640D0u;
            goto label_2640d0;
        }
    }
    ctx->pc = 0x2640BCu;
    // 0x2640bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640c0: 0xa44010a0  sh          $zero, 0x10A0($v0)
    ctx->pc = 0x2640c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4256), (uint16_t)GPR_U32(ctx, 0));
    // 0x2640c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2640c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2640c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640cc: 0xa0431085  sb          $v1, 0x1085($v0)
    ctx->pc = 0x2640ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4229), (uint8_t)GPR_U32(ctx, 3));
label_2640d0:
    // 0x2640d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640d8: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x2640d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x2640dc: 0x2442107c  addiu       $v0, $v0, 0x107C
    ctx->pc = 0x2640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
    // 0x2640e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2640e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2640e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2640e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2640e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640ec: 0x944210a0  lhu         $v0, 0x10A0($v0)
    ctx->pc = 0x2640ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4256)));
    // 0x2640f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2640f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2640f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2640f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640fc: 0x8c420ca0  lw          $v0, 0xCA0($v0)
    ctx->pc = 0x2640fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3232)));
    // 0x264100: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264108: 0x24421078  addiu       $v0, $v0, 0x1078
    ctx->pc = 0x264108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
    // 0x26410c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264110: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x264114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264118: 0x94421078  lhu         $v0, 0x1078($v0)
    ctx->pc = 0x264118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x26411c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x264120: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264124: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264128: 0xac431098  sw          $v1, 0x1098($v0)
    ctx->pc = 0x264128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4248), GPR_U32(ctx, 3));
    // 0x26412c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26412Cu;
    {
        const bool branch_taken_0x26412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26412c) {
            ctx->pc = 0x26415Cu;
            goto label_26415c;
        }
    }
    ctx->pc = 0x264134u;
label_264134:
    // 0x264134: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x264134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26413c: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x264140: 0x2442107c  addiu       $v0, $v0, 0x107C
    ctx->pc = 0x264140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
    // 0x264144: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x264144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264148: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26414c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x26414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264150: 0x9062107a  lbu         $v0, 0x107A($v1)
    ctx->pc = 0x264150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4218)));
    // 0x264154: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x264158: 0xa062107a  sb          $v0, 0x107A($v1)
    ctx->pc = 0x264158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4218), (uint8_t)GPR_U32(ctx, 2));
label_26415c:
    // 0x26415c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x26415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264160: 0x90421085  lbu         $v0, 0x1085($v0)
    ctx->pc = 0x264160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4229)));
    // 0x264164: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x264164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x264168: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x264168u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26416c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x26416cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x264170: 0x3e00008  jr          $ra
    ctx->pc = 0x264170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264178u;
}
