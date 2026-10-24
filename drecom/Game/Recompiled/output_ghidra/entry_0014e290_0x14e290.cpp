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

// Function: entry_0014e290
// Address: 0x14e290 - 0x14e32c
void entry_0014e290_0x14e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e290_0x14e290");
#endif

    ctx->pc = 0x14e290u;

    // 0x14e290: 0x9203107e  lbu         $v1, 0x107E($s0)
    ctx->pc = 0x14e290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4222)));
    // 0x14e294: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14e294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14e298: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x14e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14e29c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14e29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e2a0: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x14e2a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14e2a4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14e2a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14E2A8u;
    {
        const bool branch_taken_0x14e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2a8) {
            ctx->pc = 0x14E32Cu;
            return;
        }
    }
    ctx->pc = 0x14E2B0u;
    // 0x14e2b0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14e2b4: 0x2841002a  slti        $at, $v0, 0x2A
    ctx->pc = 0x14e2b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)42) ? 1 : 0);
    // 0x14e2b8: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x14E2B8u;
    {
        const bool branch_taken_0x14e2b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2b8) {
            ctx->pc = 0x14E32Cu;
            return;
        }
    }
    ctx->pc = 0x14E2C0u;
    // 0x14e2c0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x14e2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14e2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14e2c8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x14e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14e2cc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x14e2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x14e2d0: 0x24e25280  addiu       $v0, $a3, 0x5280
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x14e2d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14e2d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14e2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e2dc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x14e2dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14e2e0: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x14e2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x14e2e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x14e2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14e2e8: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14E2E8u;
    {
        const bool branch_taken_0x14e2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x14e2e8) {
            ctx->pc = 0x14E32Cu;
            return;
        }
    }
    ctx->pc = 0x14E2F0u;
    // 0x14e2f0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x14e2f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14e2f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e2fc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x14e2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14e300: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x14e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14e304: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x14e304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14e308: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14e30c: 0x24425220  addiu       $v0, $v0, 0x5220
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21024));
    // 0x14e310: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e314: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x14e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x14e318: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x14e318u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e31c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x14e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14e320: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x14e320u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14e324: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14E324u;
    SET_GPR_U32(ctx, 31, 0x14E32Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14E324u, 0x14E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E32Cu;
}
