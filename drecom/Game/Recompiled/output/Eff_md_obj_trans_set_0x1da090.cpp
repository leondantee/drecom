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

// Function: Eff_md_obj_trans_set
// Address: 0x1da090 - 0x1da314
void Eff_md_obj_trans_set_0x1da090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_obj_trans_set_0x1da090");
#endif

    switch (ctx->pc) {
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da180u: goto label_1da180;
        default: break;
    }

    ctx->pc = 0x1da090u;

    // 0x1da090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1da090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1da094: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1da094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1da098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da0a4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1da0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1da0a8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1da0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1da0ac: 0xa3a60078  sb          $a2, 0x78($sp)
    ctx->pc = 0x1da0acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x1da0b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1da0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1da0b4: 0x24429ba0  addiu       $v0, $v0, -0x6460
    ctx->pc = 0x1da0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941600));
    // 0x1da0b8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1da0bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1da0bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x389BA0u));
    // 0x1da0c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1da0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1da0c4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1da0c8: 0x24429bb0  addiu       $v0, $v0, -0x6450
    ctx->pc = 0x1da0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941616));
    // 0x1da0cc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1da0d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1da0d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x389BB0u));
    // 0x1da0d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1da0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1da0d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1da0dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da0e0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1da0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1da0e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1da0e8: 0xc095bac  jal         func_256EB0
    ctx->pc = 0x1DA0E8u;
    SET_GPR_U32(ctx, 31, 0x1DA0F0u);
    ctx->pc = 0x256EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256EB0u, 0x1DA0E8u, 0x1DA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA0F0u;
label_1da0f0:
    // 0x1da0f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1da0f4: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x1da0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1da0f8: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x1da0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1da0fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da100: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da104: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da10c: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x1da10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x1da110: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da114: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x1da114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x1da118: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da11c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da120: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da128: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da12c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da130: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1da134: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da138: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1da138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1da13c: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x1da13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1da140: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da144: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da148: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da150: 0xac4400e8  sw          $a0, 0xE8($v0)
    ctx->pc = 0x1da150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 4));
    // 0x1da154: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da158: 0xac4400e4  sw          $a0, 0xE4($v0)
    ctx->pc = 0x1da158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 4));
    // 0x1da15c: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1da15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1da160: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da164: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1da164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x1da168: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1da16c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da170: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x1da170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x1da174: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1da174u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da178: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DA178u;
    {
        const bool branch_taken_0x1da178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da178) {
            ctx->pc = 0x1DA1C8u;
            goto label_1da1c8;
        }
    }
    ctx->pc = 0x1DA180u;
label_1da180:
    // 0x1da180: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da184: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da188: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da18c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1da18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da190: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da194: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1da194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1da198: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1da19c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1a0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1da1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1da1a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da1a8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da1ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da1b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da1b8: 0xac4400f0  sw          $a0, 0xF0($v0)
    ctx->pc = 0x1da1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 4));
    // 0x1da1bc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1da1c0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1da1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1da1c4: 0x0  nop
    ctx->pc = 0x1da1c4u;
    // NOP
label_1da1c8:
    // 0x1da1c8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da1cc: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1da1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1da1d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DA1D0u;
    {
        const bool branch_taken_0x1da1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da1d0) {
            ctx->pc = 0x1DA180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da180;
        }
    }
    ctx->pc = 0x1DA1D8u;
    // 0x1da1d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1dc: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1da1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1da1e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1da1e4: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x1da1e8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da1ec: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da1f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da1f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da1f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da1fc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da200: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1da200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1da204: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da208: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da20c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1da210: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1da214: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da21c: 0xac20e080  sw          $zero, -0x1F80($at)
    ctx->pc = 0x1da21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E080u, _value); } while (0);
    // 0x1da220: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da224: 0xac20e084  sw          $zero, -0x1F7C($at)
    ctx->pc = 0x1da224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E084u, _value); } while (0);
    // 0x1da228: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da22c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da230: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da234: 0xac22e088  sw          $v0, -0x1F78($at)
    ctx->pc = 0x1da234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E088u, _value); } while (0);
    // 0x1da238: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da23c: 0x3442007c  ori         $v0, $v0, 0x7C
    ctx->pc = 0x1da23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)124);
    // 0x1da240: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da244: 0xac22e08c  sw          $v0, -0x1F74($at)
    ctx->pc = 0x1da244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E08Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E08Cu, _value); } while (0);
    // 0x1da248: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da24c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da250: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da25c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da260: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1da260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1da264: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1da268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da26c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da270: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1da274: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da278: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da27c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da280: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da288: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1da288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1da28c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1da28cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1da290: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da294: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da298: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da29c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da2a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da2a8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1da2ac: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x1da2b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da2b4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1da2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1da2b8: 0x12113c  dsll32      $v0, $s2, 4
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 4));
    // 0x1da2bc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da2c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da2c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da2c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da2cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1da2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1da2d0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1da2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1da2d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da2d8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1da2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1da2dc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da2e0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da2e4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1da2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1da2e8: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da2ec: 0x34420084  ori         $v0, $v0, 0x84
    ctx->pc = 0x1da2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x1da2f0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1da2f4: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1da2f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da2f8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1da2f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da308: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1da30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA314u;
}
