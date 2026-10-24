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

// Function: entry_002a9198
// Address: 0x2a9198 - 0x2a9208
void entry_002a9198_0x2a9198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9198_0x2a9198");
#endif

    switch (ctx->pc) {
        case 0x2a91b4u: goto label_2a91b4;
        default: break;
    }

    ctx->pc = 0x2a9198u;

    // 0x2a9198: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a9198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a919c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x2a919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2a91a0: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2a91a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2a91a4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2a91a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a91a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a91a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a91ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A91ACu;
    SET_GPR_U32(ctx, 31, 0x2A91B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A91ACu, 0x2A91B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91B4u;
label_2a91b4:
    // 0x2a91b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a91b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91bc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a91bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a91c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91c4: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x2a91c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2a91c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2a91c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2a91cc: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2a91ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a91d0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x2a91d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2a91d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91d8: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a91d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a91dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a91dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a91e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a91e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a91e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a91e8: 0x8442138c  lh          $v0, 0x138C($v0)
    ctx->pc = 0x2a91e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x2a91ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a91f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a91f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a91f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a91f8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2a91f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a91fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A91FCu;
    {
        const bool branch_taken_0x2a91fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a91fc) {
            ctx->pc = 0x2A9208u;
            return;
        }
    }
    ctx->pc = 0x2A9204u;
    // 0x2a9204: 0x2411015e  addiu       $s1, $zero, 0x15E
    ctx->pc = 0x2a9204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    ctx->pc = 0x2a9208u;
}
