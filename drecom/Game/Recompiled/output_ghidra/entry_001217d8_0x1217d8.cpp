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

// Function: entry_001217d8
// Address: 0x1217d8 - 0x12183c
void entry_001217d8_0x1217d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001217d8_0x1217d8");
#endif

    switch (ctx->pc) {
        case 0x121800u: goto label_121800;
        default: break;
    }

    ctx->pc = 0x1217d8u;

    // 0x1217d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1217d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1217dc: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1217dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1217e0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1217e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1217e4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1217e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1217e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1217e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1217ec: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x1217ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x1217f0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1217f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1217f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1217f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1217f8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1217F8u;
    SET_GPR_U32(ctx, 31, 0x121800u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1217F8u, 0x121800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121800u;
label_121800:
    // 0x121800: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x121800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x121804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121808: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12180c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12180cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121810: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121814: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121818: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x121818u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12181c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12181cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121820: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x121820u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121824: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121828: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12182c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121830: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x121834: 0x1000053e  b           . + 4 + (0x53E << 2)
    ctx->pc = 0x121834u;
    {
        const bool branch_taken_0x121834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121834) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12183Cu;
}
