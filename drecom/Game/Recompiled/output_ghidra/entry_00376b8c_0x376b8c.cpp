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

// Function: entry_00376b8c
// Address: 0x376b8c - 0x376c50
void entry_00376b8c_0x376b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376b8c_0x376b8c");
#endif

    switch (ctx->pc) {
        case 0x376b9cu: goto label_376b9c;
        case 0x376bacu: goto label_376bac;
        case 0x376bb8u: goto label_376bb8;
        default: break;
    }

    ctx->pc = 0x376b8cu;

    // 0x376b8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376B94u;
    SET_GPR_U32(ctx, 31, 0x376B9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376B94u, 0x376B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B9Cu;
label_376b9c:
    // 0x376b9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ba0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376ba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376ba4: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376BA4u;
    SET_GPR_U32(ctx, 31, 0x376BACu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376BA4u, 0x376BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BACu;
label_376bac:
    // 0x376bac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bb0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376BB0u;
    SET_GPR_U32(ctx, 31, 0x376BB8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376BB0u, 0x376BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BB8u;
label_376bb8:
    // 0x376bb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bbc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376bc0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x376BC0u;
    {
        const bool branch_taken_0x376bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376bc0) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376BC8u;
    // 0x376bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x376bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376bcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x376bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x376bd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bd8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x376bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x376bdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x376be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x376be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376be8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x376be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x376bec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x376bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x376bf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bf8: 0x247110b0  addiu       $s1, $v1, 0x10B0
    ctx->pc = 0x376bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x376bfc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x376bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x376c00: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x376c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x376c04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x376c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x376c08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x376c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x376c0c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x376c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x376c10: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x376c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x376c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c18: 0x0  nop
    ctx->pc = 0x376c18u;
    // NOP
    // 0x376c1c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x376c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x376c20: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x376c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x376c24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376c28: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x376c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x376c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c30: 0x0  nop
    ctx->pc = 0x376c30u;
    // NOP
    // 0x376c34: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x376c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x376c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c3c: 0x0  nop
    ctx->pc = 0x376c3cu;
    // NOP
    // 0x376c40: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x376c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x376c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c48: 0x0  nop
    ctx->pc = 0x376c48u;
    // NOP
    // 0x376c4c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x376c50u;
}
