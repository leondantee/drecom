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

// Function: entry_001bdf78
// Address: 0x1bdf78 - 0x1be058
void entry_001bdf78_0x1bdf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdf78_0x1bdf78");
#endif

    switch (ctx->pc) {
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdff0u: goto label_1bdff0;
        default: break;
    }

    ctx->pc = 0x1bdf78u;

    // 0x1bdf78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf7c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bdf80: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bdf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bdf84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bdf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bdf88: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bdf88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bdf8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bdf94: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x1bdf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x1bdf98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bdf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bdf9c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bdf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1bdfa0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfa4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bdfa8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BDFA8u;
    SET_GPR_U32(ctx, 31, 0x1BDFB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BDFA8u, 0x1BDFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB0u;
label_1bdfb0:
    // 0x1bdfb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdfb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdfb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfb8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BDFB8u;
    SET_GPR_U32(ctx, 31, 0x1BDFC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BDFB8u, 0x1BDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFC0u;
label_1bdfc0:
    // 0x1bdfc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bdfc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bdfc4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bdfc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bdfcc: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BDFCCu;
    SET_GPR_U32(ctx, 31, 0x1BDFD4u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BDFCCu, 0x1BDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFD4u;
label_1bdfd4:
    // 0x1bdfd4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bdfd4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdfd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdfe0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1bdfe4: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1bdfe8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BDFE8u, 0x1BDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bdff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bdff4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdff8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1bdff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bdffc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be000: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1be000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1be004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1be008: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1be008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1be00c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be010: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1be010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be014: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be018: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1be018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be01c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1be01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1be020: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1be020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1be024: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be028: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1be028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be02c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be030: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be034: 0x0  nop
    ctx->pc = 0x1be034u;
    // NOP
    // 0x1be038: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE038u;
    {
        const bool branch_taken_0x1be038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be038) {
            ctx->pc = 0x1BE058u;
            return;
        }
    }
    ctx->pc = 0x1BE040u;
    // 0x1be040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1be040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be044: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be048: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1be048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1be04c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be054: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1be054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1be058u;
}
