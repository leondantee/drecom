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

// Function: entry_002a7254
// Address: 0x2a7254 - 0x2a72c0
void entry_002a7254_0x2a7254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7254_0x2a7254");
#endif

    switch (ctx->pc) {
        case 0x2a7290u: goto label_2a7290;
        default: break;
    }

    ctx->pc = 0x2a7254u;

    // 0x2a7254: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7258: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x2a7258u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a725c: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2A725Cu;
    {
        const bool branch_taken_0x2a725c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a725c) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A7264u;
    // 0x2a7264: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a7264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a7268: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a726c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a726cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a7270: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a7270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7274: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a7274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7278: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a7278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a727c: 0x24061e1f  addiu       $a2, $zero, 0x1E1F
    ctx->pc = 0x2a727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7711));
    // 0x2a7280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7288: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7288u;
    SET_GPR_U32(ctx, 31, 0x2A7290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7288u, 0x2A7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7290u;
label_2a7290:
    // 0x2a7290: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a7290u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7294: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a7294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7298: 0x24e810b0  addiu       $t0, $a3, 0x10B0
    ctx->pc = 0x2a7298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4272));
    // 0x2a729c: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x2a729cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a72a0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2a72a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2a72a4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x2a72a8: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x2a72a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2a72ac: 0xae0700f0  sw          $a3, 0xF0($s0)
    ctx->pc = 0x2a72acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 7));
    // 0x2a72b0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a72b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a72b4: 0xa5001278  sh          $zero, 0x1278($t0)
    ctx->pc = 0x2a72b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a72b8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2A72B8u;
    {
        const bool branch_taken_0x2a72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a72b8) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A72C0u;
}
