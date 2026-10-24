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

// Function: caseD_0
// Address: 0x277cc8 - 0x277d5c
void caseD_0_0x277cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x277cc8");
#endif

    switch (ctx->pc) {
        case 0x277ce0u: goto label_277ce0;
        default: break;
    }

    ctx->pc = 0x277cc8u;

    // 0x277cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x277cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x277ccc: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x277cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277cd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x277cd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277cd8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x277CD8u;
    SET_GPR_U32(ctx, 31, 0x277CE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x277CD8u, 0x277CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277CE0u;
label_277ce0:
    // 0x277ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277ce4: 0x0  nop
    ctx->pc = 0x277ce4u;
    // NOP
    // 0x277ce8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x277ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x277cec: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x277cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
    // 0x277cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277cf4: 0x0  nop
    ctx->pc = 0x277cf4u;
    // NOP
    // 0x277cf8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x277cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x277cfc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x277cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x277d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d04: 0x0  nop
    ctx->pc = 0x277d04u;
    // NOP
    // 0x277d08: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x277d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x277d0c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x277d10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x277d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d18: 0x0  nop
    ctx->pc = 0x277d18u;
    // NOP
    // 0x277d1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x277d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x277d20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d24: 0x0  nop
    ctx->pc = 0x277d24u;
    // NOP
    // 0x277d28: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x277d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x277d2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277d30: 0x0  nop
    ctx->pc = 0x277d30u;
    // NOP
    // 0x277d34: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x277d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x277d38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277d3c: 0xac201a40  sw          $zero, 0x1A40($at)
    ctx->pc = 0x277d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A40u, _value); } while (0);
    // 0x277d40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277d44: 0x8c221a38  lw          $v0, 0x1A38($at)
    ctx->pc = 0x277d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A38u));
    // 0x277d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277d4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277d50: 0xac221a38  sw          $v0, 0x1A38($at)
    ctx->pc = 0x277d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x277d54: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x277D54u;
    {
        const bool branch_taken_0x277d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277d54) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x277D5Cu;
}
