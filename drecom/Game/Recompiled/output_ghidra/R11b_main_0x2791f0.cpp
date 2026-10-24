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

// Function: R11b_main
// Address: 0x2791f0 - 0x2792c8
void R11b_main_0x2791f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11b_main_0x2791f0");
#endif

    switch (ctx->pc) {
        case 0x279218u: goto label_279218;
        case 0x279270u: goto label_279270;
        default: break;
    }

    ctx->pc = 0x2791f0u;

    // 0x2791f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2791f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2791f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2791f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2791f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2791fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2791fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x279200: 0x2450bb48  addiu       $s0, $v0, -0x44B8
    ctx->pc = 0x279200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x279204: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x279204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279208: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x279208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27920c: 0x24451a98  addiu       $a1, $v0, 0x1A98
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x279210: 0xc0cf4b4  jal         func_33D2D0
    ctx->pc = 0x279210u;
    SET_GPR_U32(ctx, 31, 0x279218u);
    ctx->pc = 0x33D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2D0u, 0x279210u, 0x279218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279218u;
label_279218:
    // 0x279218: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279218u;
    {
        const bool branch_taken_0x279218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279218) {
            ctx->pc = 0x27925Cu;
            goto label_27925c;
        }
    }
    ctx->pc = 0x279220u;
    // 0x279220: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279224: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x279224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A98u));
    // 0x279228: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27922c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279230: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x279230u;
    {
        const bool branch_taken_0x279230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279230) {
            ctx->pc = 0x27925Cu;
            goto label_27925c;
        }
    }
    ctx->pc = 0x279238u;
    // 0x279238: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27923c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x27923cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A98u));
    // 0x279240: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x279240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x279244: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x279244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x279248: 0xa0621308  sb          $v0, 0x1308($v1)
    ctx->pc = 0x279248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4872), (uint8_t)GPR_U32(ctx, 2));
    // 0x27924c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x27924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x279250: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279254: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x279254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A98u));
    // 0x279258: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x279258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_27925c:
    // 0x27925c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279260: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x279264: 0x24451a98  addiu       $a1, $v0, 0x1A98
    ctx->pc = 0x279264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x279268: 0xc0cf4b4  jal         func_33D2D0
    ctx->pc = 0x279268u;
    SET_GPR_U32(ctx, 31, 0x279270u);
    ctx->pc = 0x33D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2D0u, 0x279268u, 0x279270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279270u;
label_279270:
    // 0x279270: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279270u;
    {
        const bool branch_taken_0x279270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279270) {
            ctx->pc = 0x2792B4u;
            goto label_2792b4;
        }
    }
    ctx->pc = 0x279278u;
    // 0x279278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27927c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x27927cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A98u));
    // 0x279280: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x279280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x279288u;
    {
        const bool branch_taken_0x279288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279288) {
            ctx->pc = 0x2792B4u;
            goto label_2792b4;
        }
    }
    ctx->pc = 0x279290u;
    // 0x279290: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279294: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x279294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A98u));
    // 0x279298: 0x90831308  lbu         $v1, 0x1308($a0)
    ctx->pc = 0x279298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x27929c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x27929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2792a0: 0xa0831308  sb          $v1, 0x1308($a0)
    ctx->pc = 0x2792a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x2792a4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2792a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2792a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2792ac: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x2792acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A98u));
    // 0x2792b0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2792b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
label_2792b4:
    // 0x2792b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2792b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2792b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2792b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2792bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2792bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2792c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2792C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2792C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2792C8u;
}
