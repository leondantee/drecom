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

// Function: entry_0020af10
// Address: 0x20af10 - 0x20afa4
void entry_0020af10_0x20af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020af10_0x20af10");
#endif

    switch (ctx->pc) {
        case 0x20af84u: goto label_20af84;
        default: break;
    }

    ctx->pc = 0x20af10u;

    // 0x20af10: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x20af10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20af14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20AF14u;
    {
        const bool branch_taken_0x20af14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af14) {
            ctx->pc = 0x20AEF0u;
            return;
        }
    }
    ctx->pc = 0x20AF1Cu;
    // 0x20af1c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af20: 0xac801368  sw          $zero, 0x1368($a0)
    ctx->pc = 0x20af20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4968), GPR_U32(ctx, 0));
    // 0x20af24: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af28: 0xac401374  sw          $zero, 0x1374($v0)
    ctx->pc = 0x20af28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4980), GPR_U32(ctx, 0));
    // 0x20af2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20af30: 0x8c239310  lw          $v1, -0x6CF0($at)
    ctx->pc = 0x20af30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619310u));
    // 0x20af34: 0x8c66020c  lw          $a2, 0x20C($v1)
    ctx->pc = 0x20af34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x20af38: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x20af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x20af3c: 0xac62020c  sw          $v0, 0x20C($v1)
    ctx->pc = 0x20af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 2));
    // 0x20af40: 0x24030505  addiu       $v1, $zero, 0x505
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x20af44: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20af48: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20af4c: 0x8c490130  lw          $t1, 0x130($v0)
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20af50: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x20af50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x20af54: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x20af54u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20af58: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af5c: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x20af5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x20af60: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20af64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20af64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20af68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20af6c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20af70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af78: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20af7c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20AF7Cu;
    SET_GPR_U32(ctx, 31, 0x20AF84u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20AF84u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20AF84u) { return; }
    ctx->pc = 0x20AF84u;
label_20af84:
    // 0x20af84: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20af84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20af88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20af8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20af8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20af90: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x20af90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x20af94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20af98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20af98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20af9c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20AF9Cu;
    SET_GPR_U32(ctx, 31, 0x20AFA4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20AF9Cu, 0x20AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFA4u;
}
