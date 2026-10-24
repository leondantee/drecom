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

// Function: entry_001bda44
// Address: 0x1bda44 - 0x1bdaf0
void entry_001bda44_0x1bda44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bda44_0x1bda44");
#endif

    switch (ctx->pc) {
        case 0x1bda68u: goto label_1bda68;
        case 0x1bda8cu: goto label_1bda8c;
        case 0x1bdaa8u: goto label_1bdaa8;
        case 0x1bdabcu: goto label_1bdabc;
        case 0x1bdac8u: goto label_1bdac8;
        default: break;
    }

    ctx->pc = 0x1bda44u;

    // 0x1bda44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda48: 0x8c251a64  lw          $a1, 0x1A64($at)
    ctx->pc = 0x1bda48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bda4c: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x1bda4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1bda50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bda50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bda54: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bda54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bda58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bda5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bda60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDA60u;
    SET_GPR_U32(ctx, 31, 0x1BDA68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDA60u, 0x1BDA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA68u;
label_1bda68:
    // 0x1bda68: 0x3c063e49  lui         $a2, 0x3E49
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15945 << 16));
    // 0x1bda6c: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x1bda6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x1bda70: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1bda70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bda74: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda78: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda7c: 0xc4ec1290  lwc1        $f12, 0x1290($a3)
    ctx->pc = 0x1bda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bda80: 0xc50d00d4  lwc1        $f13, 0xD4($t0)
    ctx->pc = 0x1bda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bda84: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BDA84u;
    SET_GPR_U32(ctx, 31, 0x1BDA8Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BDA84u, 0x1BDA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA8Cu;
label_1bda8c:
    // 0x1bda8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bda90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bda94: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bda98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bda9c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bdaa0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BDAA0u;
    SET_GPR_U32(ctx, 31, 0x1BDAA8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BDAA0u, 0x1BDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAA8u;
label_1bdaa8:
    // 0x1bdaa8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdaa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdaac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdab4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDAB4u;
    SET_GPR_U32(ctx, 31, 0x1BDABCu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDAB4u, 0x1BDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDABCu;
label_1bdabc:
    // 0x1bdabc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bdabcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdac0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BDAC0u;
    SET_GPR_U32(ctx, 31, 0x1BDAC8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BDAC0u, 0x1BDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAC8u;
label_1bdac8:
    // 0x1bdac8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdacc: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x1bdaccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1bdad0: 0x1060030e  beqz        $v1, . + 4 + (0x30E << 2)
    ctx->pc = 0x1BDAD0u;
    {
        const bool branch_taken_0x1bdad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdad0) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDAD8u;
    // 0x1bdad8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdadc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bdadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bdae0: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bdae4: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1bdae4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bdae8: 0x10000308  b           . + 4 + (0x308 << 2)
    ctx->pc = 0x1BDAE8u;
    {
        const bool branch_taken_0x1bdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdae8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDAF0u;
}
