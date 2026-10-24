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

// Function: caseD_0
// Address: 0x232f38 - 0x232fdc
void caseD_0_0x232f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x232f38");
#endif

    switch (ctx->pc) {
        case 0x232f54u: goto label_232f54;
        default: break;
    }

    ctx->pc = 0x232f38u;

    // 0x232f38: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x232f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f3c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x232f40: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x232f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x232f44: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x232f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x232f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x232f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x232f4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x232F4Cu;
    SET_GPR_U32(ctx, 31, 0x232F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x232F4Cu, 0x232F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F54u;
label_232f54:
    // 0x232f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x232f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232f58: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f5c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x232f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x232f60: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x232f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x232f64: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f68: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x232f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x232f6c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x232f70: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f74: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x232f74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x232f78: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x232f7c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f80: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x232f80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x232f84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f88: 0xac8013fc  sw          $zero, 0x13FC($a0)
    ctx->pc = 0x232f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5116), GPR_U32(ctx, 0));
    // 0x232f8c: 0x241100f0  addiu       $s1, $zero, 0xF0
    ctx->pc = 0x232f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x232f90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x232f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232f94: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x232f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x232f98: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x232f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x232fa0: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232fa4: 0x84a2138c  lh          $v0, 0x138C($a1)
    ctx->pc = 0x232fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5004)));
    // 0x232fa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232fac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232facu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232fb0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x232fb4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x232fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x232fb8: 0x84a2138c  lh          $v0, 0x138C($a1)
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5004)));
    // 0x232fbc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x232fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x232fc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x232fc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x232fc4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x232fc8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x232fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232fcc: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x232fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x232fd0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x232FD0u;
    {
        const bool branch_taken_0x232fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x232fd0) {
            ctx->pc = 0x232FDCu;
            return;
        }
    }
    ctx->pc = 0x232FD8u;
    // 0x232fd8: 0x24110168  addiu       $s1, $zero, 0x168
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->pc = 0x232fdcu;
}
