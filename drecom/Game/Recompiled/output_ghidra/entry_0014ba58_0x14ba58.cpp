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

// Function: entry_0014ba58
// Address: 0x14ba58 - 0x14baec
void entry_0014ba58_0x14ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ba58_0x14ba58");
#endif

    switch (ctx->pc) {
        case 0x14ba64u: goto label_14ba64;
        case 0x14ba78u: goto label_14ba78;
        case 0x14ba90u: goto label_14ba90;
        case 0x14baa4u: goto label_14baa4;
        case 0x14bac4u: goto label_14bac4;
        default: break;
    }

    ctx->pc = 0x14ba58u;

    // 0x14ba58: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14BA5Cu;
    SET_GPR_U32(ctx, 31, 0x14BA64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14BA5Cu, 0x14BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA64u;
label_14ba64:
    // 0x14ba64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ba64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ba68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14ba70: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14BA70u;
    SET_GPR_U32(ctx, 31, 0x14BA78u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14BA70u, 0x14BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA78u;
label_14ba78:
    // 0x14ba78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba7c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x14ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ba84: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x14ba88: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x14BA88u;
    SET_GPR_U32(ctx, 31, 0x14BA90u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x14BA88u, 0x14BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA90u;
label_14ba90:
    // 0x14ba90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ba94: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ba94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14ba98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14ba98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ba9c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14BA9Cu;
    SET_GPR_U32(ctx, 31, 0x14BAA4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14BA9Cu, 0x14BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAA4u;
label_14baa4:
    // 0x14baa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14baa8: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x14baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14baac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x14bab0: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x14bab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x14bab4: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14BAB4u;
    {
        const bool branch_taken_0x14bab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bab4) {
            ctx->pc = 0x14BAECu;
            return;
        }
    }
    ctx->pc = 0x14BABCu;
    // 0x14babc: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14BABCu;
    SET_GPR_U32(ctx, 31, 0x14BAC4u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14BABCu, 0x14BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC4u;
label_14bac4:
    // 0x14bac4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BAC4u;
    {
        const bool branch_taken_0x14bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bac4) {
            ctx->pc = 0x14BAECu;
            return;
        }
    }
    ctx->pc = 0x14BACCu;
    // 0x14bacc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bad4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14bad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14badc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bae0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x14bae0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14bae4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BDA0u;
            return;
        }
    }
    ctx->pc = 0x14BAECu;
}
