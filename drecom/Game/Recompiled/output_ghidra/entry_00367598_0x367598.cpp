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

// Function: entry_00367598
// Address: 0x367598 - 0x36762c
void entry_00367598_0x367598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367598_0x367598");
#endif

    switch (ctx->pc) {
        case 0x3675bcu: goto label_3675bc;
        case 0x3675d4u: goto label_3675d4;
        case 0x3675e8u: goto label_3675e8;
        case 0x3675f8u: goto label_3675f8;
        case 0x367604u: goto label_367604;
        default: break;
    }

    ctx->pc = 0x367598u;

    // 0x367598: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36759c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675a0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3675a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3675a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3675a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3675a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3675ac: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x3675acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3675b0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x3675b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3675b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3675B4u;
    SET_GPR_U32(ctx, 31, 0x3675BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3675B4u, 0x3675BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675BCu;
label_3675bc:
    // 0x3675bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675c0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3675c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3675c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3675c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3675cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3675CCu;
    SET_GPR_U32(ctx, 31, 0x3675D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3675CCu, 0x3675D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675D4u;
label_3675d4:
    // 0x3675d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675dc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3675dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3675e0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3675E0u;
    SET_GPR_U32(ctx, 31, 0x3675E8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3675E0u, 0x3675E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675E8u;
label_3675e8:
    // 0x3675e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3675ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3675f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3675F0u;
    SET_GPR_U32(ctx, 31, 0x3675F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3675F0u, 0x3675F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675F8u;
label_3675f8:
    // 0x3675f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3675f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3675fc: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3675FCu;
    SET_GPR_U32(ctx, 31, 0x367604u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3675FCu, 0x367604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367604u;
label_367604:
    // 0x367604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367608: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36760c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x36760Cu;
    {
        const bool branch_taken_0x36760c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36760c) {
            ctx->pc = 0x3676E8u;
            return;
        }
    }
    ctx->pc = 0x367614u;
    // 0x367614: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367618: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x36761c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367620: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367624: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x367624u;
    {
        const bool branch_taken_0x367624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367624) {
            ctx->pc = 0x3676E8u;
            return;
        }
    }
    ctx->pc = 0x36762Cu;
}
