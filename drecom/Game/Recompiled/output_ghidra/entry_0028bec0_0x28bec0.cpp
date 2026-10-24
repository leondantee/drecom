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

// Function: entry_0028bec0
// Address: 0x28bec0 - 0x28bfbc
void entry_0028bec0_0x28bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bec0_0x28bec0");
#endif

    switch (ctx->pc) {
        case 0x28bf4cu: goto label_28bf4c;
        default: break;
    }

    ctx->pc = 0x28bec0u;

    // 0x28bec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28bec4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28becc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28beccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bed0: 0x34641015  ori         $a0, $v1, 0x1015
    ctx->pc = 0x28bed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4117);
    // 0x28bed4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bed8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x28bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x28bedc: 0x24150060  addiu       $s5, $zero, 0x60
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x28bee0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x28bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28bee4: 0xfc750008  sd          $s5, 0x8($v1)
    ctx->pc = 0x28bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 21));
    // 0x28bee8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28beec: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x28beecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x28bef0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bef4: 0x34751009  ori         $s5, $v1, 0x1009
    ctx->pc = 0x28bef4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x28bef8: 0xafd50004  sw          $s5, 0x4($fp)
    ctx->pc = 0x28bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 21));
    // 0x28befc: 0x24030730  addiu       $v1, $zero, 0x730
    ctx->pc = 0x28befcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x28bf00: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28bf04: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x28bf08: 0x3452000a  ori         $s2, $v0, 0xA
    ctx->pc = 0x28bf08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x28bf0c: 0x2431025  or          $v0, $s2, $v1
    ctx->pc = 0x28bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x28bf10: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x28bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x28bf14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28bf18: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28bf20: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x28bf20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x28bf24: 0x34c51009  ori         $a1, $a2, 0x1009
    ctx->pc = 0x28bf24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4105);
    // 0x28bf28: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x28bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf2c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x28bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x28bf30: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x28bf30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf34: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x28bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x28bf38: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28bf3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28bf3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28bf40: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x28bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x28bf44: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28BF44u;
    SET_GPR_U32(ctx, 31, 0x28BF4Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28BF44u, 0x28BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF4Cu;
label_28bf4c:
    // 0x28bf4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28bf4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28bf50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28bf54: 0x8fb50148  lw          $s5, 0x148($sp)
    ctx->pc = 0x28bf54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28bf58: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x28bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x28bf5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28bf60: 0x3463103f  ori         $v1, $v1, 0x103F
    ctx->pc = 0x28bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4159);
    // 0x28bf64: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28bf68: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x28bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x28bf6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf70: 0xa4202242  sh          $zero, 0x2242($at)
    ctx->pc = 0x28bf70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622242u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622242u, _value); } while (0);
    // 0x28bf74: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x28bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x28bf78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf7c: 0xa4232240  sh          $v1, 0x2240($at)
    ctx->pc = 0x28bf7cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622240u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622240u, _value); } while (0);
    // 0x28bf80: 0x241301cc  addiu       $s3, $zero, 0x1CC
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
    // 0x28bf84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf88: 0xa4332246  sh          $s3, 0x2246($at)
    ctx->pc = 0x28bf88u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x622246u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622246u, _value); } while (0);
    // 0x28bf8c: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x28bf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x28bf90: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bf94: 0xa4232244  sh          $v1, 0x2244($at)
    ctx->pc = 0x28bf94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622244u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622244u, _value); } while (0);
    // 0x28bf98: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28bf98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bf9c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28bf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28bfa0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFBCu;
            return;
        }
    }
    ctx->pc = 0x28BFA8u;
    // 0x28bfa8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28bfac: 0x2472e7d0  addiu       $s2, $v1, -0x1830
    ctx->pc = 0x28bfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x28bfb0: 0xafb20158  sw          $s2, 0x158($sp)
    ctx->pc = 0x28bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 18));
    // 0x28bfb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28BFB4u;
    {
        const bool branch_taken_0x28bfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bfb4) {
            ctx->pc = 0x28BFE8u;
            return;
        }
    }
    ctx->pc = 0x28BFBCu;
}
