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

// Function: entry_002d51c8
// Address: 0x2d51c8 - 0x2d52a0
void entry_002d51c8_0x2d51c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d51c8_0x2d51c8");
#endif

    switch (ctx->pc) {
        case 0x2d528cu: goto label_2d528c;
        case 0x2d5298u: goto label_2d5298;
        default: break;
    }

    ctx->pc = 0x2d51c8u;

label_2d51c8:
    // 0x2d51c8: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2d51c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d51cc: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2d51ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d51d0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2d51d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2d51d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d51d8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2d51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2d51dc: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x2d51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x2d51e0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2d51e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2d51e4: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D51E4u;
    {
        const bool branch_taken_0x2d51e4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2d51e4) {
            ctx->pc = 0x2D51C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d51c8;
        }
    }
    ctx->pc = 0x2D51ECu;
    // 0x2d51ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d51ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d51f0: 0x24638850  addiu       $v1, $v1, -0x77B0
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936656));
    // 0x2d51f4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d51f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d51f8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2d51f8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x398850u));
    // 0x2d51fc: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2d51fcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398860u));
    // 0x2d5200: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2d5200u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2d5204: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2d5204u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2d5208: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d520c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x2d520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x2d5210: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D5210u;
    {
        const bool branch_taken_0x2d5210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5210) {
            ctx->pc = 0x2D53ACu;
            return;
        }
    }
    ctx->pc = 0x2D5218u;
    // 0x2d5218: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d521c: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x2d521cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x2d5220: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5224: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D5224u;
    {
        const bool branch_taken_0x2d5224 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d5224) {
            ctx->pc = 0x2D52A0u;
            return;
        }
    }
    ctx->pc = 0x2D522Cu;
    // 0x2d522c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5230: 0x944211f4  lhu         $v0, 0x11F4($v0)
    ctx->pc = 0x2d5230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4596)));
    // 0x2d5234: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d5234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5238: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2d5238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d523c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2d523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2d5240: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x2d5240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d5244: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d5244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5248: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2d5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2d524c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2d524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2d5250: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d5250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d5254: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2d5254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5258: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d5258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d525c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5260: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d5264: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d5264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d5268: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d5268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d526c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2d526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2d5270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d5270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d5274: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2d5274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d5278: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x2d5278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d527c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d5280: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2d5280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2d5284: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2D5284u;
    SET_GPR_U32(ctx, 31, 0x2D528Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2D5284u, 0x2D528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D528Cu;
label_2d528c:
    // 0x2d528c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d528cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d5290: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2D5290u;
    SET_GPR_U32(ctx, 31, 0x2D5298u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2D5290u, 0x2D5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5298u;
label_2d5298:
    // 0x2d5298: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D5298u;
    {
        const bool branch_taken_0x2d5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5298) {
            ctx->pc = 0x2D52F8u;
            return;
        }
    }
    ctx->pc = 0x2D52A0u;
}
