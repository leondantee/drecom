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

// Function: Em19_search_em18
// Address: 0x2e3e90 - 0x2e3fc0
void Em19_search_em18_0x2e3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_search_em18_0x2e3e90");
#endif

    switch (ctx->pc) {
        case 0x2e3eccu: goto label_2e3ecc;
        default: break;
    }

    ctx->pc = 0x2e3e90u;

    // 0x2e3e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e3e94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e3e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e3e98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3e9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3ea8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2e3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2e3eac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3eb0: 0x24741330  addiu       $s4, $v1, 0x1330
    ctx->pc = 0x2e3eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e3eb4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e3eb8: 0x2472bb48  addiu       $s2, $v1, -0x44B8
    ctx->pc = 0x2e3eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x2e3ebc: 0xae8000ac  sw          $zero, 0xAC($s4)
    ctx->pc = 0x2e3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 0));
    // 0x2e3ec0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e3ec0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e3ec4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2E3EC4u;
    {
        const bool branch_taken_0x2e3ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ec4) {
            ctx->pc = 0x2E3F88u;
            goto label_2e3f88;
        }
    }
    ctx->pc = 0x2E3ECCu;
label_2e3ecc:
    // 0x2e3ecc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2e3eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e3ed0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2e3ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2e3ed4: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x2e3ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2e3ed8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e3ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e3edc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2e3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e3ee0: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E3EE0u;
    {
        const bool branch_taken_0x2e3ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3ee0) {
            ctx->pc = 0x2E3F80u;
            goto label_2e3f80;
        }
    }
    ctx->pc = 0x2E3EE8u;
    // 0x2e3ee8: 0x26111330  addiu       $s1, $s0, 0x1330
    ctx->pc = 0x2e3ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x2e3eec: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2e3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2e3ef0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E3EF0u;
    {
        const bool branch_taken_0x2e3ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ef0) {
            ctx->pc = 0x2E3F80u;
            goto label_2e3f80;
        }
    }
    ctx->pc = 0x2E3EF8u;
    // 0x2e3ef8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3efc: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2e3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x2e3f00: 0xae9000ac  sw          $s0, 0xAC($s4)
    ctx->pc = 0x2e3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 16));
    // 0x2e3f04: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2e3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f08: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3f0c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3f10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e3f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e3f14: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e3f18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f1c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3f20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e3f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e3f24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e3f28: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2e3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e3f2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f30: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e3f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3f38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e3f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3f40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3f44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e3f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3f4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e3f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3f54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e3f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3f5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3f64: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2e3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f68: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e3f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e3f6c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e3f70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e3f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e3f74: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e3f78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E3F78u;
    {
        const bool branch_taken_0x2e3f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f78) {
            ctx->pc = 0x2E3FA0u;
            goto label_2e3fa0;
        }
    }
    ctx->pc = 0x2E3F80u;
label_2e3f80:
    // 0x2e3f80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e3f84: 0x0  nop
    ctx->pc = 0x2e3f84u;
    // NOP
label_2e3f88:
    // 0x2e3f88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3f8c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x2e3f8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x2e3f90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e3f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e3f94: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2e3f94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e3f98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2E3F98u;
    {
        const bool branch_taken_0x2e3f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f98) {
            ctx->pc = 0x2E3ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3ecc;
        }
    }
    ctx->pc = 0x2E3FA0u;
label_2e3fa0:
    // 0x2e3fa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3fa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3fb4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e3fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3FC0u;
}
