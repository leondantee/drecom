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

// Function: entry_0036ab2c
// Address: 0x36ab2c - 0x36abd0
void entry_0036ab2c_0x36ab2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ab2c_0x36ab2c");
#endif

    switch (ctx->pc) {
        case 0x36ab3cu: goto label_36ab3c;
        case 0x36ab50u: goto label_36ab50;
        case 0x36ab64u: goto label_36ab64;
        case 0x36ab7cu: goto label_36ab7c;
        default: break;
    }

    ctx->pc = 0x36ab2cu;

    // 0x36ab2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ab30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ab34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36AB34u;
    SET_GPR_U32(ctx, 31, 0x36AB3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36AB34u, 0x36AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB3Cu;
label_36ab3c:
    // 0x36ab3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab44: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x36ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36ab48: 0xc05cd58  jal         func_173560
    ctx->pc = 0x36AB48u;
    SET_GPR_U32(ctx, 31, 0x36AB50u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x36AB48u, 0x36AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB50u;
label_36ab50:
    // 0x36ab50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36ab50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ab54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x36ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab5c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x36AB5Cu;
    SET_GPR_U32(ctx, 31, 0x36AB64u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x36AB5Cu, 0x36AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB64u;
label_36ab64:
    // 0x36ab64: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x36ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ab68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab6c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x36ab6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x36ab70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ab70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ab74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x36AB74u;
    SET_GPR_U32(ctx, 31, 0x36AB7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x36AB74u, 0x36AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB7Cu;
label_36ab7c:
    // 0x36ab7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36ab80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36ab84: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x36AB84u;
    {
        const bool branch_taken_0x36ab84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ab84) {
            ctx->pc = 0x36ABD0u;
            return;
        }
    }
    ctx->pc = 0x36AB8Cu;
    // 0x36ab8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36ab90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36ab94: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x36ab94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x36ab98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ab9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aba0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36aba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36aba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36aba8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36aba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abb0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36abbc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36abc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36abc4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x36abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x36abc8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36ABC8u;
    {
        const bool branch_taken_0x36abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36abc8) {
            ctx->pc = 0x36ABD0u;
            return;
        }
    }
    ctx->pc = 0x36ABD0u;
}
