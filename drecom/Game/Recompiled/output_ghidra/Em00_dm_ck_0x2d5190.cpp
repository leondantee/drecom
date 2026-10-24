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

// Function: Em00_dm_ck
// Address: 0x2d5190 - 0x2d53c4
void Em00_dm_ck_0x2d5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_dm_ck_0x2d5190");
#endif

    switch (ctx->pc) {
        case 0x2d51c8u: goto label_2d51c8;
        case 0x2d528cu: goto label_2d528c;
        case 0x2d5298u: goto label_2d5298;
        case 0x2d52f8u: goto label_2d52f8;
        default: break;
    }

    ctx->pc = 0x2d5190u;

    // 0x2d5190: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d5194: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2d5194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2d5198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d519c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d51a0: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2d51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2d51a4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d51a8: 0x246387c0  addiu       $v1, $v1, -0x7840
    ctx->pc = 0x2d51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936512));
    // 0x2d51ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d51acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d51b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2d51b0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3987C0u));
    // 0x2d51b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d51b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d51b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d51bc: 0x246787d0  addiu       $a3, $v1, -0x7830
    ctx->pc = 0x2d51bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x2d51c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2d51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d51c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d51c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
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
            goto label_2d53ac;
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
            goto label_2d52a0;
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
            goto label_2d52f8;
        }
    }
    ctx->pc = 0x2D52A0u;
label_2d52a0:
    // 0x2d52a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d52a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d52ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d52acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d52b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d52b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d52b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d52b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d52bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d52c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d52c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d52c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d52d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d52d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d52d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d52d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d52dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d52e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d52e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d52e8: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x2d52e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d52ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d52f0: 0xc0b4124  jal         func_2D0490
    ctx->pc = 0x2D52F0u;
    SET_GPR_U32(ctx, 31, 0x2D52F8u);
    ctx->pc = 0x2D0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0490u, 0x2D52F0u, 0x2D52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52F8u;
label_2d52f8:
    // 0x2d52f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d52fc: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x2d52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5300: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5304: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x2d5304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x2d5308: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d530c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2d530cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2d5310: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d5310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5314: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d5314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d5318: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D5318u;
    {
        const bool branch_taken_0x2d5318 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d5318) {
            ctx->pc = 0x2D5354u;
            goto label_2d5354;
        }
    }
    ctx->pc = 0x2D5320u;
    // 0x2d5320: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d5324: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5328: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d532c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5330: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d5330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5334: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5338: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d533c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5340: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5344: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5348: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d534c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D534Cu;
    {
        const bool branch_taken_0x2d534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d534c) {
            ctx->pc = 0x2D53ACu;
            goto label_2d53ac;
        }
    }
    ctx->pc = 0x2D5354u;
label_2d5354:
    // 0x2d5354: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5358: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2d5358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2d535c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d535cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5360: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2d5360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2d5364: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5364u;
    {
        const bool branch_taken_0x2d5364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5364) {
            ctx->pc = 0x2D5380u;
            goto label_2d5380;
        }
    }
    ctx->pc = 0x2D536Cu;
    // 0x2d536c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d5370: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5370u;
    {
        const bool branch_taken_0x2d5370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d5370) {
            ctx->pc = 0x2D5380u;
            goto label_2d5380;
        }
    }
    ctx->pc = 0x2D5378u;
    // 0x2d5378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D5378u;
    {
        const bool branch_taken_0x2d5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5378) {
            ctx->pc = 0x2D53ACu;
            goto label_2d53ac;
        }
    }
    ctx->pc = 0x2D5380u;
label_2d5380:
    // 0x2d5380: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d5380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5384: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5388: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d538c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5390: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d5390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5394: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d5394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d5398: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d539c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d53a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d53a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d53a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d53a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d53ac:
    // 0x2d53ac: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2d53acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d53b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d53b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d53b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d53b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d53b8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2d53b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d53bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D53BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D53BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D53C4u;
}
