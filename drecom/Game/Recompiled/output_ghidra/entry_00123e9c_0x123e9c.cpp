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

// Function: entry_00123e9c
// Address: 0x123e9c - 0x123f50
void entry_00123e9c_0x123e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e9c_0x123e9c");
#endif

    switch (ctx->pc) {
        case 0x123f20u: goto label_123f20;
        case 0x123f30u: goto label_123f30;
        case 0x123f44u: goto label_123f44;
        default: break;
    }

    ctx->pc = 0x123e9cu;

    // 0x123e9c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x123e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x123ea0: 0x24a34da0  addiu       $v1, $a1, 0x4DA0
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 19872));
    // 0x123ea4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ea8: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x123ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x123eac: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x123eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x123eb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123eb4: 0xac44121c  sw          $a0, 0x121C($v0)
    ctx->pc = 0x123eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 4));
    // 0x123eb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x123eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x123ebc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ec0: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x123ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x123ec4: 0xa680007c  sh          $zero, 0x7C($s4)
    ctx->pc = 0x123ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x123ec8: 0xa2800094  sb          $zero, 0x94($s4)
    ctx->pc = 0x123ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ecc: 0xa2800097  sb          $zero, 0x97($s4)
    ctx->pc = 0x123eccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ed0: 0xa2800098  sb          $zero, 0x98($s4)
    ctx->pc = 0x123ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ed4: 0xa2800096  sb          $zero, 0x96($s4)
    ctx->pc = 0x123ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ed8: 0xa680008a  sh          $zero, 0x8A($s4)
    ctx->pc = 0x123ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x123edc: 0xa280009a  sb          $zero, 0x9A($s4)
    ctx->pc = 0x123edcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 0));
    // 0x123ee0: 0xa6800092  sh          $zero, 0x92($s4)
    ctx->pc = 0x123ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x123ee4: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x123ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x123ee8: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x123ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x123eec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ef0: 0xa450122c  sh          $s0, 0x122C($v0)
    ctx->pc = 0x123ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 16));
    // 0x123ef4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x123ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123efc: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x123efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x123f00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f04: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x123f0c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x123f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x123f10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x123f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123f14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x123f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x123f18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x123F18u;
    SET_GPR_U32(ctx, 31, 0x123F20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x123F18u, 0x123F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F20u;
label_123f20:
    // 0x123f20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x123f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123f28: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x123F28u;
    SET_GPR_U32(ctx, 31, 0x123F30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x123F28u, 0x123F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F30u;
label_123f30:
    // 0x123f30: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x123f30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x123f34: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f38: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x123f38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x123f3c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x123F3Cu;
    SET_GPR_U32(ctx, 31, 0x123F44u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x123F3Cu, 0x123F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F44u;
label_123f44:
    // 0x123f44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x123f44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x123f48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x123F48u;
    {
        const bool branch_taken_0x123f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f48) {
            ctx->pc = 0x123F78u;
            return;
        }
    }
    ctx->pc = 0x123F50u;
}
