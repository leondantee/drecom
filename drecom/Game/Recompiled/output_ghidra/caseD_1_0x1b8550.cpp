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

// Function: caseD_1
// Address: 0x1b8550 - 0x1b85e8
void caseD_1_0x1b8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1b8550");
#endif

    switch (ctx->pc) {
        case 0x1b8588u: goto label_1b8588;
        case 0x1b8598u: goto label_1b8598;
        case 0x1b85b0u: goto label_1b85b0;
        case 0x1b85bcu: goto label_1b85bc;
        default: break;
    }

    ctx->pc = 0x1b8550u;

    // 0x1b8550: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8554: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b8558: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x1b855c: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x1b855cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1b8560: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b8560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b8564: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8568: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b856c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b856cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b8570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b8570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b8574: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b8574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b8578: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b857c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b857cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b8580: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B8580u;
    SET_GPR_U32(ctx, 31, 0x1B8588u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B8580u, 0x1B8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8588u;
label_1b8588:
    // 0x1b8588: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b8588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b858c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8590: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B8590u;
    SET_GPR_U32(ctx, 31, 0x1B8598u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B8590u, 0x1B8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8598u;
label_1b8598:
    // 0x1b8598: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b8598u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b859c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b859cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b85a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b85a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b85a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b85a8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B85A8u;
    SET_GPR_U32(ctx, 31, 0x1B85B0u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B85A8u, 0x1B85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85B0u;
label_1b85b0:
    // 0x1b85b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b85b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b85b4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B85B4u;
    SET_GPR_U32(ctx, 31, 0x1B85BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B85B4u, 0x1B85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85BCu;
label_1b85bc:
    // 0x1b85bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b85bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b85c0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b85c4: 0x90c409e7  lbu         $a0, 0x9E7($a2)
    ctx->pc = 0x1b85c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x1b85c8: 0x10800470  beqz        $a0, . + 4 + (0x470 << 2)
    ctx->pc = 0x1B85C8u;
    {
        const bool branch_taken_0x1b85c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b85c8) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B85D0u;
    // 0x1b85d0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b85d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b85d4: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1b85d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b85d8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b85dc: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1b85dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b85e0: 0x1000046a  b           . + 4 + (0x46A << 2)
    ctx->pc = 0x1B85E0u;
    {
        const bool branch_taken_0x1b85e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b85e0) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B85E8u;
}
