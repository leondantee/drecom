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
// Address: 0x1b6ef4 - 0x1b6f94
void caseD_1_0x1b6ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1b6ef4");
#endif

    switch (ctx->pc) {
        case 0x1b6f2cu: goto label_1b6f2c;
        case 0x1b6f3cu: goto label_1b6f3c;
        case 0x1b6f58u: goto label_1b6f58;
        case 0x1b6f68u: goto label_1b6f68;
        default: break;
    }

    ctx->pc = 0x1b6ef4u;

    // 0x1b6ef4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6ef8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b6ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b6efc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b6f00: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x1b6f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1b6f04: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1b6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1b6f08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6f0c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b6f10: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1b6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b6f14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b6f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b6f18: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b6f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b6f1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6f20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6f24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B6F24u;
    SET_GPR_U32(ctx, 31, 0x1B6F2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6F24u, 0x1B6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F2Cu;
label_1b6f2c:
    // 0x1b6f2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6f30: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f34: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B6F34u;
    SET_GPR_U32(ctx, 31, 0x1B6F3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B6F34u, 0x1B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F3Cu;
label_1b6f3c:
    // 0x1b6f3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b6f3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b6f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b6f44: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f48: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b6f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b6f4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b6f4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6f50: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B6F50u;
    SET_GPR_U32(ctx, 31, 0x1B6F58u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B6F50u, 0x1B6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F58u;
label_1b6f58:
    // 0x1b6f58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6f5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b6f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6f60: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B6F60u;
    SET_GPR_U32(ctx, 31, 0x1B6F68u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6F60u, 0x1B6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F68u;
label_1b6f68:
    // 0x1b6f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b6f6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b6f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b6f74: 0x106004f0  beqz        $v1, . + 4 + (0x4F0 << 2)
    ctx->pc = 0x1B6F74u;
    {
        const bool branch_taken_0x1b6f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f74) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B6F7Cu;
    // 0x1b6f7c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f80: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1b6f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1b6f84: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b6f88: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1b6f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6f8c: 0x100004ea  b           . + 4 + (0x4EA << 2)
    ctx->pc = 0x1B6F8Cu;
    {
        const bool branch_taken_0x1b6f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f8c) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B6F94u;
}
