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

// Function: Em01_R0_move
// Address: 0x301900 - 0x3019f4
void Em01_R0_move_0x301900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R0_move_0x301900");
#endif

    switch (ctx->pc) {
        case 0x301900u: goto label_301900;
        case 0x301904u: goto label_301904;
        case 0x301908u: goto label_301908;
        case 0x30190cu: goto label_30190c;
        case 0x301910u: goto label_301910;
        case 0x301914u: goto label_301914;
        case 0x301918u: goto label_301918;
        case 0x30191cu: goto label_30191c;
        case 0x301920u: goto label_301920;
        case 0x301924u: goto label_301924;
        case 0x301928u: goto label_301928;
        case 0x30192cu: goto label_30192c;
        case 0x301930u: goto label_301930;
        case 0x301934u: goto label_301934;
        case 0x301938u: goto label_301938;
        case 0x30193cu: goto label_30193c;
        case 0x301940u: goto label_301940;
        case 0x301944u: goto label_301944;
        case 0x301948u: goto label_301948;
        case 0x30194cu: goto label_30194c;
        case 0x301950u: goto label_301950;
        case 0x301954u: goto label_301954;
        case 0x301958u: goto label_301958;
        case 0x30195cu: goto label_30195c;
        case 0x301960u: goto label_301960;
        case 0x301964u: goto label_301964;
        case 0x301968u: goto label_301968;
        case 0x30196cu: goto label_30196c;
        case 0x301970u: goto label_301970;
        case 0x301974u: goto label_301974;
        case 0x301978u: goto label_301978;
        case 0x30197cu: goto label_30197c;
        case 0x301980u: goto label_301980;
        case 0x301984u: goto label_301984;
        case 0x301988u: goto label_301988;
        case 0x30198cu: goto label_30198c;
        case 0x301990u: goto label_301990;
        case 0x301994u: goto label_301994;
        case 0x301998u: goto label_301998;
        case 0x30199cu: goto label_30199c;
        case 0x3019a0u: goto label_3019a0;
        case 0x3019a4u: goto label_3019a4;
        case 0x3019a8u: goto label_3019a8;
        case 0x3019acu: goto label_3019ac;
        case 0x3019b0u: goto label_3019b0;
        case 0x3019b4u: goto label_3019b4;
        case 0x3019b8u: goto label_3019b8;
        case 0x3019bcu: goto label_3019bc;
        case 0x3019c0u: goto label_3019c0;
        case 0x3019c4u: goto label_3019c4;
        case 0x3019c8u: goto label_3019c8;
        case 0x3019ccu: goto label_3019cc;
        case 0x3019d0u: goto label_3019d0;
        case 0x3019d4u: goto label_3019d4;
        case 0x3019d8u: goto label_3019d8;
        case 0x3019dcu: goto label_3019dc;
        case 0x3019e0u: goto label_3019e0;
        case 0x3019e4u: goto label_3019e4;
        case 0x3019e8u: goto label_3019e8;
        case 0x3019ecu: goto label_3019ec;
        case 0x3019f0u: goto label_3019f0;
        default: break;
    }

    ctx->pc = 0x301900u;

label_301900:
    // 0x301900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x301900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_301904:
    // 0x301904: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x301904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_301908:
    // 0x301908: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x301908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_30190c:
    // 0x30190c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301910:
    // 0x301910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301914:
    // 0x301914: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x301914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_301918:
    // 0x301918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x301918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30191c:
    // 0x30191c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30191cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_301920:
    // 0x301920: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x301920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_301924:
    // 0x301924: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x301924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
label_301928:
    // 0x301928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30192c:
    // 0x30192c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_301930:
    // 0x301930: 0x40f809  jalr        $v0
label_301934:
    if (ctx->pc == 0x301934u) {
        ctx->pc = 0x301938u;
        goto label_301938;
    }
    ctx->pc = 0x301930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301930u, 0x301938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301938u;
label_301938:
    // 0x301938: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x301938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30193c:
    // 0x30193c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301940:
    // 0x301940: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x301940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_301944:
    // 0x301944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x301944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_301948:
    // 0x301948: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x301948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30194c:
    // 0x30194c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_301950:
    // 0x301950: 0x24429390  addiu       $v0, $v0, -0x6C70
    ctx->pc = 0x301950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
