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

// Function: entry_0020cd00
// Address: 0x20cd00 - 0x20cde8
void entry_0020cd00_0x20cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020cd00_0x20cd00");
#endif

    switch (ctx->pc) {
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd70u: goto label_20cd70;
        default: break;
    }

    ctx->pc = 0x20cd00u;

    // 0x20cd00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd08: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20cd0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20cd10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20cd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20cd14: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x20cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cd18: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x20cd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20cd1c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20CD1Cu;
    SET_GPR_U32(ctx, 31, 0x20CD24u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20CD1Cu, 0x20CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD24u;
label_20cd24:
    // 0x20cd24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20cd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20cd2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20cd30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20cd34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20CD34u;
    SET_GPR_U32(ctx, 31, 0x20CD3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20CD34u, 0x20CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD3Cu;
label_20cd3c:
    // 0x20cd3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd44: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20cd48: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20CD48u;
    SET_GPR_U32(ctx, 31, 0x20CD50u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20CD48u, 0x20CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD50u;
label_20cd50:
    // 0x20cd50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20cd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cd54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cd5c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20CD5Cu;
    SET_GPR_U32(ctx, 31, 0x20CD64u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20CD5Cu, 0x20CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD64u;
label_20cd64:
    // 0x20cd64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd68: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20CD68u;
    SET_GPR_U32(ctx, 31, 0x20CD70u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20CD68u, 0x20CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD70u;
label_20cd70:
    // 0x20cd70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd74: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20cd74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20cd78: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x20CD78u;
    {
        const bool branch_taken_0x20cd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd78) {
            ctx->pc = 0x20CDE8u;
            return;
        }
    }
    ctx->pc = 0x20CD80u;
    // 0x20cd80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cd84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20cd88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20cd8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd90: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cd94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cd98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20cd98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cd9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cda0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20cda0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cda4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20cda8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cdac: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20cdb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cdb4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x20cdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cdb8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x20cdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cdbc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x20cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20cdc0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x20cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x20cdc4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x20cdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x20cdc8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20cdcc: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x20cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x20cdd0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20cdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x20cdd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20cdd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cdd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cddc: 0xe4601b34  swc1        $f0, 0x1B34($v1)
    ctx->pc = 0x20cddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6964), bits); }
    // 0x20cde0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20CDE0u;
    {
        const bool branch_taken_0x20cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cde0) {
            ctx->pc = 0x20CDE8u;
            return;
        }
    }
    ctx->pc = 0x20CDE8u;
}
