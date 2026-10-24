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

// Function: entry_00165400
// Address: 0x165400 - 0x16547c
void entry_00165400_0x165400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165400_0x165400");
#endif

    switch (ctx->pc) {
        case 0x16545cu: goto label_16545c;
        default: break;
    }

    ctx->pc = 0x165400u;

    // 0x165400: 0x2e8200e0  sltiu       $v0, $s4, 0xE0
    ctx->pc = 0x165400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x165404: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x165404u;
    {
        const bool branch_taken_0x165404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165404) {
            ctx->pc = 0x16539Cu;
            return;
        }
    }
    ctx->pc = 0x16540Cu;
    // 0x16540c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x165410: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x165410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
    // 0x165414: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x165414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x165418: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x165418u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x385710u));
    // 0x16541c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x16541cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x385720u));
    // 0x165420: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x165420u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x385730u));
    // 0x165424: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x165424u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x385740u));
    // 0x165428: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x165428u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x16542c: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x16542cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x165430: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x165430u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x165434: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x165434u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x165438: 0x8ea300bc  lw          $v1, 0xBC($s5)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
    // 0x16543c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165440: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x165444: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165448: 0x27a40081  addiu       $a0, $sp, 0x81
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 129));
    // 0x16544c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165450: 0x2445eae8  addiu       $a1, $v0, -0x1518
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
    // 0x165454: 0xc046a48  jal         func_11A920
    ctx->pc = 0x165454u;
    SET_GPR_U32(ctx, 31, 0x16545Cu);
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x16545Cu;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16545Cu) { return; }
    ctx->pc = 0x16545Cu;
label_16545c:
    // 0x16545c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x165460: 0xa3a20089  sb          $v0, 0x89($sp)
    ctx->pc = 0x165460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x165464: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x165468: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x165468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16546c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x165470: 0x34468036  ori         $a2, $v0, 0x8036
    ctx->pc = 0x165470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32822);
    // 0x165474: 0xc05ea14  jal         func_17A850
    ctx->pc = 0x165474u;
    SET_GPR_U32(ctx, 31, 0x16547Cu);
    ctx->pc = 0x17A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A850u, 0x165474u, 0x16547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16547Cu;
}
