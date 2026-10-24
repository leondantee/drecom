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

// Function: entry_00305c4c
// Address: 0x305c4c - 0x305d34
void entry_00305c4c_0x305c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305c4c_0x305c4c");
#endif

    switch (ctx->pc) {
        case 0x305cacu: goto label_305cac;
        case 0x305d14u: goto label_305d14;
        default: break;
    }

    ctx->pc = 0x305c4cu;

    // 0x305c4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c50: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x305c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x305c54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x305c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x305c58: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x305c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x305c5c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x305C5Cu;
    {
        const bool branch_taken_0x305c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c5c) {
            ctx->pc = 0x305D34u;
            return;
        }
    }
    ctx->pc = 0x305C64u;
    // 0x305c64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c68: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x305c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x305c6c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x305C6Cu;
    {
        const bool branch_taken_0x305c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305c6c) {
            ctx->pc = 0x305D34u;
            return;
        }
    }
    ctx->pc = 0x305C74u;
    // 0x305c74: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305c78: 0x24429680  addiu       $v0, $v0, -0x6980
    ctx->pc = 0x305c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x305c7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x305c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305c80: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305c80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399680u));
    // 0x305c84: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305c84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305c88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c8c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305c90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x305c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305c94: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x305c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305c98: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x305c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x305c9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x305c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x305ca0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x305ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x305ca4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x305CA4u;
    SET_GPR_U32(ctx, 31, 0x305CACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x305CA4u, 0x305CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CACu;
label_305cac:
    // 0x305cac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x305cacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x305cb0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305CB0u;
    {
        const bool branch_taken_0x305cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x305cb0) {
            ctx->pc = 0x305D34u;
            return;
        }
    }
    ctx->pc = 0x305CB8u;
    // 0x305cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305cbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305cc0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x305cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x305cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305cc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305ccc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x305cccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x305cd0: 0x2402050a  addiu       $v0, $zero, 0x50A
    ctx->pc = 0x305cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x305cd4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x305cd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x305cd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x305cdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305ce0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x305ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x305ce4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x305ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305ce8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x305ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305cec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x305cecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x305cf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x305cf4: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x305cf8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x305cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x305cfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305d00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x305d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d04: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d08: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x305d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x305d0c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x305D0Cu;
    SET_GPR_U32(ctx, 31, 0x305D14u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x305D14u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x305D14u) { return; }
    ctx->pc = 0x305D14u;
label_305d14:
    // 0x305d14: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x305d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x305d18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x305d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x305d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305d20: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x305d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x305d24: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x305d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x305d28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x305d28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305d2c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x305D2Cu;
    SET_GPR_U32(ctx, 31, 0x305D34u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x305D2Cu, 0x305D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D34u;
}
