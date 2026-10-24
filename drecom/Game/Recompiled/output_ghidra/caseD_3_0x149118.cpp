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

// Function: caseD_3
// Address: 0x149118 - 0x1491c0
void caseD_3_0x149118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x149118");
#endif

    switch (ctx->pc) {
        case 0x14913cu: goto label_14913c;
        case 0x149154u: goto label_149154;
        case 0x149180u: goto label_149180;
        case 0x1491b0u: goto label_1491b0;
        default: break;
    }

    ctx->pc = 0x149118u;

    // 0x149118: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x14911c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x149120: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x149120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x149124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149128: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14912c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x14912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149130: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x149130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x149134: 0xc058f50  jal         func_163D40
    ctx->pc = 0x149134u;
    SET_GPR_U32(ctx, 31, 0x14913Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x149134u, 0x14913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14913Cu;
label_14913c:
    // 0x14913c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149140: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x149140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x149144: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149148: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x149148u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14914c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14914Cu;
    SET_GPR_U32(ctx, 31, 0x149154u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14914Cu, 0x149154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149154u;
label_149154:
    // 0x149154: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149158: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x149158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14915c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149160: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x149160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x149168: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x14916c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149170: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149174: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x149174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x149178: 0xc05cd58  jal         func_173560
    ctx->pc = 0x149178u;
    SET_GPR_U32(ctx, 31, 0x149180u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x149178u, 0x149180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149180u;
label_149180:
    // 0x149180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149184: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x149184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x149188: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x149188u;
    {
        const bool branch_taken_0x149188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149188) {
            ctx->pc = 0x1491C0u;
            return;
        }
    }
    ctx->pc = 0x149190u;
    // 0x149190: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x149194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149198: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14919c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x14919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1491a0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1491a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1491a4: 0x24461b40  addiu       $a2, $v0, 0x1B40
    ctx->pc = 0x1491a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1491a8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1491A8u;
    SET_GPR_U32(ctx, 31, 0x1491B0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1491A8u, 0x1491B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1491B0u;
label_1491b0:
    // 0x1491b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1491b4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1491b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1491bc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1491bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1491c0u;
}
