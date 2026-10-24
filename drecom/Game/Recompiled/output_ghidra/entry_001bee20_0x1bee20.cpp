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

// Function: entry_001bee20
// Address: 0x1bee20 - 0x1beecc
void entry_001bee20_0x1bee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bee20_0x1bee20");
#endif

    switch (ctx->pc) {
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee4cu: goto label_1bee4c;
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee6cu: goto label_1bee6c;
        default: break;
    }

    ctx->pc = 0x1bee20u;

    // 0x1bee20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee24: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1bee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bee30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bee34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bee38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BEE38u;
    SET_GPR_U32(ctx, 31, 0x1BEE40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BEE38u, 0x1BEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BEE44u;
    SET_GPR_U32(ctx, 31, 0x1BEE4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BEE44u, 0x1BEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE4Cu;
label_1bee4c:
    // 0x1bee4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bee4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bee50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bee54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bee58: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BEE58u;
    SET_GPR_U32(ctx, 31, 0x1BEE60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BEE58u, 0x1BEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE60u;
label_1bee60:
    // 0x1bee60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bee64: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BEE64u;
    SET_GPR_U32(ctx, 31, 0x1BEE6Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BEE64u, 0x1BEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE6Cu;
label_1bee6c:
    // 0x1bee6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee70: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1bee70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1bee74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bee78: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bee78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bee7c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BEE7Cu;
    {
        const bool branch_taken_0x1bee7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee7c) {
            ctx->pc = 0x1BEEECu;
            return;
        }
    }
    ctx->pc = 0x1BEE84u;
    // 0x1bee84: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bee88: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bee8c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BEE8Cu;
    {
        const bool branch_taken_0x1bee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bee8c) {
            ctx->pc = 0x1BEEECu;
            return;
        }
    }
    ctx->pc = 0x1BEE94u;
    // 0x1bee94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bee98: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bee9c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1beea0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1beea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1beea4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEEA4u;
    {
        const bool branch_taken_0x1beea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beea4) {
            ctx->pc = 0x1BEEECu;
            return;
        }
    }
    ctx->pc = 0x1BEEACu;
    // 0x1beeac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beeb0: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1beeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1beeb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEEB4u;
    {
        const bool branch_taken_0x1beeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beeb4) {
            ctx->pc = 0x1BEECCu;
            return;
        }
    }
    ctx->pc = 0x1BEEBCu;
    // 0x1beebc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1beec0: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1beec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1beec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEEC4u;
    {
        const bool branch_taken_0x1beec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beec4) {
            ctx->pc = 0x1BEED8u;
            return;
        }
    }
    ctx->pc = 0x1BEECCu;
}
