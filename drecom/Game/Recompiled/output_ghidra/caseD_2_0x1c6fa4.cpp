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

// Function: caseD_2
// Address: 0x1c6fa4 - 0x1c7024
void caseD_2_0x1c6fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1c6fa4");
#endif

    switch (ctx->pc) {
        case 0x1c6fdcu: goto label_1c6fdc;
        default: break;
    }

    ctx->pc = 0x1c6fa4u;

    // 0x1c6fa4: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6fa8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c6fac: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1c6fb0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1c6fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c6fb4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1c6fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c6fb8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1c6fbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6fc4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c6fc8: 0x24060537  addiu       $a2, $zero, 0x537
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
    // 0x1c6fcc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6fd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6fd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C6FD4u;
    SET_GPR_U32(ctx, 31, 0x1C6FDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6FD4u, 0x1C6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FDCu;
label_1c6fdc:
    // 0x1c6fdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6fdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6fe0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c6fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6fe8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c6fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c6fec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ff0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ff4: 0xa0441576  sb          $a0, 0x1576($v0)
    ctx->pc = 0x1c6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6ff8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1c6ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6ffc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7000: 0xa0c51577  sb          $a1, 0x1577($a2)
    ctx->pc = 0x1c7000u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5495), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c7004: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7008: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1c7008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
    // 0x1c700c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c700cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7010: 0xad001b6c  sw          $zero, 0x1B6C($t0)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7020), GPR_U32(ctx, 0));
    // 0x1c7014: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7018: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x1c7018u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1c701c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1c701cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c7020: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c7020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c7024u;
}
