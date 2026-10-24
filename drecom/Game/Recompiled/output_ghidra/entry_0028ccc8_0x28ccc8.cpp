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

// Function: entry_0028ccc8
// Address: 0x28ccc8 - 0x28cd90
void entry_0028ccc8_0x28ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ccc8_0x28ccc8");
#endif

    switch (ctx->pc) {
        case 0x28cce0u: goto label_28cce0;
        case 0x28cd50u: goto label_28cd50;
        default: break;
    }

    ctx->pc = 0x28ccc8u;

    // 0x28ccc8: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cccc: 0x30740002  andi        $s4, $v1, 0x2
    ctx->pc = 0x28ccccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28ccd0: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x28CCD0u;
    {
        const bool branch_taken_0x28ccd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccd0) {
            ctx->pc = 0x28CD90u;
            return;
        }
    }
    ctx->pc = 0x28CCD8u;
    // 0x28ccd8: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28CCD8u;
    SET_GPR_U32(ctx, 31, 0x28CCE0u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28CCD8u, 0x28CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CCE0u;
label_28cce0:
    // 0x28cce0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28cce0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28cce4: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x28CCE4u;
    {
        const bool branch_taken_0x28cce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cce4) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CCECu;
    // 0x28ccec: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ccf0: 0x2411fffd  addiu       $s1, $zero, -0x3
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ccf4: 0x713824  and         $a3, $v1, $s1
    ctx->pc = 0x28ccf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x28ccf8: 0xae07685c  sw          $a3, 0x685C($s0)
    ctx->pc = 0x28ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 7));
    // 0x28ccfc: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x28ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x28cd00: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28cd00u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd04: 0x82035de8  lb          $v1, 0x5DE8($s0)
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cd08: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x28cd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28cd0c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x28cd0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x28cd10: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28cd14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28cd18: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x28cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x28cd1c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x28cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cd20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28cd24: 0x346700a4  ori         $a3, $v1, 0xA4
    ctx->pc = 0x28cd24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
    // 0x28cd28: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x28cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
    // 0x28cd2c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28cd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cd30: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x28cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cd34: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28cd34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd38: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x28cd3c: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x28cd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x28cd40: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28cd40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28cd44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cd44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cd48: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CD48u;
    SET_GPR_U32(ctx, 31, 0x28CD50u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CD48u, 0x28CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD50u;
label_28cd50:
    // 0x28cd50: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x28cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x28cd54: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cd58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cd5c: 0x10640044  beq         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28CD5Cu;
    {
        const bool branch_taken_0x28cd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x28cd5c) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CD64u;
    // 0x28cd64: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cd68: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28cd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28cd6c: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28cd70: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28cd70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28cd74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cd78: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28cd7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28cd80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cd84: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28cd84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28cd88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x28CD88u;
    {
        const bool branch_taken_0x28cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd88) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CD90u;
}
