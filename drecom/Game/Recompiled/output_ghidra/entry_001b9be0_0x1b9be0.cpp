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

// Function: entry_001b9be0
// Address: 0x1b9be0 - 0x1b9ce0
void entry_001b9be0_0x1b9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9be0_0x1b9be0");
#endif

    switch (ctx->pc) {
        case 0x1b9c2cu: goto label_1b9c2c;
        case 0x1b9c44u: goto label_1b9c44;
        case 0x1b9c5cu: goto label_1b9c5c;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c88u: goto label_1b9c88;
        default: break;
    }

    ctx->pc = 0x1b9be0u;

    // 0x1b9be0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b9be4: 0x8c241a64  lw          $a0, 0x1A64($at)
    ctx->pc = 0x1b9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b9be8: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x1b9be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1b9bec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b9becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b9bf0: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1b9bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b9bf4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9bf8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b9bfc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1b9bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1b9c00: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b9c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b9c04: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1b9c08: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c0c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c10: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1b9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1b9c14: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1b9c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c18: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1b9c18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b9c1c: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1b9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9c20: 0xc4ad00d4  lwc1        $f13, 0xD4($a1)
    ctx->pc = 0x1b9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b9c24: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1B9C24u;
    SET_GPR_U32(ctx, 31, 0x1B9C2Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B9C24u, 0x1B9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C2Cu;
label_1b9c2c:
    // 0x1b9c2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c30: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b9c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1b9c34: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b9c3c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C44u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9C3Cu, 0x1B9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C44u;
label_1b9c44:
    // 0x1b9c44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c50: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9c54: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B9C54u;
    SET_GPR_U32(ctx, 31, 0x1B9C5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B9C54u, 0x1B9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C5Cu;
label_1b9c5c:
    // 0x1b9c5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9c60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9c64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9c6c: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C74u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B9C6Cu, 0x1B9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C74u;
label_1b9c74:
    // 0x1b9c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9c78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9c7c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b9c80: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B9C80u;
    SET_GPR_U32(ctx, 31, 0x1B9C88u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B9C80u, 0x1B9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C88u;
label_1b9c88:
    // 0x1b9c88: 0x3c044467  lui         $a0, 0x4467
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17511 << 16));
    // 0x1b9c8c: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1b9c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1b9c90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b9c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9c94: 0x0  nop
    ctx->pc = 0x1b9c94u;
    // NOP
    // 0x1b9c98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9c9c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b9ca0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ca4: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1b9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ca8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9cac: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b9cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b9cb4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b9cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b9cb8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9cbc: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1b9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9cc0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9cc8: 0x0  nop
    ctx->pc = 0x1b9cc8u;
    // NOP
    // 0x1b9ccc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9CCCu;
    {
        const bool branch_taken_0x1b9ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9ccc) {
            ctx->pc = 0x1B9CE0u;
            return;
        }
    }
    ctx->pc = 0x1B9CD4u;
    // 0x1b9cd4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9cd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9cdc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1b9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1b9ce0u;
}
