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

// Function: entry_0016f558
// Address: 0x16f558 - 0x16f5b8
void entry_0016f558_0x16f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f558_0x16f558");
#endif

    switch (ctx->pc) {
        case 0x16f570u: goto label_16f570;
        case 0x16f5b4u: goto label_16f5b4;
        default: break;
    }

    ctx->pc = 0x16f558u;

    // 0x16f558: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16f55c: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x16f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f560: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f564: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x16f564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16f568: 0xc095384  jal         func_254E10
    ctx->pc = 0x16F568u;
    SET_GPR_U32(ctx, 31, 0x16F570u);
    ctx->pc = 0x254E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E10u, 0x16F568u, 0x16F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F570u;
label_16f570:
    // 0x16f570: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f570u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f574: 0x8ee20a68  lw          $v0, 0xA68($s7)
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x16f578: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x16f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16f57c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16f584: 0xaee20a68  sw          $v0, 0xA68($s7)
    ctx->pc = 0x16f584u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 2));
    // 0x16f588: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x16f588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x16f58c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x16f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x16f590: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F590u;
    {
        const bool branch_taken_0x16f590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16f590) {
            ctx->pc = 0x16F5B8u;
            return;
        }
    }
    ctx->pc = 0x16F598u;
    // 0x16f598: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f598u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f59c: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x16f5a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f5a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f5a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16f5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x16f5ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x16F5ACu;
    SET_GPR_U32(ctx, 31, 0x16F5B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x16F5ACu, 0x16F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F5B4u;
label_16f5b4:
    // 0x16f5b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x16f5b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16f5b8u;
}
