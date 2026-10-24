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

// Function: entry_00149044
// Address: 0x149044 - 0x1490e8
void entry_00149044_0x149044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149044_0x149044");
#endif

    switch (ctx->pc) {
        case 0x149068u: goto label_149068;
        case 0x149080u: goto label_149080;
        case 0x149094u: goto label_149094;
        case 0x1490a8u: goto label_1490a8;
        case 0x1490b4u: goto label_1490b4;
        default: break;
    }

    ctx->pc = 0x149044u;

    // 0x149044: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x149048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x149048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14904c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14904cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x149050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149054: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149058: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x149058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14905c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x14905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149060: 0xc058f50  jal         func_163D40
    ctx->pc = 0x149060u;
    SET_GPR_U32(ctx, 31, 0x149068u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149060u, 0x149068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149068u;
label_149068:
    // 0x149068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14906c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x149070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x149078: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x149078u;
    SET_GPR_U32(ctx, 31, 0x149080u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x149078u, 0x149080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149080u;
label_149080:
    // 0x149080: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149084: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149088: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14908c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14908Cu;
    SET_GPR_U32(ctx, 31, 0x149094u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14908Cu, 0x149094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149094u;
label_149094:
    // 0x149094: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14909c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1490a0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1490A0u;
    SET_GPR_U32(ctx, 31, 0x1490A8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1490A0u, 0x1490A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490A8u;
label_1490a8:
    // 0x1490a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1490a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1490ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1490ACu;
    SET_GPR_U32(ctx, 31, 0x1490B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1490ACu, 0x1490B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490B4u;
label_1490b4:
    // 0x1490b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1490b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1490b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1490b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1490bc: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x1490BCu;
    {
        const bool branch_taken_0x1490bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490bc) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x1490C4u;
    // 0x1490c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1490c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1490c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1490c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1490cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1490ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1490d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1490d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1490d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1490d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1490d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1490d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1490dc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1490dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1490e0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x1490E0u;
    {
        const bool branch_taken_0x1490e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490e0) {
            ctx->pc = 0x149440u;
            return;
        }
    }
    ctx->pc = 0x1490E8u;
}
