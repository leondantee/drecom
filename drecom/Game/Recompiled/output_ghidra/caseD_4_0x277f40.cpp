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

// Function: caseD_4
// Address: 0x277f40 - 0x277ff8
void caseD_4_0x277f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x277f40");
#endif

    switch (ctx->pc) {
        case 0x277f78u: goto label_277f78;
        default: break;
    }

    ctx->pc = 0x277f40u;

    // 0x277f40: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x277f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x277f44: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x277f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x277f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f4c: 0x0  nop
    ctx->pc = 0x277f4cu;
    // NOP
    // 0x277f50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x277f54: 0x0  nop
    ctx->pc = 0x277f54u;
    // NOP
    // 0x277f58: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x277F58u;
    {
        const bool branch_taken_0x277f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277f58) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277F60u;
    // 0x277f60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277f64: 0x2404040e  addiu       $a0, $zero, 0x40E
    ctx->pc = 0x277f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x277f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277f6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x277f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277f70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x277F70u;
    SET_GPR_U32(ctx, 31, 0x277F78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x277F70u, 0x277F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F78u;
label_277f78:
    // 0x277f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f7c: 0x0  nop
    ctx->pc = 0x277f7cu;
    // NOP
    // 0x277f80: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f88: 0x0  nop
    ctx->pc = 0x277f88u;
    // NOP
    // 0x277f8c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x277f90: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x277f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277f98: 0x0  nop
    ctx->pc = 0x277f98u;
    // NOP
    // 0x277f9c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x277fa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x277fa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x277fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x277fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277fac: 0x0  nop
    ctx->pc = 0x277facu;
    // NOP
    // 0x277fb0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277fb8: 0x0  nop
    ctx->pc = 0x277fb8u;
    // NOP
    // 0x277fbc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277fc4: 0x0  nop
    ctx->pc = 0x277fc4u;
    // NOP
    // 0x277fc8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277fcc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277fd0: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A40u, _value); } while (0);
    // 0x277fd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277fd8: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A38u));
    // 0x277fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277fe0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277fe4: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x277fe8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277fec: 0xac201a30  sw          $zero, 0x1A30($at)
    ctx->pc = 0x277fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A30u, _value); } while (0);
    // 0x277ff0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277FF0u;
    {
        const bool branch_taken_0x277ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ff0) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277FF8u;
}
