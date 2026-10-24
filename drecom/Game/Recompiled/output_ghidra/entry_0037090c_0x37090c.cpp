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

// Function: entry_0037090c
// Address: 0x37090c - 0x370984
void entry_0037090c_0x37090c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037090c_0x37090c");
#endif

    switch (ctx->pc) {
        case 0x37091cu: goto label_37091c;
        case 0x370928u: goto label_370928;
        case 0x370934u: goto label_370934;
        case 0x370940u: goto label_370940;
        default: break;
    }

    ctx->pc = 0x37090cu;

    // 0x37090c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370910: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370914: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370914u;
    SET_GPR_U32(ctx, 31, 0x37091Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370914u, 0x37091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37091Cu;
label_37091c:
    // 0x37091c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370920: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370920u;
    SET_GPR_U32(ctx, 31, 0x370928u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370920u, 0x370928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370928u;
label_370928:
    // 0x370928: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37092c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x37092Cu;
    SET_GPR_U32(ctx, 31, 0x370934u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x37092Cu, 0x370934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370934u;
label_370934:
    // 0x370934: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370938: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370938u;
    SET_GPR_U32(ctx, 31, 0x370940u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370938u, 0x370940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370940u;
label_370940:
    // 0x370940: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370944: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370948: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37094c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37094cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370950: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x370950u;
    {
        const bool branch_taken_0x370950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x370950) {
            ctx->pc = 0x370984u;
            return;
        }
    }
    ctx->pc = 0x370958u;
    // 0x370958: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37095c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370960: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37096c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x37096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370970: 0x24061e09  addiu       $a2, $zero, 0x1E09
    ctx->pc = 0x370970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7689));
    // 0x370974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370978: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37097c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37097Cu;
    SET_GPR_U32(ctx, 31, 0x370984u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37097Cu, 0x370984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370984u;
}
