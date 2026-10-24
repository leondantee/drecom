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

// Function: entry_0014cba0
// Address: 0x14cba0 - 0x14cc48
void entry_0014cba0_0x14cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cba0_0x14cba0");
#endif

    switch (ctx->pc) {
        case 0x14cbc4u: goto label_14cbc4;
        case 0x14cbdcu: goto label_14cbdc;
        case 0x14cbf0u: goto label_14cbf0;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc10u: goto label_14cc10;
        case 0x14cc30u: goto label_14cc30;
        default: break;
    }

    ctx->pc = 0x14cba0u;

    // 0x14cba0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cba4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cba8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x14cbac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14cbb0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14cbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14cbb4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x14cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cbb8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x14cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14cbbc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x14CBBCu;
    SET_GPR_U32(ctx, 31, 0x14CBC4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x14CBBCu, 0x14CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBC4u;
label_14cbc4:
    // 0x14cbc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x14cbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x14cbcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cbd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14CBD4u;
    SET_GPR_U32(ctx, 31, 0x14CBDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14CBD4u, 0x14CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBDCu;
label_14cbdc:
    // 0x14cbdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbe4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cbe8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x14CBE8u;
    SET_GPR_U32(ctx, 31, 0x14CBF0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x14CBE8u, 0x14CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CBF0u;
label_14cbf0:
    // 0x14cbf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14cbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14cbf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cbf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14cbf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cbfc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14CBFCu, 0x14CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC04u;
label_14cc04:
    // 0x14cc04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14cc04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14cc08: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14CC08u;
    SET_GPR_U32(ctx, 31, 0x14CC10u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14CC08u, 0x14CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc14: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x14cc14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x14cc18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14cc1c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14cc20: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CC20u;
    {
        const bool branch_taken_0x14cc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc20) {
            ctx->pc = 0x14CC48u;
            return;
        }
    }
    ctx->pc = 0x14CC28u;
    // 0x14cc28: 0xc0585dc  jal         func_161770
    ctx->pc = 0x14CC28u;
    SET_GPR_U32(ctx, 31, 0x14CC30u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x14CC28u, 0x14CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC30u;
label_14cc30:
    // 0x14cc30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14CC30u;
    {
        const bool branch_taken_0x14cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc30) {
            ctx->pc = 0x14CC48u;
            return;
        }
    }
    ctx->pc = 0x14CC38u;
    // 0x14cc38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14cc3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14cc40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14CC40u;
    {
        const bool branch_taken_0x14cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc40) {
            ctx->pc = 0x14CC98u;
            return;
        }
    }
    ctx->pc = 0x14CC48u;
}
