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

// Function: entry_00225120
// Address: 0x225120 - 0x2251dc
void entry_00225120_0x225120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225120_0x225120");
#endif

    switch (ctx->pc) {
        case 0x225198u: goto label_225198;
        default: break;
    }

    ctx->pc = 0x225120u;

    // 0x225120: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225124: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x225124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x225128: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22512c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x22512Cu;
    {
        const bool branch_taken_0x22512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22512c) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x225134u;
    // 0x225134: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225138: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x22513c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22513cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225140: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x225140u;
    {
        const bool branch_taken_0x225140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225140) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x225148u;
    // 0x225148: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22514c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225150: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x225154: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x225154u;
    {
        const bool branch_taken_0x225154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225154) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x22515Cu;
    // 0x22515c: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x22515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x225160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225164: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x225164u;
    {
        const bool branch_taken_0x225164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225164) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x22516Cu;
    // 0x22516c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225170: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225174: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x225174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x225178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22517c: 0x0  nop
    ctx->pc = 0x22517cu;
    // NOP
    // 0x225180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225184: 0x0  nop
    ctx->pc = 0x225184u;
    // NOP
    // 0x225188: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x225188u;
    {
        const bool branch_taken_0x225188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225188) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x225190u;
    // 0x225190: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 31, 0x225198u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225190u, 0x225198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225198u;
label_225198:
    // 0x225198: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22519c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x22519cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2251a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2251a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251a4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2251A4u;
    {
        const bool branch_taken_0x2251a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2251a4) {
            ctx->pc = 0x2251DCu;
            return;
        }
    }
    ctx->pc = 0x2251ACu;
    // 0x2251ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2251acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2251b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2251b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2251b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2251b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2251bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2251c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2251c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2251c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2251cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2251d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2251d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2251d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2251d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2251d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2251dcu;
}
