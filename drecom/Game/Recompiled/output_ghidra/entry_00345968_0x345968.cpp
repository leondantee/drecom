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

// Function: entry_00345968
// Address: 0x345968 - 0x3459cc
void entry_00345968_0x345968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345968_0x345968");
#endif

    switch (ctx->pc) {
        case 0x3459b4u: goto label_3459b4;
        default: break;
    }

    ctx->pc = 0x345968u;

    // 0x345968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x345968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34596c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345970: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x345970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x345974: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345978: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x345978u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34597c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x34597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345980: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x345980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345984: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x345984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345988: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x345988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x34598c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34598Cu;
    {
        const bool branch_taken_0x34598c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34598c) {
            ctx->pc = 0x3459CCu;
            return;
        }
    }
    ctx->pc = 0x345994u;
    // 0x345994: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345998: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x345998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x34599c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x34599cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3459a0: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x3459a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x3459a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3459a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3459a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3459ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3459ACu;
    SET_GPR_U32(ctx, 31, 0x3459B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3459ACu, 0x3459B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459B4u;
label_3459b4:
    // 0x3459b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3459b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3459b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3459b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3459bc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3459bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3459c0: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x3459c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x3459c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3459C4u;
    {
        const bool branch_taken_0x3459c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459c4) {
            ctx->pc = 0x345A44u;
            return;
        }
    }
    ctx->pc = 0x3459CCu;
}
