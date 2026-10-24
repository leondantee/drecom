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

// Function: caseD_11
// Address: 0x146ed4 - 0x146f48
void caseD_11_0x146ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x146ed4");
#endif

    switch (ctx->pc) {
        case 0x146ee4u: goto label_146ee4;
        case 0x146ef4u: goto label_146ef4;
        case 0x146f08u: goto label_146f08;
        case 0x146f14u: goto label_146f14;
        default: break;
    }

    ctx->pc = 0x146ed4u;

    // 0x146ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146ed8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146ed8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146edc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146EDCu;
    SET_GPR_U32(ctx, 31, 0x146EE4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146EDCu, 0x146EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EE4u;
label_146ee4:
    // 0x146ee4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146ee4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146ee8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146eec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146EECu;
    SET_GPR_U32(ctx, 31, 0x146EF4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146EECu, 0x146EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EF4u;
label_146ef4:
    // 0x146ef4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146ef8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146efc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146f00: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146F00u;
    SET_GPR_U32(ctx, 31, 0x146F08u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146F00u, 0x146F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F08u;
label_146f08:
    // 0x146f08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f0c: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x146F0Cu;
    SET_GPR_U32(ctx, 31, 0x146F14u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x146F0Cu, 0x146F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F14u;
label_146f14:
    // 0x146f14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146f14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146f18: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x146F18u;
    {
        const bool branch_taken_0x146f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f18) {
            ctx->pc = 0x146F54u;
            return;
        }
    }
    ctx->pc = 0x146F20u;
    // 0x146f20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f24: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x146f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x146f28: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x146f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x146f2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x146F2Cu;
    {
        const bool branch_taken_0x146f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f2c) {
            ctx->pc = 0x146F48u;
            return;
        }
    }
    ctx->pc = 0x146F34u;
    // 0x146f34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x146f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146f38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f3c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x146f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x146f40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146F40u;
    {
        const bool branch_taken_0x146f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f40) {
            ctx->pc = 0x146F54u;
            return;
        }
    }
    ctx->pc = 0x146F48u;
}
