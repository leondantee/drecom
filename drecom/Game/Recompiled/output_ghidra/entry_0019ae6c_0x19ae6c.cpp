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

// Function: entry_0019ae6c
// Address: 0x19ae6c - 0x19af3c
void entry_0019ae6c_0x19ae6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae6c_0x19ae6c");
#endif

    switch (ctx->pc) {
        case 0x19aee8u: goto label_19aee8;
        case 0x19af08u: goto label_19af08;
        default: break;
    }

    ctx->pc = 0x19ae6cu;

    // 0x19ae6c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x19ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae70: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x19ae74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ae78: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x19ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
    // 0x19ae7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae80: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x19ae80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x19ae84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19ae88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19ae88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19ae8c: 0x461004e  bgez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AFC8u;
            return;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ae98: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19ae98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19ae9c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19aea0: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19aea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19aea4: 0x2402051d  addiu       $v0, $zero, 0x51D
    ctx->pc = 0x19aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x19aea8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19aeac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19aeb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19aeb4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19aeb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19aeb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19aebc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aec0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19aec4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19aec8: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19aecc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19aed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19aed4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aed8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aedc: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19aee0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19AEE0u;
    SET_GPR_U32(ctx, 31, 0x19AEE8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19AEE8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19AEE8u) { return; }
    ctx->pc = 0x19AEE8u;
label_19aee8:
    // 0x19aee8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19aeec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19aef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19aef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19aef4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x19aef4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x19aef8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19aefc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19aefcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19af00: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19AF00u;
    SET_GPR_U32(ctx, 31, 0x19AF08u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19AF00u, 0x19AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AF08u;
label_19af08:
    // 0x19af08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af0c: 0x8c631344  lw          $v1, 0x1344($v1)
    ctx->pc = 0x19af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4932)));
    // 0x19af10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19af10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19af14: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19AF14u;
    {
        const bool branch_taken_0x19af14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af14) {
            ctx->pc = 0x19AF74u;
            return;
        }
    }
    ctx->pc = 0x19AF1Cu;
    // 0x19af1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x19af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19af20: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x19af20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x19af24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19af24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19af28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19af2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AF2Cu;
    {
        const bool branch_taken_0x19af2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19af2c) {
            ctx->pc = 0x19AF3Cu;
            return;
        }
    }
    ctx->pc = 0x19AF34u;
    // 0x19af34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19AF34u;
    {
        const bool branch_taken_0x19af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af34) {
            ctx->pc = 0x19AF3Cu;
            return;
        }
    }
    ctx->pc = 0x19AF3Cu;
}
