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

// Function: entry_00225908
// Address: 0x225908 - 0x2259c4
void entry_00225908_0x225908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225908_0x225908");
#endif

    switch (ctx->pc) {
        case 0x225980u: goto label_225980;
        default: break;
    }

    ctx->pc = 0x225908u;

    // 0x225908: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x225908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22590c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x22590cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x225910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225914: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x225914u;
    {
        const bool branch_taken_0x225914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225914) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x22591Cu;
    // 0x22591c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22591cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x225920: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x225924: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x225924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x225928: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x225928u;
    {
        const bool branch_taken_0x225928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225928) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x225930u;
    // 0x225930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225934: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225938: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x22593c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x22593Cu;
    {
        const bool branch_taken_0x22593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22593c) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x225944u;
    // 0x225944: 0x8e0413e8  lw          $a0, 0x13E8($s0)
    ctx->pc = 0x225944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x225948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22594c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x22594Cu;
    {
        const bool branch_taken_0x22594c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22594c) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x225954u;
    // 0x225954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225958: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22595c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x22595cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x225960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225964: 0x0  nop
    ctx->pc = 0x225964u;
    // NOP
    // 0x225968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22596c: 0x0  nop
    ctx->pc = 0x22596cu;
    // NOP
    // 0x225970: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x225970u;
    {
        const bool branch_taken_0x225970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225970) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x225978u;
    // 0x225978: 0xc067694  jal         func_19DA50
    ctx->pc = 0x225978u;
    SET_GPR_U32(ctx, 31, 0x225980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x225978u, 0x225980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225980u;
label_225980:
    // 0x225980: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x225980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x225984: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x225984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x225988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22598c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22598Cu;
    {
        const bool branch_taken_0x22598c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22598c) {
            ctx->pc = 0x2259C4u;
            return;
        }
    }
    ctx->pc = 0x225994u;
    // 0x225994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225998: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22599c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22599cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2259a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2259a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2259a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2259ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2259b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2259b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2259b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2259bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2259bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2259c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2259c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2259c4u;
}
