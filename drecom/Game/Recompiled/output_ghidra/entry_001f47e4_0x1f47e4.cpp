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

// Function: entry_001f47e4
// Address: 0x1f47e4 - 0x1f487c
void entry_001f47e4_0x1f47e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f47e4_0x1f47e4");
#endif

    switch (ctx->pc) {
        case 0x1f4844u: goto label_1f4844;
        default: break;
    }

    ctx->pc = 0x1f47e4u;

    // 0x1f47e4: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x1f47e8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1f47e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x1f47ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f47ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f47f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f47f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f47fc: 0x8462127e  lh          $v0, 0x127E($v1)
    ctx->pc = 0x1f47fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f4800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4804: 0xa462127e  sh          $v0, 0x127E($v1)
    ctx->pc = 0x1f4804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f480c: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f4810: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4814: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4818: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f481c: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F481Cu;
    {
        const bool branch_taken_0x1f481c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f481c) {
            ctx->pc = 0x1F487Cu;
            return;
        }
    }
    ctx->pc = 0x1F4824u;
    // 0x1f4824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f4828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f482c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f4830: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1f4830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1f4834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f4834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4838: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f4838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f483c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F483Cu;
    SET_GPR_U32(ctx, 31, 0x1F4844u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F483Cu, 0x1F4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4844u;
label_1f4844:
    // 0x1f4844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f484c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f484cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4850: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f4854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4858: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f4858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f485c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4860: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f4860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4864: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4868: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f4868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f486c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4870: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f4870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f4874: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1F4874u;
    {
        const bool branch_taken_0x1f4874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4874) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F487Cu;
}
