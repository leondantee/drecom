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

// Function: entry_0020f628
// Address: 0x20f628 - 0x20f694
void entry_0020f628_0x20f628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f628_0x20f628");
#endif

    switch (ctx->pc) {
        case 0x20f690u: goto label_20f690;
        default: break;
    }

    ctx->pc = 0x20f628u;

    // 0x20f628: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f62c: 0x85431278  lh          $v1, 0x1278($t2)
    ctx->pc = 0x20f62cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x20f630: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x20f630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20f634: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x20f634u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x20f638: 0x2921026d  slti        $at, $t1, 0x26D
    ctx->pc = 0x20f638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)621) ? 1 : 0);
    // 0x20f63c: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x20F63Cu;
    {
        const bool branch_taken_0x20f63c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f63c) {
            ctx->pc = 0x20F694u;
            return;
        }
    }
    ctx->pc = 0x20F644u;
    // 0x20f644: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f648: 0x914309e7  lbu         $v1, 0x9E7($t2)
    ctx->pc = 0x20f648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2535)));
    // 0x20f64c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x20F64Cu;
    {
        const bool branch_taken_0x20f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f64c) {
            ctx->pc = 0x20F694u;
            return;
        }
    }
    ctx->pc = 0x20F654u;
    // 0x20f654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f658: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f65c: 0xac259540  sw          $a1, -0x6AC0($at)
    ctx->pc = 0x20f65cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x619540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619540u, _value); } while (0);
    // 0x20f660: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f664: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x20f664u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f668: 0x71602628  paddub      $a0, $t3, $zero
    ctx->pc = 0x20f668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x20f66c: 0x8c630368  lw          $v1, 0x368($v1)
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x20f670: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20f670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20f674: 0x2409780a  addiu       $t1, $zero, 0x780A
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x20f678: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x20f678u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20f67c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x20f67cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f680: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20f680u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20f684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20f688: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20F688u;
    SET_GPR_U32(ctx, 31, 0x20F690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20F688u, 0x20F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F690u;
label_20f690:
    // 0x20f690: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x20f690u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20f694u;
}
