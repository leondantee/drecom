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
// Address: 0x1bae68 - 0x1baf08
void caseD_1_0x1bae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1bae68");
#endif

    switch (ctx->pc) {
        case 0x1baea0u: goto label_1baea0;
        case 0x1baeb4u: goto label_1baeb4;
        case 0x1baeccu: goto label_1baecc;
        case 0x1baedcu: goto label_1baedc;
        default: break;
    }

    ctx->pc = 0x1bae68u;

    // 0x1bae68: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae6c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bae70: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1bae74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bae74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bae78: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bae78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bae7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bae80: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bae80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bae84: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bae88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bae8c: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bae8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bae90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bae94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bae98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BAE98u;
    SET_GPR_U32(ctx, 31, 0x1BAEA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BAE98u, 0x1BAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEA0u;
label_1baea0:
    // 0x1baea0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baea0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baea4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baea8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1baea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1baeac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BAEACu;
    SET_GPR_U32(ctx, 31, 0x1BAEB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BAEACu, 0x1BAEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEB4u;
label_1baeb4:
    // 0x1baeb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baeb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baeb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1baeb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1baebc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1baebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1baec4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BAEC4u;
    SET_GPR_U32(ctx, 31, 0x1BAECCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BAEC4u, 0x1BAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAECCu;
label_1baecc:
    // 0x1baecc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baeccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baed0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1baed0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1baed4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BAED4u;
    SET_GPR_U32(ctx, 31, 0x1BAEDCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BAED4u, 0x1BAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEDCu;
label_1baedc:
    // 0x1baedc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1baedcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baee0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baee4: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1baee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1baee8: 0x10600309  beqz        $v1, . + 4 + (0x309 << 2)
    ctx->pc = 0x1BAEE8u;
    {
        const bool branch_taken_0x1baee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baee8) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BAEF0u;
    // 0x1baef0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baef4: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1baef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1baef8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1baefc: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1baefcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1baf00: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x1BAF00u;
    {
        const bool branch_taken_0x1baf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf00) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BAF08u;
}
