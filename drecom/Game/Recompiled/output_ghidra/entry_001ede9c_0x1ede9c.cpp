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

// Function: entry_001ede9c
// Address: 0x1ede9c - 0x1edf58
void entry_001ede9c_0x1ede9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ede9c_0x1ede9c");
#endif

    switch (ctx->pc) {
        case 0x1edf14u: goto label_1edf14;
        default: break;
    }

    ctx->pc = 0x1ede9cu;

    // 0x1ede9c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ede9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1edea0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1edea4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edea8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EDEA8u;
    {
        const bool branch_taken_0x1edea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edea8) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDEB0u;
    // 0x1edeb0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1edeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1edeb4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1edeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1edeb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edebc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EDEBCu;
    {
        const bool branch_taken_0x1edebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edebc) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDEC4u;
    // 0x1edec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edecc: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1edeccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eded0: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EDED0u;
    {
        const bool branch_taken_0x1eded0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eded0) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDED8u;
    // 0x1eded8: 0x8e2413e8  lw          $a0, 0x13E8($s1)
    ctx->pc = 0x1eded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5096)));
    // 0x1ededc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edee0: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EDEE0u;
    {
        const bool branch_taken_0x1edee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edee0) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDEE8u;
    // 0x1edee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edeec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1edeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edef0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1edef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1edef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edef8: 0x0  nop
    ctx->pc = 0x1edef8u;
    // NOP
    // 0x1edefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edf00: 0x0  nop
    ctx->pc = 0x1edf00u;
    // NOP
    // 0x1edf04: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDF04u;
    {
        const bool branch_taken_0x1edf04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edf04) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDF0Cu;
    // 0x1edf0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDF0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDF0Cu, 0x1EDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF14u;
label_1edf14:
    // 0x1edf14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edf18: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1edf18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1edf1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf20: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDF20u;
    {
        const bool branch_taken_0x1edf20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1edf20) {
            ctx->pc = 0x1EDF58u;
            return;
        }
    }
    ctx->pc = 0x1EDF28u;
    // 0x1edf28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edf30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf34: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1edf38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edf40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1edf44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edf48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edf50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edf54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edf54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1edf58u;
}
