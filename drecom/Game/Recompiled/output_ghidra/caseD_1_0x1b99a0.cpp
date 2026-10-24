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
// Address: 0x1b99a0 - 0x1b9a38
void caseD_1_0x1b99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1b99a0");
#endif

    switch (ctx->pc) {
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b99e8u: goto label_1b99e8;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9a0cu: goto label_1b9a0c;
        default: break;
    }

    ctx->pc = 0x1b99a0u;

    // 0x1b99a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b99a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b99a8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b99ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b99acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b99b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1b99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1b99b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b99b8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b99bc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b99bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b99c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b99c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b99c4: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b99c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b99c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b99cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b99ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b99d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B99D0u;
    SET_GPR_U32(ctx, 31, 0x1B99D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B99D0u, 0x1B99D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99D8u;
label_1b99d8:
    // 0x1b99d8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b99d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b99dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b99e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B99E0u;
    SET_GPR_U32(ctx, 31, 0x1B99E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B99E0u, 0x1B99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99E8u;
label_1b99e8:
    // 0x1b99e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b99e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b99ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b99ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b99f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b99f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b99f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b99f8: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B99F8u;
    SET_GPR_U32(ctx, 31, 0x1B9A00u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B99F8u, 0x1B9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9a04: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B9A04u;
    SET_GPR_U32(ctx, 31, 0x1B9A0Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9A04u, 0x1B9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A0Cu;
label_1b9a0c:
    // 0x1b9a0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9a0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9a10: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a14: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x1b9a14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x1b9a18: 0x10e0048e  beqz        $a3, . + 4 + (0x48E << 2)
    ctx->pc = 0x1B9A18u;
    {
        const bool branch_taken_0x1b9a18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a18) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1B9A20u;
    // 0x1b9a20: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9a24: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1b9a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1b9a28: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9a2c: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x1b9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b9a30: 0x10000488  b           . + 4 + (0x488 << 2)
    ctx->pc = 0x1B9A30u;
    {
        const bool branch_taken_0x1b9a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a30) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1B9A38u;
}
