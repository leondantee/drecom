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

// Function: entry_00121e70
// Address: 0x121e70 - 0x121f18
void entry_00121e70_0x121e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121e70_0x121e70");
#endif

    switch (ctx->pc) {
        case 0x121e80u: goto label_121e80;
        case 0x121eacu: goto label_121eac;
        default: break;
    }

    ctx->pc = 0x121e70u;

    // 0x121e70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e74: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121e78: 0xc048044  jal         func_120110
    ctx->pc = 0x121E78u;
    SET_GPR_U32(ctx, 31, 0x121E80u);
    ctx->pc = 0x120110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120110u, 0x121E78u, 0x121E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E80u;
label_121e80:
    // 0x121e80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121e84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e88: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x121e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x121e8c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121e90: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x121e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121e94: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x121e94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121e98: 0x2404050d  addiu       $a0, $zero, 0x50D
    ctx->pc = 0x121e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1293));
    // 0x121e9c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x121e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x121ea0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121ea0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121ea4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121EA4u;
    SET_GPR_U32(ctx, 31, 0x121EACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121EA4u, 0x121EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EACu;
label_121eac:
    // 0x121eac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121eacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121eb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121eb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121eb8: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x121eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x121ebc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x121ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x121ec0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x121EC0u;
    {
        const bool branch_taken_0x121ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ec0) {
            ctx->pc = 0x121F18u;
            return;
        }
    }
    ctx->pc = 0x121EC8u;
    // 0x121ec8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ecc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x121eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x121ed0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x121ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x121ed4: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x121ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121ed8: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x121ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x121edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121ee0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ee4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x121ee8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x121ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x121eec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ef0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x121ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x121ef4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ef8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121efc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121f00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121f00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121f08: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121f0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x121f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x121f10: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x121F10u;
    {
        const bool branch_taken_0x121f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f10) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121F18u;
}
