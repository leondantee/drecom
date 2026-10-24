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

// Function: entry_003076a4
// Address: 0x3076a4 - 0x30774c
void entry_003076a4_0x3076a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003076a4_0x3076a4");
#endif

    switch (ctx->pc) {
        case 0x307710u: goto label_307710;
        case 0x30771cu: goto label_30771c;
        default: break;
    }

    ctx->pc = 0x3076a4u;

    // 0x3076a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076a8: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x3076a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x3076ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3076acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3076b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3076b4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3076b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3076b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3076b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076bc: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x3076bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x3076c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3076c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076c4: 0x8c441338  lw          $a0, 0x1338($v0)
    ctx->pc = 0x3076c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x3076c8: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x3076c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x3076cc: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3076CCu;
    {
        const bool branch_taken_0x3076cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3076cc) {
            ctx->pc = 0x3078B0u;
            return;
        }
    }
    ctx->pc = 0x3076D4u;
    // 0x3076d4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3076d8: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3076dc: 0x24430200  addiu       $v1, $v0, 0x200
    ctx->pc = 0x3076dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x3076e0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3076e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3076e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3076e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3076e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3076e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3076ec: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x3076ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x3076f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3076f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3076f4: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x3076f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3076f8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x3076f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3076fc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x307700: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x307700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307704: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x307704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x307708: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x307708u;
    SET_GPR_U32(ctx, 31, 0x307710u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x307708u, 0x307710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307710u;
label_307710:
    // 0x307710: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x307710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x307714: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x307714u;
    SET_GPR_U32(ctx, 31, 0x30771Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x307714u, 0x30771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30771Cu;
label_30771c:
    // 0x30771c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307720: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x307724: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x307724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307728: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x307728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30772c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30772Cu;
    {
        const bool branch_taken_0x30772c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30772c) {
            ctx->pc = 0x30774Cu;
            return;
        }
    }
    ctx->pc = 0x307734u;
    // 0x307734: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307738: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x307738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x30773c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x30773cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x307740: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x307740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x307744: 0x14830058  bne         $a0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x307744u;
    {
        const bool branch_taken_0x307744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x307744) {
            ctx->pc = 0x3078A8u;
            return;
        }
    }
    ctx->pc = 0x30774Cu;
}
