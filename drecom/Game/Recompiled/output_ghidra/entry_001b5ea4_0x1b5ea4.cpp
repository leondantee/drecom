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

// Function: entry_001b5ea4
// Address: 0x1b5ea4 - 0x1b5f24
void entry_001b5ea4_0x1b5ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5ea4_0x1b5ea4");
#endif

    switch (ctx->pc) {
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5ef8u: goto label_1b5ef8;
        default: break;
    }

    ctx->pc = 0x1b5ea4u;

    // 0x1b5ea4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ea8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1b5ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5eac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5eb0: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5eb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b5eb8: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b5eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1b5ebc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b5ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b5ec0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B5EC0u;
    SET_GPR_U32(ctx, 31, 0x1B5EC8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B5EC0u, 0x1B5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b5ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b5ecc: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ed0: 0x8623127e  lh          $v1, 0x127E($s1)
    ctx->pc = 0x1b5ed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4734)));
    // 0x1b5ed4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B5ED4u;
    {
        const bool branch_taken_0x1b5ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ed4) {
            ctx->pc = 0x1B5FA8u;
            return;
        }
    }
    ctx->pc = 0x1B5EDCu;
    // 0x1b5edc: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1b5edcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5ee0: 0x8665127e  lh          $a1, 0x127E($s3)
    ctx->pc = 0x1b5ee0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4734)));
    // 0x1b5ee4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1b5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b5ee8: 0xa663127e  sh          $v1, 0x127E($s3)
    ctx->pc = 0x1b5ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b5eec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5ef0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1B5EF0u;
    SET_GPR_U32(ctx, 31, 0x1B5EF8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1B5EF0u, 0x1B5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EF8u;
label_1b5ef8:
    // 0x1b5ef8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1b5ef8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b5efc: 0x12000085  beqz        $s0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1B5EFCu;
    {
        const bool branch_taken_0x1b5efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5efc) {
            ctx->pc = 0x1B6114u;
            return;
        }
    }
    ctx->pc = 0x1B5F04u;
    // 0x1b5f04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5f08: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5F08u;
    {
        const bool branch_taken_0x1b5f08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5f08) {
            ctx->pc = 0x1B5F24u;
            return;
        }
    }
    ctx->pc = 0x1B5F10u;
    // 0x1b5f10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5f14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5f18: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1b5f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x1b5f1c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B6114u;
            return;
        }
    }
    ctx->pc = 0x1B5F24u;
}
