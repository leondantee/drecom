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

// Function: entry_001c0d40
// Address: 0x1c0d40 - 0x1c0ddc
void entry_001c0d40_0x1c0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d40_0x1c0d40");
#endif

    switch (ctx->pc) {
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d7cu: goto label_1c0d7c;
        default: break;
    }

    ctx->pc = 0x1c0d40u;

    // 0x1c0d40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0d44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0d48: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0D48u;
    SET_GPR_U32(ctx, 31, 0x1C0D50u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0D48u, 0x1C0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D50u;
label_1c0d50:
    // 0x1c0d50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d54: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0D54u;
    SET_GPR_U32(ctx, 31, 0x1C0D5Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0D54u, 0x1C0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D5Cu;
label_1c0d5c:
    // 0x1c0d5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0d60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0d68: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0D68u;
    SET_GPR_U32(ctx, 31, 0x1C0D70u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0D68u, 0x1C0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D70u;
label_1c0d70:
    // 0x1c0d70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0d74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0D74u;
    SET_GPR_U32(ctx, 31, 0x1C0D7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0D74u, 0x1C0D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D7Cu;
label_1c0d7c:
    // 0x1c0d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d80: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c0d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c0d84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c0d88: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c0d8c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C0D8Cu;
    {
        const bool branch_taken_0x1c0d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d8c) {
            ctx->pc = 0x1C0DFCu;
            return;
        }
    }
    ctx->pc = 0x1C0D94u;
    // 0x1c0d94: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0d98: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c0d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c0d9c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0D9Cu;
    {
        const bool branch_taken_0x1c0d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d9c) {
            ctx->pc = 0x1C0DFCu;
            return;
        }
    }
    ctx->pc = 0x1C0DA4u;
    // 0x1c0da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0da8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c0dac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c0db0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c0db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c0db4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0DB4u;
    {
        const bool branch_taken_0x1c0db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db4) {
            ctx->pc = 0x1C0DFCu;
            return;
        }
    }
    ctx->pc = 0x1C0DBCu;
    // 0x1c0dbc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dc0: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0DC4u;
    {
        const bool branch_taken_0x1c0dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dc4) {
            ctx->pc = 0x1C0DDCu;
            return;
        }
    }
    ctx->pc = 0x1C0DCCu;
    // 0x1c0dcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0dd0: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c0dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0DD4u;
    {
        const bool branch_taken_0x1c0dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0dd4) {
            ctx->pc = 0x1C0DE8u;
            return;
        }
    }
    ctx->pc = 0x1C0DDCu;
}
