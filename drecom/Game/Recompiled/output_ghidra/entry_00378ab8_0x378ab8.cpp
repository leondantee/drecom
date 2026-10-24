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

// Function: entry_00378ab8
// Address: 0x378ab8 - 0x378b10
void entry_00378ab8_0x378ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378ab8_0x378ab8");
#endif

    switch (ctx->pc) {
        case 0x378ac8u: goto label_378ac8;
        case 0x378ad4u: goto label_378ad4;
        default: break;
    }

    ctx->pc = 0x378ab8u;

    // 0x378ab8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x378ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x378abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x378ac0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x378AC0u;
    SET_GPR_U32(ctx, 31, 0x378AC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x378AC0u, 0x378AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AC8u;
label_378ac8:
    // 0x378ac8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x378ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378acc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x378ACCu;
    SET_GPR_U32(ctx, 31, 0x378AD4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x378ACCu, 0x378AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AD4u;
label_378ad4:
    // 0x378ad4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378ad8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x378ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x378adc: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x378ADCu;
    {
        const bool branch_taken_0x378adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378adc) {
            ctx->pc = 0x378D00u;
            return;
        }
    }
    ctx->pc = 0x378AE4u;
    // 0x378ae4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378ae8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x378ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x378aec: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x378aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378af0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x378af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378af4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x378af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x378af8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x378af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x378afc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x378afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x378b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x378b04: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x378b04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x378b08: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x378B08u;
    {
        const bool branch_taken_0x378b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378b08) {
            ctx->pc = 0x378D00u;
            return;
        }
    }
    ctx->pc = 0x378B10u;
}
