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

// Function: caseD_3
// Address: 0x232c2c - 0x232ca0
void caseD_3_0x232c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x232c2c");
#endif

    switch (ctx->pc) {
        case 0x232c58u: goto label_232c58;
        case 0x232c64u: goto label_232c64;
        case 0x232c78u: goto label_232c78;
        case 0x232c84u: goto label_232c84;
        default: break;
    }

    ctx->pc = 0x232c2cu;

    // 0x232c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x232c30: 0x2450ec70  addiu       $s0, $v0, -0x1390
    ctx->pc = 0x232c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x232c34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x232c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x232c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x232c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232c3c: 0x0  nop
    ctx->pc = 0x232c3cu;
    // NOP
    // 0x232c40: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x232c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED40u, _value); } while (0); }
    // 0x232c44: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x232c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED44u, _value); } while (0); }
    // 0x232c48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x232c4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x232c50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x232C50u;
    SET_GPR_U32(ctx, 31, 0x232C58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x232C50u, 0x232C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C58u;
label_232c58:
    // 0x232c58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c5c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x232C5Cu;
    SET_GPR_U32(ctx, 31, 0x232C64u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x232C5Cu, 0x232C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C64u;
label_232c64:
    // 0x232c64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x232c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232c68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232c70: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x232C70u;
    SET_GPR_U32(ctx, 31, 0x232C78u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232C70u, 0x232C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C78u;
label_232c78:
    // 0x232c78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x232C7Cu;
    SET_GPR_U32(ctx, 31, 0x232C84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x232C7Cu, 0x232C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C84u;
label_232c84:
    // 0x232c84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c88: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x232c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x232c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232C8Cu;
    {
        const bool branch_taken_0x232c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c8c) {
            ctx->pc = 0x232CA0u;
            return;
        }
    }
    ctx->pc = 0x232C94u;
    // 0x232c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x232c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x232c98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232c9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x232ca0u;
}
