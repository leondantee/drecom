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

// Function: entry_001c0580
// Address: 0x1c0580 - 0x1c061c
void entry_001c0580_0x1c0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0580_0x1c0580");
#endif

    switch (ctx->pc) {
        case 0x1c0590u: goto label_1c0590;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05bcu: goto label_1c05bc;
        default: break;
    }

    ctx->pc = 0x1c0580u;

    // 0x1c0580: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0588: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0588u;
    SET_GPR_U32(ctx, 31, 0x1C0590u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0588u, 0x1C0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0590u;
label_1c0590:
    // 0x1c0590: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0594: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0594u;
    SET_GPR_U32(ctx, 31, 0x1C059Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0594u, 0x1C059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C059Cu;
label_1c059c:
    // 0x1c059c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c059cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c05a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c05a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c05a8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C05A8u;
    SET_GPR_U32(ctx, 31, 0x1C05B0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C05A8u, 0x1C05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05B0u;
label_1c05b0:
    // 0x1c05b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c05b4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C05B4u;
    SET_GPR_U32(ctx, 31, 0x1C05BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C05B4u, 0x1C05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05BCu;
label_1c05bc:
    // 0x1c05bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05c0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c05c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c05c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c05c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c05c8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c05c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c05cc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C063Cu;
            return;
        }
    }
    ctx->pc = 0x1C05D4u;
    // 0x1c05d4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c05d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c05d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c05d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c05dc: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C05DCu;
    {
        const bool branch_taken_0x1c05dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05dc) {
            ctx->pc = 0x1C063Cu;
            return;
        }
    }
    ctx->pc = 0x1C05E4u;
    // 0x1c05e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c05e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c05ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c05f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c05f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c05f4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C05F4u;
    {
        const bool branch_taken_0x1c05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c05f4) {
            ctx->pc = 0x1C063Cu;
            return;
        }
    }
    ctx->pc = 0x1C05FCu;
    // 0x1c05fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0600: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c0600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c0604: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0604u;
    {
        const bool branch_taken_0x1c0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0604) {
            ctx->pc = 0x1C061Cu;
            return;
        }
    }
    ctx->pc = 0x1C060Cu;
    // 0x1c060c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0610: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c0610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0614u;
    {
        const bool branch_taken_0x1c0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0614) {
            ctx->pc = 0x1C0628u;
            return;
        }
    }
    ctx->pc = 0x1C061Cu;
}
