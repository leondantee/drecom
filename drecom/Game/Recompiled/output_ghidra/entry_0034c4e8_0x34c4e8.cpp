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

// Function: entry_0034c4e8
// Address: 0x34c4e8 - 0x34c54c
void entry_0034c4e8_0x34c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c4e8_0x34c4e8");
#endif

    switch (ctx->pc) {
        case 0x34c524u: goto label_34c524;
        default: break;
    }

    ctx->pc = 0x34c4e8u;

    // 0x34c4e8: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c4ec: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x34c4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x34c4f0: 0x10600277  beqz        $v1, . + 4 + (0x277 << 2)
    ctx->pc = 0x34C4F0u;
    {
        const bool branch_taken_0x34c4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c4f0) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C4F8u;
    // 0x34c4f8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c4fc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c500: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34c500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34c504: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c508: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c50c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34c510: 0x24060429  addiu       $a2, $zero, 0x429
    ctx->pc = 0x34c510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x34c514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34c514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c518: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34c518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34c51c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34C51Cu;
    SET_GPR_U32(ctx, 31, 0x34C524u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34C51Cu, 0x34C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C524u;
label_34c524:
    // 0x34c524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c528: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c52c: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x34c52cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c530: 0x3c104040  lui         $s0, 0x4040
    ctx->pc = 0x34c530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16448 << 16));
    // 0x34c534: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34c534u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c538: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c53c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34c53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c540: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x34c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x34c544: 0x10000262  b           . + 4 + (0x262 << 2)
    ctx->pc = 0x34C544u;
    {
        const bool branch_taken_0x34c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c544) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C54Cu;
}
