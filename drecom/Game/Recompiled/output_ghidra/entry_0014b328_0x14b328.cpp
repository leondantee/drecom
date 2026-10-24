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

// Function: entry_0014b328
// Address: 0x14b328 - 0x14b3bc
void entry_0014b328_0x14b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b328_0x14b328");
#endif

    switch (ctx->pc) {
        case 0x14b334u: goto label_14b334;
        case 0x14b348u: goto label_14b348;
        case 0x14b360u: goto label_14b360;
        case 0x14b374u: goto label_14b374;
        case 0x14b394u: goto label_14b394;
        default: break;
    }

    ctx->pc = 0x14b328u;

    // 0x14b328: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b32c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14B32Cu;
    SET_GPR_U32(ctx, 31, 0x14B334u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14B32Cu, 0x14B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B334u;
label_14b334:
    // 0x14b334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14b334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14b338: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b33c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b340: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14B340u;
    SET_GPR_U32(ctx, 31, 0x14B348u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14B340u, 0x14B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b34c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b350: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14b350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14b354: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14b358: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14B358u;
    SET_GPR_U32(ctx, 31, 0x14B360u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14B358u, 0x14B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B360u;
label_14b360:
    // 0x14b360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b364: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14b368: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14b368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14b36c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14B36Cu;
    SET_GPR_U32(ctx, 31, 0x14B374u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14B36Cu, 0x14B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B374u;
label_14b374:
    // 0x14b374: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b378: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14b378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14b37c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14b37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14b380: 0x28610051  slti        $at, $v1, 0x51
    ctx->pc = 0x14b380u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x14b384: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14B384u;
    {
        const bool branch_taken_0x14b384 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b384) {
            ctx->pc = 0x14B3BCu;
            return;
        }
    }
    ctx->pc = 0x14B38Cu;
    // 0x14b38c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14B38Cu;
    SET_GPR_U32(ctx, 31, 0x14B394u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14B38Cu, 0x14B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B394u;
label_14b394:
    // 0x14b394: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B394u;
    {
        const bool branch_taken_0x14b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b394) {
            ctx->pc = 0x14B3BCu;
            return;
        }
    }
    ctx->pc = 0x14B39Cu;
    // 0x14b39c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b3a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14b3a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14b3b0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b3b4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x14B3B4u;
    {
        const bool branch_taken_0x14b3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3b4) {
            ctx->pc = 0x14B670u;
            return;
        }
    }
    ctx->pc = 0x14B3BCu;
}