label_301954:
    // 0x301954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x301954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_301958:
    // 0x301958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x301958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30195c:
    // 0x30195c: 0x40f809  jalr        $v0
label_301960:
    if (ctx->pc == 0x301960u) {
        ctx->pc = 0x301964u;
        goto label_301964;
    }
    ctx->pc = 0x30195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x301964u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30195Cu, 0x301964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x301964u;
label_301964:
    // 0x301964: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301968:
    // 0x301968: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x301968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
label_30196c:
    // 0x30196c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_301970:
    if (ctx->pc == 0x301970u) {
        ctx->pc = 0x301974u;
        goto label_301974;
    }
    ctx->pc = 0x30196Cu;
    {
        const bool branch_taken_0x30196c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30196c) {
            ctx->pc = 0x301984u;
            goto label_301984;
        }
    }
    ctx->pc = 0x301974u;
label_301974:
    // 0x301974: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x301974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301978:
    // 0x301978: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x301978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
label_30197c:
    // 0x30197c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_301980:
    // 0x301980: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x301980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
label_301984:
    // 0x301984: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301988:
    // 0x301988: 0x8c63136c  lw          $v1, 0x136C($v1)
    ctx->pc = 0x301988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4972)));
label_30198c:
    // 0x30198c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_301990:
    if (ctx->pc == 0x301990u) {
        ctx->pc = 0x301994u;
        goto label_301994;
    }
    ctx->pc = 0x30198Cu;
    {
        const bool branch_taken_0x30198c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30198c) {
            ctx->pc = 0x3019A4u;
            goto label_3019a4;
        }
    }
    ctx->pc = 0x301994u;
label_301994:
    // 0x301994: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x301994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_301998:
    // 0x301998: 0x8c83136c  lw          $v1, 0x136C($a0)
    ctx->pc = 0x301998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4972)));
label_30199c:
    // 0x30199c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3019a0:
    // 0x3019a0: 0xac83136c  sw          $v1, 0x136C($a0)
    ctx->pc = 0x3019a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4972), GPR_U32(ctx, 3));
label_3019a4:
    // 0x3019a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3019a8:
    // 0x3019a8: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x3019a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
label_3019ac:
    // 0x3019ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3019b0:
    if (ctx->pc == 0x3019B0u) {
        ctx->pc = 0x3019B4u;
        goto label_3019b4;
    }
    ctx->pc = 0x3019ACu;
    {
        const bool branch_taken_0x3019ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3019ac) {
            ctx->pc = 0x3019C4u;
            goto label_3019c4;
        }
    }
    ctx->pc = 0x3019B4u;
label_3019b4:
    // 0x3019b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3019b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3019b8:
    // 0x3019b8: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x3019b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
label_3019bc:
    // 0x3019bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3019bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3019c0:
    // 0x3019c0: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x3019c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
label_3019c4:
    // 0x3019c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3019c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3019c8:
    // 0x3019c8: 0x8c631348  lw          $v1, 0x1348($v1)
    ctx->pc = 0x3019c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
label_3019cc:
    // 0x3019cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3019d0:
    if (ctx->pc == 0x3019D0u) {
        ctx->pc = 0x3019D4u;
        goto label_3019d4;
    }
    ctx->pc = 0x3019CCu;
    {
        const bool branch_taken_0x3019cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3019cc) {
            ctx->pc = 0x3019E4u;
            goto label_3019e4;
        }
    }
    ctx->pc = 0x3019D4u;
label_3019d4:
    // 0x3019d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3019d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3019d8:
    // 0x3019d8: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x3019d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
label_3019dc:
    // 0x3019dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3019dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3019e0:
    // 0x3019e0: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x3019e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
label_3019e4:
    // 0x3019e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3019e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3019e8:
    // 0x3019e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3019e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3019ec:
    // 0x3019ec: 0x3e00008  jr          $ra
label_3019f0:
    if (ctx->pc == 0x3019F0u) {
        ctx->pc = 0x3019F4u;
        goto label_fallthrough_0x3019ec;
    }
    ctx->pc = 0x3019ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3019ec:
    ctx->pc = 0x3019F4u;
}
