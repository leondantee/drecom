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

// Function: entry_001caa94
// Address: 0x1caa94 - 0x1cab0c
void entry_001caa94_0x1caa94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caa94_0x1caa94");
#endif

    switch (ctx->pc) {
        case 0x1caabcu: goto label_1caabc;
        case 0x1caadcu: goto label_1caadc;
        default: break;
    }

    ctx->pc = 0x1caa94u;

    // 0x1caa94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa98: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1caa9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1caaa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1caaa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caaa8: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1caaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1caaac: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1caaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1caab0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1caab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caab4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CAAB4u;
    SET_GPR_U32(ctx, 31, 0x1CAABCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CAAB4u, 0x1CAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAABCu;
label_1caabc:
    // 0x1caabc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caac0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caac4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1caac8: 0x24061e6f  addiu       $a2, $zero, 0x1E6F
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7791));
    // 0x1caacc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caad0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1caad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1caad4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CAAD4u;
    SET_GPR_U32(ctx, 31, 0x1CAADCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CAAD4u, 0x1CAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAADCu;
label_1caadc:
    // 0x1caadc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caae0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1caae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caae4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1caae8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caaec: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1caaecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caaf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caaf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caaf8: 0xac431b70  sw          $v1, 0x1B70($v0)
    ctx->pc = 0x1caaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7024), GPR_U32(ctx, 3));
    // 0x1caafc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cab00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cab04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cab08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cab08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cab0cu;
}
