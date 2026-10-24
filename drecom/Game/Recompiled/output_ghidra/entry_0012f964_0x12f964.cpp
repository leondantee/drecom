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

// Function: entry_0012f964
// Address: 0x12f964 - 0x12f9bc
void entry_0012f964_0x12f964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f964_0x12f964");
#endif

    switch (ctx->pc) {
        case 0x12f984u: goto label_12f984;
        default: break;
    }

    ctx->pc = 0x12f964u;

    // 0x12f964: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f968: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x12f968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
    // 0x12f96c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f970: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f978: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f97c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F97Cu;
    SET_GPR_U32(ctx, 31, 0x12F984u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F97Cu, 0x12F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F984u;
label_12f984:
    // 0x12f984: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f988: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x12f988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f98c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f990: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12f990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12f994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f998: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12f99c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f9a0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F9A0u;
    {
        const bool branch_taken_0x12f9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f9a0) {
            ctx->pc = 0x12F9BCu;
            return;
        }
    }
    ctx->pc = 0x12F9A8u;
    // 0x12f9a8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12f9ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9b0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x12f9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f9b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F9B4u;
    {
        const bool branch_taken_0x12f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9b4) {
            ctx->pc = 0x12F9C8u;
            return;
        }
    }
    ctx->pc = 0x12F9BCu;
}
