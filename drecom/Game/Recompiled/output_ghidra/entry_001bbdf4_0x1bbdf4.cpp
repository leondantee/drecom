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

// Function: entry_001bbdf4
// Address: 0x1bbdf4 - 0x1bbea8
void entry_001bbdf4_0x1bbdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbdf4_0x1bbdf4");
#endif

    switch (ctx->pc) {
        case 0x1bbe1cu: goto label_1bbe1c;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe5cu: goto label_1bbe5c;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe7cu: goto label_1bbe7c;
        default: break;
    }

    ctx->pc = 0x1bbdf4u;

    // 0x1bbdf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbdf8: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bbdfc: 0x34650100  ori         $a1, $v1, 0x100
    ctx->pc = 0x1bbdfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bbe00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbe04: 0xac251a64  sw          $a1, 0x1A64($at)
    ctx->pc = 0x1bbe04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bbe08: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe0c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1bbe0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1bbe10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bbe10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bbe14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BBE14u;
    SET_GPR_U32(ctx, 31, 0x1BBE1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BBE14u, 0x1BBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE1Cu;
label_1bbe1c:
    // 0x1bbe1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe20: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe24: 0x3c083e49  lui         $t0, 0x3E49
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15945 << 16));
    // 0x1bbe28: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x1bbe28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x1bbe2c: 0x44877000  mtc1        $a3, $f14
    ctx->pc = 0x1bbe2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bbe30: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bbe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bbe34: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1bbe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bbe38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BBE38u;
    SET_GPR_U32(ctx, 31, 0x1BBE40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BBE38u, 0x1BBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE40u;
label_1bbe40:
    // 0x1bbe40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bbe44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bbe48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe50: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bbe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bbe54: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BBE54u;
    SET_GPR_U32(ctx, 31, 0x1BBE5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BBE54u, 0x1BBE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE5Cu;
label_1bbe5c:
    // 0x1bbe5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bbe5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbe60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bbe64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bbe68: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BBE68u;
    SET_GPR_U32(ctx, 31, 0x1BBE70u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BBE68u, 0x1BBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE70u;
label_1bbe70:
    // 0x1bbe70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bbe70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bbe74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BBE74u;
    SET_GPR_U32(ctx, 31, 0x1BBE7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BBE74u, 0x1BBE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE7Cu;
label_1bbe7c:
    // 0x1bbe7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbe7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bbe80: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe84: 0x90c309e7  lbu         $v1, 0x9E7($a2)
    ctx->pc = 0x1bbe84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x1bbe88: 0x106004a8  beqz        $v1, . + 4 + (0x4A8 << 2)
    ctx->pc = 0x1BBE88u;
    {
        const bool branch_taken_0x1bbe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe88) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BBE90u;
    // 0x1bbe90: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbe94: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1bbe94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bbe98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bbe9c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbea0: 0x100004a2  b           . + 4 + (0x4A2 << 2)
    ctx->pc = 0x1BBEA0u;
    {
        const bool branch_taken_0x1bbea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbea0) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BBEA8u;
}
