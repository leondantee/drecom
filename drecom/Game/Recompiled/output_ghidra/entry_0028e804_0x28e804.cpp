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

// Function: entry_0028e804
// Address: 0x28e804 - 0x28e854
void entry_0028e804_0x28e804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e804_0x28e804");
#endif

    switch (ctx->pc) {
        case 0x28e82cu: goto label_28e82c;
        case 0x28e848u: goto label_28e848;
        default: break;
    }

    ctx->pc = 0x28e804u;

    // 0x28e804: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x28e804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28e808: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x28e808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
    // 0x28e80c: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28e80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e814: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28E814u;
    {
        const bool branch_taken_0x28e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e814) {
            ctx->pc = 0x28E854u;
            return;
        }
    }
    ctx->pc = 0x28E81Cu;
    // 0x28e81c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x28e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e820: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x28e820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28e824: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E824u;
    SET_GPR_U32(ctx, 31, 0x28E82Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E824u, 0x28E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E82Cu;
label_28e82c:
    // 0x28e82c: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x28e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x28e830: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x28e830u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x28e834: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x28e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28e838: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e83c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x28e83cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28e840: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28E840u;
    SET_GPR_U32(ctx, 31, 0x28E848u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28E840u, 0x28E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E848u;
label_28e848:
    // 0x28e848: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28e848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e84c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x28E84Cu;
    {
        const bool branch_taken_0x28e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e84c) {
            ctx->pc = 0x28E96Cu;
            return;
        }
    }
    ctx->pc = 0x28E854u;
}
