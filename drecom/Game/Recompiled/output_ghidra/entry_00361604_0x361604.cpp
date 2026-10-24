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

// Function: entry_00361604
// Address: 0x361604 - 0x3616b4
void entry_00361604_0x361604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361604_0x361604");
#endif

    switch (ctx->pc) {
        case 0x361688u: goto label_361688;
        default: break;
    }

    ctx->pc = 0x361604u;

    // 0x361604: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361608: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x361608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x36160c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x36160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x361610: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x361610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x361614: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361618: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36161c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361620: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x361620u;
    {
        const bool branch_taken_0x361620 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x361620) {
            ctx->pc = 0x3616B4u;
            return;
        }
    }
    ctx->pc = 0x361628u;
    // 0x361628: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36162c: 0x8c62133c  lw          $v0, 0x133C($v1)
    ctx->pc = 0x36162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4924)));
    // 0x361630: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x361630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x361634: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x361634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x361638: 0xac62133c  sw          $v0, 0x133C($v1)
    ctx->pc = 0x361638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4924), GPR_U32(ctx, 2));
    // 0x36163c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361640: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x361640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x361644: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x361644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x361648: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x361648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36164c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36164cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x361650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361654: 0xa04011ec  sb          $zero, 0x11EC($v0)
    ctx->pc = 0x361654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 0));
    // 0x361658: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36165c: 0x8c4312a8  lw          $v1, 0x12A8($v0)
    ctx->pc = 0x36165cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x361660: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361664: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x361664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x361668: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x361668u;
    {
        const bool branch_taken_0x361668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361668) {
            ctx->pc = 0x3616B4u;
            return;
        }
    }
    ctx->pc = 0x361670u;
    // 0x361670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361674: 0x8c4212a8  lw          $v0, 0x12A8($v0)
    ctx->pc = 0x361674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4776)));
    // 0x361678: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x361678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x36167c: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x36167cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x361680: 0xc05dabc  jal         func_176AF0
    ctx->pc = 0x361680u;
    SET_GPR_U32(ctx, 31, 0x361688u);
    ctx->pc = 0x176AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176AF0u, 0x361680u, 0x361688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361688u;
label_361688:
    // 0x361688: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x361688u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36168c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x36168cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x361690: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x361690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x361694: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x361694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361698: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x361698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36169c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x3616a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3616a4: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x3616a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3616a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3616a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3616ac: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3616acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x3616b0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3616b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x3616b4u;
}
